.macro SetRefSel
	.if ADMUXREFS0 == 0
		CLRB ADMUX, REFS0
	.else
		SETB ADMUX, REFS0
	.endif
	.if ADMUXREFS1 == 0
		CLRB ADMUX, REFS1
	.else
		SETB ADMUX, REFS1
	.endif
.endm
