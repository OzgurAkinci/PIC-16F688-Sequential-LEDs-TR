#include "E:\HDD\YAZILIM\PIC\pic_projects\pic-16F688\sirali_led\code_files\main.h"


void main()
{

   setup_adc_ports(NO_ANALOGS|VSS_VDD);
   setup_adc(ADC_OFF);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_comparator(NC_NC);
   setup_vref(FALSE);
   setup_oscillator(OSC_8MHZ);

   // TODO: USER CODE!!
  
   while(true){
      // A0 pini harekete geciyor..
         output_high(pin_a0);
         delay_ms(200);
         output_low(pin_a0);
         delay_ms(200);
         output_high(pin_a0);
         delay_ms(200);
         output_low(pin_a0);
      
      // C0 pini harekete geciyor..
         output_high(pin_c0);
         delay_ms(200);
         output_low(pin_c0);
         delay_ms(200);
         output_high(pin_c0);
         delay_ms(200);
         output_low(pin_c0);

   }

}
