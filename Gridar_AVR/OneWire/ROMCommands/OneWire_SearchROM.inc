.macro OneWire_SearchROM
	_call OneWire_SearchROM_act
.endm
OneWire_SearchROM_act:

	OneWire_InitializationSequence				; ������������� ��������		

	push r16									; r16  � STACK
	READ_REG OneWireFlags, r16					; �������� ������� SREG � r16
	sbrc r16, OneWireDeviceNotDetected			; ��������� ���� ����������
		_jump OneWire_SearchROM_act_End			; �������������

	OneWireROMSearching OneWireSearchROMCommand
	
OneWire_SearchROM_act_End:
	pop r16
ret