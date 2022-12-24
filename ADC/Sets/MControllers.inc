.if ctlr == 8
	.include "ADC/Sets/ChannelSelection4bit.inc"
.elif ctlr == 16
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 32
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 48
	.include "ADC/Sets/ChannelSelection4bit.inc"
.elif ctlr == 64
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 88
	.include "ADC/Sets/ChannelSelection4bit.inc"
.elif ctlr == 128
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 164
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 165
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 168
	.include "ADC/Sets/ChannelSelection4bit.inc"
.elif ctlr == 169
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 324
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 325
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 328
	.include "ADC/Sets/ChannelSelection4bit.inc"
.elif ctlr == 329
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 644
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 645
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 649
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 1284
	.include "ADC/Sets/ChannelSelection5bitGain.inc"
.elif ctlr == 2560
	.include "ADC/Sets/ChannelSelection6bitGain.inc"
.elif ctlr == 3250
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 3290
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 6450
	.include "ADC/Sets/ChannelSelection5bit.inc"
.elif ctlr == 6490
	.include "ADC/Sets/ChannelSelection5bit.inc"
.endif
