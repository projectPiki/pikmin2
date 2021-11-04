

/*
 * --INFO--
 * Address:	800E9984
 * Size:	000848
 */
void GXSetGPMetric(void)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  lwz       r0, 0x59C(r5)
	  cmpwi     r0, 0x22
	  beq-      .loc_0x38
	  bge-      .loc_0x84
	  cmpwi     r0, 0xB
	  bge-      .loc_0x28
	  cmpwi     r0, 0
	  bge-      .loc_0x38
	  b         .loc_0x84

	.loc_0x28:
	  cmpwi     r0, 0x1B
	  bge-      .loc_0x70
	  b         .loc_0x58
	  b         .loc_0x84

	.loc_0x38:
	  li        r0, 0x10
	  lis       r6, 0xCC01
	  stb       r0, -0x8000(r6)
	  li        r5, 0x1006
	  li        r0, 0
	  stw       r5, -0x8000(r6)
	  stw       r0, -0x8000(r6)
	  b         .loc_0x84

	.loc_0x58:
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  lis       r0, 0x2300
	  stw       r0, -0x8000(r5)
	  b         .loc_0x84

	.loc_0x70:
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  lis       r0, 0x2400
	  stw       r0, -0x8000(r5)

	.loc_0x84:
	  lwz       r6, -0x6D70(r2)
	  lwz       r0, 0x5A0(r6)
	  cmpwi     r0, 0x15
	  beq-      .loc_0xBC
	  bge-      .loc_0x110
	  cmpwi     r0, 0x9
	  bge-      .loc_0xAC
	  cmpwi     r0, 0
	  bge-      .loc_0xBC
	  b         .loc_0x110

	.loc_0xAC:
	  cmpwi     r0, 0x11
	  bge-      .loc_0x104
	  b         .loc_0xD4
	  b         .loc_0x110

	.loc_0xBC:
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  lis       r0, 0x6700
	  stw       r0, -0x8000(r5)
	  b         .loc_0x110

	.loc_0xD4:
	  lwz       r5, 0x5A4(r6)
	  li        r0, 0
	  rlwimi    r5,r0,4,24,27
	  stw       r5, 0x5A4(r6)
	  li        r0, 0x8
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0x20
	  stb       r0, -0x8000(r5)
	  lwz       r0, 0x5A4(r6)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x110

	.loc_0x104:
	  lwz       r5, -0x714C(r13)
	  li        r0, 0
	  sth       r0, 0x6(r5)

	.loc_0x110:
	  lwz       r5, -0x6D70(r2)
	  stw       r3, 0x59C(r5)
	  lwz       r0, 0x59C(r5)
	  cmplwi    r0, 0x23
	  bgt-      .loc_0x53C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x7794
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x273
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x14A
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x16B
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x84
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0xC6
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x210
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x252
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x231
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x1AD
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x1CE
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x21
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r3, 0x1006
	  li        r0, 0x153
	  stw       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5181
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x7181
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x6181
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2300
	  stb       r0, -0x8000(r5)
	  addi      r0, r3, 0x1E7F
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x53C1
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5381
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5341
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5301
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x52C1
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5281
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5241
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5201
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x51C1
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5D81
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5981
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2301
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x5581
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2403
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x3F3A
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2403
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x3E95
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2403
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x3F19
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2403
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x3EF8
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2403
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x3ED7
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2403
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x3EB6
	  stw       r0, -0x8000(r5)
	  b         .loc_0x53C
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r3, 0x2403
	  stb       r0, -0x8000(r5)
	  subi      r0, r3, 0x3E53
	  stw       r0, -0x8000(r5)

	.loc_0x53C:
	  lwz       r3, -0x6D70(r2)
	  stw       r4, 0x5A0(r3)
	  lwz       r0, 0x5A0(r3)
	  cmplwi    r0, 0x16
	  bgt-      .loc_0x838
	  lis       r4, 0x804B
	  subi      r4, r4, 0x77F0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x42
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x84
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x63
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x129
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x252
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x21
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x14B
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x18D
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x1CF
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  lis       r3, 0x6700
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x211
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r4, 0x5A4(r3)
	  li        r0, 0x2
	  rlwimi    r4,r0,4,24,27
	  stw       r4, 0x5A4(r3)
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x20
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r4, 0x5A4(r3)
	  li        r0, 0x3
	  rlwimi    r4,r0,4,24,27
	  stw       r4, 0x5A4(r3)
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x20
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r4, 0x5A4(r3)
	  li        r0, 0x4
	  rlwimi    r4,r0,4,24,27
	  stw       r4, 0x5A4(r3)
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x20
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r4, 0x5A4(r3)
	  li        r0, 0x5
	  rlwimi    r4,r0,4,24,27
	  stw       r4, 0x5A4(r3)
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x20
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r4, 0x5A4(r3)
	  li        r0, 0x6
	  rlwimi    r4,r0,4,24,27
	  stw       r4, 0x5A4(r3)
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x20
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r4, 0x5A4(r3)
	  li        r0, 0x7
	  rlwimi    r4,r0,4,24,27
	  stw       r4, 0x5A4(r3)
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x20
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r4, 0x5A4(r3)
	  li        r0, 0x9
	  rlwimi    r4,r0,4,24,27
	  stw       r4, 0x5A4(r3)
	  li        r0, 0x8
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x20
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r0, 0x5A4(r3)
	  li        r5, 0x8
	  rlwimi    r0,r5,4,24,27
	  stw       r0, 0x5A4(r3)
	  lis       r4, 0xCC01
	  li        r0, 0x20
	  stb       r5, -0x8000(r4)
	  stb       r0, -0x8000(r4)
	  lwz       r0, 0x5A4(r3)
	  stw       r0, -0x8000(r4)
	  b         .loc_0x838
	  lwz       r3, -0x714C(r13)
	  li        r0, 0x2
	  sth       r0, 0x6(r3)
	  b         .loc_0x838
	  lwz       r3, -0x714C(r13)
	  li        r0, 0x3
	  sth       r0, 0x6(r3)
	  b         .loc_0x838
	  lwz       r3, -0x714C(r13)
	  li        r0, 0x4
	  sth       r0, 0x6(r3)
	  b         .loc_0x838
	  lwz       r3, -0x714C(r13)
	  li        r0, 0x5
	  sth       r0, 0x6(r3)

	.loc_0x838:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A8
 */
void GXReadGPMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA1CC
 * Size:	000010
 */
void GXClearGPMetric(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x714C(r13)
	  li        r0, 0x4
	  sth       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void GXReadGP0Metric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void GXReadGP1Metric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
void GXReadMemMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void GXClearMemMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
void GXReadPixMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void GXClearPixMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXSetVCacheMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void GXReadVCacheMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXClearVCacheMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXInitXfRasMetric(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EA1DC
 * Size:	0000C4
 */
void GXReadXfRasMetric(void)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x714C(r13)
	  addi      r10, r7, 0x42
	  lhz       r8, 0x42(r7)
	  addi      r9, r7, 0x40

	.loc_0x10:
	  mr        r0, r8
	  lhz       r7, 0x0(r9)
	  lhz       r8, 0x0(r10)
	  cmplw     r8, r0
	  bne+      .loc_0x10
	  rlwinm    r0,r8,16,0,15
	  or        r0, r0, r7
	  stw       r0, 0x0(r5)
	  lwz       r5, -0x714C(r13)
	  addi      r9, r5, 0x46
	  lhz       r7, 0x46(r5)
	  addi      r8, r5, 0x44

	.loc_0x40:
	  mr        r0, r7
	  lhz       r5, 0x0(r8)
	  lhz       r7, 0x0(r9)
	  cmplw     r7, r0
	  bne+      .loc_0x40
	  rlwinm    r0,r7,16,0,15
	  or        r0, r0, r5
	  stw       r0, 0x0(r6)
	  lwz       r5, -0x714C(r13)
	  addi      r8, r5, 0x4A
	  lhz       r6, 0x4A(r5)
	  addi      r7, r5, 0x48

	.loc_0x70:
	  mr        r0, r6
	  lhz       r5, 0x0(r7)
	  lhz       r6, 0x0(r8)
	  cmplw     r6, r0
	  bne+      .loc_0x70
	  rlwinm    r0,r6,16,0,15
	  or        r0, r0, r5
	  stw       r0, 0x0(r3)
	  lwz       r3, -0x714C(r13)
	  addi      r7, r3, 0x4E
	  lhz       r5, 0x4E(r3)
	  addi      r6, r3, 0x4C

	.loc_0xA0:
	  mr        r0, r5
	  lhz       r3, 0x0(r6)
	  lhz       r5, 0x0(r7)
	  cmplw     r5, r0
	  bne+      .loc_0xA0
	  rlwinm    r0,r5,16,0,15
	  or        r0, r0, r3
	  stw       r0, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void GXReadClksPerVtx(void)
{
	// UNUSED FUNCTION
}
