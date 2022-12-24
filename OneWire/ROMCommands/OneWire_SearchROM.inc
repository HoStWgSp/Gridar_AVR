.macro OneWire_SearchROM
	_call OneWire_SearchROM_act
.endm
OneWire_SearchROM_act:

	OneWire_InitializationSequence				; инициализация процесса		

	push r16									; r16  в STACK
	READ_REG OneWireFlags, r16					; копируем регистр SREG в r16
	sbrc r16, OneWireDeviceNotDetected			; проверяем флат отсутствия
		_jump OneWire_SearchROM_act_End			; перепрыгиваем

	OneWireROMSearching OneWireSearchROMCommand
	
OneWire_SearchROM_act_End:
	pop r16
ret
