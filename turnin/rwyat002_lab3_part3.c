/*	Author: rwyat002
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char uc_temp_port;
    /* Insert your solution below */
    while (1) {
	if((PINA & 0x0F == 1) || (PINA & 0x0F  == 2)){
		uc_temp_port = 0x60;
	}
	else if((PINA & 0x0F == 3) || (PINA & 0x0F == 4)){
		uc_temp_port = 0x70;
	}
	else if((PINA & 0x0F == 5) || (PINA & 0x0F == 6)){
		uc_temp_port = 0x38;
	}
	else if((PINA & 0x0F == 7) || (PINA & 0x0F == 8) || (PINA & 0x0F == 9)){
		uc_temp_port = 0x3C;
	}
	else if((PINA & 0x0F == 10) || (PINA & 0x0F == 11) || (PINA & 0x0F == 12)){
		uc_temp_port = 0x3E;}
	else if((PINA & 0x0F == 13) || (PINA & 0x0F == 14) || (PINA & 0x0F == 15)){
		uc_temp_port = 0x3F;
	}
	if((PINA & 0x10) && (PINA & 0x20) && !(PINA & 0x40)){
		uc_temp_port = uc_temp_port | 0x80;
	}
	PORTC = uc_temp_port;	    
			
    }
    return 1;
}
