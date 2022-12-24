.macro SetChannelSelection
	.if ADMUXMUX0 == 1
		SETB ADMUX, MUX0
	.else
		CLRB ADMUX, MUX0
	.endif
	.if ADMUXMUX1 == 1
		SETB ADMUX, MUX1
	.else
		CLRB ADMUX, MUX1
	.endif
	.if ADMUXMUX2 == 1
		SETB ADMUX, MUX2
	.else
		CLRB ADMUX, MUX2
	.endif
	#ifdef MUXMUX4
		.if ADMUXMUX4 == 1
			SETB ADMUX, MUX4
		.else
			CLRB ADMUX, MUX4
		.endif
	#endif
	#ifdef SRBMUX5
		.if ADCSRBMUX5 == 1
			SETB ADCSRB, MUX5
		.else
			CLRB ADCSRB, MUX5
		.endif
	#endif
.endm
