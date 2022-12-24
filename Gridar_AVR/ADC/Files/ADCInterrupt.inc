.macro SetADCInterrupt
	.if ADCSRAADIE == 0
		CLRB ADCSRA, ADIE
	.else
		SETB ADCSRA, ADIE
	.endif
.endm
