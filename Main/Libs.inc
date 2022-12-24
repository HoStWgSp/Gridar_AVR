.include "Main/Constants.inc"
.include "Main/MC_config.inc"
.include "Main/Relative.inc"
//.dseg ;������� ������

//.eseg ;������� EEPROM

.cseg ;���������� ������
.include "Main/Config.inc"
.include "Main/Conf_sets.inc"
.include "Main/Interrupts/Vectors.inc"

.include "Main/Macros.inc"
.include "Main/Time_Cycles.inc"


// ����� ������ TWSI
#ifdef TWSI
	.include "TWSI/Includes.inc"
#endif

// ����� ������ HD44780U
#ifdef HD44780U
	.include "HD44780U/Includes.inc"
#endif

// ����� ������ OneWire
#ifdef OneWire
	.include "OneWire/Includes.inc"
#endif


.include "Main/Inits.inc"
