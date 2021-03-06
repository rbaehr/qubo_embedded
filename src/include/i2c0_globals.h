/* Ross Baehr
   R@M 2017
   ross.baehr@gmail.com
*/

/*
  Define the globals that are used by both the i2c lib and i2c interrupt
*/

#ifndef _I2C0_GLOBALS_H_
#define _I2C0_GLOBALS_H_


// ****************************************************************************
// Variables
// ****************************************************************************

// Address of slave
extern volatile uint32_t *i2c0_address;

// The variables that track the data to be transmitted or received.
extern volatile uint8_t **i2c0_buffer;
extern volatile uint32_t *i2c0_count;

// The current state of the interrupt handler state machine.
extern volatile uint16_t *i2c0_int_state;


#endif
