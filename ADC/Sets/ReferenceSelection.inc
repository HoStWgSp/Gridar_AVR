.macro RefSel
	.if @0 == TurnedOff
		.equ ADMUXREFS0 = 0
		.equ ADMUXREFS1 = 0
	.elif @0 == AREFpin
		.equ ADMUXREFS0 = 1
		.equ ADMUXREFS1 = 0
	.elif @0 == Voltage_1_1
		.if ctlr == 8 || ctlr == 16 || ctlr == 32 || ctlr == 64 || ctlr == 128
			.equ ADMUXREFS0 = 0
			.equ ADMUXREFS1 = 0
		.elif ctlr == 164 || ctlr == 324 || ctlr == 640 || ctlr == 644 || ctlr == 1280 || ctlr == 1281 || ctlr == 1284 || ctlr == 2560 || ctlr == 2561
			.equ ADMUXREFS0 = 0
			.equ ADMUXREFS1 = 1
		.elif ctlr == 48 || ctlr == 88 || ctlr == 165 || ctlr == 168 || ctlr == 169 || ctlr == 325 || ctlr == 328 || ctlr == 329 || ctlr == 645 || ctlr == 649 || ctlr == 3250 || ctlr == 3290 || ctlr == 6450 || ctlr == 6490
			.equ ADMUXREFS0 = 1
			.equ ADMUXREFS1 = 1
		.endif
	.elif @0 == Voltage_2_56
		.if ctlr == 8 || ctlr == 16 || ctlr == 32 || ctlr == 64 || ctlr == 128 || ctlr == 164 || ctlr == 324 || ctlr == 640 || ctlr == 644 || ctlr == 1280 || ctlr == 1281 || ctlr == 1284 || ctlr == 2560 || ctlr == 2561
			.equ ADMUXREFS0 = 1
			.equ ADMUXREFS1 = 1
		.endif
	.endif
.endm
