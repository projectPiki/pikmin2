

/*
 * --INFO--
 * Address:	800E7F40
 * Size:	00006C
 */
void GXSetTevIndirect(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  li        r0, 0
  rlwimi    r0,r4,0,30,31
  stw       r31, 0x2C(r1)
  mr        r11, r0
  rlwimi    r11,r5,2,28,29
  lwz       r12, 0x3C(r1)
  lbz       r31, 0x3B(r1)
  rlwimi    r11,r6,4,25,27
  lwz       r4, -0x6D70(r2)
  rlwimi    r11,r12,7,23,24
  rlwimi    r11,r7,9,19,22
  rlwimi    r11,r8,13,16,18
  rlwimi    r11,r9,16,13,15
  rlwimi    r11,r31,19,12,12
  li        r0, 0x61
  lis       r5, 0xCC01
  stb       r0, -0x8000(r5)
  addi      r0, r3, 0x10
  rlwimi    r11,r10,20,11,11
  rlwimi    r11,r0,24,0,7
  stw       r11, -0x8000(r5)
  li        r0, 0
  sth       r0, 0x2(r4)
  lwz       r31, 0x2C(r1)
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800E7FAC
 * Size:	000178
 */
void GXSetIndTexMtx(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  cmpwi     r3, 0x8
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  stw       r29, 0x64(r1)
  beq-      .loc_0x58
  bge-      .loc_0x34
  cmpwi     r3, 0x4
  beq-      .loc_0x58
  bge-      .loc_0x48
  cmpwi     r3, 0x1
  bge-      .loc_0x40
  b         .loc_0x58

.loc_0x34:
  cmpwi     r3, 0xC
  bge-      .loc_0x58
  b         .loc_0x50

.loc_0x40:
  subi      r0, r3, 0x1
  b         .loc_0x5C

.loc_0x48:
  subi      r0, r3, 0x5
  b         .loc_0x5C

.loc_0x50:
  subi      r0, r3, 0x9
  b         .loc_0x5C

.loc_0x58:
  li        r0, 0

.loc_0x5C:
  lfs       f2, -0x6CC8(r2)
  mulli     r31, r0, 0x3
  lfs       f1, 0x0(r4)
  lfs       f0, 0xC(r4)
  fmuls     f1, f2, f1
  addi      r10, r5, 0x11
  fmuls     f0, f2, f0
  extsb     r10, r10
  li        r12, 0x61
  fctiwz    f1, f1
  lis       r11, 0xCC01
  fctiwz    f0, f0
  li        r30, 0
  addi      r0, r31, 0x6
  stfd      f1, 0x58(r1)
  rlwinm    r8,r10,30,30,31
  addi      r7, r31, 0x7
  lwz       r3, -0x6D70(r2)
  stfd      f0, 0x50(r1)
  lwz       r9, 0x5C(r1)
  li        r29, 0
  lwz       r6, 0x54(r1)
  addi      r5, r31, 0x8
  rlwimi    r30,r9,0,21,31
  addi      r9, r30, 0
  stb       r12, -0x8000(r11)
  rlwimi    r9,r6,11,10,20
  rlwimi    r9,r10,22,8,9
  rlwimi    r9,r0,24,0,7
  stw       r9, -0x8000(r11)
  rlwinm    r6,r10,28,30,31
  li        r30, 0
  lfs       f1, 0x4(r4)
  li        r0, 0
  lfs       f0, 0x10(r4)
  fmuls     f1, f2, f1
  fmuls     f0, f2, f0
  stb       r12, -0x8000(r11)
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0x48(r1)
  stfd      f0, 0x40(r1)
  lwz       r10, 0x4C(r1)
  lwz       r9, 0x44(r1)
  rlwimi    r29,r10,0,21,31
  rlwimi    r29,r9,11,10,20
  rlwimi    r29,r8,22,8,9
  rlwimi    r29,r7,24,0,7
  stw       r29, -0x8000(r11)
  lfs       f1, 0x8(r4)
  lfs       f0, 0x14(r4)
  fmuls     f1, f2, f1
  fmuls     f0, f2, f0
  stb       r12, -0x8000(r11)
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f1, 0x38(r1)
  stfd      f0, 0x30(r1)
  lwz       r7, 0x3C(r1)
  lwz       r4, 0x34(r1)
  rlwimi    r30,r7,0,21,31
  rlwimi    r30,r4,11,10,20
  rlwimi    r30,r6,22,8,9
  rlwimi    r30,r5,24,0,7
  stw       r30, -0x8000(r11)
  sth       r0, 0x2(r3)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	800E8124
 * Size:	000144
 */
void GXSetIndTexCoordScale(void)
{
/*
.loc_0x0:
  cmpwi     r3, 0x2
  beq-      .loc_0xB0
  bge-      .loc_0x1C
  cmpwi     r3, 0
  beq-      .loc_0x28
  bge-      .loc_0x6C
  b         .loc_0x134

.loc_0x1C:
  cmpwi     r3, 0x4
  bge-      .loc_0x134
  b         .loc_0xF4

.loc_0x28:
  lwz       r8, -0x6D70(r2)
  li        r6, 0x25
  li        r0, 0x61
  lwz       r7, 0x128(r8)
  rlwimi    r7,r4,0,28,31
  lis       r3, 0xCC01
  stw       r7, 0x128(r8)
  lwz       r4, 0x128(r8)
  rlwimi    r4,r5,4,24,27
  stw       r4, 0x128(r8)
  lwz       r4, 0x128(r8)
  rlwimi    r4,r6,24,0,7
  stw       r4, 0x128(r8)
  stb       r0, -0x8000(r3)
  lwz       r0, 0x128(r8)
  stw       r0, -0x8000(r3)
  b         .loc_0x134

.loc_0x6C:
  lwz       r8, -0x6D70(r2)
  li        r6, 0x25
  li        r0, 0x61
  lwz       r7, 0x128(r8)
  rlwimi    r7,r4,8,20,23
  lis       r3, 0xCC01
  stw       r7, 0x128(r8)
  lwz       r4, 0x128(r8)
  rlwimi    r4,r5,12,16,19
  stw       r4, 0x128(r8)
  lwz       r4, 0x128(r8)
  rlwimi    r4,r6,24,0,7
  stw       r4, 0x128(r8)
  stb       r0, -0x8000(r3)
  lwz       r0, 0x128(r8)
  stw       r0, -0x8000(r3)
  b         .loc_0x134

.loc_0xB0:
  lwz       r8, -0x6D70(r2)
  li        r6, 0x26
  li        r0, 0x61
  lwz       r7, 0x12C(r8)
  rlwimi    r7,r4,0,28,31
  lis       r3, 0xCC01
  stw       r7, 0x12C(r8)
  lwz       r4, 0x12C(r8)
  rlwimi    r4,r5,4,24,27
  stw       r4, 0x12C(r8)
  lwz       r4, 0x12C(r8)
  rlwimi    r4,r6,24,0,7
  stw       r4, 0x12C(r8)
  stb       r0, -0x8000(r3)
  lwz       r0, 0x12C(r8)
  stw       r0, -0x8000(r3)
  b         .loc_0x134

.loc_0xF4:
  lwz       r8, -0x6D70(r2)
  li        r6, 0x26
  li        r0, 0x61
  lwz       r7, 0x12C(r8)
  rlwimi    r7,r4,8,20,23
  lis       r3, 0xCC01
  stw       r7, 0x12C(r8)
  lwz       r4, 0x12C(r8)
  rlwimi    r4,r5,12,16,19
  stw       r4, 0x12C(r8)
  lwz       r4, 0x12C(r8)
  rlwimi    r4,r6,24,0,7
  stw       r4, 0x12C(r8)
  stb       r0, -0x8000(r3)
  lwz       r0, 0x12C(r8)
  stw       r0, -0x8000(r3)

.loc_0x134:
  lwz       r3, -0x6D70(r2)
  li        r0, 0
  sth       r0, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E8268
 * Size:	0000EC
 */
void GXSetIndTexOrder(void)
{
/*
.loc_0x0:
  cmpwi     r5, 0xFF
  bne-      .loc_0xC
  li        r5, 0

.loc_0xC:
  cmpwi     r4, 0xFF
  bne-      .loc_0x18
  li        r4, 0

.loc_0x18:
  cmpwi     r3, 0x2
  beq-      .loc_0x80
  bge-      .loc_0x34
  cmpwi     r3, 0
  beq-      .loc_0x40
  bge-      .loc_0x60
  b         .loc_0xBC

.loc_0x34:
  cmpwi     r3, 0x4
  bge-      .loc_0xBC
  b         .loc_0xA0

.loc_0x40:
  lwz       r3, -0x6D70(r2)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r5,0,29,31
  stw       r0, 0x120(r3)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r4,3,26,28
  stw       r0, 0x120(r3)
  b         .loc_0xBC

.loc_0x60:
  lwz       r3, -0x6D70(r2)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r5,6,23,25
  stw       r0, 0x120(r3)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r4,9,20,22
  stw       r0, 0x120(r3)
  b         .loc_0xBC

.loc_0x80:
  lwz       r3, -0x6D70(r2)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r5,12,17,19
  stw       r0, 0x120(r3)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r4,15,14,16
  stw       r0, 0x120(r3)
  b         .loc_0xBC

.loc_0xA0:
  lwz       r3, -0x6D70(r2)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r5,18,11,13
  stw       r0, 0x120(r3)
  lwz       r0, 0x120(r3)
  rlwimi    r0,r4,21,8,10
  stw       r0, 0x120(r3)

.loc_0xBC:
  li        r0, 0x61
  lwz       r4, -0x6D70(r2)
  lis       r5, 0xCC01
  stb       r0, -0x8000(r5)
  li        r0, 0
  lwz       r3, 0x120(r4)
  stw       r3, -0x8000(r5)
  lwz       r3, 0x5AC(r4)
  ori       r3, r3, 0x3
  stw       r3, 0x5AC(r4)
  sth       r0, 0x2(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E8354
 * Size:	000024
 */
void GXSetNumIndStages(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6D70(r2)
  rlwinm    r0,r3,0,24,31
  lwz       r3, 0x204(r4)
  rlwimi    r3,r0,16,13,15
  stw       r3, 0x204(r4)
  lwz       r0, 0x5AC(r4)
  ori       r0, r0, 0x6
  stw       r0, 0x5AC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E8378
 * Size:	000048
 */
void GXSetTevDirect(void)
{
/*
.loc_0x0:
  mflr      r0
  li        r4, 0
  stw       r0, 0x4(r1)
  li        r0, 0
  li        r5, 0
  stwu      r1, -0x18(r1)
  li        r6, 0
  li        r7, 0
  stw       r0, 0x8(r1)
  li        r8, 0
  li        r9, 0
  stw       r0, 0xC(r1)
  li        r10, 0
  bl        -0x46C
  lwz       r0, 0x1C(r1)
  addi      r1, r1, 0x18
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800E83C0
 * Size:	000064
 */
void GXSetTevIndWarp(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  rlwinm.   r0,r6,0,24,31
  stwu      r1, -0x20(r1)
  beq-      .loc_0x1C
  li        r6, 0x6
  b         .loc_0x20

.loc_0x1C:
  li        r6, 0

.loc_0x20:
  rlwinm.   r0,r5,0,24,31
  addi      r8, r6, 0
  beq-      .loc_0x34
  li        r6, 0x7
  b         .loc_0x38

.loc_0x34:
  li        r6, 0

.loc_0x38:
  li        r0, 0
  stw       r0, 0x8(r1)
  addi      r9, r8, 0
  li        r5, 0
  stw       r0, 0xC(r1)
  li        r10, 0
  bl        -0x4D0
  lwz       r0, 0x24(r1)
  addi      r1, r1, 0x20
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001AC
 */
void GXSetTevIndTile(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void GXSetTevIndBumpST(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXSetTevIndBumpXYZ(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void GXSetTevIndRepeat(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E8424
 * Size:	000004
 */
void __GXUpdateBPMask(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	800E8428
 * Size:	000030
 */
void __GXSetIndirectMask(void)
{
/*
.loc_0x0:
  lwz       r7, -0x6D70(r2)
  li        r5, 0x61
  lis       r4, 0xCC01
  lwz       r6, 0x124(r7)
  rlwimi    r6,r3,0,24,31
  li        r0, 0
  stw       r6, 0x124(r7)
  stb       r5, -0x8000(r4)
  lwz       r3, 0x124(r7)
  stw       r3, -0x8000(r4)
  sth       r0, 0x2(r7)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E8458
 * Size:	000024
 */
void __GXFlushTextureState(void)
{
/*
.loc_0x0:
  li        r0, 0x61
  lwz       r4, -0x6D70(r2)
  lis       r5, 0xCC01
  stb       r0, -0x8000(r5)
  li        r0, 0
  lwz       r3, 0x124(r4)
  stw       r3, -0x8000(r5)
  sth       r0, 0x2(r4)
  blr
*/
}