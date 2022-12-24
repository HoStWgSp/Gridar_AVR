.macro SetPrescaler
	.if ADCSRAADPS0 == 0
		CLRB ADCSRA, ADPS0
	.else
		SETB ADCSRA, ADPS0
	.endif
	.if ADCSRAADPS1 == 0
		CLRB ADCSRA, ADPS1
	.else
		SETB ADCSRA, ADPS1
	.endif
	.if ADCSRAADPS2 == 0
		CLRB ADCSRA, ADPS2
	.else
		SETB ADCSRA, ADPS2
	.endif
.endm
