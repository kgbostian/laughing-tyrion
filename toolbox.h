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
 * Brings CLOCK pin high then low.
 *@param: uint8_t pin is clocked GPIO from the Pi.
 *        waitTime is wait in mSec
 */
 void tick(uint8_t pin = 5, uint16_t waitTime = 10);


