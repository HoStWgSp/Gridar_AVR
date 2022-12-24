//=========================================================================================
//=========================================================================================

; ADC Prescaler selection .. Prescaler [аргумент] ..

; Работаем между 50kHz и 200kHz
; Делим ATmegaFREQ/50000 = прескалер на меньшую частоту
; Делим ATmegaFREQ/200000 = прескалер на большую частоту
; Выбираем между ними 
; [аргумент] бывает - 2, 4, 8, 16, 32, 64, 128
Prescaler 128

//-----------------------------------------------------------------------------------------

; Reference Selection .. RefSel [аргумент] ..
; [аргумент] бывает - TurnedOff, AREFpin, Voltage_1_1, Voltage_2_56
RefSel AREFpin

//-----------------------------------------------------------------------------------------

; Left Adjust Result .. AdjustResult [аргумент] ..
; [аргумент] бывает - right, left
AdjustResult left

//-----------------------------------------------------------------------------------------

/*
	Input Channel Delections
	 
	ChannelSelection [Single Ended Input], [Positive Differential input], [Negative Differential input], [Gain] 
	[Single Ended Input] - ADC[номер смотрите в datasheet],		V1 - 1.1V (VBG)),		V0 - (GND)
	[Positive Differential input] - ADC[номер смотрите в datasheet]
	[Negative Differential input] - ADC[номер смотрите в datasheet]
	[Gain] - 1,	10,	200
	
	Если [Single Ended Input] не равен null, то следующие три аргумента не учитываются, но не могут быть пустыми
	Если [Single Ended Input] равен null, то указываем [Positive Differential input], [Negative Differential input]
	и [Gain], если ваш контроллер не использует Gain, то он будет игнорироваться, но аргумент не может быть пустым
*/
ChannelSelection ADC0, ADC9, ADC9, 1

//-----------------------------------------------------------------------------------------

/*	ADC Free Running Select или ADC Auto Trigger   .. ADCMode [аргумент] ..
	[аргумент] бывает:
		null - Free Run Mode или ADC Auto Trigger Mode отключен
		FreeRun - ADC Free Running Select или Free Running mode (в зависимости от контроллера)
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
	ADC Interrupt Enable .. ADCInterrupt [аргумент]
	[аргумент] бывает - enabled, disabled
*/
ADCInterrupt enabled

//-----------------------------------------------------------------------------------------
/*
	Digital Input Disable 
	Закоментируйте те пины, которые не нужно отключать
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
