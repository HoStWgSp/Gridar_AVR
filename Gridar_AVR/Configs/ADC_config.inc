//=========================================================================================
//=========================================================================================

; ADC Prescaler selection .. Prescaler [��������] ..

; �������� ����� 50kHz � 200kHz
; ����� ATmegaFREQ/50000 = ��������� �� ������� �������
; ����� ATmegaFREQ/200000 = ��������� �� ������� �������
; �������� ����� ���� 
; [��������] ������ - 2, 4, 8, 16, 32, 64, 128
Prescaler 128

//-----------------------------------------------------------------------------------------

; Reference Selection .. RefSel [��������] ..
; [��������] ������ - TurnedOff, AREFpin, Voltage_1_1, Voltage_2_56
RefSel AREFpin

//-----------------------------------------------------------------------------------------

; Left Adjust Result .. AdjustResult [��������] ..
; [��������] ������ - right, left
AdjustResult left

//-----------------------------------------------------------------------------------------

/*
	Input Channel Delections
	 
	ChannelSelection [Single Ended Input], [Positive Differential input], [Negative Differential input], [Gain] 
	[Single Ended Input] - ADC[����� �������� � datasheet],		V1 - 1.1V (VBG)),		V0 - (GND)
	[Positive Differential input] - ADC[����� �������� � datasheet]
	[Negative Differential input] - ADC[����� �������� � datasheet]
	[Gain] - 1,	10,	200
	
	���� [Single Ended Input] �� ����� null, �� ��������� ��� ��������� �� �����������, �� �� ����� ���� �������
	���� [Single Ended Input] ����� null, �� ��������� [Positive Differential input], [Negative Differential input]
	� [Gain], ���� ��� ���������� �� ���������� Gain, �� �� ����� ��������������, �� �������� �� ����� ���� ������
*/
ChannelSelection ADC0, ADC9, ADC9, 1

//-----------------------------------------------------------------------------------------

/*	ADC Free Running Select ��� ADC Auto Trigger   .. ADCMode [��������] ..
	[��������] ������:
		null - Free Run Mode ��� ADC Auto Trigger Mode ��������
		FreeRun - ADC Free Running Select ��� Free Running mode (� ����������� �� �����������)
		AnComp - Analog Comparator
		ExtIntReq0 - External Interrupt Request 0
		TC0CompMatch - Timer/Counter0 Compare Match
		TC0Overflow - Timer/Counter0 Overflow
		TC1CompMatchB - Timer/Counter1 Compare Match B
		TC1Overflow - Timer/Counter1 Overflow
		TC1CaptEvent - Timer/Counter1 Capture Event
*/
ADCModeSelect FreeRun

//-----------------------------------------------------------------------------------------

/*
	ADC Interrupt Enable .. ADCInterrupt [��������]
	[��������] ������ - enabled, disabled
*/
ADCInterrupt enabled

//-----------------------------------------------------------------------------------------
/*
	Digital Input Disable 
	�������������� �� ����, ������� �� ����� ���������
*/
//#define Disable_ADC0D
//#define Disable_ADC1D
//#define Disable_ADC2D
//#define Disable_ADC3D
//#define Disable_ADC4D
//#define Disable_ADC5D
//#define Disable_ADC6D
//#define Disable_ADC7D
//#define Disable_ADC8D
//#define Disable_ADC9D
//#define Disable_ADC10D
//#define Disable_ADC11D
//#define Disable_ADC12D
//#define Disable_ADC13D
//#define Disable_ADC14D
//#define Disable_ADC15D