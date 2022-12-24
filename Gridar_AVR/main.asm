/*
* GridarAVR V.4.01.12.22
*/

.include "Main/Libs.inc"
///////////////////////////////////////////////////////////////////////
Reset:
.include "Reset.inc"

Proga:
// Читайте README файл
// Ваша программа
rjmp Proga

LCD_TWSI_First_Page:
	//message: .db $0b, 'T', 'e', 'm', 'p', 'e', 'r', 't', 'u', 'r', 'e', ':'
	//message1: .db $0c, 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', ' '
	//TWSI_START TWSI_Address, 'W'
	//HD44780U_Set_Cursor 2, 1
	//HD44780U_Write_cseg_String message1
	//HD44780U_Set_Cursor 2, 15
	//HD44780U_Write_Symbol $2e
	//HD44780U_Set_Cursor 2, 18
	//HD44780U_Write_Symbol $df
	//HD44780U_Write_Symbol 'C'
	//HD44780U_Cursor_Blinking disabled
	//HD44780U_Cursor_visible disabled

	//HD44780U_LCD_LED enabled
	//TWSI_STOP
ret