/*
* �������������/������� ���� �������� �������
*/

.macro OneWire_init
	#ifdef ExternalPowerSupply
		SETB OneWireFlags, OneWireExternalPower			; ������������� ���� �������� �������
	#else
		CLRB OneWireFlags, OneWireExternalPower			; ������� ���� �������� �������
	#endif
.endm
