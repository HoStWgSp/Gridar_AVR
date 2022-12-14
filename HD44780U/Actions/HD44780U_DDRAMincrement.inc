/*
* ?????? ?????? ???????????? ??? ???????? ????????? ?????? ???????
* ? ???? ????????????, ?? ?????????? ?????? ?? ?????? ????????? ??????
*/
.macro HD44780U_DDRAM_Increment
	_call HD44780U_Address_DDRAM_Increment_act
.endm
//____________________________________________________________________________________
//____________________________________________________________________________________
HD44780U_Address_DDRAM_Increment_act:

	push r19									; ?????????? r19 ? STACK

	READ_REG HD44780U_Address_DDRAM, r19		; ????????? HD44780U_Address_DDRAM ? r19

	inc r19										; ??????????? r19 ?? 1

	#ifdef HD44780U_LCD_2x16
		cpi r19, $10							; ?????????? r19 ? 16
		brne row2								; ???? ?? ?????, ?? ?????????

		row1:
			HD44780U_Set_Cursor 2, 1			; ????????????? ?????? ?? ?????? ?????? ?? ?????? ??????
			pop r19								; ??????????? r16 ?? STACK
			ret									; ??????? ?? ????????????

		row2:
			cpi r19, $50						; ?????????? r19 ? 80
			brne finish							; ???? ?? ?????, ?? ?????????
			HD44780U_Set_Cursor 1, 1			; ????????????? ?????? ?? ?????? ?????? ?? ?????? ??????
			pop r19								; ??????????? r16 ?? STACK
			ret									; ??????? ?? ????????????

	#elif HD44780U_LCD_Size_4x20
		cpi r19, $14							; ?????????? r19 ? 20
		brne row2								; ???? ?? ?????, ?? ?????????

		row1:
			HD44780U_Set_Cursor 2, 1			; ????????????? ?????? ?? ?????? ?????? ?? ?????? ??????
			pop r19								; ??????????? r16 ?? STACK
			ret									; ??????? ?? ????????????

		row2:
			cpi r19, $54						; ?????????? r19 ? 84
			brne row3							; ???? ?? ?????, ?? ?????????
			HD44780U_Set_Cursor 3, 1			; ????????????? ?????? ?? ?????? ?????? ?? ?????? ??????
			pop r19								; ??????????? r16 ?? STACK
			ret									; ??????? ?? ????????????

		row3:
			cpi r19, $28						; ?????????? r19 ? 40
			brne row4							; ???? ?? ?????, ?? ?????????
			HD44780U_Set_Cursor 4, 1			; ????????????? ?????? ?? ????????? ?????? ?? ?????? ??????
			pop r19								; ??????????? r16 ?? STACK
			ret									; ??????? ?? ????????????

		row4:
			cpi r19, $68						; ?????????? r19 ? 104
			brne finish							; ???? ?? ?????, ?? ?????????
			HD44780U_Set_Cursor 1, 1			; ????????????? ?????? ?? ?????? ?????? ?? ?????? ??????
			pop r19								; ??????????? r16 ?? STACK
			ret									; ??????? ?? ????????????

	#endif

	finish:
		WRITE_REG HD44780U_Address_DDRAM, r19	; ????????? r16 ? HD44780U_Address_DDRAM
		pop r19									; ??????????? r16 ?? STACK
ret												; ??????? ?? ???????????? 
