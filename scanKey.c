#include "gpio.h"
#include "ftm.h"

#define ALL (1 << PTA0) | (1 << PTA1) | (1 << PTA2) | (1 << PTA3)

enum KEYBOARD_STATUS {
	FALSE,
	TRUE
}

uint8_t keyPressed = FALSE;
void scanKey(void)
{
	// if key not pressed now, detect 
	// keyboard whether pressed
	
	// if keyboard pressed detected
	// then enable the flag
	if (!keyPressed) {
		if (GPIOA_PIDR & (1 <<
		keyPressed = True;
	}
	return;
}
