#ifndef __CONFIG_ZYNQ_RED_PITAYA_H
#define __CONFIG_ZYNQ_RED_PITAYA_H

#define CONFIG_ZYNQ_SERIAL_UART0
#define CONFIG_ZYNQ_GEM0
#define CONFIG_ZYNQ_GEM_PHY_ADDR0	1

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_SDHCI0
#define CONFIG_ZYNQ_USB
#define CONFIG_ZYNQ_QSPI
#define CONFIG_ZYNQ_I2C0
#define CONFIG_ZYNQ_EEPROM

#include <configs/zynq-common.h>

#undef CONFIG_PHY_MARVELL

#undef CONFIG_SYS_I2C_EEPROM_ADDR_LEN
#undef CONFIG_SYS_I2C_EEPROM_ADDR
#undef CONFIG_SYS_EEPROM_PAGE_WRITE_BITS
#undef CONFIG_SYS_EEPROM_SIZE

#undef CONFIG_ENV_IS_IN_SPI_FLASH
#undef CONFIG_ENV_IS_NOWHERE
#undef CONFIG_ENV_SIZE
#undef CONFIG_ENV_OFFSET

#undef CONFIG_EXTRA_ENV_SETTINGS


#define CONFIG_PHY_LANTIQ

#define CONFIG_SYS_I2C_EEPROM_ADDR_LEN		2
#define CONFIG_SYS_I2C_EEPROM_ADDR		0x50
#define CONFIG_SYS_EEPROM_PAGE_WRITE_BITS	5
#define CONFIG_SYS_EEPROM_SIZE			8192 /* Bytes */

#define CONFIG_ENV_IS_IN_EEPROM
#define CONFIG_ENV_SIZE		1024 /* Total Size of Environment Sector */
#define CONFIG_ENV_OFFSET	(2048*3) /* WP area starts at last 1/4 of 8k eeprom */

#endif /* __CONFIG_ZYNQ_RED_PITAYA_H */
