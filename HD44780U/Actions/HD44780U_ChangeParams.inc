/*
* ?????? ??????? ?????? ????????? ? ???????????????? ????? ???????
*/
.macro HD44780U_Cursor_Blinking
	.if @0 == enabled
		HD44780U_Change_params HD44780U_Display_On_Off_Control_byte, 1, HD44780U_Bit_B
	.elif @0 == disabled
		HD44780U_Change_params HD44780U_Display_On_Off_Control_byte, 0, HD44780U_Bit_B
	.endif
.endm
;-------------------------------------
.macro HD44780U_Cursor_visible
	.if @0 == enabled
		HD44780U_Change_params HD44780U_Display_On_Off_Control_byte, 1, HD44780U_Bit_C
	.elif @0 == disabled
		HD44780U_Change_params HD44780U_Display_On_Off_Control_byte, 0, HD44780U_Bit_C
	.endif
.endm
;-------------------------------------
.macro HD44780U_Shift
	.if @0 == HD44780U_Cursor
		HD44780U_Change_params HD44780U_Entry_Mode_Set_byte, 0, HD44780U_Bit_Shift_Display
	.elif @0 == HD44780U_Display
		HD44780U_Change_params HD44780U_Entry_Mode_Set_byte, 1, HD44780U_Bit_Shift_Display
	.endif
.endm
;-------------------------------------
.macro HD44780U_DDRAM_Address
	.if @0 == HD44780U_ID_Increment
		HD44780U_Change_params HD44780U_Entry_Mode_Set_byte, 1, HD44780U_Bit_I.D
	.elif @0 == HD44780U_ID_Decrement
		HD44780U_Change_params HD44780U_Entry_Mode_Set_byte, 0, HD44780U_Bit_I.D
	.endif
.endm
//____________________________________________________________________________________
//____________________________________________________________________________________
.macro HD44780U_Change_params

	push r16						; ?????????? r16 ? STACK
	lds r16, @0						; ????????? @0 ? r16

	.if @1 == 1
		SETRB r16, @2				; ????????????? ??? @2 ? r16
	.elif @1 == 0
		CLRRB r16, @2				; ??????? ??? @2 ? r16
	.endif

	sts @0, r16						; ????????? r16 ? @0

	HD44780U_Send_instruction r16	; ???????? ??????????
	pop r16							; ??????????? r16 ?? STACK

.endm
