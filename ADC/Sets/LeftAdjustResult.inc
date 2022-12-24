.macro AdjustResult
	.if @0 == right
		.equ ADMUXADLAR = 0
	.elif @0 == left
		.equ ADMUXADLAR = 1
	.endif
.endm
