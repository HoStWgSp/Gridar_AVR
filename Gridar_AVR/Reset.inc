STACKINIT		// ������������� �����
sei
Inits_Begin		// ������������� ��������� ���������

_call LCD_TWSI_First_Page

OneWire_ReadROM
OneWire_ROMDeviceTemperature OneWireROMCode

ldi r16, $ff
WRITE_REG DDRK, r16
ADCSTART
    