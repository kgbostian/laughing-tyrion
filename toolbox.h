#include <wiringPi.h>

enum pinModes  {Input, Output, Pwm_Output, Gpio_Clock};
enum pinOutput {LOW,HIGH};

/**
 * Sets the GPIO pin modes for pinIDs.
 * @param: int *pinIDs - pointer to array of pins to be set
 *                       with mode "mode"
 * @param: pinMode mode- mode to set pinIds to
 */
void setPinModes(uint8_t pinIds[], pinMode mode);

/**
 *
 *@param:
 *@return: 
 */


