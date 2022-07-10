
_main:

;LedBlinking.c,8 :: 		void main() {
;LedBlinking.c,11 :: 		TRISB = 0x00;         // set direction to be output
	CLRF       TRISB+0
;LedBlinking.c,12 :: 		TRISB = 0x01;         // set direction to be input
	MOVLW      1
	MOVWF      TRISB+0
;LedBlinking.c,28 :: 		while(1) {
L_main0:
;LedBlinking.c,31 :: 		PORTB = 0x00;         // Turn OFF LEDS on PORTB
	CLRF       PORTB+0
;LedBlinking.c,32 :: 		Delay_ms(1000);      // 1 second delay                       .
	MOVLW      2
	MOVWF      R11+0
	MOVLW      69
	MOVWF      R12+0
	MOVLW      169
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;LedBlinking.c,34 :: 		PORTB = 0xFF;          // Turn ON LEDS on PORTB
	MOVLW      255
	MOVWF      PORTB+0
;LedBlinking.c,35 :: 		Delay_ms(1000);      // 1 second delay
	MOVLW      2
	MOVWF      R11+0
	MOVLW      69
	MOVWF      R12+0
	MOVLW      169
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
	NOP
;LedBlinking.c,39 :: 		}
	GOTO       L_main0
;LedBlinking.c,40 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
