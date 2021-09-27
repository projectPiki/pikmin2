.include "macros.inc"
.section ._exidx, "a"  # 0x80005660 - 0x800056C0
	.incbin "baserom.dol", 0x46FEA0, 0x3C
.global lbl_8000569C
lbl_8000569C:
	.incbin "baserom.dol", 0x46FEDC, 0x24
	