.macro ADCModeSelect
	.if ctlr == 8 || ctlr == 128
		.if @0 == FreeRun
			.equ ADCSRAADFR = 1
		.else
			.equ ADCSRAADFR = 0
		.endif
	.else
		.if @0 == null
			.equ ADCSRAADATE = 0
		.else
			.equ ADCSRAADATE = 1
		.endif
		.if ctlr == 16 || ctlr == 32
			.if @0 == FreeRun
				.equ SFIORADTS0 = 0
				.equ SFIORADTS1 = 0
				.equ SFIORADTS2 = 0
			.elif @0 == AnComp
				.equ SFIORADTS0 = 1
				.equ SFIORADTS1 = 0
				.equ SFIORADTS2 = 0
			.elif @0 == ExtIntReq0
				.equ SFIORADTS0 = 0
				.equ SFIORADTS1 = 1
				.equ SFIORADTS2 = 0
			.elif @0 == TC0CompMatch
				.equ SFIORADTS0 = 1
				.equ SFIORADTS1 = 1
				.equ SFIORADTS2 = 0
			.elif @0 == TC0Overflow
				.equ SFIORADTS0 = 0
				.equ SFIORADTS1 = 0
				.equ SFIORADTS2 = 1
			.elif @0 == TC1CompMatchB
				.equ SFIORADTS0 = 1
				.equ SFIORADTS1 = 0
				.equ SFIORADTS2 = 1
			.elif @0 == TC1Overflow
				.equ SFIORADTS0 = 0
				.equ SFIORADTS1 = 1
				.equ SFIORADTS2 = 1
			.elif @0 == TC1CaptEvent
				.equ SFIORADTS0 = 1
				.equ SFIORADTS1 = 1
				.equ SFIORADTS2 = 1
			.endif
		.else
			.if @0 == FreeRun
				.equ ADCSRBADTS0 = 0
				.equ ADCSRBADTS1 = 0
				.equ ADCSRBADTS2 = 0
			.elif @0 == AnComp
				.equ ADCSRBADTS0 = 1
				.equ ADCSRBADTS1 = 0
				.equ ADCSRBADTS2 = 0
			.elif @0 == ExtIntReq0
				.equ ADCSRBADTS0 = 0
				.equ ADCSRBADTS1 = 1
				.equ ADCSRBADTS2 = 0
			.elif @0 == TC0CompMatch
				.equ ADCSRBADTS0 = 1
				.equ ADCSRBADTS1 = 1
				.equ ADCSRBADTS2 = 0
			.elif @0 == TC0Overflow
				.equ ADCSRBADTS0 = 0
				.equ ADCSRBADTS1 = 0
				.equ ADCSRBADTS2 = 1
			.elif @0 == TC1CompMatchB
				.equ ADCSRBADTS0 = 1
				.equ ADCSRBADTS1 = 0
				.equ ADCSRBADTS2 = 1
			.elif @0 == TC1Overflow
				.equ ADCSRBADTS0 = 0
				.equ ADCSRBADTS1 = 1
				.equ ADCSRBADTS2 = 1
			.elif @0 == TC1CaptEvent
				.equ ADCSRBADTS0 = 1
				.equ ADCSRBADTS1 = 1
				.equ ADCSRBADTS2 = 1
			.endif
		.endif
	.endif
.endm