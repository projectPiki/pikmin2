.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__10JUTTextureFv
__ct__10JUTTextureFv:
/* 800177D0 00014710  88 83 00 3B */	lbz r4, 0x3b(r3)
/* 800177D4 00014714  38 00 00 00 */	li r0, 0
/* 800177D8 00014718  54 84 07 BC */	rlwinm r4, r4, 0, 0x1e, 0x1e
/* 800177DC 0001471C  98 83 00 3B */	stb r4, 0x3b(r3)
/* 800177E0 00014720  90 03 00 28 */	stw r0, 0x28(r3)
/* 800177E4 00014724  90 03 00 20 */	stw r0, 0x20(r3)
/* 800177E8 00014728  4E 80 00 20 */	blr 
