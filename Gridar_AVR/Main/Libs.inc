.include "Main/Constants.inc"
.include "Main/MC_config.inc"
.include "Main/Relative.inc"
//.dseg ;сегмент данных

//.eseg ;сегмент EEPROM

.cseg ;програмный сегмен
.include "Main/Config.inc"
.include "Main/Conf_sets.inc"
.include "Main/Interrupts/Vectors.inc"

.include "Main/Macros.inc"
.include "Main/Time_Cycles.inc"


// Файлы Модуля TWSI
#ifdef TWSI
	.include "TWSI/Includes.inc"
#endif

// Файлы модуля HD44780U
#ifdef HD44780U
	.include "HD44780U/Includes.inc"
#endif


.include "Main/Inits.inc"

