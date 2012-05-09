/* baud rate of the serial GPS receiver */
#define BAUD 38400
/* 7 bit address on the TWI/I²C bus */
#define TWIADDRESS 0x11

/* query a serial GPS? */
#define USE_GPS 1
/* query additional sonar device?
 *
 * The sonar trigger must be connected to PD5, the echo wire to the ICP pin.
 */
#define USE_SONAR 1

/* extract date/time information from the GPS signal?
 *
 * Disabling this can reduce flash footprint for smaller controllers like the
 * ATTiny2313.
 */
#define PARSE_GPS_TIME 1

/* extract altitude information from GPS signal?
 *
 * Disabling this can reduce flash footprint for smaller controllers like the
 * ATTiny2313.
 */
#define PARSE_GPS_ALTITUDE 1