/*
	ƒанный макрос инициализирует ту библиотеку, которую выбрали в файле Config.inc
*/

.macro Inits_Begin

	#ifdef TWSI
		TWSI_init
	#endif
	///////////////
	#ifdef HD44780U
		HD44780U_init
	#endif
	///////////////
	#ifdef OneWire
		OneWire_init
	#endif
	///////////////
	#ifdef ADCMode
		ADC_init
	#endif


.endm
