/*
 * DTMF_controlled_robot.c
 *
 * Created: 1/10/2014 10:10:34 PM
 *  Author: DNTS
 */ 


#include <avr/io.h>

int main(void)
{
 DDRB=0xff;
 DDRD=0x00;   
 int a;
	
	while(1)
    {
       a=PIND&0b00001111;
	  if (a==0b00000100)
	  {
		  PORTB=0b00001010;
	  }
	  else if (a==0b00000010)
	  {
		  PORTB=0b00000010;
	  }
	  else if (a==0b00001010)
	  {
		  PORTB=0x00;
	  }
	  else if (a==0b00000110)
	  {
		  PORTB=0b00001000;
	  }
	  else if (a==0b00000001)
	  {
		  PORTB=0b00000101;
	  }
	  else if (a==0b00001101)
	  {
		  PORTB=0b00000110;
	  }
	  else if (a==0b00000011)
	  {
		  PORTB=0b00001001;
	  }
      else
      {
	     PORTB=0x00;
      }    
     
	}
	
}