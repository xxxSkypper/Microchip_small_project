#line 1 "D:/LedBlinking/LedBlinking.c"







void main() {


 TRISB = 0x00;
 TRISB = 0x01;
#line 28 "D:/LedBlinking/LedBlinking.c"
 while(1) {


 PORTB = 0x00;
 Delay_ms(1000);

 PORTB = 0xFF;
 Delay_ms(1000);



 }
}
