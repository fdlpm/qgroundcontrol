// MESSAGE ESB_DATA PACKING

#define MAVLINK_MSG_ID_ESB_DATA 151

typedef struct __mavlink_esb_data_t
{
 uint16_t Ambient_Temperature_Celcius; ///< Ambient temperature on/around UAV in celcius
 uint16_t Object_Temperature_Celcius; ///< Object temperature
 uint16_t Carbon_Dioxide; ///< Carbon dioxide
 uint16_t Carbon_Monoxide; ///< Carbon monoxide
 uint16_t Liquid_Petroleum_Gas; ///< Liquid petroleum gases
 uint16_t Hydrogen_Sulfide; ///< Hydrogen sulfide
} mavlink_esb_data_t;

#define MAVLINK_MSG_ID_ESB_DATA_LEN 12
#define MAVLINK_MSG_ID_151_LEN 12

#define MAVLINK_MSG_ID_ESB_DATA_CRC 89
#define MAVLINK_MSG_ID_151_CRC 89



#define MAVLINK_MESSAGE_INFO_ESB_DATA { \
	"ESB_DATA", \
	6, \
	{  { "Ambient_Temperature_Celcius", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_esb_data_t, Ambient_Temperature_Celcius) }, \
         { "Object_Temperature_Celcius", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_esb_data_t, Object_Temperature_Celcius) }, \
         { "Carbon_Dioxide", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_esb_data_t, Carbon_Dioxide) }, \
         { "Carbon_Monoxide", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_esb_data_t, Carbon_Monoxide) }, \
         { "Liquid_Petroleum_Gas", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_esb_data_t, Liquid_Petroleum_Gas) }, \
         { "Hydrogen_Sulfide", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_esb_data_t, Hydrogen_Sulfide) }, \
         } \
}


