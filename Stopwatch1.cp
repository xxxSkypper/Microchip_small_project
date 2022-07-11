#line 1 "C:/Users/NYENTY EYONG/Desktop/stopwash/Stopwatch1.c"

void main() {

 int count = 0;
 int i = 0;
 int j = 0;
 int rev;
 int rev1;
 TRISB = 0x00;
 PORTB = 0x00;
 TRISA = 0x00;
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



 }


 }
 PORTA = 0x00;
 Delay_ms(50);
 }





}
