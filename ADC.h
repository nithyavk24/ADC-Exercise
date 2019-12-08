/* Whoop Firmware interview */
/* The following code is expected to be in proper C sytnax.  pseudo code not accepted*/
/* If you are making an assumption please state it in your response */


/* assume these are defined in the mcu driver files somewhere*/
#define ADC_STATUS_REGISTER 
#define ADC_CONFIG_REGISTER


#ifndef ADC_H
#define ADC_H

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr.interrupt.h>

#define F_CPU 80000000UL
#define FOSC 80000000
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD -1 //9600 baudrate

  float32_t adc_read();
  void adc_init();
  void USART_init();
  void USART_Transmit(unsigned char data)
  void Usart_print(char *StringofCharacters);

#endif

