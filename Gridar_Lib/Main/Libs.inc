.include "Main/Constants.inc"
.include "Main/MC_config.inc"
.include "Main/Relative.inc"
//.dseg ;������� ������

//.eseg ;������� EEPROM

.cseg ;���������� ������
.include "Config.inc"
.include "Main/Conf_sets.inc"
.include "Main/Interrupts/Vectors.inc"

.include "Main/Macros.inc"
.include "Main/Time_Cycles.inc"


// ����� ���������� I2C
//#ifdef 
//	.include 
//#endif

.include "Main/Inits.inc"













/*










.include "Interrupts/Vectors.inc"
.include "Inits.inc"*/