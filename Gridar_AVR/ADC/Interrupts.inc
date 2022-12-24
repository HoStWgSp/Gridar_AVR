; Прерывание, которое возникает при завершении конвертации
; можете перенести его куда вам угодно в вашем коде

ADC_Conv_Comp:
cli
	READ_REG ADCH, r16
	WRITE_REG PORTK, r16
sei
reti
