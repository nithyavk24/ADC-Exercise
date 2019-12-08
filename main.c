/* Whoop Firmware interview */
/* The following code is expected to be in proper C sytnax.  pseudo code not accepted*/
/* If you are making an assumption please state it in your response */
/* It does not need to compile */

#include "ADC.h"

/* in C fill in main() to read 100 ADC readings and print them out to a uart*/
/* we want the printout to be in csv format */
/* you can use printf() to send data to the uart output */
/* assume 3 digits of decimal resolution */
/* bonus points if you fill in the details of adcRead() with a mock hardware driver in adc.c and adc.h*/

/*  for the code i have considered using Atmega 328p for ADC conversion to a 10 bit value and UART communication with the same
all registers are set considering the Atmega 328p datasheet */

float32_t my_array[100];
char buffer[4];

void adc_100(){
  uint16_t i;
  Serial_print("reading channel");
  for(i = 0; i< 100 ; i ++){
    my_array[i] =  adc_read();
    delay(500);
  }

  void sendData(){
    uint16_t i;
    for(i =0; i<100; i++){
      ftoa(myarray[i],buffer,3);
      Usart_print(buffer);
      Usart_print(", ");
      delay(500);
    }
    USART_Transmit(0x0A); //line feed
    USART_Transmit(0x0D); //carriage return

  }

main()

adc_init();               //initialising ADC
USART_init(MYUBRR);       //initialising USART

adc_100();
sendData();

}