/**
 * @brief Pack a esb_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param Ambient_Temperature_Celcius Ambient temperature on/around UAV in celcius
 * @param Object_Temperature_Celcius Object temperature
 * @param Carbon_Dioxide Carbon dioxide
 * @param Carbon_Monoxide Carbon monoxide
 * @param Liquid_Petroleum_Gas Liquid petroleum gases
 * @param Hydrogen_Sulfide Hydrogen sulfide
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_esb_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint16_t Ambient_Temperature_Celcius, uint16_t Object_Temperature_Celcius, uint16_t Carbon_Dioxide, uint16_t Carbon_Monoxide, uint16_t Liquid_Petroleum_Gas, uint16_t Hydrogen_Sulfide)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ESB_DATA_LEN];
	_mav_put_uint16_t(buf, 0, Ambient_Temperature_Celcius);
	_mav_put_uint16_t(buf, 2, Object_Temperature_Celcius);
	_mav_put_uint16_t(buf, 4, Carbon_Dioxide);
	_mav_put_uint16_t(buf, 6, Carbon_Monoxide);
	_mav_put_uint16_t(buf, 8, Liquid_Petroleum_Gas);
	_mav_put_uint16_t(buf, 10, Hydrogen_Sulfide);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESB_DATA_LEN);
#else
	mavlink_esb_data_t packet;
	packet.Ambient_Temperature_Celcius = Ambient_Temperature_Celcius;
	packet.Object_Temperature_Celcius = Object_Temperature_Celcius;
	packet.Carbon_Dioxide = Carbon_Dioxide;
	packet.Carbon_Monoxide = Carbon_Monoxide;
	packet.Liquid_Petroleum_Gas = Liquid_Petroleum_Gas;
	packet.Hydrogen_Sulfide = Hydrogen_Sulfide;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ESB_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ESB_DATA_LEN, MAVLINK_MSG_ID_ESB_DATA_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif
}

/**
 * @brief Pack a esb_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param Ambient_Temperature_Celcius Ambient temperature on/around UAV in celcius
 * @param Object_Temperature_Celcius Object temperature
 * @param Carbon_Dioxide Carbon dioxide
 * @param Carbon_Monoxide Carbon monoxide
 * @param Liquid_Petroleum_Gas Liquid petroleum gases
 * @param Hydrogen_Sulfide Hydrogen sulfide
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_esb_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint16_t Ambient_Temperature_Celcius,uint16_t Object_Temperature_Celcius,uint16_t Carbon_Dioxide,uint16_t Carbon_Monoxide,uint16_t Liquid_Petroleum_Gas,uint16_t Hydrogen_Sulfide)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ESB_DATA_LEN];
	_mav_put_uint16_t(buf, 0, Ambient_Temperature_Celcius);
	_mav_put_uint16_t(buf, 2, Object_Temperature_Celcius);
	_mav_put_uint16_t(buf, 4, Carbon_Dioxide);
	_mav_put_uint16_t(buf, 6, Carbon_Monoxide);
	_mav_put_uint16_t(buf, 8, Liquid_Petroleum_Gas);
	_mav_put_uint16_t(buf, 10, Hydrogen_Sulfide);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESB_DATA_LEN);
#else
	mavlink_esb_data_t packet;
	packet.Ambient_Temperature_Celcius = Ambient_Temperature_Celcius;
	packet.Object_Temperature_Celcius = Object_Temperature_Celcius;
	packet.Carbon_Dioxide = Carbon_Dioxide;
	packet.Carbon_Monoxide = Carbon_Monoxide;
	packet.Liquid_Petroleum_Gas = Liquid_Petroleum_Gas;
	packet.Hydrogen_Sulfide = Hydrogen_Sulfide;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ESB_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ESB_DATA_LEN, MAVLINK_MSG_ID_ESB_DATA_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif
}

/**
 * @brief Encode a esb_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param esb_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_esb_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_esb_data_t* esb_data)
{
	return mavlink_msg_esb_data_pack(system_id, component_id, msg, esb_data->Ambient_Temperature_Celcius, esb_data->Object_Temperature_Celcius, esb_data->Carbon_Dioxide, esb_data->Carbon_Monoxide, esb_data->Liquid_Petroleum_Gas, esb_data->Hydrogen_Sulfide);
}

/**
 * @brief Encode a esb_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param esb_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_esb_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_esb_data_t* esb_data)
{
	return mavlink_msg_esb_data_pack_chan(system_id, component_id, chan, msg, esb_data->Ambient_Temperature_Celcius, esb_data->Object_Temperature_Celcius, esb_data->Carbon_Dioxide, esb_data->Carbon_Monoxide, esb_data->Liquid_Petroleum_Gas, esb_data->Hydrogen_Sulfide);
}

/**
 * @brief Send a esb_data message
 * @param chan MAVLink channel to send the message
 *
 * @param Ambient_Temperature_Celcius Ambient temperature on/around UAV in celcius
 * @param Object_Temperature_Celcius Object temperature
 * @param Carbon_Dioxide Carbon dioxide
 * @param Carbon_Monoxide Carbon monoxide
 * @param Liquid_Petroleum_Gas Liquid petroleum gases
 * @param Hydrogen_Sulfide Hydrogen sulfide
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_esb_data_send(mavlink_channel_t chan, uint16_t Ambient_Temperature_Celcius, uint16_t Object_Temperature_Celcius, uint16_t Carbon_Dioxide, uint16_t Carbon_Monoxide, uint16_t Liquid_Petroleum_Gas, uint16_t Hydrogen_Sulfide)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ESB_DATA_LEN];
	_mav_put_uint16_t(buf, 0, Ambient_Temperature_Celcius);
	_mav_put_uint16_t(buf, 2, Object_Temperature_Celcius);
	_mav_put_uint16_t(buf, 4, Carbon_Dioxide);
	_mav_put_uint16_t(buf, 6, Carbon_Monoxide);
	_mav_put_uint16_t(buf, 8, Liquid_Petroleum_Gas);
	_mav_put_uint16_t(buf, 10, Hydrogen_Sulfide);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, buf, MAVLINK_MSG_ID_ESB_DATA_LEN, MAVLINK_MSG_ID_ESB_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, buf, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif
#else
	mavlink_esb_data_t packet;
	packet.Ambient_Temperature_Celcius = Ambient_Temperature_Celcius;
	packet.Object_Temperature_Celcius = Object_Temperature_Celcius;
	packet.Carbon_Dioxide = Carbon_Dioxide;
	packet.Carbon_Monoxide = Carbon_Monoxide;
	packet.Liquid_Petroleum_Gas = Liquid_Petroleum_Gas;
	packet.Hydrogen_Sulfide = Hydrogen_Sulfide;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, (const char *)&packet, MAVLINK_MSG_ID_ESB_DATA_LEN, MAVLINK_MSG_ID_ESB_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, (const char *)&packet, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ESB_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_esb_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t Ambient_Temperature_Celcius, uint16_t Object_Temperature_Celcius, uint16_t Carbon_Dioxide, uint16_t Carbon_Monoxide, uint16_t Liquid_Petroleum_Gas, uint16_t Hydrogen_Sulfide)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint16_t(buf, 0, Ambient_Temperature_Celcius);
	_mav_put_uint16_t(buf, 2, Object_Temperature_Celcius);
	_mav_put_uint16_t(buf, 4, Carbon_Dioxide);
	_mav_put_uint16_t(buf, 6, Carbon_Monoxide);
	_mav_put_uint16_t(buf, 8, Liquid_Petroleum_Gas);
	_mav_put_uint16_t(buf, 10, Hydrogen_Sulfide);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, buf, MAVLINK_MSG_ID_ESB_DATA_LEN, MAVLINK_MSG_ID_ESB_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, buf, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif
#else
	mavlink_esb_data_t *packet = (mavlink_esb_data_t *)msgbuf;
	packet->Ambient_Temperature_Celcius = Ambient_Temperature_Celcius;
	packet->Object_Temperature_Celcius = Object_Temperature_Celcius;
	packet->Carbon_Dioxide = Carbon_Dioxide;
	packet->Carbon_Monoxide = Carbon_Monoxide;
	packet->Liquid_Petroleum_Gas = Liquid_Petroleum_Gas;
	packet->Hydrogen_Sulfide = Hydrogen_Sulfide;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, (const char *)packet, MAVLINK_MSG_ID_ESB_DATA_LEN, MAVLINK_MSG_ID_ESB_DATA_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESB_DATA, (const char *)packet, MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ESB_DATA UNPACKING


/**
 * @brief Get field Ambient_Temperature_Celcius from esb_data message
 *
 * @return Ambient temperature on/around UAV in celcius
 */
