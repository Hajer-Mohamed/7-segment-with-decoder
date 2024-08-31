/*
 * CFile1.c
 *
 * Created: 7/10/2024 2:44:21 PM
 *  Author: elsawah
 */ 


#include "DIO.h"
#include "std_macros.h"
void seven_seg_init(unsigned char portname)
{
	set_pin_dir(portname,0,1);	
	set_pin_dir(portname,1,1);	
	set_pin_dir(portname,2,1);	
	set_pin_dir(portname,3,1);	
}

void seven_seg_write(unsigned char portname,unsigned char val)
{
	DIO_write_low_nibble_ex2(portname,val);
}

