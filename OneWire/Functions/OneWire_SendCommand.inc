/*
* ��� �������� ������� ������� �������
* ��������� ���� ��������
*/
.macro OneWireSendCommand
	
	push r16						; ���������� r16 � STACK

	ldi	r16, @0						; ���������� @0 � r16
	_call OneWireSendCommand_act	; ���������
	
	pop r16							; ����������� r16 �� STACK

.endm
//____________________________________________________________________________________
//____________________________________________________________________________________
OneWireSendCommand_act:
	push r17
	READ_REG OneWireFlags, r17				; �������� ������� SREG � r17
	sbrc r17, OneWireDeviceNotDetected		; ��������� ���� ����������
		_jump OneWireSendCommand_act_finish
	OneWireSendByte	r16						; ���������� r16 � r17

OneWireSendCommand_act_finish:
	pop r17
ret