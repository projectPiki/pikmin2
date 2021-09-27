.include "macros.inc"
.section ._extab, "wa"  # 0x80005600 - 0x80005660
.global $$2205
$$2205:
	.incbin "baserom.dol", 0x46FE40, 0x8
.global $$2210
$$2210:
	.incbin "baserom.dol", 0x46FE48, 0x8
.global $$2231
$$2231:
	.incbin "baserom.dol", 0x46FE50, 0x18
.global $$2239
$$2239:
	.incbin "baserom.dol", 0x46FE68, 0x8
.global $$2262
$$2262:
	.incbin "baserom.dol", 0x46FE70, 0x30
	