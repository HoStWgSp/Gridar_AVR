.macro Prescaler
	.if @0 == 2
		.equ ADCSRAADPS0 = 1
		.equ ADCSRAADPS1 = 0
		.equ ADCSRAADPS2 = 0
	.elif @0 == 4
		.equ ADCSRAADPS0 = 0
		.equ ADCSRAADPS1 = 1
		.equ ADCSRAADPS2 = 0
	.elif @0 == 8
		.equ ADCSRAADPS0 = 1
		.equ ADCSRAADPS1 = 1
		.equ ADCSRAADPS2 = 0
	.elif @0 == 16
		.equ ADCSRAADPS0 = 0
		.equ ADCSRAADPS1 = 0
		.equ ADCSRAADPS2 = 1
	.elif @0 == 32
		.equ ADCSRAADPS0 = 1
		.equ ADCSRAADPS1 = 0
		.equ ADCSRAADPS2 = 1
	.elif @0 == 64
		.equ ADCSRAADPS0 = 0
		.equ ADCSRAADPS1 = 1
		.equ ADCSRAADPS2 = 1
	.elif @0 == 128
		.equ ADCSRAADPS0 = 1
		.equ ADCSRAADPS1 = 1
		.equ ADCSRAADPS2 = 1
	.endif
.endm
