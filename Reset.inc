STACKINIT		// ������������� �����
sei
Inits_Begin		// ������������� ��������� ���������

_call LCD_TWSI_First_Page

OneWire_ReadROM
OneWire_ROMDeviceTemperature OneWireROMCode 
    