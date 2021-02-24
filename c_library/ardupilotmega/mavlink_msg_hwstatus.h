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

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_hwstatus_t {
    uint16_t Vcc;
    uint8_t I2Cerr;
}) fmav_hwstatus_t;


#define FASTMAVLINK_MSG_ID_HWSTATUS  165


#define FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MIN  3
#define FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX  3
#define FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN  3
#define FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA  21

#define FASTMAVLINK_MSG_ID_165_LEN_MIN  3
#define FASTMAVLINK_MSG_ID_165_LEN_MAX  3
#define FASTMAVLINK_MSG_ID_165_LEN  3
#define FASTMAVLINK_MSG_ID_165_CRCEXTRA  21



#define FASTMAVLINK_MSG_HWSTATUS_FLAGS  0
#define FASTMAVLINK_MSG_HWSTATUS_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_HWSTATUS_TARGET_COMPONENT_OFS  0


//----------------------------------------
//-- Message HWSTATUS packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint16_t Vcc, uint8_t I2Cerr,
    fmav_status_t* _status)
{
    fmav_hwstatus_t* _payload = (fmav_hwstatus_t*)msg->payload;

    _payload->Vcc = Vcc;
    _payload->I2Cerr = I2Cerr;


    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_HWSTATUS;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_hwstatus_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_hwstatus_pack(
        msg, sysid, compid,
        _payload->Vcc, _payload->I2Cerr,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint16_t Vcc, uint8_t I2Cerr,
    fmav_status_t* _status)
{
    fmav_hwstatus_t* _payload = (fmav_hwstatus_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->Vcc = Vcc;
    _payload->I2Cerr = I2Cerr;


    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_HWSTATUS;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_HWSTATUS >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_HWSTATUS >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_HWSTATUS_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_hwstatus_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_hwstatus_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_hwstatus_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->Vcc, _payload->I2Cerr,
        _status);
}


//----------------------------------------
//-- Message HWSTATUS unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_hwstatus_decode(fmav_hwstatus_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_HWSTATUS_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
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
    mavlink_message_t* msg,
    uint16_t Vcc, uint8_t I2Cerr)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_hwstatus_pack(
        msg, sysid, compid,
        Vcc, I2Cerr,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_hwstatus_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint16_t Vcc, uint8_t I2Cerr)
{
    return fmav_msg_hwstatus_pack_to_frame_buf(
        (uint8_t*)buf,
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