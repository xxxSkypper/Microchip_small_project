
 // Blinking an LED

 // Global Variables



void main() {


     TRISB = 0x00;         // set direction to be output
     TRISB = 0x01;         // set direction to be input
     

     



 /* do {
     LATB = 0x00;         // Turn OFF LEDS on PORTB
    Delay_ms(1000);      // 1 second delay

    LATB = 0xFF;          // Turn ON LEDS on PORTB
    Delay_ms(1000);      // 1 second delay
  } while(1);            // Endless loop  */
  
  
 while(1) {
//        PORTB = rb7_bit;

    PORTB = 0x00;         // Turn OFF LEDS on PORTB
    Delay_ms(1000);      // 1 second delay                       .

    PORTB = 0xFF;          // Turn ON LEDS on PORTB
    Delay_ms(1000);      // 1 second delay
    

  
  }
}