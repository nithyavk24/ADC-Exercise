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

float32_t my_array[100];


void adc_100(){
  int i = 0;
  for(i = 0; i< 100 ; i ++){
    my_array[i] =  adc_read();
  }

}

main()
{

adc_100();
int i=0;

for(int i =0; i<100; i++){
  printf("%0.3f ,", array[i]);
}

}
