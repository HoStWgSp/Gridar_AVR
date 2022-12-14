/*
* ?????? ?????? ???????????? ??? ????????? ??????? ? ?????? ????????? ?? ???????
*/
.macro HD44780U_Set_Cursor
	
	push r16						; ?????????? r16 ? STACK
	push r17						; ?????????? r17 ? STACK

	ldi	r17, @0						; ?????????? @0 ? r17
	ldi	r16, @1						; ?????????? @1 ? r16

	_call HD44780U_SetCursor_act	; ?????????

	pop r17							; ??????????? r17 ?? STACK
	pop r16							; ??????????? r16 ?? STACK

.endm
//____________________________________________________________________________________
//____________________________________________________________________________________
HD44780U_SetCursor_act:

	cpi		r17, 1								; ?????????? r17 ? 1
	breq	FirstRow							; ????????? ???? ?????
												
	cpi		r17, 2								; ?????????? r17 ? 2
	breq	SecondRow							; ????????? ???? ?????
												
	cpi		r17, 3								; ?????????? r17 ? 3
	breq	ThirdRow							; ????????? ???? ?????
												
	cpi		r17, 4								; ?????????? r17 ? 4
	breq	FourthRow							; ????????? ???? ?????

	FirstRow:
		ldi		r17, 128 - 1					; ?????????? 127 ? r17
		add		r16, r17						; ????????? r16 ? r17
		rjmp	end								; ?????????????
												
	SecondRow:									
		ldi		r17, 192 - 1					; ?????????? 191 ? r17
		add		r16, r17						; ????????? r16 ? r17
		rjmp	end								; ?????????????

	ThirdRow:
		ldi		r17, 128 + $14 - 1				; ?????????? 147 ? r17
		add		r16, r17						; ????????? r16 ? r17
		rjmp	end								; ?????????????

	FourthRow:
		ldi		r17, 192 + $14 - 1				; ?????????? 211 ? r17
		add		r16, r17						; ????????? r16 ? r17

	end:
		mov r17, r16							; ???????? r16 ? r17
		subi r17, $80							; ???????? 128 ?? r17
		WRITE_REG HD44780U_Address_DDRAM, r17	; ?????????? ????? ??????? ? HD44780U_Address_DDRAM
	
	HD44780U_Send_instruction r16				; ???????? ??????????

ret
