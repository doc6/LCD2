/*
 * Program: lcd_DisplayConcat.c
 * Author:  D. O. Corlett
 *
 * Displays a standard character string
 * concatenated with a numeric value
 * using the LCD display and libraries.
 */

#include <util/delay.h>
#include "lcd.h"


int main(void)
{
	// Initialise LCD
    lcd_init(LCD_CTRL_PORT_C | LCD_DATA_PORT_D_C);

    // Variables for strings to be displayed on the LCD
    char con[80];
    char str[] = "NUMBER";
    int num = 0;


    while (1)
    {
    	// Clear the LCD before writing to it
    	lcd_clear();
    	// Concatenation of character string and numeric value
    	sprintf(con, "%s %i", str, num);
    	// Display the concatenated string to LCD
    	lcd_display(con);
    	/* Delay a short time and then increment the
    	* the numeric value to create a counter. */


    	_delay_ms(1000);
    	num ++;
    }

    return 0;
}

