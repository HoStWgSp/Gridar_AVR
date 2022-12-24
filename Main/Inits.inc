/*
	ƒанный макрос инициализирует ту библиотеку, которую выбрали в файле Config.inc
*/

.macro Inits_Begin
	#ifdef TWSI
		TWSI_init
	#endif
.endm
