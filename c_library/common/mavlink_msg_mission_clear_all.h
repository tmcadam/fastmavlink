//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_MISSION_CLEAR_ALL_H
#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_H


//----------------------------------------
//-- Message MISSION_CLEAR_ALL
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_mission_clear_all_t {
    uint8_t target_system;
    uint8_t target_component;
    uint8_t mission_type;
}) fmav_mission_clear_all_t;


#define FASTMAVLINK_MSG_ID_MISSION_CLEAR_ALL  45


#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MIN  2
#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MAX  3
#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN  3
#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_CRCEXTRA  232

#define FASTMAVLINK_MSG_ID_45_LEN_MIN  2
#define FASTMAVLINK_MSG_ID_45_LEN_MAX  3
#define FASTMAVLINK_MSG_ID_45_LEN  3
#define FASTMAVLINK_MSG_ID_45_CRCEXTRA  232



#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_FLAGS  3
#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_MISSION_CLEAR_ALL_TARGET_COMPONENT_OFS  1


//----------------------------------------
//-- Message MISSION_CLEAR_ALL packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_mission_clear_all_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, uint8_t mission_type,
    fmav_status_t* _status)
{
    fmav_mission_clear_all_t* _payload = (fmav_mission_clear_all_t*)msg->payload;

    _payload->target_system = target_system;
    _payload->target_component = target_component;
    _payload->mission_type = mission_type;


    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_MISSION_CLEAR_ALL;

    msg->target_sysid = target_system;
    msg->target_compid = target_component;
    msg->crc_extra = FASTMAVLINK_MSG_MISSION_CLEAR_ALL_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_mission_clear_all_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_mission_clear_all_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_mission_clear_all_pack(
        msg, sysid, compid,
        _payload->target_system, _payload->target_component, _payload->mission_type,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_mission_clear_all_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, uint8_t mission_type,
    fmav_status_t* _status)
{
    fmav_mission_clear_all_t* _payload = (fmav_mission_clear_all_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->target_system = target_system;
    _payload->target_component = target_component;
    _payload->mission_type = mission_type;


    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_MISSION_CLEAR_ALL;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_MISSION_CLEAR_ALL >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_MISSION_CLEAR_ALL >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_MISSION_CLEAR_ALL_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_mission_clear_all_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_mission_clear_all_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_mission_clear_all_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->target_system, _payload->target_component, _payload->mission_type,
        _status);
}


//----------------------------------------
//-- Message MISSION_CLEAR_ALL unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_mission_clear_all_decode(fmav_mission_clear_all_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_MISSION_CLEAR_ALL_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_MISSION_CLEAR_ALL  45

#define mavlink_mission_clear_all_t  fmav_mission_clear_all_t

#define MAVLINK_MSG_ID_MISSION_CLEAR_ALL_LEN  3
#define MAVLINK_MSG_ID_MISSION_CLEAR_ALL_MIN_LEN  2
#define MAVLINK_MSG_ID_45_LEN  3
#define MAVLINK_MSG_ID_45_MIN_LEN  2

#define MAVLINK_MSG_ID_MISSION_CLEAR_ALL_CRC  232
#define MAVLINK_MSG_ID_45_CRC  232




#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_mission_clear_all_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint8_t target_system, uint8_t target_component, uint8_t mission_type)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_mission_clear_all_pack(
        msg, sysid, compid,
        target_system, target_component, mission_type,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_mission_clear_all_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint8_t target_system, uint8_t target_component, uint8_t mission_type)
{
    return fmav_msg_mission_clear_all_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        target_system, target_component, mission_type,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_mission_clear_all_decode(const mavlink_message_t* msg, mavlink_mission_clear_all_t* payload)
{
    fmav_msg_mission_clear_all_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_MISSION_CLEAR_ALL_H