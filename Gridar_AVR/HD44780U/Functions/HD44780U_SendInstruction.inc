/*
* �������� ���������� �������
* ��������� ���� �������� - ������� � ����������� ��� �������� �������
*/
.macro HD44780U_Send_instruction
	
	push r16							; ���������� r16 � STACK
	
	mov r16, @0							; �������� @0 � R16
	_call HD44780U_Send_instruction_act	; ���������

	pop r16								; ����������� r16 �� STACK

.endm
;-------------------------------------
.macro HD44780U_Command
	_call HD44780U_Command_act
.endm
;-------------------------------------
.macro HD44780U_Command1
	_call HD44780U_Command1_act
.endm
;-------------------------------------
.macro HD44780U_Command2
	_call HD44780U_Command2_act
.endm
;-------------------------------------
.macro HD44780U_Send_instr_byte_high
	_call HD44780U_Send_instr_byte_high_act
.endm
;-------------------------------------
.macro HD44780U_Send_instr_byte_low
	_call HD44780U_Send_instr_byte_low_act
.endm
//____________________________________________________________________________________
//____________________________________________________________________________________
#ifdef HD44780U_8_Wires
	HD44780U_Send_instruction_act:
		cbi HD44780U_RS_PORT, HD44780U_RS_bit						; ������������� �� ����������
		HD44780U_Command
		HD44780U_BF_Check											; ��������� ��������� ����� ���������
	ret																; ����� �� ������������
	;-------------------------------------
	HD44780U_Command_act:
		cbi HD44780U_RW_PORT, HD44780U_RW_bit						; ������������ RW �� ����� (������)

		// ������������� ����
		Bits_set_or_clear r16, 7, HD44780U_D7_PORT, HD44780U_D7_bit	  
		Bits_set_or_clear r16, 6, HD44780U_D6_PORT, HD44780U_D6_bit	  
		Bits_set_or_clear r16, 5, HD44780U_D5_PORT, HD44780U_D5_bit	  
		Bits_set_or_clear r16, 4, HD44780U_D4_PORT, HD44780U_D4_bit	  
		Bits_set_or_clear r16, 3, HD44780U_D3_PORT, HD44780U_D3_bit	  
		Bits_set_or_clear r16, 2, HD44780U_D2_PORT, HD44780U_D2_bit	  
		Bits_set_or_clear r16, 1, HD44780U_D1_PORT, HD44780U_D1_bit	  
		Bits_set_or_clear r16, 0, HD44780U_D0_PORT, HD44780U_D0_bit	  

		sbi	HD44780U_E_PORT, HD44780U_E_bit							; �������� ������
		HD44780U_Delay_5mks											; �������� 5 ���
		cbi	HD44780U_E_PORT, HD44780U_E_bit							; ����������� ������
	ret																; ����� �� ������������
//____________________________________________________________________________________
//____________________________________________________________________________________
#elif HD44780U_4_Wires
	HD44780U_Send_instruction_act:
		cbi HD44780U_RS_PORT, HD44780U_RS_bit						; ������������� �� ����������
		HD44780U_Command1
		HD44780U_Delay_5mks											; �������� 5 ���

		HD44780U_Command2
		HD44780U_Delay_20mks										; �������� 20 ���
		HD44780U_Delay_20mks										; �������� 20 ���
	ret																; ����� �� ������������
	;-------------------------------------
	HD44780U_Command1_act:
		cbi HD44780U_RW_PORT, HD44780U_RW_bit						; ������������ RW �� ����� (������)
		
		// ������������� ����
		Bits_set_or_clear r16, 7, HD44780U_D7_PORT, HD44780U_D7_bit
		Bits_set_or_clear r16, 6, HD44780U_D6_PORT, HD44780U_D6_bit
		Bits_set_or_clear r16, 5, HD44780U_D5_PORT, HD44780U_D5_bit
		Bits_set_or_clear r16, 4, HD44780U_D4_PORT, HD44780U_D4_bit

		sbi	HD44780U_E_PORT, HD44780U_E_bit							; �������� ������
		HD44780U_Delay_5mks											; �������� 5 ���
		cbi	HD44780U_E_PORT, HD44780U_E_bit							; ����������� ������
	ret																; ����� �� ������������
	;-------------------------------------
	HD44780U_Command2_act:
	
		// ������������� ����
		Bits_set_or_clear r16, 3, HD44780U_D7_PORT, HD44780U_D7_bit
		Bits_set_or_clear r16, 2, HD44780U_D6_PORT, HD44780U_D6_bit
		Bits_set_or_clear r16, 1, HD44780U_D5_PORT, HD44780U_D5_bit
		Bits_set_or_clear r16, 0, HD44780U_D4_PORT, HD44780U_D4_bit
	
		sbi	HD44780U_E_PORT, HD44780U_E_bit		; �������� ������
		HD44780U_Delay_5mks						; �������� 5 ���
		cbi	HD44780U_E_PORT, HD44780U_E_bit		; ����������� ������
	ret											; ����� �� ������������
//____________________________________________________________________________________
//____________________________________________________________________________________
#elif HD44780U_TWSI
	HD44780U_Send_instruction_act:
		HD44780U_Send_instr_byte_high			; ��������� �� �����
		HD44780U_Send_instr_byte_low			; ��������� �� �����
	ret											; ����� �� ������������
	;----------------------------------------------------------------
	HD44780U_Send_instr_byte_high_act:			; �����
		push	r16								; ���������� � ����
		andi	r16, $f0						; �������� ������ 4 ����
		push	r16								; ���������� � ����
		HD44780U_led_check $04, $0c
		TWSI_Sending_byte r16					; �������� ����
		pop		r16								; ��������� �� �����
		HD44780U_led_check $00, $08
		HD44780U_Delay_5mks						; ��������
		TWSI_Sending_byte r16					; �������� ����
		pop		r16								; ��������� �� �����
	ret											; ����� �� ������������
	;--------------------------------------------------------------
	HD44780U_Send_instr_byte_low_act:
		swap	r16								; ������ ������� �������
		andi	r16, 0xF0						; �������� ������ 4 ����
		push	r16								; ���������� � ����
		HD44780U_led_check $04, $0c
		TWSI_Sending_byte r16					; �������� ����
		pop		r16								; ��������� �� �����
		HD44780U_led_check $00, $08
		HD44780U_Delay_5mks						; ��������
		TWSI_Sending_byte r16					; �������� ����
	ret											; ����� �� ������������
#endif
