
void main() {

   int count = 0;
   int i = 0;
   int j = 0;
   int rev;
   int rev1;
  TRISB = 0x00;
  PORTB =  0x00;
  TRISA = 0x00; //all port b is output
  PORTA = 0x00;
 while(1){
    for(j=0; j<6; j++)
    {
               PORTA = 0X00 +j;
               PORTA.F4 = 0X40;

      for(i = 0; i < 10; i++)
      {

             if(PORTB.F7 == 0X01){
             PORTB = 0x00 + i ;
              Delay_ms(50);
              }
              else{
              i = PORTB;
              rev = i;
              PORTB = rev;
              }
              


      }   //end of for loop


              }
        PORTA = 0x00;
        Delay_ms(50);
     }



   //end of while loop

}