static inline uint16_t mavlink_msg_esb_data_get_Ambient_Temperature_Celcius(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field Object_Temperature_Celcius from esb_data message
 *
 * @return Object temperature
 */
static inline uint16_t mavlink_msg_esb_data_get_Object_Temperature_Celcius(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field Carbon_Dioxide from esb_data message
 *
 * @return Carbon dioxide
 */
static inline uint16_t mavlink_msg_esb_data_get_Carbon_Dioxide(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field Carbon_Monoxide from esb_data message
 *
 * @return Carbon monoxide
 */
static inline uint16_t mavlink_msg_esb_data_get_Carbon_Monoxide(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field Liquid_Petroleum_Gas from esb_data message
 *
 * @return Liquid petroleum gases
 */
static inline uint16_t mavlink_msg_esb_data_get_Liquid_Petroleum_Gas(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field Hydrogen_Sulfide from esb_data message
 *
 * @return Hydrogen sulfide
 */
static inline uint16_t mavlink_msg_esb_data_get_Hydrogen_Sulfide(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a esb_data message into a struct
 *
 * @param msg The message to decode
 * @param esb_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_esb_data_decode(const mavlink_message_t* msg, mavlink_esb_data_t* esb_data)
{
#if MAVLINK_NEED_BYTE_SWAP
	esb_data->Ambient_Temperature_Celcius = mavlink_msg_esb_data_get_Ambient_Temperature_Celcius(msg);
	esb_data->Object_Temperature_Celcius = mavlink_msg_esb_data_get_Object_Temperature_Celcius(msg);
	esb_data->Carbon_Dioxide = mavlink_msg_esb_data_get_Carbon_Dioxide(msg);
	esb_data->Carbon_Monoxide = mavlink_msg_esb_data_get_Carbon_Monoxide(msg);
	esb_data->Liquid_Petroleum_Gas = mavlink_msg_esb_data_get_Liquid_Petroleum_Gas(msg);
	esb_data->Hydrogen_Sulfide = mavlink_msg_esb_data_get_Hydrogen_Sulfide(msg);
#else
	memcpy(esb_data, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ESB_DATA_LEN);
#endif
}
