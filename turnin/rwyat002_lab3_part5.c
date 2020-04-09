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
	DDRB = 0xFE; PORTB = 0x01;
	
    /* Insert your solution below */
	unsigned short us_combination;
    while (1) {
	us_combination = PINA << 1;
	us_combination = (us_combination | (PINB & 0x01));
	if(us_combination >= 70){
	PORTB = 0x02;
	}
	else if((us_combination <= 70) && (us_combination > 5)){
	PORTB = 0x04;
	}
	else{PORTB = 0x00;}			
    }
    return 1;
}
