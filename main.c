#include <stdlib.h>
#include <avr/io.h>



int main(void)
{
	DDRB=0b01111111; //Ganzer Port B als Ausgang definieren
	PORTB=0x00; 

	uint8_t test=0;
	uint16_t x=0;
	
	while(1)
	{ 
	
		
			test++;

		
		
		PORTB=test;	

		for(x=0;x<60000;x++);//zuerst auf 6000 zählen und dan +1
	
		
	} //end while
}//end of main




