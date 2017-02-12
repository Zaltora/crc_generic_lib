/**
 * CRC GENERIC LIBRARY.
 *
 * Copyright (c) 2016 Zaltora (https://github.com/Zaltora)
 *
 * BSD Licensed as described in the file LICENSE
 */

#ifndef CRC_CONFIG_H_
#define CRC_CONFIG_H_

/* system include  */
#include "espressif/esp_common.h"
#include "FreeRTOS.h"

#ifndef crc_8
typedef uint8_t     crc_8;
#endif
#ifndef crc_16
typedef uint16_t    crc_16;
#endif
#ifndef crc_32
typedef uint32_t    crc_32;
#endif
#ifndef crc_64
typedef uint64_t    crc_64;
#endif

#ifndef CRC_DEBUG
#define CRC_DEBUG 0
#endif

#ifndef CRC_1BYTE_SUPPORT
#define CRC_1BYTE_SUPPORT 1
#endif
#ifndef CRC_2BYTE_SUPPORT
#define CRC_2BYTE_SUPPORT 1
#endif
#ifndef CRC_4BYTE_SUPPORT
#define CRC_4BYTE_SUPPORT 1
#endif
#ifndef CRC_8BYTE_SUPPORT
#define CRC_8BYTE_SUPPORT 1
#endif

#ifndef NULL
#define NULL (void *)0
#endif

#include "crc_generic.h"

#endif /* CRC_CONFIG_H_ */
