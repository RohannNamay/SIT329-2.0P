#ifndef GPIO_H
#define GPIO_H

#include <stdbool.h>
#include <stdint.h>
#include "sam.h"   // Provides MCU register definitions

// Function Prototypes

/**
 * @brief Configures a GPIO pin as input or output.
 * 
 * @param PortNum Character representing the port ('A' or 'B').
 * @param PinNum  Pin number (0–31) within the port.
 * @param Mode    Direction of the pin: INPUT or OUTPUT.
 * 
 * @return true if the pin is successfully configured, false if invalid port/pin/mode.
 */
bool Config_GPIO(char PortNum, char PinNum, uint8_t Mode);


/**
 * @brief Sets the output state of a GPIO pin.
 * 
 * @param PortNum Character representing the port ('A' or 'B').
 * @param PinNum  Pin number (0–31) within the port.
 * @param State   Output state: HIGH or LOW.
 * 
 * @return true if the pin state is successfully set, false if invalid port/pin.
 */
bool Write_GPIO(char PortNum, char PinNum, bool State);


/**
 * @brief Reads the current state of a GPIO pin.
 * 
 * @param PortNum Character representing the port ('A' or 'B').
 * @param PinNum  Pin number (0–31) within the port.
 * 
 * @return true if the pin is HIGH, false if LOW or if the pin/port is invalid.
 */
bool Read_GPIO(char PortNum, char PinNum);

#endif
