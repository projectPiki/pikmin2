

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void setWsGroupNumber__Q27JAInter8BankWaveFll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void setWsLoadStatus__Q27JAInter8BankWaveFll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void getWsGroupNumber__Q27JAInter8BankWaveFl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void getWsLoadStatus__Q27JAInter8BankWaveFl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ABE44
 * Size:	000008
 */
void setInitCallback__Q27JAInter8BankWaveFPFv_v(void)
{
/*
.loc_0x0:
  stw       r3, -0x7EB8(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800ABE4C
 * Size:	000008
 */
void setFirstLoadCallback__Q27JAInter8BankWaveFPFv_v(void)
{
/*
.loc_0x0:
  stw       r3, -0x7EB4(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800ABE54
 * Size:	000008
 */
void setSecondLoadCallback__Q27JAInter8BankWaveFPFv_v(void)
{
/*
.loc_0x0:
  stw       r3, -0x7EB0(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800ABE5C
 * Size:	000148
 */
void init__Q27JAInter8BankWaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0x20
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  lwz       r0, -0x74A0(r13)
  lwz       r4, -0x7494(r13)
  rlwinm    r3,r0,2,0,29
  bl        -0x87E34
  lwz       r0, -0x74A0(r13)
  li        r5, 0x20
  stw       r3, -0x74A8(r13)
  lwz       r4, -0x7494(r13)
  rlwinm    r3,r0,2,0,29
  bl        -0x87E4C
  stw       r3, -0x74A4(r13)
  bl        0x1C90
  bl        -0x1046C
  li        r3, 0x100
  bl        -0xFE64
  li        r3, 0
  bl        -0x104A8
  lwz       r0, -0x74AC(r13)
  cmplwi    r0, 0
  beq-      .loc_0xB8
  li        r29, 0
  li        r27, 0
  mr        r28, r29
  li        r30, -0x1
  mr        r31, r29
  b         .loc_0xA8

.loc_0x7C:
  cmplwi    r4, 0
  beq-      .loc_0x9C
  mr        r3, r27
  bl        -0xFE18
  lwz       r3, -0x74A8(r13)
  stwx      r30, r3, r28
  lwz       r3, -0x74A4(r13)
  stwx      r31, r3, r28

.loc_0x9C:
  addi      r29, r29, 0xC
  addi      r28, r28, 0x4
  addi      r27, r27, 0x1

.loc_0xA8:
  lwz       r3, -0x74AC(r13)
  lwzx      r4, r3, r29
  cmplwi    r4, 0
  bne+      .loc_0x7C

.loc_0xB8:
  li        r3, 0x100
  bl        -0x12FE4
  lwz       r0, -0x74B0(r13)
  cmplwi    r0, 0
  beq-      .loc_0x134
  li        r27, 0
  li        r28, 0
  b         .loc_0xF0

.loc_0xD8:
  cmplwi    r4, 0
  beq-      .loc_0xE8
  mr        r3, r27
  bl        -0x12ED4

.loc_0xE8:
  addi      r28, r28, 0xC
  addi      r27, r27, 0x1

.loc_0xF0:
  lwz       r3, -0x74B0(r13)
  lwzx      r4, r3, r28
  cmplwi    r4, 0
  bne+      .loc_0xD8
  li        r29, 0
  mr        r28, r29
  b         .loc_0x120

.loc_0x10C:
  lwz       r4, 0x8(r3)
  mr        r3, r29
  bl        -0x12E74
  addi      r28, r28, 0xC
  addi      r29, r29, 0x1

.loc_0x120:
  lwz       r0, -0x74B0(r13)
  add       r3, r0, r28
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne+      .loc_0x10C

.loc_0x134:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void readInitSoundData__Q27JAInter8BankWaveFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ABFA4
 * Size:	000094
 */
void loadFirstStayWave__Q27JAInter8BankWaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lwz       r0, -0x74AC(r13)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  lbz       r0, -0x7EC0(r13)
  rlwinm.   r0,r0,25,31,31
  bne-      .loc_0x7C
  li        r30, 0
  li        r31, 0
  b         .loc_0x58

.loc_0x38:
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x50
  mr        r3, r30
  li        r4, 0
  bl        0xF4

.loc_0x50:
  addi      r31, r31, 0xC
  addi      r30, r30, 0x1

.loc_0x58:
  lwz       r0, -0x74AC(r13)
  add       r3, r0, r31
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne+      .loc_0x38
  lbz       r0, -0x7EC0(r13)
  li        r3, 0x1
  rlwimi    r0,r3,7,24,24
  stb       r0, -0x7EC0(r13)

.loc_0x7C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC038
 * Size:	000094
 */
void loadSecondStayWave__Q27JAInter8BankWaveFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lbz       r0, -0x7EC0(r13)
  rlwinm.   r0,r0,26,31,31
  bne-      .loc_0x7C
  lwz       r0, -0x74AC(r13)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  li        r30, 0
  li        r31, 0
  b         .loc_0x58

.loc_0x38:
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0x1
  bne-      .loc_0x50
  mr        r3, r30
  li        r4, 0
  bl        0x60

.loc_0x50:
  addi      r31, r31, 0xC
  addi      r30, r30, 0x1

.loc_0x58:
  lwz       r0, -0x74AC(r13)
  add       r3, r0, r31
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne+      .loc_0x38
  lbz       r0, -0x7EC0(r13)
  li        r3, 0x1
  rlwimi    r0,r3,6,25,25
  stb       r0, -0x7EC0(r13)

.loc_0x7C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void setSceneSetFinishCallback__Q27JAInter8BankWaveFll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC0CC
 * Size:	000018
 */
void finishSceneSet__Q27JAInter8BankWaveFUl(void)
{
/*
.loc_0x0:
  stw       r3, -0x7EBC(r13)
  rlwinm    r0,r3,18,14,29
  lwz       r3, -0x74A4(r13)
  li        r4, 0x2
  stwx      r4, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void loadSceneWave__Q27JAInter8BankWaveFll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void checkSceneWaveOnMemory__Q27JAInter8BankWaveFll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC0E4
 * Size:	000074
 */
void loadGroupWave__Q27JAInter8BankWaveFll(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        -0xFFB8
  li        r0, -0x1
  lis       r3, 0x800B
  stw       r0, -0x7EBC(r13)
  rlwinm    r0,r31,16,0,15
  lwz       r4, -0x74A4(r13)
  rlwinm    r31,r31,2,0,29
  li        r6, 0x1
  subi      r5, r3, 0x3F34
  stwx      r6, r4, r31
  add       r3, r0, r30
  li        r4, 0
  bl        -0x5724
  lwz       r3, -0x74A8(r13)
  stwx      r30, r3, r31
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void getWaveGroupNumber__Q27JAInter8BankWaveFl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void getWaveLoadStatus__Q27JAInter8BankWaveFl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void checkAllWaveLoadStatus__Q27JAInter8BankWaveFv(void)
{
	// UNUSED FUNCTION
}