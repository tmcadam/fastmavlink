//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_H
#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_H


//----------------------------------------
//-- Message OBSTACLE_DISTANCE_3D
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_obstacle_distance_3d_t {
    uint32_t time_boot_ms;
    float x;
    float y;
    float z;
    float min_distance;
    float max_distance;
    uint16_t obstacle_id;
    uint8_t sensor_type;
    uint8_t frame;
}) fmav_obstacle_distance_3d_t;


#define FASTMAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D  11037


#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MIN  28
#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MAX  28
#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN  28
#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_CRCEXTRA  130

#define FASTMAVLINK_MSG_ID_11037_LEN_MIN  28
#define FASTMAVLINK_MSG_ID_11037_LEN_MAX  28
#define FASTMAVLINK_MSG_ID_11037_LEN  28
#define FASTMAVLINK_MSG_ID_11037_CRCEXTRA  130



#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_FLAGS  0
#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_TARGET_COMPONENT_OFS  0


//----------------------------------------
//-- Message OBSTACLE_DISTANCE_3D packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_obstacle_distance_3d_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, uint8_t sensor_type, uint8_t frame, uint16_t obstacle_id, float x, float y, float z, float min_distance, float max_distance,
    fmav_status_t* _status)
{
    fmav_obstacle_distance_3d_t* _payload = (fmav_obstacle_distance_3d_t*)msg->payload;

    _payload->time_boot_ms = time_boot_ms;
    _payload->x = x;
    _payload->y = y;
    _payload->z = z;
    _payload->min_distance = min_distance;
    _payload->max_distance = max_distance;
    _payload->obstacle_id = obstacle_id;
    _payload->sensor_type = sensor_type;
    _payload->frame = frame;


    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_obstacle_distance_3d_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_obstacle_distance_3d_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_obstacle_distance_3d_pack(
        msg, sysid, compid,
        _payload->time_boot_ms, _payload->sensor_type, _payload->frame, _payload->obstacle_id, _payload->x, _payload->y, _payload->z, _payload->min_distance, _payload->max_distance,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_obstacle_distance_3d_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, uint8_t sensor_type, uint8_t frame, uint16_t obstacle_id, float x, float y, float z, float min_distance, float max_distance,
    fmav_status_t* _status)
{
    fmav_obstacle_distance_3d_t* _payload = (fmav_obstacle_distance_3d_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->time_boot_ms = time_boot_ms;
    _payload->x = x;
    _payload->y = y;
    _payload->z = z;
    _payload->min_distance = min_distance;
    _payload->max_distance = max_distance;
    _payload->obstacle_id = obstacle_id;
    _payload->sensor_type = sensor_type;
    _payload->frame = frame;


    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_obstacle_distance_3d_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_obstacle_distance_3d_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_obstacle_distance_3d_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->time_boot_ms, _payload->sensor_type, _payload->frame, _payload->obstacle_id, _payload->x, _payload->y, _payload->z, _payload->min_distance, _payload->max_distance,
        _status);
}


//----------------------------------------
//-- Message OBSTACLE_DISTANCE_3D unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_obstacle_distance_3d_decode(fmav_obstacle_distance_3d_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D  11037

#define mavlink_obstacle_distance_3d_t  fmav_obstacle_distance_3d_t

#define MAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D_LEN  28
#define MAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D_MIN_LEN  28
#define MAVLINK_MSG_ID_11037_LEN  28
#define MAVLINK_MSG_ID_11037_MIN_LEN  28

#define MAVLINK_MSG_ID_OBSTACLE_DISTANCE_3D_CRC  130
#define MAVLINK_MSG_ID_11037_CRC  130




#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_obstacle_distance_3d_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint32_t time_boot_ms, uint8_t sensor_type, uint8_t frame, uint16_t obstacle_id, float x, float y, float z, float min_distance, float max_distance)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_obstacle_distance_3d_pack(
        msg, sysid, compid,
        time_boot_ms, sensor_type, frame, obstacle_id, x, y, z, min_distance, max_distance,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_obstacle_distance_3d_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint32_t time_boot_ms, uint8_t sensor_type, uint8_t frame, uint16_t obstacle_id, float x, float y, float z, float min_distance, float max_distance)
{
    return fmav_msg_obstacle_distance_3d_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        time_boot_ms, sensor_type, frame, obstacle_id, x, y, z, min_distance, max_distance,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_obstacle_distance_3d_decode(const mavlink_message_t* msg, mavlink_obstacle_distance_3d_t* payload)
{
    fmav_msg_obstacle_distance_3d_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_OBSTACLE_DISTANCE_3D_H