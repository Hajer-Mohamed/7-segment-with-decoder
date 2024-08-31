/*
 * _7segment_with_decoder.c
 *
 * Created: 7/10/2024 2:44:05 PM
 *  Author: elsawah
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL	
#include <util/delay.h>
#include "seven_decoder.h"
int main(void)
{
	seven_seg_init('D');
	unsigned char counter=0;
    while(1)
    {
		for(counter=0;counter<=9;counter++)
		{
			seven_seg_write('D',counter);
			_delay_ms(1000);
		}			
        
    }
}