// MESSAGE CAMERA_CONTROL PACKING

#define MAVLINK_MSG_ID_CAMERA_CONTROL 150

typedef struct __mavlink_camera_control_t
{
 uint8_t visca_packet[16]; ///< VISCA Packet divided in 16 bytes. VISCA_packet[0] is first byte of packet going from right to left. X is the number of packets needed for each specific VISCA packet sent.
} mavlink_camera_control_t;

#define MAVLINK_MSG_ID_CAMERA_CONTROL_LEN 16
#define MAVLINK_MSG_ID_150_LEN 16

#define MAVLINK_MSG_ID_CAMERA_CONTROL_CRC 111
#define MAVLINK_MSG_ID_150_CRC 111

#define MAVLINK_MSG_CAMERA_CONTROL_FIELD_VISCA_PACKET_LEN 16

#define MAVLINK_MESSAGE_INFO_CAMERA_CONTROL { \
	"CAMERA_CONTROL", \
	1, \
	{  { "visca_packet", NULL, MAVLINK_TYPE_UINT8_T, 16, 0, offsetof(mavlink_camera_control_t, visca_packet) }, \
         } \
}


/**
 * @brief Pack a camera_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param visca_packet VISCA Packet divided in 16 bytes. VISCA_packet[0] is first byte of packet going from right to left. X is the number of packets needed for each specific VISCA packet sent.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const uint8_t *visca_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CAMERA_CONTROL_LEN];

	_mav_put_uint8_t_array(buf, 0, visca_packet, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#else
	mavlink_camera_control_t packet;

	mav_array_memcpy(packet.visca_packet, visca_packet, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CAMERA_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN, MAVLINK_MSG_ID_CAMERA_CONTROL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif
}

/**
 * @brief Pack a camera_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param visca_packet VISCA Packet divided in 16 bytes. VISCA_packet[0] is first byte of packet going from right to left. X is the number of packets needed for each specific VISCA packet sent.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_camera_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const uint8_t *visca_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CAMERA_CONTROL_LEN];

	_mav_put_uint8_t_array(buf, 0, visca_packet, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#else
	mavlink_camera_control_t packet;

	mav_array_memcpy(packet.visca_packet, visca_packet, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_CAMERA_CONTROL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN, MAVLINK_MSG_ID_CAMERA_CONTROL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif
}

/**
 * @brief Encode a camera_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param camera_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_camera_control_t* camera_control)
{
	return mavlink_msg_camera_control_pack(system_id, component_id, msg, camera_control->visca_packet);
}

/**
 * @brief Encode a camera_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param camera_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_camera_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_camera_control_t* camera_control)
{
	return mavlink_msg_camera_control_pack_chan(system_id, component_id, chan, msg, camera_control->visca_packet);
}

/**
 * @brief Send a camera_control message
 * @param chan MAVLink channel to send the message
 *
 * @param visca_packet VISCA Packet divided in 16 bytes. VISCA_packet[0] is first byte of packet going from right to left. X is the number of packets needed for each specific VISCA packet sent.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_camera_control_send(mavlink_channel_t chan, const uint8_t *visca_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_CAMERA_CONTROL_LEN];

	_mav_put_uint8_t_array(buf, 0, visca_packet, 16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, buf, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN, MAVLINK_MSG_ID_CAMERA_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, buf, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif
#else
	mavlink_camera_control_t packet;

	mav_array_memcpy(packet.visca_packet, visca_packet, sizeof(uint8_t)*16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN, MAVLINK_MSG_ID_CAMERA_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_CAMERA_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_camera_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *visca_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_uint8_t_array(buf, 0, visca_packet, 16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, buf, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN, MAVLINK_MSG_ID_CAMERA_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, buf, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif
#else
	mavlink_camera_control_t *packet = (mavlink_camera_control_t *)msgbuf;

	mav_array_memcpy(packet->visca_packet, visca_packet, sizeof(uint8_t)*16);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, (const char *)packet, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN, MAVLINK_MSG_ID_CAMERA_CONTROL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAMERA_CONTROL, (const char *)packet, MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE CAMERA_CONTROL UNPACKING


/**
 * @brief Get field visca_packet from camera_control message
 *
 * @return VISCA Packet divided in 16 bytes. VISCA_packet[0] is first byte of packet going from right to left. X is the number of packets needed for each specific VISCA packet sent.
 */
static inline uint16_t mavlink_msg_camera_control_get_visca_packet(const mavlink_message_t* msg, uint8_t *visca_packet)
{
	return _MAV_RETURN_uint8_t_array(msg, visca_packet, 16,  0);
}

/**
 * @brief Decode a camera_control message into a struct
 *
 * @param msg The message to decode
 * @param camera_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_camera_control_decode(const mavlink_message_t* msg, mavlink_camera_control_t* camera_control)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_camera_control_get_visca_packet(msg, camera_control->visca_packet);
#else
	memcpy(camera_control, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_CAMERA_CONTROL_LEN);
#endif
}
