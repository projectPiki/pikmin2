.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__12MapCollision
__vt__12MapCollision:
	.4byte 0
	.4byte 0
	.4byte __dt__12MapCollisionFv
	.4byte getChildCount__5CNodeFv
	.4byte getBoundBox__12MapCollisionFR8BoundBox
	.4byte getCurrTri__12MapCollisionFRQ24Game11CurrTriInfo
	.4byte createTriangles__12MapCollisionFRQ23Sys17CreateTriangleArg
	.4byte 0
