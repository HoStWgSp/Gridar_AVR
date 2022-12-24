.macro SetADCModeSelect
	.if ctlr == 8 || ctlr == 128
		.if ADCSRAADFR == 0
			CLRB ADCSRA, ADFR
		.else
			SETB ADCSRA, ADFR
		.endif
	.else
		.if ADCSRAADATE == 0
			CLRB ADCSRA, ADATE
		.else
			SETB ADCSRA, ADATE
		.endif
		.if ctlr == 16 || ctlr == 32
			.if SFIORADTS0 == 0
				CLRB SFIOR, ADTS0
			.else
				SETB SFIOR, ADTS0
			.endif
			.if SFIORADTS1 == 0
				CLRB SFIOR, ADTS1
			.else
				SETB SFIOR, ADTS1
			.endif
			.if SFIORADTS2 == 0
				CLRB SFIOR, ADTS2
			.else
				SETB SFIOR, ADTS2
			.endif
		.else
			.if ADCSRBADTS0 == 0
				CLRB ADCSRB, ADTS0
			.else
				SETB ADCSRB, ADTS0
			.endif
			.if ADCSRBADTS1 == 0
				CLRB ADCSRB, ADTS1
			.else
				SETB ADCSRB, ADTS1
			.endif
			.if ADCSRBADTS2 == 0
				CLRB ADCSRB, ADTS2
			.else
				SETB ADCSRB, ADTS2
			.endif
		.endif
	.endif
.endm

