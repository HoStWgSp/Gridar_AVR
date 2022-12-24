#define MUXMUX4
.macro ChannelSelection
	.if @0 != null
		SingleEnded @0
	.else
		Differential @1, @2, @3
	.endif
.endm
.macro SingleEnded
	.if @0 == ADC0
		.equ ADMUXMUX0 = 0
		.equ ADMUXMUX1 = 0
		.equ ADMUXMUX2 = 0
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == ADC1
		.equ ADMUXMUX0 = 1
		.equ ADMUXMUX1 = 0
		.equ ADMUXMUX2 = 0
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == ADC2
		.equ ADMUXMUX0 = 0
		.equ ADMUXMUX1 = 1
		.equ ADMUXMUX2 = 0
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == ADC3
		.equ ADMUXMUX0 = 1
		.equ ADMUXMUX1 = 1
		.equ ADMUXMUX2 = 0
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == ADC4
		.equ ADMUXMUX0 = 0
		.equ ADMUXMUX1 = 0
		.equ ADMUXMUX2 = 1
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == ADC5
		.equ ADMUXMUX0 = 1
		.equ ADMUXMUX1 = 0
		.equ ADMUXMUX2 = 1
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == ADC6
		.equ ADMUXMUX0 = 0
		.equ ADMUXMUX1 = 1
		.equ ADMUXMUX2 = 1
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == ADC7
		.equ ADMUXMUX0 = 1
		.equ ADMUXMUX1 = 1
		.equ ADMUXMUX2 = 1
		.equ ADMUXMUX3 = 0
		.equ ADMUXMUX4 = 0
	.elif @0 == V1
		.equ ADMUXMUX0 = 0
		.equ ADMUXMUX1 = 1
		.equ ADMUXMUX2 = 1
		.equ ADMUXMUX3 = 1
		.equ ADMUXMUX4 = 1
	.elif @0 == V0
		.equ ADMUXMUX0 = 1
		.equ ADMUXMUX1 = 1
		.equ ADMUXMUX2 = 1
		.equ ADMUXMUX3 = 1
		.equ ADMUXMUX4 = 1
	.endif
.endm
.macro Differential
	.if @1 == ADC0
		.if @2 == 10
			.if @0 == ADC0
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.elif @0 == ADC1
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.endif
		.elif @2 == 200
			.if @0 == ADC0
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.elif @0 == ADC1
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.endif
		.endif
	.elif @1 == ADC1
		.if @2 == 1
			.if @0 == ADC0
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC1
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC2
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC3
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC4
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC5
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC6
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC7
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 0
				.equ ADMUXMUX4 = 1
			.endif
		.endif
	.elif @1 == ADC2
		.if @2 == 1
			.if @0 == ADC0
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC1
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC2
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC3
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 0
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC4
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 1
			.elif @0 == ADC5
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 1
			.endif
		.elif @2 == 10
			.if @0 ==ADC2
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.elif @0 == ADC3
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 0
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.endif
		.elif @2 == 200
			.if @0 ==ADC2
				.equ ADMUXMUX0 = 0
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.elif @0 == ADC3
				.equ ADMUXMUX0 = 1
				.equ ADMUXMUX1 = 1
				.equ ADMUXMUX2 = 1
				.equ ADMUXMUX3 = 1
				.equ ADMUXMUX4 = 0
			.endif
		.endif
	.endif
.endm
