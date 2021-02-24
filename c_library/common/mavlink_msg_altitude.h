//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_ALTITUDE_H
#define FASTMAVLINK_MSG_ALTITUDE_H


//----------------------------------------
//-- Message ALTITUDE
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_altitude_t {
    uint64_t time_usec;
    float altitude_monotonic;
    float altitude_amsl;
    float altitude_local;
    float altitude_relative;
    float altitude_terrain;
    float bottom_clearance;
}) fmav_altitude_t;


#define FASTMAVLINK_MSG_ID_ALTITUDE  141


#define FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MIN  32
#define FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MAX  32
#define FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN  32
#define FASTMAVLINK_MSG_ALTITUDE_CRCEXTRA  47

#define FASTMAVLINK_MSG_ID_141_LEN_MIN  32
#define FASTMAVLINK_MSG_ID_141_LEN_MAX  32
#define FASTMAVLINK_MSG_ID_141_LEN  32
#define FASTMAVLINK_MSG_ID_141_CRCEXTRA  47



#define FASTMAVLINK_MSG_ALTITUDE_FLAGS  0
#define FASTMAVLINK_MSG_ALTITUDE_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_ALTITUDE_TARGET_COMPONENT_OFS  0


//----------------------------------------
//-- Message ALTITUDE packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_altitude_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, float altitude_monotonic, float altitude_amsl, float altitude_local, float altitude_relative, float altitude_terrain, float bottom_clearance,
    fmav_status_t* _status)
{
    fmav_altitude_t* _payload = (fmav_altitude_t*)msg->payload;

    _payload->time_usec = time_usec;
    _payload->altitude_monotonic = altitude_monotonic;
    _payload->altitude_amsl = altitude_amsl;
    _payload->altitude_local = altitude_local;
    _payload->altitude_relative = altitude_relative;
    _payload->altitude_terrain = altitude_terrain;
    _payload->bottom_clearance = bottom_clearance;


    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_ALTITUDE;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_ALTITUDE_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_altitude_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_altitude_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_altitude_pack(
        msg, sysid, compid,
        _payload->time_usec, _payload->altitude_monotonic, _payload->altitude_amsl, _payload->altitude_local, _payload->altitude_relative, _payload->altitude_terrain, _payload->bottom_clearance,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_altitude_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, float altitude_monotonic, float altitude_amsl, float altitude_local, float altitude_relative, float altitude_terrain, float bottom_clearance,
    fmav_status_t* _status)
{
    fmav_altitude_t* _payload = (fmav_altitude_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->time_usec = time_usec;
    _payload->altitude_monotonic = altitude_monotonic;
    _payload->altitude_amsl = altitude_amsl;
    _payload->altitude_local = altitude_local;
    _payload->altitude_relative = altitude_relative;
    _payload->altitude_terrain = altitude_terrain;
    _payload->bottom_clearance = bottom_clearance;


    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_ALTITUDE;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_ALTITUDE >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_ALTITUDE >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_ALTITUDE_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_altitude_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_altitude_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_altitude_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->time_usec, _payload->altitude_monotonic, _payload->altitude_amsl, _payload->altitude_local, _payload->altitude_relative, _payload->altitude_terrain, _payload->bottom_clearance,
        _status);
}


//----------------------------------------
//-- Message ALTITUDE unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_altitude_decode(fmav_altitude_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_ALTITUDE_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_ALTITUDE  141

#define mavlink_altitude_t  fmav_altitude_t

#define MAVLINK_MSG_ID_ALTITUDE_LEN  32
#define MAVLINK_MSG_ID_ALTITUDE_MIN_LEN  32
#define MAVLINK_MSG_ID_141_LEN  32
#define MAVLINK_MSG_ID_141_MIN_LEN  32

#define MAVLINK_MSG_ID_ALTITUDE_CRC  47
#define MAVLINK_MSG_ID_141_CRC  47




#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_altitude_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint64_t time_usec, float altitude_monotonic, float altitude_amsl, float altitude_local, float altitude_relative, float altitude_terrain, float bottom_clearance)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_altitude_pack(
        msg, sysid, compid,
        time_usec, altitude_monotonic, altitude_amsl, altitude_local, altitude_relative, altitude_terrain, bottom_clearance,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_altitude_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint64_t time_usec, float altitude_monotonic, float altitude_amsl, float altitude_local, float altitude_relative, float altitude_terrain, float bottom_clearance)
{
    return fmav_msg_altitude_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        time_usec, altitude_monotonic, altitude_amsl, altitude_local, altitude_relative, altitude_terrain, bottom_clearance,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_altitude_decode(const mavlink_message_t* msg, mavlink_altitude_t* payload)
{
    fmav_msg_altitude_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_ALTITUDE_H