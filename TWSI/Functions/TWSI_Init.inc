/*
* ????????????? ?????? ?????? I2C
*/
.macro TWSI_init
	ldi	r16, ((ATmegaFREQ/FreqSCL)-16)/8	;?????? ??????? ???????? ?? I2C, ? ??????? ??????????? ??????? TWPS == 0
	WRITE_REG TWBR, r16						;?????????? ?????? ? ??????? ??? I2C
.endm

