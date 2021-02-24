//------------------------------
// The fastMavlink library
// (c) OlliW, OlliW42, www.olliw.eu
//------------------------------

#pragma once
#ifndef FASTMAVLINK_MSG_STATUSTEXT_H
#define FASTMAVLINK_MSG_STATUSTEXT_H


//----------------------------------------
//-- Message STATUSTEXT
//----------------------------------------

// fields are ordered, as they are on the wire
FASTMAVLINK_PACK(
typedef struct _fmav_statustext_t {
    uint8_t severity;
    char text[50];
    uint16_t id;
    uint8_t chunk_seq;
}) fmav_statustext_t;


#define FASTMAVLINK_MSG_ID_STATUSTEXT  253


#define FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MIN  51
#define FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MAX  54
#define FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN  54
#define FASTMAVLINK_MSG_STATUSTEXT_CRCEXTRA  83

#define FASTMAVLINK_MSG_ID_253_LEN_MIN  51
#define FASTMAVLINK_MSG_ID_253_LEN_MAX  54
#define FASTMAVLINK_MSG_ID_253_LEN  54
#define FASTMAVLINK_MSG_ID_253_CRCEXTRA  83

#define FASTMAVLINK_MSG_STATUSTEXT_FIELD_TEXT_LEN  50

#define FASTMAVLINK_MSG_STATUSTEXT_FLAGS  0
#define FASTMAVLINK_MSG_STATUSTEXT_TARGET_SYSTEM_OFS  0
#define FASTMAVLINK_MSG_STATUSTEXT_TARGET_COMPONENT_OFS  0


//----------------------------------------
//-- Message STATUSTEXT packing routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_statustext_pack(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    uint8_t severity, const char* text, uint16_t id, uint8_t chunk_seq,
    fmav_status_t* _status)
{
    fmav_statustext_t* _payload = (fmav_statustext_t*)msg->payload;

    _payload->severity = severity;
    _payload->id = id;
    _payload->chunk_seq = chunk_seq;
    memcpy(&(_payload->text), text, sizeof(char)*50);

    msg->sysid = sysid;
    msg->compid = compid;
    msg->msgid = FASTMAVLINK_MSG_ID_STATUSTEXT;

    msg->target_sysid = 0;
    msg->target_compid = 0;
    msg->crc_extra = FASTMAVLINK_MSG_STATUSTEXT_CRCEXTRA;

    return fmav_finalize_msg(
        msg,
        FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MAX,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_statustext_encode(
    fmav_message_t* msg,
    uint8_t sysid,
    uint8_t compid,
    const fmav_statustext_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_statustext_pack(
        msg, sysid, compid,
        _payload->severity, _payload->text, _payload->id, _payload->chunk_seq,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_statustext_pack_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    uint8_t severity, const char* text, uint16_t id, uint8_t chunk_seq,
    fmav_status_t* _status)
{
    fmav_statustext_t* _payload = (fmav_statustext_t*)(&buf[FASTMAVLINK_HEADER_V2_LEN]);

    _payload->severity = severity;
    _payload->id = id;
    _payload->chunk_seq = chunk_seq;
    memcpy(&(_payload->text), text, sizeof(char)*50);

    buf[5] = sysid;
    buf[6] = compid;
    buf[7] = (uint8_t)FASTMAVLINK_MSG_ID_STATUSTEXT;
    buf[8] = ((uint32_t)FASTMAVLINK_MSG_ID_STATUSTEXT >> 8);
    buf[9] = ((uint32_t)FASTMAVLINK_MSG_ID_STATUSTEXT >> 16);

    return fmav_finalize_frame_buf(
        buf,
        FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MIN,
        FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MAX,
        FASTMAVLINK_MSG_STATUSTEXT_CRCEXTRA,
        _status);
}

    
FASTMAVLINK_FUNCTION_DECORATOR uint16_t fmav_msg_statustext_encode_to_frame_buf(
    uint8_t* buf,
    uint8_t sysid,
    uint8_t compid,
    const fmav_statustext_t* _payload,
    fmav_status_t* _status)
{
    return fmav_msg_statustext_pack_to_frame_buf(
        buf, sysid, compid,
        _payload->severity, _payload->text, _payload->id, _payload->chunk_seq,
        _status);
}


//----------------------------------------
//-- Message STATUSTEXT unpacking routines
//----------------------------------------

FASTMAVLINK_FUNCTION_DECORATOR void fmav_msg_statustext_decode(fmav_statustext_t* payload, const fmav_message_t* msg)
{
    uint8_t len = (msg->len < FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MAX) ? msg->len : FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MAX;

    memset(payload, 0, FASTMAVLINK_MSG_STATUSTEXT_PAYLOAD_LEN_MAX);
    memcpy(payload, msg->payload, len);
}


//----------------------------------------
//-- Pymavlink wrappers
//----------------------------------------
#ifdef FASTMAVLINK_PYMAVLINK_ENABLED

#define MAVLINK_MSG_ID_STATUSTEXT  253

#define mavlink_statustext_t  fmav_statustext_t

#define MAVLINK_MSG_ID_STATUSTEXT_LEN  54
#define MAVLINK_MSG_ID_STATUSTEXT_MIN_LEN  51
#define MAVLINK_MSG_ID_253_LEN  54
#define MAVLINK_MSG_ID_253_MIN_LEN  51

#define MAVLINK_MSG_ID_STATUSTEXT_CRC  83
#define MAVLINK_MSG_ID_253_CRC  83

#define MAVLINK_MSG_STATUSTEXT_FIELD_TEXT_LEN 50


#if MAVLINK_COMM_NUM_BUFFERS > 0

FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_statustext_pack(
    uint8_t sysid,
    uint8_t compid,
    mavlink_message_t* msg,
    uint8_t severity, const char* text, uint16_t id, uint8_t chunk_seq)
{
    fmav_status_t* _status = mavlink_get_channel_status(MAVLINK_COMM_0);
    return fmav_msg_statustext_pack(
        msg, sysid, compid,
        severity, text, id, chunk_seq,
        _status);
}

#endif


FASTMAVLINK_FUNCTION_DECORATOR uint16_t mavlink_msg_statustext_pack_txbuf(
    char* buf,
    fmav_status_t* _status,
    uint8_t sysid,
    uint8_t compid,
    uint8_t severity, const char* text, uint16_t id, uint8_t chunk_seq)
{
    return fmav_msg_statustext_pack_to_frame_buf(
        (uint8_t*)buf,
        sysid,
        compid,
        severity, text, id, chunk_seq,
        _status);
}


FASTMAVLINK_FUNCTION_DECORATOR void mavlink_msg_statustext_decode(const mavlink_message_t* msg, mavlink_statustext_t* payload)
{
    fmav_msg_statustext_decode(payload, msg);
}

#endif // FASTMAVLINK_PYMAVLINK_ENABLED


#endif // FASTMAVLINK_MSG_STATUSTEXT_H