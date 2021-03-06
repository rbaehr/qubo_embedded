/* Ross Baehr
   R@M 2017
   ross.baehr@gmail.com
*/

#ifndef _I2C2_INTERRUPT_H_
#define _I2C2_INTERRUPT_H_

// Change this to the i2c device to use
#define I2C_DEVICE I2C2_BASE

#include <stdbool.h>
#include <stdint.h>

#include <inc/hw_ints.h>
#include <inc/hw_memmap.h>
#include <driverlib/rom.h>
#include <driverlib/gpio.h>
#include <driverlib/interrupt.h>
#include <driverlib/pin_map.h>
#include <driverlib/sysctl.h>
#include <driverlib/i2c.h>

#include "interrupts/include/i2c_states.h"
#include "include/i2c2_globals.h"

#ifdef DEBUG
#include <utils/uartstdio.h>
#endif

volatile uint32_t *i2c2_address;

volatile uint8_t **i2c2_buffer;

volatile uint32_t *i2c2_count;

volatile uint16_t *i2c2_int_state;

void I2C2IntHandler(void);

#endif
