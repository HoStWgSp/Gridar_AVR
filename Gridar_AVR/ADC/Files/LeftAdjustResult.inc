.macro SetAdjustResult
	.if ADMUXADLAR == 0
		CLRB ADMUX, ADLAR
	.else
		SETB ADMUX, ADLAR
	.endif
.endm
