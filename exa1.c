#include <exa1.h>

void main()
{

   while(TRUE)
   {
      output_high(led1);
      output_low(led2);
      output_low(led3);
      output_low(led4);
      output_low(led5);
      output_low(led6);
      output_low(led7);
      output_low(led8);
      delay_ms(200);
      
      output_low(led1);
      output_high(led2);
      output_low(led3);
      output_low(led4);
      output_low(led5);
      output_low(led6);
      output_low(led7);
      output_low(led8);
      delay_ms(200);
      
       output_low(led1);
      output_low(led2);
      output_high(led3);
      output_low(led4);
      output_low(led5);
      output_low(led6);
      output_low(led7);
      output_low(led8);
      delay_ms(200);
      
       output_low(led1);
      output_low(led2);
      output_low(led3);
      output_high(led4);
      output_low(led5);
      output_low(led6);
      output_low(led7);
      output_low(led8);
      delay_ms(200);
      
       output_low(led1);
      output_low(led2);
      output_low(led3);
      output_low(led4);
      output_high(led5);
      output_low(led6);
      output_low(led7);
      output_low(led8);
      delay_ms(200);
      
      output_low(led1);
      output_low(led2);
      output_low(led3);
      output_low(led4);
      output_low(led5);
      output_high(led6);
      output_low(led7);
      output_low(led8);
      delay_ms(200);
      
      
      output_low(led1);
      output_low(led2);
      output_low(led3);
      output_low(led4);
      output_low(led5);
      output_low(led6);
      output_high(led7);
      output_low(led8);
      delay_ms(200);
      
      
       output_low(led1);
      output_low(led2);
      output_low(led3);
      output_low(led4);
      output_low(led5);
      output_low(led6);
      output_low(led7);
      output_high(led8);
      delay_ms(200);
   }

}

/*
#include <cruce de semaforo.h>
void main()
{
   while(TRUE)
   {
      output_high(rojo1);
      output_low(amarillo1);
      output_low(verde1);
      
      output_low(rojo2);
      output_low(amarillo2);
      output_high(verde2);
      
      delay_ms(3000);
      
      output_high(rojo1);
      output_low(amarillo1);
      output_low(verde1);
      
      output_low(rojo2);
      output_high(amarillo2);
      output_low(verde2);
      
      delay_ms(2000);
      
      output_low(rojo1);
      output_low(amarillo1);
      output_high(verde1);
      
      output_high(rojo2);
      output_low(amarillo2);
      output_low(verde2);
      
      delay_ms(3000);
      
    


      output_low(rojo1);
      output_high(amarillo1);
      output_low(verde1);
      
      output_high(rojo2);
      output_low(amarillo2);
      output_low(verde2);
      delay_ms(2000);
   }
}

*/
