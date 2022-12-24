.macro ADCInterrupt
	.if @0 == enabled
		.equ ADCSRAADIE = 1
	.else
		.equ ADCSRAADIE = 0
	.endif
.endm
