#ifndef _TOOLBOX
#define _TOOLBOX
#include <wiringPi.h>
#include <stdint.h>
enum PINMODE   { Input=0, Output, Pwm_Output, Gpio_Clock};
//enum PINOUTPUT { LOW=0, HIGH};
typedef enum PINMODE pinMode_t;
typedef enum PINOUTPUT pinOutput_t;
#endif

/**
 * Sets the GPIO pin modes for pinIDs.
 * @param: int *pinIDs - pointer to array of pins to be set
 *                       with mode "mode"
 * @param: pinMode mode- mode to set pinIds to
 */
void setPinModes(uint8_t pinIds[], pinMode_t mode);

/**
 * Brings CLOCK pin high then low.
 *@param: uint8_t pin is clocked GPIO from the Pi.
 *        waitTime is wait in mSec
 */
 void tick(uint8_t pin, uint16_t waitTime);


