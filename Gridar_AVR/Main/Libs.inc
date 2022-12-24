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


// Файлы библиотеки I2C
#ifdef TWSI
	.include "TWSI/Includes.inc"
#endif

.include "Main/Inits.inc"

