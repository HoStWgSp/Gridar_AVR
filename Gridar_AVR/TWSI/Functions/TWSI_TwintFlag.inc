/*
* ��������� ��������� ����� TWINT ������ TWSI
*/
.macro TWSI_TWINT_Flag
	_call TWSI_TWINT_Flag_act
.endm
//____________________________________________________________________________________
//____________________________________________________________________________________
TWSI_TWINT_Flag_act:
	push r16
	TWSI_TWINT_Flag_act_1:
		READ_REG TWCR, r16					; ���������� TWCR � R16
		sbrs	r16, TWINT						; ���� ��� TWINT ������, �� ���������� ���� ������
		rjmp	TWSI_TWINT_Flag_act_1					; ������������� �� �����
	pop r16
ret
 