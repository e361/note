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
	static unsigned char count = 0;
	// if key not pressed now, detect 
	// keyboard whether pressed
	
	// if keyboard pressed detected
	// then enable the flag
	if (!keyPressed) {
		// detected the keyboard still scanning,
		// then decide keyboard status
		// is PTA0, PTA1, PTA2, PTA3 pressed?
		if (GPIOA_PIDR & (1 <<  {
			// keyboard pressed here.
			// change keyboard status
			keyPressed = TRUE;
			}
		keyPressed = True;
		return;
	}
	else {
		// enter into the debouncing mode
		//
		if (count >= 25) {
			count = 0;
			keyPressed = FALSE;
		}
	}
	return;
}
