/*
* ????????????? ?????? TWSI
*/
.macro TWSI_STOP
	_call TWSI_STOP_act
.endm
//____________________________________________________________________________________
//____________________________________________________________________________________
TWSI_STOP_act:											; ?????
	push r16
	ldi		r16, (1<<TWINT) | (1<<TWSTO) | (1<<TWEN)	; ????????? ?????? STOP
	WRITE_REG TWCR, r16									; ?????????? ?? ????
	TWSI_Delay_4_1ms
	pop r16
ret	
