//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_H
#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_H


//----------------------------------------
//-- Message CHANGE_OPERATOR_CONTROL
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_change_operator_control_t {
    uint8_t target_system;
    uint8_t control_request;
    uint8_t version;
    char passkey[25];
}) fmav_change_operator_control_t;


#define FASTMAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL  5


#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MIN  28
#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MAX  28
#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN  28
#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_CRCEXTRA  217

#define FASTMAVLINK_MSG_ID_5_LEN_MIN  28
#define FASTMAVLINK_MSG_ID_5_LEN_MAX  28
#define FASTMAVLINK_MSG_ID_5_LEN  28
#define FASTMAVLINK_MSG_ID_5_CRCEXTRA  217

#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_FIELD_PASSKEY_LEN  25

#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_FLAGS  1
#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_TARGET_COMPONENT_OFS  0


//----------------------------------------
//-- Message CHANGE_OPERATOR_CONTROL packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_change_operator_control_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t control_request, uint8_t version, const char* passkey,
    fmav_status_t* _status)
{
    fmav_change_operator_control_t* _payload = (fmav_change_operator_control_t*)msg->payload;

    _payload->target_system = target_system;
    _payload->control_request = control_request;
    _payload->version = version;
    memcpy(&(_payload->passkey), passkey, sizeof(char)*25);

    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL;

    msg->target_sysid = target_system;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_change_operator_control_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_change_operator_control_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_change_operator_control_pack(
        msg, sysid, compid,
        _payload->target_system, _payload->control_request, _payload->version, _payload->passkey,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_change_operator_control_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t control_request, uint8_t version, const char* passkey,
    fmav_status_t* _status)
{
    fmav_change_operator_control_t* _payload = (fmav_change_operator_control_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->target_system = target_system;
    _payload->control_request = control_request;
    _payload->version = version;
    memcpy(&(_payload->passkey), passkey, sizeof(char)*25);

    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_change_operator_control_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_change_operator_control_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_change_operator_control_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->target_system, _payload->control_request, _payload->version, _payload->passkey,
        _status);
}


//----------------------------------------
//-- Message CHANGE_OPERATOR_CONTROL unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_change_operator_control_decode(fmav_change_operator_control_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL  5

#define mavlink_change_operator_control_t  fmav_change_operator_control_t

#define MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_LEN  28
#define MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_MIN_LEN  28
#define MAVLINK_MSG_ID_5_LEN  28
#define MAVLINK_MSG_ID_5_MIN_LEN  28

#define MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_CRC  217
#define MAVLINK_MSG_ID_5_CRC  217

#define MAVLINK_MSG_CHANGE_OPERATOR_CONTROL_FIELD_PASSKEY_LEN 25


#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_change_operator_control_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint8_t target_system, uint8_t control_request, uint8_t version, const char* passkey)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_change_operator_control_pack(
        msg, sysid, compid,
        target_system, control_request, version, passkey,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_change_operator_control_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t control_request, uint8_t version, const char* passkey)
{
    return fmav_msg_change_operator_control_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        target_system, control_request, version, passkey,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_change_operator_control_decode(const mavlink_message_t* msg, mavlink_change_operator_control_t* payload)
{
    fmav_msg_change_operator_control_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_CHANGE_OPERATOR_CONTROL_H