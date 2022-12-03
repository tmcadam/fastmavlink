//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_HWSTATUS_H
#define FASTMAVLINK_MSG_HWSTATUS_H


//----------------------------------------
//-- Message HWSTATUS
//----------------------------------------

// fields are ordered, as they appear on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_hwstatus_t {
    uint16_t Vcc;
    uint8_t I2Cerr;
}) fmav_hwstatus_t;


#define FASTMAVLINK_MSG_ID_HWSTATUS  165

#define FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX  3
#define FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA  21

#define FASTMAVLINK_MSG_HWSTATUS_FLAGS  0
#define FASTMAVLINK_MSG_HWSTATUS_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_HWSTATUS_TARGET_COMPONENT_OFS  0

#define FASTMAVLINK_MSG_HWSTATUS_FRAME_LEN_MAX  28



#define FASTMAVLINK_MSG_HWSTATUS_FIELD_VCC_OFS  0
#define FASTMAVLINK_MSG_HWSTATUS_FIELD_I2CERR_OFS  2


//----------------------------------------
//-- Message HWSTATUS pack,encode routines, for sending
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_pack(
    fmav_message_t* _msg,
    uint8_t sysid,
    uint8_t compid,
    uint16_t Vcc, uint8_t I2Cerr,
    fmav_status_t* _status)
{
    fmav_hwstatus_t* _payload = (fmav_hwstatus_t*)_msg->payload;

    _payload->Vcc = Vcc;
    _payload->I2Cerr = I2Cerr;


    _msg->sysid = sysid;
    _msg->compid = compid;
    _msg->msgid = FASTMAVLINK_MSG_ID_HWSTATUS;
    _msg->target_sysid = 0;
    _msg->target_compid = 0;
    _msg->crc_extra = FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA;
    _msg->payload_max_len = FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX;

    return fmav_finalize_msg(_msg, _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_encode(
    fmav_message_t* _msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_hwstatus_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_hwstatus_pack(
        _msg, sysid, compid,
        _payload->Vcc, _payload->I2Cerr,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_pack_to_frame_buf(
    uint8_t* _buf,
    uint8_t sysid,
    uint8_t compid,
    uint16_t Vcc, uint8_t I2Cerr,
    fmav_status_t* _status)
{
    fmav_hwstatus_t* _payload = (fmav_hwstatus_t*)(&_buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->Vcc = Vcc;
    _payload->I2Cerr = I2Cerr;


    _buf[5] = sysid;
    _buf[6] = compid;
    _buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_HWSTATUS;
    _buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_HWSTATUS >> 8);
    _buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_HWSTATUS >> 16);

    return fmav_finalize_frame_buf(
        _buf,
        FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_encode_to_frame_buf(
    uint8_t* _buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_hwstatus_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_hwstatus_pack_to_frame_buf(
        _buf, sysid, compid,
        _payload->Vcc, _payload->I2Cerr,
        _status);
}


#ifdef FASTMAVLINK_SERIAL_WRITE_CHAR

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_pack_to_serial(
    uint8_t sysid,
    uint8_t compid,
    uint16_t Vcc, uint8_t I2Cerr,
    fmav_status_t* _status)
{
    fmav_hwstatus_t _payload;

    _payload.Vcc = Vcc;
    _payload.I2Cerr = I2Cerr;


    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)&_payload,
        FASTMAVLINK_MSG_ID_HWSTATUS,
        FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_encode_to_serial(
    uint8_t sysid,
    uint8_t compid,
    const fmav_hwstatus_t* _payload,
    fmav_status_t* _status)
{
    return fmav_finalize_serial(
        sysid,
        compid,
        (uint8_t*)_payload,
        FASTMAVLINK_MSG_ID_HWSTATUS,
        FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA,
        _status);
}
#endif


//----------------------------------------
//-- Message HWSTATUS decode routines, for receiving
//----------------------------------------
// For these functions to work correctly, the msg payload must be zero filled.
// Call the helper fmav_msg_zerofill() if needed, or set FASTMAVLINK_ALWAYS_ZEROFILL to 1
// Note that the parse functions do zerofill the msg payload, but that message generator functions
// do not. This means that for the msg obtained from parsing the below functions can safely be used,
// but that this is not so for the msg obtained from pack/encode functions.

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_hwstatus_decode(fmav_hwstatus_t* payload, const fmav_message_t* msg)
{
#if FASTMAVLINK_ALWAYS_ZEROFILL
    if (msg->len < FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX) {
        memcpy(payload, msg->payload, msg->len);
        // ensure that returned payload is zero filled
        memset(&(((uint8_t*)payload)[msg->len]), 0, FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX - msg->len);
    } else {
		// note: msg->len can be larger than PAYLOAD_LEN_MAX if the message has unknown extensions
        memcpy(payload, msg->payload, FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX);
    }
#else
    // this requires that msg payload had been zero filled before
    memcpy(payload, msg->payload, FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX);
#endif
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_get_field_Vcc(const fmav_message_t* msg)
{
    uint16_t r;
    memcpy(&r, &(msg->payload[0]), sizeof(uint16_t));
    return r;
}


FASTMAVLINK_FUNCTION_DECORATOR uint8_t fmav_msg_hwstatus_get_field_I2Cerr(const fmav_message_t* msg)
{
    uint8_t r;
    memcpy(&r, &(msg->payload[2]), sizeof(uint8_t));
    return r;
}





//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_HWSTATUS  165

#define mavlink_hwstatus_t  fmav_hwstatus_t

#define MAVLINK_MSG_ID_HWSTATUS_LEN  3
#define MAVLINK_MSG_ID_HWSTATUS_MIN_LEN  3
#define MAVLINK_MSG_ID_165_LEN  3
#define MAVLINK_MSG_ID_165_MIN_LEN  3

#define MAVLINK_MSG_ID_HWSTATUS_CRC  21
#define MAVLINK_MSG_ID_165_CRC  21




#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_hwstatus_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* _msg,
    uint16_t Vcc, uint8_t I2Cerr)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_hwstatus_pack(
        _msg, sysid, compid,
        Vcc, I2Cerr,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_hwstatus_pack_txbuf(
    char* _buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint16_t Vcc, uint8_t I2Cerr)
{
    return fmav_msg_hwstatus_pack_to_frame_buf(
        (uint8_t*)_buf,
        sysid,
        compid,
        Vcc, I2Cerr,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_hwstatus_decode(const mavlink_message_t* msg, mavlink_hwstatus_t* payload)
{
    fmav_msg_hwstatus_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_HWSTATUS_H
