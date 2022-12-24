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

.endm
