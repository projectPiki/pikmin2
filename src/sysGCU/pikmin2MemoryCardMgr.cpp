

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804428AC
 * Size:	00003C
 */
void __ct__Q34Game10MemoryCard6PlayerFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x1C(r3)
  stw       r0, 0x20(r3)
  stw       r0, 0x24(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void setDefault__Q34Game10MemoryCard6PlayerFb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804428E8
 * Size:	000044
 */
void __ct__Q34Game10MemoryCard14PlayerFileInfoFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8044
  li        r5, 0
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x28AC
  li        r6, 0x34
  li        r7, 0x3
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x3810D4
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void setDefault__Q34Game10MemoryCard14PlayerFileInfoFScb(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044292C
 * Size:	000074
 */
void getPlayer__Q34Game10MemoryCard14PlayerFileInfoFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x30
  cmpwi     r31, 0x3
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41833C

.loc_0x54:
  mulli     r0, r31, 0x34
  lwz       r31, 0xC(r1)
  add       r3, r30, r0
  lwz       r0, 0x14(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F8
 */
void setParameter__Q34Game10MemoryCard14PlayerFileInfoFScPQ34Game10MemoryCard16PlayerInfoHeader(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804429A0
 * Size:	000080
 */
void isBrokenFile__Q34Game10MemoryCard14PlayerFileInfoFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x30
  cmpwi     r31, 0x3
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x4183B0

.loc_0x54:
  mulli     r0, r31, 0x34
  lwz       r31, 0xC(r1)
  lbzx      r3, r30, r0
  lwz       r30, 0x8(r1)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80442A20
 * Size:	000094
 */
void isNewFile__Q34Game10MemoryCard14PlayerFileInfoFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x30
  cmpwi     r31, 0x3
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x418430

.loc_0x54:
  mulli     r0, r31, 0x34
  li        r3, 0
  add       r4, r30, r0
  lbz       r0, 0x0(r4)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  lwz       r0, 0x4(r4)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  li        r3, 0x1

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
 * Size:	000078
 */
void getSaveCount__Q34Game10MemoryCard14PlayerFileInfoFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void addSaveCount__Q34Game10MemoryCard14PlayerFileInfoFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __ct__Q34Game10MemoryCard8ResourceFPQ34Game10MemoryCard3Mgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80442AB4
 * Size:	00006C
 */
void __dt__Q34Game10MemoryCard8ResourceFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr.       r30, r3
  beq-      .loc_0x50
  lis       r3, 0x804F
  subi      r0, r3, 0x3028
  stw       r0, 0x0(r30)
  lwz       r3, 0x18(r30)
  bl        0x208
  mr        r3, r30
  li        r4, 0
  bl        -0x425ABC
  extsh.    r0, r31
  ble-      .loc_0x50
  mr        r3, r30
  bl        -0x41EA4C

.loc_0x50:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80442B20
 * Size:	00007C
 */
void __ct__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2544
  lis       r4, 0x804F
  lis       r3, 0x804A
  subi      r0, r4, 0x3054
  li        r6, 0x3C
  stw       r0, 0x0(r31)
  li        r0, 0
  lis       r4, 0x1
  subi      r3, r3, 0x520C
  stw       r0, 0xD8(r31)
  subi      r4, r4, 0x4000
  mr        r5, r4
  stw       r0, 0xDC(r31)
  stw       r0, 0xE0(r31)
  stb       r0, 0xE4(r31)
  stb       r0, 0xE5(r31)
  stb       r0, 0xE6(r31)
  stb       r0, 0xE7(r31)
  crclr     6, 0x6
  bl        -0x355494
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80442B9C
 * Size:	000030
 */
void isErrorOccured__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2F64
  subfic    r4, r3, 0x2
  subi      r0, r3, 0x2
  or        r0, r4, r0
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80442BCC
 * Size:	000120
 */
void loadResource__Q34Game10MemoryCard3MgrFP7JKRHeap(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  subi      r30, r5, 0x5248
  li        r5, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x1C
  bl        -0x41ECC0
  mr.       r31, r3
  beq-      .loc_0x54
  bl        -0x425C40
  lis       r3, 0x804F
  subi      r0, r3, 0x3028
  stw       r0, 0x0(r31)
  stw       r28, 0x18(r31)

.loc_0x54:
  cmplwi    r31, 0
  bne-      .loc_0x70
  addi      r3, r30, 0x14
  addi      r5, r30, 0x30
  li        r4, 0x215
  crclr     6, 0x6
  bl        -0x4185F8

.loc_0x70:
  mr        r5, r29
  addi      r3, r30, 0x70
  li        r4, 0x1
  li        r6, 0x1
  bl        -0x427B1C
  mr.       r31, r3
  bne-      .loc_0xA0
  addi      r3, r30, 0x14
  addi      r5, r30, 0x30
  li        r4, 0x21C
  crclr     6, 0x6
  bl        -0x418628

.loc_0xA0:
  mr        r4, r31
  addi      r3, r30, 0x94
  bl        -0x41FC5C
  stw       r3, 0xDC(r28)
  mr        r4, r31
  addi      r3, r30, 0xA0
  bl        -0x41FC6C
  stw       r3, 0xE0(r28)
  lwz       r0, 0xDC(r28)
  cmplwi    r0, 0
  bne-      .loc_0xE0
  addi      r3, r30, 0x14
  addi      r5, r30, 0x30
  li        r4, 0x21F
  crclr     6, 0x6
  bl        -0x418668

.loc_0xE0:
  lwz       r0, 0xE0(r28)
  cmplwi    r0, 0
  bne-      .loc_0x100
  addi      r3, r30, 0x14
  addi      r5, r30, 0x30
  li        r4, 0x220
  crclr     6, 0x6
  bl        -0x418688

.loc_0x100:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80442CEC
 * Size:	000010
 */
void destroyResource__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0xDC(r3)
  stw       r0, 0xE0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80442CFC
 * Size:	000020
 */
void update__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x21BC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80442D1C
 * Size:	00006C
 */
void format__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r3, r30, 0xAC
  bl        -0x352FC0
  cmpwi     r3, 0
  beq-      .loc_0x50
  mr        r3, r30
  li        r4, 0
  bl        -0x2524
  mr        r0, r3
  addi      r3, r30, 0xAC
  mr        r31, r0
  bl        -0x35311C
  addi      r3, r30, 0xC4
  bl        -0x352E3C

.loc_0x50:
  lwz       r0, 0x14(r1)
  mr        r3, r31
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
 * Size:	000080
 */
void setCommandFlag__Q34Game10MemoryCard3MgrFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void verifySerialNo__Q34Game10MemoryCard3MgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80442D88
 * Size:	000074
 */
void checkBeforeSave__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        .loc_0x74
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  addi      r3, r30, 0xAC
  bl        -0x353038
  cmpwi     r3, 0
  beq-      .loc_0x58
  mr        r3, r30
  li        r31, 0x1
  li        r4, 0xF
  bl        -0x2718
  addi      r3, r30, 0xAC
  bl        -0x353190
  addi      r3, r30, 0xC4
  bl        -0x352EB0

.loc_0x58:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x74:
*/
}

/*
 * --INFO--
 * Address:	80442DFC
 * Size:	000074
 */
void checkError__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x3A4C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  addi      r3, r30, 0xAC
  bl        -0x3530AC
  cmpwi     r3, 0
  beq-      .loc_0x58
  mr        r3, r30
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x278C
  addi      r3, r30, 0xAC
  bl        -0x353204
  addi      r3, r30, 0xC4
  bl        -0x352F24

.loc_0x58:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80442E70
 * Size:	000074
 */
void createNewFile__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x39D8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  addi      r3, r30, 0xAC
  bl        -0x353120
  cmpwi     r3, 0
  beq-      .loc_0x58
  mr        r3, r30
  li        r31, 0x1
  li        r4, 0x7
  bl        -0x2800
  addi      r3, r30, 0xAC
  bl        -0x353278
  addi      r3, r30, 0xC4
  bl        -0x352F98

.loc_0x58:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80442EE4
 * Size:	0000B8
 */
void saveGameOption__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        0x395C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  addi      r3, r29, 0xAC
  bl        -0x35319C
  cmpwi     r3, 0
  beq-      .loc_0x60
  mr        r3, r29
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x287C
  addi      r3, r29, 0xAC
  bl        -0x3532F4
  addi      r3, r29, 0xC4
  bl        -0x353014

.loc_0x60:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x98
  addi      r3, r29, 0xAC
  bl        -0x3531D4
  cmpwi     r3, 0
  beq-      .loc_0x98
  mr        r3, r29
  li        r30, 0x1
  li        r4, 0x5
  bl        -0x28B4
  addi      r3, r29, 0xAC
  bl        -0x35332C
  addi      r3, r29, 0xC4
  bl        -0x35304C

.loc_0x98:
  lwz       r0, 0x24(r1)
  mr        r3, r30
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80442F9C
 * Size:	0000B8
 */
void loadGameOption__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        0x38A4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  addi      r3, r29, 0xAC
  bl        -0x353254
  cmpwi     r3, 0
  beq-      .loc_0x60
  mr        r3, r29
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x2934
  addi      r3, r29, 0xAC
  bl        -0x3533AC
  addi      r3, r29, 0xC4
  bl        -0x3530CC

.loc_0x60:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x98
  addi      r3, r29, 0xAC
  bl        -0x35328C
  cmpwi     r3, 0
  beq-      .loc_0x98
  mr        r3, r29
  li        r30, 0x1
  li        r4, 0x6
  bl        -0x296C
  addi      r3, r29, 0xAC
  bl        -0x3533E4
  addi      r3, r29, 0xC4
  bl        -0x353104

.loc_0x98:
  lwz       r0, 0x24(r1)
  mr        r3, r30
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80443054
 * Size:	000124
 */
void savePlayerNoCheckSerialNumber__Q34Game10MemoryCard3MgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr.       r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  blt-      .loc_0x34
  cmpwi     r29, 0x3
  blt-      .loc_0x60

.loc_0x34:
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  lbz       r3, 0x20(r3)
  extsb.    r0, r3
  blt-      .loc_0x54
  extsb     r0, r3
  cmpwi     r0, 0x3
  blt-      .loc_0x5C

.loc_0x54:
  li        r29, 0
  b         .loc_0x60

.loc_0x5C:
  mr        r29, r0

.loc_0x60:
  mr        r3, r28
  li        r31, 0
  bl        0x37A8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  addi      r3, r28, 0xAC
  bl        -0x353350
  cmpwi     r3, 0
  beq-      .loc_0xA4
  mr        r3, r28
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x2A30
  addi      r3, r28, 0xAC
  bl        -0x3534A8
  addi      r3, r28, 0xC4
  bl        -0x3531C8

.loc_0xA4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x100
  addi      r3, r28, 0xAC
  bl        -0x353388
  cmpwi     r3, 0
  beq-      .loc_0x100
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x30B8
  li        r5, 0x9
  stw       r0, 0xC(r1)
  subi      r0, r3, 0x3060
  mr        r3, r28
  addi      r4, r1, 0x8
  stw       r5, 0x8(r1)
  li        r30, 0x1
  stw       r0, 0xC(r1)
  stw       r29, 0x10(r1)
  bl        -0x2A4C
  addi      r3, r28, 0xAC
  bl        -0x353504
  addi      r3, r28, 0xC4
  bl        -0x353224

.loc_0x100:
  lwz       r0, 0x34(r1)
  mr        r3, r30
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80443178
 * Size:	000114
 */
void savePlayer__Q34Game10MemoryCard3MgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr.       r28, r4
  mr        r27, r3
  li        r30, 0
  li        r29, 0x8
  blt-      .loc_0x2C
  cmpwi     r28, 0x3
  blt-      .loc_0x5C

.loc_0x2C:
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  lbz       r3, 0x20(r3)
  extsb.    r0, r3
  blt-      .loc_0x4C
  extsb     r0, r3
  cmpwi     r0, 0x3
  blt-      .loc_0x54

.loc_0x4C:
  li        r3, 0
  b         .loc_0x100

.loc_0x54:
  mr        r28, r0
  b         .loc_0x60

.loc_0x5C:
  li        r29, 0x9

.loc_0x60:
  mr        r3, r27
  li        r31, 0
  bl        0x3684
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  addi      r3, r27, 0xAC
  bl        -0x353474
  cmpwi     r3, 0
  beq-      .loc_0xA4
  mr        r3, r27
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x2B54
  addi      r3, r27, 0xAC
  bl        -0x3535CC
  addi      r3, r27, 0xC4
  bl        -0x3532EC

.loc_0xA4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xFC
  addi      r3, r27, 0xAC
  bl        -0x3534AC
  cmpwi     r3, 0
  beq-      .loc_0xFC
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r4, r4, 0x30B8
  stw       r29, 0x8(r1)
  subi      r0, r3, 0x3060
  mr        r3, r27
  stw       r4, 0xC(r1)
  addi      r4, r1, 0x8
  li        r30, 0x1
  stw       r0, 0xC(r1)
  stw       r28, 0x10(r1)
  bl        -0x2B6C
  addi      r3, r27, 0xAC
  bl        -0x353624
  addi      r3, r27, 0xC4
  bl        -0x353344

.loc_0xFC:
  mr        r3, r30

.loc_0x100:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8044328C
 * Size:	000124
 */
void loadPlayer__Q34Game10MemoryCard3MgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr.       r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  blt-      .loc_0x3C
  cmpwi     r29, 0x3
  bge-      .loc_0x3C
  li        r0, 0x1

.loc_0x3C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x32F
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x418CA8

.loc_0x60:
  mr        r3, r28
  li        r31, 0
  bl        0x3570
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  addi      r3, r28, 0xAC
  bl        -0x353588
  cmpwi     r3, 0
  beq-      .loc_0xA4
  mr        r3, r28
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x2C68
  addi      r3, r28, 0xAC
  bl        -0x3536E0
  addi      r3, r28, 0xC4
  bl        -0x353400

.loc_0xA4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x100
  addi      r3, r28, 0xAC
  bl        -0x3535C0
  cmpwi     r3, 0
  beq-      .loc_0x100
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x30B8
  li        r5, 0xA
  stw       r0, 0xC(r1)
  subi      r0, r3, 0x3060
  mr        r3, r28
  addi      r4, r1, 0x8
  stw       r5, 0x8(r1)
  li        r30, 0x1
  stw       r0, 0xC(r1)
  stw       r29, 0x10(r1)
  bl        -0x2C84
  addi      r3, r28, 0xAC
  bl        -0x35373C
  addi      r3, r28, 0xC4
  bl        -0x35345C

.loc_0x100:
  lwz       r0, 0x34(r1)
  mr        r3, r30
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804433B0
 * Size:	000124
 */
void deletePlayer__Q34Game10MemoryCard3MgrFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr.       r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  blt-      .loc_0x3C
  cmpwi     r29, 0x3
  bge-      .loc_0x3C
  li        r0, 0x1

.loc_0x3C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x347
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x418DCC

.loc_0x60:
  mr        r3, r28
  li        r31, 0
  bl        0x344C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA4
  addi      r3, r28, 0xAC
  bl        -0x3536AC
  cmpwi     r3, 0
  beq-      .loc_0xA4
  mr        r3, r28
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x2D8C
  addi      r3, r28, 0xAC
  bl        -0x353804
  addi      r3, r28, 0xC4
  bl        -0x353524

.loc_0xA4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x100
  addi      r3, r28, 0xAC
  bl        -0x3536E4
  cmpwi     r3, 0
  beq-      .loc_0x100
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x30B8
  li        r5, 0xB
  stw       r0, 0xC(r1)
  subi      r0, r3, 0x3060
  mr        r3, r28
  addi      r4, r1, 0x8
  stw       r5, 0x8(r1)
  li        r30, 0x1
  stw       r0, 0xC(r1)
  stw       r29, 0x10(r1)
  bl        -0x2DA8
  addi      r3, r28, 0xAC
  bl        -0x353860
  addi      r3, r28, 0xC4
  bl        -0x353580

.loc_0x100:
  lwz       r0, 0x34(r1)
  mr        r3, r30
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804434D4
 * Size:	000150
 */
void copyPlayer__Q34Game10MemoryCard3MgrFii(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stmw      r27, 0x1C(r1)
  mr.       r29, r4
  mr        r28, r3
  mr        r30, r5
  li        r31, 0
  blt-      .loc_0x34
  cmpwi     r29, 0x2
  bgt-      .loc_0x34
  li        r0, 0x1

.loc_0x34:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x58
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x35E
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x418EE8

.loc_0x58:
  cmpwi     r30, 0
  li        r0, 0
  blt-      .loc_0x70
  cmpwi     r30, 0x2
  bgt-      .loc_0x70
  li        r0, 0x1

.loc_0x70:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x94
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x35F
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x418F24

.loc_0x94:
  mr        r3, r28
  li        r27, 0
  bl        0x32F4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  addi      r3, r28, 0xAC
  bl        -0x353804
  cmpwi     r3, 0
  beq-      .loc_0xD8
  mr        r3, r28
  li        r27, 0x1
  li        r4, 0x10
  bl        -0x2EE4
  addi      r3, r28, 0xAC
  bl        -0x35395C
  addi      r3, r28, 0xC4
  bl        -0x35367C

.loc_0xD8:
  rlwinm.   r0,r27,0,24,31
  beq-      .loc_0x138
  addi      r3, r28, 0xAC
  bl        -0x35383C
  cmpwi     r3, 0
  beq-      .loc_0x138
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x30B8
  sth       r29, 0x10(r1)
  li        r4, 0xC
  li        r31, 0x1
  stw       r0, 0xC(r1)
  subi      r0, r3, 0x306C
  mr        r3, r28
  stw       r4, 0x8(r1)
  addi      r4, r1, 0x8
  stw       r0, 0xC(r1)
  sth       r30, 0x12(r1)
  bl        -0x2F04
  addi      r3, r28, 0xAC
  bl        -0x3539BC
  addi      r3, r28, 0xC4
  bl        -0x3536DC

.loc_0x138:
  mr        r3, r31
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80443624
 * Size:	0000E8
 */
void getPlayerHeader__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard14PlayerFileInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  li        r31, 0
  stw       r30, 0x28(r1)
  li        r30, 0
  stw       r29, 0x24(r1)
  mr        r29, r4
  stw       r28, 0x20(r1)
  mr        r28, r3
  bl        0x3214
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  addi      r3, r28, 0xAC
  bl        -0x3538E4
  cmpwi     r3, 0
  beq-      .loc_0x68
  mr        r3, r28
  li        r31, 0x1
  li        r4, 0x10
  bl        -0x2FC4
  addi      r3, r28, 0xAC
  bl        -0x353A3C
  addi      r3, r28, 0xC4
  bl        -0x35375C

.loc_0x68:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xC4
  addi      r3, r28, 0xAC
  bl        -0x35391C
  cmpwi     r3, 0
  beq-      .loc_0xC4
  lis       r4, 0x804F
  lis       r3, 0x804F
  subi      r0, r4, 0x30B8
  li        r5, 0xD
  stw       r0, 0xC(r1)
  subi      r0, r3, 0x3078
  mr        r3, r28
  addi      r4, r1, 0x8
  stw       r5, 0x8(r1)
  li        r30, 0x1
  stw       r0, 0xC(r1)
  stw       r29, 0x10(r1)
  bl        -0x2FE0
  addi      r3, r28, 0xAC
  bl        -0x353A98
  addi      r3, r28, 0xC4
  bl        -0x3537B8

.loc_0xC4:
  lwz       r0, 0x34(r1)
  mr        r3, r30
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8044370C
 * Size:	000354
 */
void doCardProc__Q34Game10MemoryCard3MgrFPvP20MemoryCardMgrCommand(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r26, r3
  mr        r27, r5
  li        r28, 0
  lwz       r3, -0x77D4(r13)
  bl        -0x41FF4C
  lwz       r29, -0x77D4(r13)
  li        r31, 0
  mr        r30, r3
  stw       r31, 0xD8(r26)
  lwz       r3, 0x0(r27)
  subi      r0, r3, 0x5
  cmplwi    r0, 0xB
  bgt-      .loc_0x2CC
  lis       r3, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x30A8
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lwz       r0, 0xE4(r26)
  mr        r3, r26
  ori       r0, r0, 0x1
  stw       r0, 0xE4(r26)
  bl        0x944
  lwz       r0, 0xE4(r26)
  mr        r28, r3
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xE4(r26)
  b         .loc_0x2E8
  lwz       r0, 0xE4(r26)
  mr        r3, r26
  ori       r0, r0, 0x1
  stw       r0, 0xE4(r26)
  bl        0xBBC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  mr        r3, r26
  li        r4, 0
  li        r5, 0
  bl        0xD14
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  mr        r3, r26
  bl        0x7DC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  li        r31, 0x1

.loc_0xCC:
  lwz       r0, 0xE4(r26)
  mr        r28, r31
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xE4(r26)
  b         .loc_0x2E8
  mr        r3, r26
  bl        0xE9C
  mr        r28, r3
  b         .loc_0x2E8
  lwz       r0, 0xE4(r26)
  mr        r3, r26
  ori       r0, r0, 0x1
  stw       r0, 0xE4(r26)
  bl        0xB50
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  lwz       r0, 0x8(r27)
  mr        r3, r26
  li        r5, 0x1
  extsb     r4, r0
  bl        0x116C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  mr        r3, r26
  bl        0x76C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  li        r31, 0x1

.loc_0x13C:
  lwz       r0, 0xE4(r26)
  mr        r28, r31
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xE4(r26)
  b         .loc_0x2E8
  lwz       r0, 0xE4(r26)
  mr        r3, r26
  ori       r0, r0, 0x1
  stw       r0, 0xE4(r26)
  bl        0xAF0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x19C
  lwz       r0, 0x8(r27)
  mr        r3, r26
  li        r5, 0x1
  extsb     r4, r0
  bl        0x11DC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x19C
  mr        r3, r26
  bl        0x70C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x19C
  li        r31, 0x1

.loc_0x19C:
  lwz       r0, 0xE4(r26)
  mr        r28, r31
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xE4(r26)
  b         .loc_0x2E8
  lwz       r0, 0x8(r27)
  mr        r3, r26
  extsb     r4, r0
  bl        0x1830
  mr        r28, r3
  b         .loc_0x2E8
  lwz       r0, 0xE4(r26)
  mr        r3, r26
  ori       r0, r0, 0x1
  stw       r0, 0xE4(r26)
  bl        0xA78
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x210
  lwz       r0, 0x8(r27)
  mr        r3, r26
  extsb     r4, r0
  bl        0x1BAC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x210
  mr        r3, r26
  bl        0x698
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x210
  li        r31, 0x1

.loc_0x210:
  lwz       r0, 0xE4(r26)
  mr        r28, r31
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xE4(r26)
  b         .loc_0x2E8
  lwz       r0, 0xE4(r26)
  mr        r3, r26
  ori       r0, r0, 0x1
  stw       r0, 0xE4(r26)
  bl        0xA1C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x274
  lha       r4, 0x8(r27)
  mr        r3, r26
  lha       r0, 0xA(r27)
  extsb     r4, r4
  extsb     r5, r0
  bl        0x1DE0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x274
  mr        r3, r26
  bl        0x634
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x274
  li        r31, 0x1

.loc_0x274:
  lwz       r0, 0xE4(r26)
  mr        r28, r31
  rlwinm    r0,r0,0,0,30
  stw       r0, 0xE4(r26)
  b         .loc_0x2E8
  lwz       r4, 0x8(r27)
  mr        r3, r26
  bl        .loc_0x354
  mr        r28, r3
  b         .loc_0x2E8
  mr        r3, r26
  bl        0x1D2C
  mr        r28, r3
  b         .loc_0x2E8
  mr        r3, r26
  bl        0x434
  mr        r28, r3
  b         .loc_0x2E8
  mr        r3, r26
  bl        0x4A0
  mr        r28, r3
  b         .loc_0x2E8

.loc_0x2CC:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x3E3
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x4193B0

.loc_0x2E8:
  lwz       r0, -0x77D4(r13)
  cmplw     r29, r0
  beq-      .loc_0x310
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x3F0
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x4193D8

.loc_0x310:
  lwz       r3, -0x77D4(r13)
  bl        -0x420240
  cmpw      r30, r3
  beq-      .loc_0x33C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x3F2
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419404

.loc_0x33C:
  mr        r3, r28
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x354:
*/
}

/*
 * --INFO--
 * Address:	80443A60
 * Size:	000390
 */
void commandUpdatePlayerHeader__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard14PlayerFileInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stmw      r26, 0x58(r1)
  mr.       r28, r4
  mr        r27, r3
  li        r30, 0
  bne-      .loc_0x3C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x407
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419458

.loc_0x3C:
  li        r0, 0
  mr        r31, r28
  stb       r0, 0x8(r1)
  li        r29, 0
  b         .loc_0x2E4

.loc_0x50:
  li        r0, 0
  mr        r3, r27
  stb       r0, 0x18(r1)
  mr        r4, r29
  addi      r5, r1, 0xC
  addi      r6, r1, 0x8
  stw       r0, 0x1C(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x44(r1)
  stw       r0, 0x48(r1)
  bl        0x12E0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x15C
  extsb.    r3, r29
  li        r0, 0
  blt-      .loc_0xBC
  cmpwi     r3, 0x3
  bge-      .loc_0xBC
  li        r0, 0x1

.loc_0xBC:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0xE0
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x4194FC

.loc_0xE0:
  lbz       r0, 0x18(r1)
  stb       r0, 0x0(r31)
  lbz       r0, 0x19(r1)
  stb       r0, 0x1(r31)
  lhz       r0, 0x1A(r1)
  sth       r0, 0x2(r31)
  lwz       r0, 0x1C(r1)
  stw       r0, 0x4(r31)
  lwz       r0, 0x20(r1)
  stw       r0, 0x8(r31)
  lwz       r0, 0x24(r1)
  stw       r0, 0xC(r31)
  lwz       r0, 0x28(r1)
  stw       r0, 0x10(r31)
  lwz       r0, 0x2C(r1)
  stw       r0, 0x14(r31)
  lwz       r0, 0x30(r1)
  stw       r0, 0x18(r31)
  lwz       r0, 0x34(r1)
  stw       r0, 0x1C(r31)
  lwz       r0, 0x38(r1)
  stw       r0, 0x20(r31)
  lwz       r0, 0x3C(r1)
  stw       r0, 0x24(r31)
  lwz       r0, 0x40(r1)
  stw       r0, 0x28(r31)
  lwz       r0, 0x44(r1)
  stw       r0, 0x2C(r31)
  lwz       r0, 0x48(r1)
  stw       r0, 0x30(r31)
  b         .loc_0x2DC

.loc_0x15C:
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2F0
  lwz       r5, 0xC(r1)
  subis     r0, r5, 0x506C
  cmplwi    r0, 0x496E
  bne-      .loc_0x220
  lis       r3, 0x506C
  extsb.    r6, r29
  addi      r3, r3, 0x496E
  li        r0, 0
  sub       r4, r3, r5
  sub       r3, r5, r3
  or        r3, r4, r3
  rlwinm    r26,r3,1,31,31
  blt-      .loc_0x1B8
  cmpwi     r6, 0x3
  bge-      .loc_0x1B8
  li        r0, 0x1

.loc_0x1B8:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x1DC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x4195F8

.loc_0x1DC:
  stb       r26, 0x0(r31)
  li        r3, 0
  li        r0, 0x2710
  stb       r3, 0x1(r31)
  sth       r3, 0x2(r31)
  stw       r3, 0x4(r31)
  stw       r3, 0x8(r31)
  stw       r3, 0xC(r31)
  stw       r3, 0x10(r31)
  stw       r3, 0x14(r31)
  stw       r3, 0x18(r31)
  stw       r3, 0x1C(r31)
  stw       r0, 0x20(r31)
  stw       r3, 0x28(r31)
  stw       r3, 0x2C(r31)
  stw       r3, 0x30(r31)
  b         .loc_0x2DC

.loc_0x220:
  li        r3, 0x1
  extsb.    r4, r29
  stb       r3, 0x18(r1)
  li        r0, 0
  blt-      .loc_0x240
  cmpwi     r4, 0x3
  bge-      .loc_0x240
  mr        r0, r3

.loc_0x240:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x264
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x18C
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419680

.loc_0x264:
  lbz       r0, 0x18(r1)
  stb       r0, 0x0(r31)
  lbz       r0, 0x19(r1)
  stb       r0, 0x1(r31)
  lhz       r0, 0x1A(r1)
  sth       r0, 0x2(r31)
  lwz       r0, 0x1C(r1)
  stw       r0, 0x4(r31)
  lwz       r0, 0x20(r1)
  stw       r0, 0x8(r31)
  lwz       r0, 0x24(r1)
  stw       r0, 0xC(r31)
  lwz       r0, 0x28(r1)
  stw       r0, 0x10(r31)
  lwz       r0, 0x2C(r1)
  stw       r0, 0x14(r31)
  lwz       r0, 0x30(r1)
  stw       r0, 0x18(r31)
  lwz       r0, 0x34(r1)
  stw       r0, 0x1C(r31)
  lwz       r0, 0x38(r1)
  stw       r0, 0x20(r31)
  lwz       r0, 0x3C(r1)
  stw       r0, 0x24(r31)
  lwz       r0, 0x40(r1)
  stw       r0, 0x28(r31)
  lwz       r0, 0x44(r1)
  stw       r0, 0x2C(r31)
  lwz       r0, 0x48(r1)
  stw       r0, 0x30(r31)

.loc_0x2DC:
  addi      r31, r31, 0x34
  addi      r29, r29, 0x1

.loc_0x2E4:
  extsb     r0, r29
  cmpwi     r0, 0x3
  blt+      .loc_0x50

.loc_0x2F0:
  lbz       r0, 0x8(r1)
  cmplwi    r0, 0
  bne+      .loc_0x3C
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r29, r4, 0x5234
  li        r26, 0
  subi      r28, r3, 0x5218
  b         .loc_0x34C

.loc_0x314:
  extsb.    r3, r26
  li        r0, 0
  blt-      .loc_0x32C
  cmpwi     r3, 0x3
  bge-      .loc_0x32C
  li        r0, 0x1

.loc_0x32C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x348
  mr        r3, r29
  mr        r5, r28
  li        r4, 0x18C
  crclr     6, 0x6
  bl        -0x419764

.loc_0x348:
  addi      r26, r26, 0x1

.loc_0x34C:
  extsb     r0, r26
  cmpwi     r0, 0x3
  blt+      .loc_0x314
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x378
  li        r30, 0x1

.loc_0x378:
  mr        r3, r30
  lmw       r26, 0x58(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80443DF0
 * Size:	00007C
 */
void commandCheckBeforeSave__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x34(r1)
  addi      r4, r1, 0x8
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r6, -0x7978(r13)
  bl        -0x29E8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  addi      r3, r1, 0x8
  bl        -0x36A3C4
  mr        r3, r31
  bl        0x18B0
  b         .loc_0x68

.loc_0x40:
  mr        r3, r31
  li        r4, 0
  bl        0xB4
  lwz       r0, 0xD4(r31)
  cmpwi     r0, 0x2
  bne-      .loc_0x64
  mr        r3, r31
  li        r4, 0x3
  bl        -0x1610

.loc_0x64:
  li        r3, 0

.loc_0x68:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80443E6C
 * Size:	000080
 */
void commandCheckError__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x34(r1)
  addi      r4, r1, 0x8
  stw       r31, 0x2C(r1)
  li        r31, 0x1
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r6, -0x7978(r13)
  bl        -0x2A6C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x40
  addi      r3, r1, 0x8
  bl        -0x36A448
  b         .loc_0x64

.loc_0x40:
  mr        r3, r30
  li        r4, 0
  bl        .loc_0x80
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x60
  mr        r3, r30
  li        r4, 0x3
  bl        -0x1688

.loc_0x60:
  li        r31, 0

.loc_0x64:
  lwz       r0, 0x34(r1)
  mr        r3, r31
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x80:
*/
}

/*
 * --INFO--
 * Address:	80443EEC
 * Size:	0000B8
 */
void checkSpace__Q34Game10MemoryCard3MgrFQ213MemoryCardMgr9ECardSlot(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x3
  stw       r0, 0x14(r1)
  addi      r5, r5, 0x6000
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x1C68
  cmpwi     r3, 0x1
  beq-      .loc_0x60
  bge-      .loc_0x40
  cmpwi     r3, 0
  bge-      .loc_0x4C
  b         .loc_0x80

.loc_0x40:
  cmpwi     r3, 0x3
  bge-      .loc_0x80
  b         .loc_0x70

.loc_0x4C:
  mr        r3, r30
  li        r4, 0x2
  bl        -0x1700
  li        r31, 0x1
  b         .loc_0x9C

.loc_0x60:
  mr        r3, r30
  li        r4, 0x6
  bl        -0x1714
  b         .loc_0x9C

.loc_0x70:
  mr        r3, r30
  li        r4, 0x7
  bl        -0x1724
  b         .loc_0x9C

.loc_0x80:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x4C4
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419944

.loc_0x9C:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80443FA4
 * Size:	000118
 */
void commandSaveHeader__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  li        r31, 0
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xFC
  lwz       r6, -0x7978(r13)
  mr        r3, r30
  addi      r4, r1, 0x8
  li        r5, 0
  bl        -0x2BC0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD4
  addi      r3, r1, 0x8
  bl        -0x36A59C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x84
  lwz       r5, -0x7978(r13)
  mr        r3, r30
  li        r4, 0
  bl        -0x2A5C

.loc_0x84:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB0
  lwz       r5, -0x7978(r13)
  mr        r3, r30
  li        r4, 0
  bl        -0x2808

.loc_0xB0:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xFC
  li        r31, 0x1
  b         .loc_0xFC

.loc_0xD4:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xFC
  mr        r3, r30
  li        r4, 0x3
  bl        -0x185C

.loc_0xFC:
  lwz       r0, 0x34(r1)
  mr        r3, r31
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804440BC
 * Size:	0001A0
 */
void commandCreateNewFile__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x44(r1)
  addi      r4, r1, 0x10
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  li        r30, 0
  stw       r29, 0x34(r1)
  mr        r29, r3
  lwz       r6, -0x7978(r13)
  bl        -0x2CC0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x48
  addi      r3, r1, 0x10
  bl        -0x36A69C
  li        r30, 0x1
  b         .loc_0x180

.loc_0x48:
  lis       r4, 0x3
  mr        r3, r29
  addi      r5, r4, 0x6000
  li        r4, 0
  bl        -0x1E6C
  cmpwi     r3, 0x1
  beq-      .loc_0x90
  bge-      .loc_0x74
  cmpwi     r3, 0
  bge-      .loc_0x80
  b         .loc_0xB0

.loc_0x74:
  cmpwi     r3, 0x3
  bge-      .loc_0xB0
  b         .loc_0xA0

.loc_0x80:
  mr        r3, r29
  li        r4, 0x2
  bl        -0x1904
  b         .loc_0xCC

.loc_0x90:
  mr        r3, r29
  li        r4, 0x6
  bl        -0x1914
  b         .loc_0xCC

.loc_0xA0:
  mr        r3, r29
  li        r4, 0x7
  bl        -0x1924
  b         .loc_0xCC

.loc_0xB0:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x4C4
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419B44

.loc_0xCC:
  mr        r3, r29
  addi      r4, r1, 0x8
  li        r5, 0
  bl        -0x1A0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF8
  lwz       r3, -0x6514(r13)
  lwz       r5, 0x8(r1)
  lwz       r3, 0x60(r3)
  lwz       r6, 0xC(r1)
  bl        0x2B74

.loc_0xF8:
  mr        r3, r29
  bl        -0x31FC
  cmplwi    r3, 0x2
  bne-      .loc_0x150
  lis       r3, 0x3
  lwz       r4, -0x7978(r13)
  addi      r5, r3, 0x6000
  addi      r6, r1, 0x10
  li        r3, 0
  bl        -0x36A3D8
  mr        r31, r3
  addi      r3, r1, 0x10
  bl        -0x36A788
  cmpwi     r31, 0
  bne-      .loc_0x144
  mr        r3, r29
  li        r4, 0
  bl        .loc_0x1A0
  b         .loc_0x150

.loc_0x144:
  mr        r3, r29
  li        r4, 0xA
  bl        -0x19C8

.loc_0x150:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x174
  li        r30, 0x1
  b         .loc_0x180

.loc_0x174:
  mr        r3, r29
  li        r4, 0xA
  bl        -0x19F8

.loc_0x180:
  lwz       r0, 0x44(r1)
  mr        r3, r30
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x1A0:
*/
}

/*
 * --INFO--
 * Address:	8044425C
 * Size:	000100
 */
void dataFormat__Q34Game10MemoryCard3MgrFQ213MemoryCardMgr9ECardSlot(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x44
  lwz       r5, -0x7978(r13)
  mr        r3, r30
  mr        r4, r31
  bl        -0x2CD4

.loc_0x44:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  mr        r3, r30
  bl        0x1904
  mr        r3, r30
  li        r4, 0
  li        r5, 0x1
  bl        0x1FC

.loc_0x78:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x9C
  mr        r3, r30
  bl        0x1988

.loc_0x9C:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC8
  lwz       r5, -0x7978(r13)
  mr        r3, r30
  mr        r4, r31
  bl        -0x2AD8

.loc_0xC8:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  lwz       r31, 0xC(r1)
  cntlzw    r0, r0
  lwz       r30, 0x8(r1)
  rlwinm    r3,r0,27,5,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void writeBrokenData__Q34Game10MemoryCard3MgrFQ213MemoryCardMgr9ECardSlot(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044435C
 * Size:	000170
 */
void varifyCardStatus__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x34(r1)
  addi      r4, r1, 0x8
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  mr        r28, r3
  lwz       r6, -0x7978(r13)
  bl        -0x2F60
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  mr        r3, r28
  addi      r5, r1, 0x8
  li        r4, 0
  bl        -0x2700
  addi      r3, r1, 0x8
  bl        -0x36A94C

.loc_0x50:
  lbz       r0, 0xD0(r28)
  cmplwi    r0, 0
  beq-      .loc_0x64
  li        r3, 0x1
  b         .loc_0x150

.loc_0x64:
  li        r3, 0x2000
  bl        -0x420418
  li        r4, 0xCD
  mr        r30, r3
  li        r5, 0x2000
  bl        -0x43F320
  li        r31, 0
  mr        r29, r31

.loc_0x84:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xBC
  lwz       r5, -0x7978(r13)
  mr        r3, r28
  mr        r6, r30
  mr        r8, r29
  li        r4, 0
  li        r7, 0x2000
  bl        -0x2978

.loc_0xBC:
  addi      r31, r31, 0x1
  addi      r29, r29, 0x2000
  cmpwi     r31, 0x1B
  blt+      .loc_0x84
  mr        r3, r30
  bl        -0x420378
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x100
  lwz       r5, -0x7978(r13)
  mr        r3, r28
  li        r4, 0
  bl        -0x2E90

.loc_0x100:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x12C
  lwz       r5, -0x7978(r13)
  mr        r3, r28
  li        r4, 0
  bl        -0x2C3C

.loc_0x12C:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cntlzw    r0, r0
  rlwinm    r0,r0,27,5,31
  mr        r3, r0

.loc_0x150:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  lwz       r28, 0x20(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804444CC
 * Size:	0001C0
 */
void commandSaveGameOption__Q34Game10MemoryCard3MgrFbb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x450(r1)
  mflr      r0
  stw       r0, 0x454(r1)
  rlwinm.   r0,r4,0,24,31
  stmw      r25, 0x434(r1)
  mr        r28, r3
  mr        r25, r5
  li        r31, 0
  bne-      .loc_0x34
  li        r4, 0
  bl        0x430
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x198

.loc_0x34:
  lwz       r4, 0xCC(r28)
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x4204C4
  mr.       r30, r3
  bne-      .loc_0x68
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x5DC
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x419EF0

.loc_0x68:
  rlwinm.   r0,r25,0,24,31
  li        r29, -0x1
  li        r26, 0
  bne-      .loc_0xE0
  li        r25, 0
  li        r27, 0x2000

.loc_0x80:
  lwz       r5, -0x7978(r13)
  mr        r3, r28
  mr        r6, r30
  mr        r8, r27
  li        r4, 0
  li        r7, 0x2000
  bl        -0x2800
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xAC
  li        r26, 0x1
  b         .loc_0xE0

.loc_0xAC:
  mr        r3, r28
  mr        r4, r30
  bl        0x13D0
  rlwinm    r0,r3,0,24,31
  cntlzw    r0, r0
  rlwinm.   r0,r0,27,24,31
  beq-      .loc_0xD0
  mr        r29, r25
  b         .loc_0xE0

.loc_0xD0:
  addi      r25, r25, 0x1
  addi      r27, r27, 0x2000
  cmpwi     r25, 0x2
  blt+      .loc_0x80

.loc_0xE0:
  cmpwi     r29, -0x1
  bne-      .loc_0xFC
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  lwz       r3, 0x28(r3)
  addi      r0, r3, 0x1
  rlwinm    r29,r0,0,31,31

.loc_0xFC:
  rlwinm.   r0,r26,0,24,31
  bne-      .loc_0x190
  lwz       r6, -0x6514(r13)
  lis       r5, 0x4F70
  lis       r4, 0x3030
  addi      r3, r1, 0x8
  lwz       r8, 0x60(r6)
  addi      r6, r5, 0x5661
  addi      r0, r4, 0x3032
  addi      r4, r30, 0xC
  lwz       r7, 0x28(r8)
  li        r5, 0x1C00
  addi      r7, r7, 0x1
  stw       r7, 0x28(r8)
  stw       r6, 0x0(r30)
  stw       r0, 0x4(r30)
  lwz       r6, -0x6514(r13)
  lwz       r6, 0x60(r6)
  lwz       r0, 0x28(r6)
  stw       r0, 0x8(r30)
  bl        -0x2ED20
  mr        r3, r28
  addi      r4, r1, 0x8
  bl        0x2B0
  mr        r3, r28
  mr        r4, r30
  bl        0x1394
  stw       r3, 0x1FFC(r30)
  rlwinm    r4,r29,13,0,18
  mr        r3, r28
  mr        r6, r30
  lwz       r5, -0x7978(r13)
  addi      r8, r4, 0x2000
  li        r4, 0
  li        r7, 0x2000
  bl        -0x2BB8
  mr        r31, r3

.loc_0x190:
  mr        r3, r30
  bl        -0x4205AC

.loc_0x198:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x1A8
  lwz       r3, -0x6514(r13)
  bl        -0x21760

.loc_0x1A8:
  mr        r3, r31
  lmw       r25, 0x434(r1)
  lwz       r0, 0x454(r1)
  mtlr      r0
  addi      r1, r1, 0x450
  blr
*/
}

/*
 * --INFO--
 * Address:	8044468C
 * Size:	000248
 */
void commandLoadGameOption__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x460(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x464(r1)
  addi      r4, r1, 0x10
  stmw      r25, 0x444(r1)
  mr        r29, r3
  li        r30, 0
  bl        -0x1F24
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x224
  lwz       r3, -0x77D4(r13)
  bl        -0x420EDC
  lwz       r4, 0xCC(r29)
  mr        r31, r3
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x420688
  cmplwi    r3, 0
  stw       r3, 0x8(r1)
  bne-      .loc_0x70
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x650
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A0B8

.loc_0x70:
  lwz       r4, 0xCC(r29)
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x4206C0
  cmplwi    r3, 0
  stw       r3, 0xC(r1)
  bne-      .loc_0xA8
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x652
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A0F0

.loc_0xA8:
  addi      r27, r1, 0x8
  li        r25, 0
  li        r26, 0
  li        r28, 0x2000

.loc_0xB8:
  lwz       r5, -0x7978(r13)
  mr        r3, r29
  lwz       r6, 0x0(r27)
  mr        r8, r28
  li        r4, 0
  li        r7, 0x2000
  bl        -0x29F8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xE4
  li        r30, 0
  li        r25, 0x1

.loc_0xE4:
  addi      r26, r26, 0x1
  addi      r27, r27, 0x4
  cmpwi     r26, 0x2
  addi      r28, r28, 0x2000
  blt+      .loc_0xB8
  rlwinm.   r0,r25,0,24,31
  bne-      .loc_0x1E8
  lwz       r26, 0x8(r1)
  mr        r3, r29
  lwz       r25, 0xC(r1)
  li        r27, 0
  mr        r4, r26
  bl        0x11B0
  mr        r28, r3
  mr        r3, r29
  mr        r4, r25
  bl        0x11A0
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x158
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x158
  lwz       r3, 0x8(r26)
  lwz       r0, 0x8(r25)
  cmplw     r3, r0
  blt-      .loc_0x150
  mr        r27, r26
  b         .loc_0x184

.loc_0x150:
  mr        r27, r25
  b         .loc_0x184

.loc_0x158:
  rlwinm.   r0,r28,0,24,31
  beq-      .loc_0x170
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x170
  mr        r27, r26
  b         .loc_0x184

.loc_0x170:
  rlwinm.   r0,r28,0,24,31
  bne-      .loc_0x184
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  mr        r27, r25

.loc_0x184:
  cmplwi    r27, 0
  bne-      .loc_0x1A4
  li        r0, 0x1
  stw       r0, 0xD8(r29)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  bl        0x2484
  b         .loc_0x1D4

.loc_0x1A4:
  lwz       r5, -0x6514(r13)
  addi      r3, r1, 0x18
  lwz       r0, 0x8(r27)
  addi      r4, r27, 0xC
  lwz       r6, 0x60(r5)
  li        r30, 0x1
  li        r5, 0x1C00
  stw       r0, 0x28(r6)
  bl        -0x2EF58
  mr        r3, r29
  addi      r4, r1, 0x18
  bl        0xA0

.loc_0x1D4:
  lwz       r3, -0x6514(r13)
  lwz       r5, 0x10(r1)
  lwz       r3, 0x60(r3)
  lwz       r6, 0x14(r1)
  bl        0x24B4

.loc_0x1E8:
  lwz       r3, 0x8(r1)
  bl        -0x4207C4
  lwz       r3, 0xC(r1)
  bl        -0x4207CC
  lwz       r3, -0x77D4(r13)
  bl        -0x4210A8
  cmpw      r31, r3
  beq-      .loc_0x224
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x6AB
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A26C

.loc_0x224:
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  bl        0x25FC
  mr        r3, r30
  lmw       r25, 0x444(r1)
  lwz       r0, 0x464(r1)
  mtlr      r0
  addi      r1, r1, 0x460
  blr
*/
}

/*
 * --INFO--
 * Address:	804448D4
 * Size:	000028
 */
void writeGameOption__Q34Game10MemoryCard3MgrFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  bl        0x2474
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804448FC
 * Size:	000028
 */
void readGameOption__Q34Game10MemoryCard3MgrFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  bl        0x24F8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80444924
 * Size:	000070
 */
void checkSerialNo__Q34Game10MemoryCard3MgrFb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  lwz       r5, -0x6514(r13)
  lwz       r5, 0x60(r5)
  lhz       r0, 0x40(r5)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x40
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x38
  li        r0, 0x3
  stw       r0, 0xD8(r3)

.loc_0x38:
  li        r31, 0x1
  b         .loc_0x58

.loc_0x40:
  addi      r4, r5, 0x30
  li        r5, 0
  bl        0x1E74
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  li        r31, 0x1

.loc_0x58:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80444994
 * Size:	0000D0
 */
void commandSavePlayer__Q34Game10MemoryCard3MgrFScb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r31, r4
  mr        r30, r3
  mr        r27, r5
  extsb.    r0, r31
  li        r28, 0
  li        r3, 0
  blt-      .loc_0x3C
  extsb     r0, r31
  cmpwi     r0, 0x3
  bge-      .loc_0x3C
  li        r3, 0x1

.loc_0x3C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x77A
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A3B0

.loc_0x60:
  lwz       r3, -0x6514(r13)
  li        r29, 0
  lwz       r4, 0x60(r3)
  lhz       r0, 0x40(r4)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x80
  li        r29, 0x1
  b         .loc_0x9C

.loc_0x80:
  mr        r3, r30
  addi      r4, r4, 0x30
  li        r5, 0
  bl        0x1DC0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x9C
  li        r29, 0x1

.loc_0x9C:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0xB8
  mr        r3, r30
  mr        r4, r31
  mr        r5, r27
  bl        .loc_0xD0
  mr        r28, r3

.loc_0xB8:
  mr        r3, r28
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xD0:
*/
}

/*
 * --INFO--
 * Address:	80444A64
 * Size:	000374
 */
void commandSavePlayerNoCheckSerialNo__Q34Game10MemoryCard3MgrFScb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x460(r1)
  mflr      r0
  stw       r0, 0x464(r1)
  stmw      r27, 0x44C(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  li        r30, 0
  lwz       r3, -0x77D4(r13)
  bl        -0x4212A8
  mr        r31, r3
  mr        r3, r27
  addi      r4, r1, 0x10
  li        r5, 0
  bl        -0x2314
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x314
  lis       r3, 0x1
  lwz       r4, 0xCC(r27)
  subi      r3, r3, 0x4000
  li        r5, -0x20
  bl        -0x420A70
  mr.       r30, r3
  bne-      .loc_0x7C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x793
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A49C

.loc_0x7C:
  lwz       r5, -0x6514(r13)
  lis       r4, 0x506C
  lis       r3, 0x3030
  li        r0, 0
  lwz       r6, 0x60(r5)
  addi      r4, r4, 0x5661
  addi      r3, r3, 0x3033
  lwz       r5, 0x18(r6)
  addi      r5, r5, 0x1
  stw       r5, 0x18(r6)
  stw       r4, 0x0(r30)
  stw       r3, 0x4(r30)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  lwz       r3, 0x18(r3)
  stw       r3, 0x10(r30)
  stb       r28, 0x8(r30)
  stb       r0, 0xC(r30)
  stb       r29, 0xD(r30)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  lhz       r0, 0x22(r3)
  sth       r0, 0xE(r30)
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x254
  lwz       r3, 0x40(r3)
  lwz       r3, 0x218(r3)
  addi      r0, r3, 0x1
  stw       r0, 0x14(r30)
  lwz       r4, -0x6514(r13)
  lwz       r3, -0x6B70(r13)
  lwz       r29, 0x60(r4)
  bl        -0x25DC0C
  lwz       r5, -0x6B70(r13)
  lwz       r4, 0x1C(r29)
  lbz       r0, 0x4C(r5)
  add       r29, r4, r3
  cmplwi    r0, 0
  beq-      .loc_0x180
  addi      r3, r5, 0x60
  li        r4, 0x1
  bl        -0x2535D8
  stw       r3, 0x18(r30)
  li        r4, 0
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x2535EC
  stw       r3, 0x1C(r30)
  li        r4, 0x2
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x253600
  stw       r3, 0x20(r30)
  li        r4, 0x4
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x253614
  stw       r3, 0x24(r30)
  li        r4, 0x3
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0x60
  bl        -0x253628
  stw       r3, 0x28(r30)
  b         .loc_0x1E0

.loc_0x180:
  addi      r3, r5, 0xA8
  li        r4, 0x1
  bl        -0x25363C
  stw       r3, 0x18(r30)
  li        r4, 0
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x253650
  stw       r3, 0x1C(r30)
  li        r4, 0x2
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x253664
  stw       r3, 0x20(r30)
  li        r4, 0x4
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x253678
  stw       r3, 0x24(r30)
  li        r4, 0x3
  lwz       r3, -0x6B70(r13)
  addi      r3, r3, 0xA8
  bl        -0x25368C
  stw       r3, 0x28(r30)

.loc_0x1E0:
  lwz       r3, -0x6B70(r13)
  lwz       r0, 0xE8(r3)
  stw       r0, 0x2C(r30)
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x4C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x22C
  addi      r3, r1, 0x18
  bl        -0x319F4
  lwz       r3, -0x6B70(r13)
  addi      r4, r1, 0x18
  addi      r5, r1, 0x8
  bl        -0x25D758
  lwz       r0, 0x20(r1)
  stw       r0, 0x34(r30)
  lwz       r3, 0x8(r1)
  addi      r0, r3, 0x1
  stw       r0, 0x38(r30)
  b         .loc_0x23C

.loc_0x22C:
  li        r3, 0
  li        r0, 0x7B
  stw       r3, 0x34(r30)
  stw       r0, 0x38(r30)

.loc_0x23C:
  lwz       r3, -0x6B70(r13)
  lwz       r3, 0xB0(r3)
  bl        -0x25F3F8
  stw       r3, 0x30(r30)
  stw       r29, 0x3C(r30)
  b         .loc_0x2B4

.loc_0x254:
  lis       r3, 0x804A
  li        r4, 0x7FA
  subi      r3, r3, 0x5234
  addi      r5, r2, 0x2618
  crclr     6, 0x6
  bl        -0x41A68C
  li        r9, 0
  li        r8, 0x1
  stw       r9, 0x14(r30)
  li        r7, 0x2
  li        r6, 0x3
  li        r5, 0x4
  stw       r8, 0x18(r30)
  li        r4, 0x5
  li        r3, 0x3039
  li        r0, 0x63
  stw       r7, 0x1C(r30)
  stw       r6, 0x20(r30)
  stw       r5, 0x24(r30)
  stw       r4, 0x28(r30)
  stw       r3, 0x2C(r30)
  stw       r8, 0x34(r30)
  stw       r0, 0x38(r30)
  stw       r9, 0x30(r30)

.loc_0x2B4:
  lis       r5, 0x1
  addi      r3, r1, 0x24
  addi      r4, r30, 0x40
  subi      r5, r5, 0x4080
  bl        -0x2F430
  mr        r3, r27
  addi      r4, r1, 0x24
  bl        0xBD4
  mr        r3, r27
  mr        r4, r28
  mr        r5, r30
  li        r6, 0x1
  bl        0x7F4
  mr        r0, r3
  mr        r3, r30
  mr        r30, r0
  bl        -0x420CA4
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x314
  lwz       r3, -0x6514(r13)
  lwz       r5, 0x10(r1)
  lwz       r3, 0x60(r3)
  lwz       r6, 0x14(r1)
  bl        0x1FB0

.loc_0x314:
  lwz       r3, -0x77D4(r13)
  bl        -0x42159C
  cmpw      r31, r3
  beq-      .loc_0x340
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x81F
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41A760

.loc_0x340:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x35C
  mr        r3, r27
  li        r4, 0x1
  li        r5, 0
  bl        -0x8EC
  mr        r30, r3

.loc_0x35C:
  mr        r3, r30
  lmw       r27, 0x44C(r1)
  lwz       r0, 0x464(r1)
  mtlr      r0
  addi      r1, r1, 0x460
  blr
*/
}

/*
 * --INFO--
 * Address:	80444DD8
 * Size:	000070
 */
void getPlayerInfo__Q34Game10MemoryCard3MgrFScPQ34Game10MemoryCard16PlayerInfoHeaderPb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        .loc_0x70
  mr        r30, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  li        r31, 0
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  cmpwi     r30, 0
  blt-      .loc_0x54
  cmpwi     r30, 0x4
  bge-      .loc_0x54
  li        r31, 0x1

.loc_0x54:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x70:
*/
}

/*
 * --INFO--
 * Address:	80444E48
 * Size:	0002B0
 */
void getIndexPlayerInfo__Q34Game10MemoryCard3MgrFScPQ34Game10MemoryCard16PlayerInfoHeaderPb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  li        r0, 0
  stmw      r23, 0x4C(r1)
  mr.       r25, r5
  mr        r23, r3
  mr        r24, r4
  mr        r26, r6
  li        r31, -0x1
  li        r29, 0
  li        r28, 0
  stb       r0, 0x14(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x44(r1)
  beq-      .loc_0x78
  mr        r3, r25
  li        r4, 0xCD
  li        r5, 0x40
  bl        -0x43FE08

.loc_0x78:
  li        r30, 0x1
  b         .loc_0x290

.loc_0x80:
  addi      r28, r28, 0x1
  cmplwi    r28, 0x5
  blt-      .loc_0xA8
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x873
  subi      r5, r5, 0x519C
  crclr     6, 0x6
  bl        -0x41A8AC

.loc_0xA8:
  li        r30, 0
  li        r27, 0

.loc_0xB0:
  mr        r3, r23
  mr        r4, r27
  mr        r5, r24
  addi      r6, r1, 0x8
  bl        0xEF4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x19C
  cmpwi     r31, -0x1
  li        r29, 0x1
  bne-      .loc_0x168
  cmplwi    r25, 0
  mr        r31, r27
  beq-      .loc_0x284
  lwz       r0, 0x8(r1)
  stw       r0, 0x0(r25)
  lwz       r0, 0xC(r1)
  stw       r0, 0x4(r25)
  lbz       r0, 0x10(r1)
  stb       r0, 0x8(r25)
  lwz       r3, 0x14(r1)
  lwz       r0, 0x18(r1)
  stw       r3, 0xC(r25)
  stw       r0, 0x10(r25)
  lwz       r3, 0x1C(r1)
  lwz       r0, 0x20(r1)
  stw       r3, 0x14(r25)
  stw       r0, 0x18(r25)
  lwz       r3, 0x24(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0x1C(r25)
  stw       r0, 0x20(r25)
  lwz       r3, 0x2C(r1)
  lwz       r0, 0x30(r1)
  stw       r3, 0x24(r25)
  stw       r0, 0x28(r25)
  lwz       r3, 0x34(r1)
  lwz       r0, 0x38(r1)
  stw       r3, 0x2C(r25)
  stw       r0, 0x30(r25)
  lwz       r3, 0x3C(r1)
  lwz       r0, 0x40(r1)
  stw       r3, 0x34(r25)
  stw       r0, 0x38(r25)
  lwz       r0, 0x44(r1)
  stw       r0, 0x3C(r25)
  b         .loc_0x284

.loc_0x168:
  mr        r3, r23
  mr        r4, r24
  mr        r5, r26
  bl        0x1368
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x18C
  li        r31, -0x1
  li        r30, 0x1
  b         .loc_0x290

.loc_0x18C:
  li        r0, 0x2
  li        r31, -0x1
  stw       r0, 0xD8(r23)
  b         .loc_0x290

.loc_0x19C:
  cmplwi    r25, 0
  beq-      .loc_0x284
  lwz       r3, 0x0(r25)
  subis     r4, r3, 0x506C
  cmplwi    r4, 0x5661
  beq-      .loc_0x284
  lbz       r3, 0x10(r1)
  extsb     r0, r24
  li        r5, 0
  extsb     r3, r3
  cmpw      r3, r0
  bne-      .loc_0x1F8
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0x1DC
  li        r5, 0x1
  b         .loc_0x1F8

.loc_0x1DC:
  cmplwi    r4, 0x496E
  beq-      .loc_0x1F8
  lwz       r3, 0x8(r1)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x496E
  bne-      .loc_0x1F8
  li        r5, 0x1

.loc_0x1F8:
  rlwinm.   r0,r5,0,24,31
  beq-      .loc_0x284
  lwz       r0, 0x8(r1)
  li        r29, 0x1
  stw       r0, 0x0(r25)
  lwz       r0, 0xC(r1)
  stw       r0, 0x4(r25)
  lbz       r0, 0x10(r1)
  stb       r0, 0x8(r25)
  lwz       r3, 0x14(r1)
  lwz       r0, 0x18(r1)
  stw       r3, 0xC(r25)
  stw       r0, 0x10(r25)
  lwz       r3, 0x1C(r1)
  lwz       r0, 0x20(r1)
  stw       r3, 0x14(r25)
  stw       r0, 0x18(r25)
  lwz       r3, 0x24(r1)
  lwz       r0, 0x28(r1)
  stw       r3, 0x1C(r25)
  stw       r0, 0x20(r25)
  lwz       r3, 0x2C(r1)
  lwz       r0, 0x30(r1)
  stw       r3, 0x24(r25)
  stw       r0, 0x28(r25)
  lwz       r3, 0x34(r1)
  lwz       r0, 0x38(r1)
  stw       r3, 0x2C(r25)
  stw       r0, 0x30(r25)
  lwz       r3, 0x3C(r1)
  lwz       r0, 0x40(r1)
  stw       r3, 0x34(r25)
  stw       r0, 0x38(r25)
  lwz       r0, 0x44(r1)
  stw       r0, 0x3C(r25)

.loc_0x284:
  addi      r27, r27, 0x1
  cmpwi     r27, 0x4
  blt+      .loc_0xB0

.loc_0x290:
  rlwinm.   r0,r30,0,24,31
  bne+      .loc_0x80
  mr        r3, r31
  lmw       r23, 0x4C(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	804450F8
 * Size:	00019C
 */
void commandLoadPlayer__Q34Game10MemoryCard3MgrFSc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x440(r1)
  mflr      r0
  stw       r0, 0x444(r1)
  stw       r31, 0x43C(r1)
  mr        r31, r4
  extsb.    r0, r31
  stw       r30, 0x438(r1)
  mr        r30, r3
  li        r3, 0
  stw       r29, 0x434(r1)
  blt-      .loc_0x3C
  extsb     r0, r31
  cmpwi     r0, 0x3
  bge-      .loc_0x3C
  li        r3, 0x1

.loc_0x3C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x8D8
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41AB14

.loc_0x60:
  mr        r3, r30
  bl        -0xAD0
  lwz       r0, 0xD8(r30)
  cmpwi     r0, 0x1
  bne-      .loc_0x7C
  li        r0, 0
  stw       r0, 0xD8(r30)

.loc_0x7C:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x160
  mr        r3, r30
  addi      r4, r1, 0x8
  li        r5, 0
  bl        -0x2A14
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  lis       r3, 0x1
  lwz       r4, 0xCC(r30)
  subi      r3, r3, 0x4000
  li        r5, -0x20
  bl        -0x421170
  mr.       r29, r3
  bne-      .loc_0xE8
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x8F2
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41AB9C

.loc_0xE8:
  lwz       r3, -0x6514(r13)
  lwz       r5, 0x8(r1)
  lwz       r3, 0x60(r3)
  lwz       r6, 0xC(r1)
  bl        0x1B34
  mr        r3, r30
  mr        r4, r31
  mr        r5, r29
  bl        0x130
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x158
  lis       r5, 0x1
  addi      r3, r1, 0x10
  addi      r4, r29, 0x40
  subi      r5, r5, 0x4080
  bl        -0x2F924
  mr        r3, r30
  addi      r4, r1, 0x10
  bl        0x704
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  stb       r31, 0x20(r3)
  lwz       r0, 0x10(r29)
  stw       r0, 0x18(r3)
  lwz       r0, 0x3C(r29)
  stw       r0, 0x1C(r3)
  lhz       r0, 0xE(r29)
  sth       r0, 0x22(r3)

.loc_0x158:
  mr        r3, r29
  bl        -0x4211A0

.loc_0x160:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  lwz       r31, 0x43C(r1)
  cntlzw    r0, r0
  lwz       r30, 0x438(r1)
  rlwinm    r3,r0,27,5,31
  lwz       r0, 0x444(r1)
  lwz       r29, 0x434(r1)
  mtlr      r0
  addi      r1, r1, 0x440
  blr
*/
}

/*
 * --INFO--
 * Address:	80445294
 * Size:	00009C
 */
void loadPlayerForNoCard__Q34Game10MemoryCard3MgrFSc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  extsb.    r0, r31
  blt-      .loc_0x30
  extsb     r0, r31
  cmpwi     r0, 0x3
  bge-      .loc_0x30
  li        r3, 0x1

.loc_0x30:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x94E
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41ACA4

.loc_0x54:
  lwz       r3, -0x6514(r13)
  extsb     r4, r31
  lwz       r3, 0x60(r3)
  stb       r31, 0x20(r3)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  bl        0x1CB4
  lwz       r3, -0x6B70(r13)
  bl        -0x25E848
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x60(r3)
  bl        0x1A28
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445330
 * Size:	000178
 */
void loadPlayerProc__Q34Game10MemoryCard3MgrFScPUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stw       r31, 0x5C(r1)
  li        r31, 0
  stw       r30, 0x58(r1)
  mr        r30, r3
  li        r3, 0
  stw       r29, 0x54(r1)
  mr        r29, r5
  stw       r28, 0x50(r1)
  mr        r28, r4
  extsb.    r0, r28
  blt-      .loc_0x48
  extsb     r0, r28
  cmpwi     r0, 0x3
  bge-      .loc_0x48
  li        r3, 0x1

.loc_0x48:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x6C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x967
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41AD58

.loc_0x6C:
  li        r0, 0
  mr        r3, r30
  stb       r0, 0x14(r1)
  mr        r4, r28
  addi      r5, r1, 0x8
  li        r6, 0
  stw       r0, 0x18(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x44(r1)
  bl        -0x59C
  mr.       r0, r3
  blt-      .loc_0x11C
  cmpwi     r0, 0x4
  bge-      .loc_0x11C
  lis       r3, 0x1
  lwz       r5, -0x7978(r13)
  subi      r7, r3, 0x4000
  mr        r3, r30
  mullw     r8, r0, r7
  mr        r6, r29
  li        r4, 0
  addi      r8, r8, 0x6000
  bl        -0x36B4
  rlwinm.   r0,r3,0,24,31
  mr        r31, r3
  beq-      .loc_0x154
  mr        r3, r30
  mr        r4, r29
  bl        0x5F8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x154
  li        r0, 0x2
  li        r31, 0
  stw       r0, 0xD8(r30)
  b         .loc_0x154

.loc_0x11C:
  lwz       r3, 0x8(r1)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x496E
  bne-      .loc_0x148
  lwz       r3, -0x6514(r13)
  extsb     r4, r28
  lwz       r3, 0x60(r3)
  bl        0x1B4C
  lwz       r3, -0x6B70(r13)
  bl        -0x25E9B0
  b         .loc_0x154

.loc_0x148:
  li        r0, 0x2
  li        r31, 0
  stw       r0, 0xD8(r30)

.loc_0x154:
  lwz       r0, 0x64(r1)
  mr        r3, r31
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  lwz       r28, 0x50(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	804454A8
 * Size:	000094
 */
void commandDeletePlayer__Q34Game10MemoryCard3MgrFSc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, 0
  li        r6, 0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x68C
  mr.       r4, r3
  blt-      .loc_0x54
  cmpwi     r4, 0x4
  bge-      .loc_0x54
  mr        r3, r29
  extsb     r5, r30
  bl        0x7FC
  mr        r31, r3
  b         .loc_0x74

.loc_0x54:
  mr        r3, r29
  mr        r4, r30
  li        r5, 0
  bl        0xE1C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x74
  li        r0, 0x2
  stw       r0, 0xD8(r29)

.loc_0x74:
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8044553C
 * Size:	00019C
 */
void savePlayerProc__Q34Game10MemoryCard3MgrFScPUcb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r30, r4
  li        r4, -0x1
  mr        r29, r3
  extsb.    r0, r30
  mr        r28, r5
  mr        r27, r6
  li        r31, 0
  li        r3, 0
  stb       r4, 0x8(r1)
  blt-      .loc_0x48
  extsb     r0, r30
  cmpwi     r0, 0x3
  bge-      .loc_0x48
  li        r3, 0x1

.loc_0x48:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x6C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x9CA
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41AF64

.loc_0x6C:
  lwz       r7, 0x10(r28)
  mr        r3, r29
  mr        r6, r30
  mr        r8, r27
  addi      r4, r1, 0xC
  addi      r5, r1, 0x8
  bl        0x9E4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x184
  lwz       r0, 0xC(r1)
  cmpwi     r0, 0
  blt-      .loc_0xA4
  cmpwi     r0, 0x4
  blt-      .loc_0xC0

.loc_0xA4:
  li        r0, 0x2
  mr        r3, r29
  stw       r0, 0xD8(r29)
  mr        r4, r30
  li        r5, 0
  bl        0xD30
  b         .loc_0x184

.loc_0xC0:
  mr        r3, r29
  mr        r4, r28
  bl        0x498
  addis     r5, r28, 0x1
  lis       r4, 0x1
  stw       r3, -0x4004(r5)
  subi      r7, r4, 0x4000
  mr        r3, r29
  mr        r6, r28
  lwz       r0, 0xC(r1)
  li        r4, 0
  lwz       r5, -0x7978(r13)
  mullw     r8, r0, r7
  addi      r8, r8, 0x6000
  bl        -0x3B98
  lbz       r4, 0x8(r1)
  mr        r31, r3
  mr        r28, r30
  extsb.    r0, r4
  blt-      .loc_0x120
  extsb     r0, r4
  cmpwi     r0, 0x3
  bge-      .loc_0x120
  mr        r28, r4

.loc_0x120:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x184
  li        r27, 0

.loc_0x12C:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x178
  lwz       r0, 0xC(r1)
  cmpw      r27, r0
  beq-      .loc_0x178
  mr        r3, r29
  mr        r4, r27
  mr        r5, r30
  li        r6, 0
  bl        0x770
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x178
  mr        r3, r29
  mr        r4, r27
  mr        r5, r28
  bl        0x648
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x178
  li        r31, 0

.loc_0x178:
  addi      r27, r27, 0x1
  cmpwi     r27, 0x4
  blt+      .loc_0x12C

.loc_0x184:
  mr        r3, r31
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804456D8
 * Size:	000068
 */
void commandCheckSerialNo__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  lwz       r4, -0x6514(r13)
  lwz       r4, 0x60(r4)
  lhz       r0, 0x40(r4)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x38
  li        r0, 0x3
  li        r31, 0x1
  stw       r0, 0xD8(r3)
  b         .loc_0x50

.loc_0x38:
  addi      r4, r4, 0x30
  li        r5, 0
  bl        0x10C8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  li        r31, 0x1

.loc_0x50:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445740
 * Size:	0001C8
 */
void commandCopyPlayer__Q34Game10MemoryCard3MgrFScSc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stmw      r27, 0x4C(r1)
  mr        r27, r3
  mr        r28, r4
  lis       r3, 0x1
  mr        r29, r5
  li        r5, -0x20
  subi      r3, r3, 0x4000
  lwz       r4, 0xCC(r27)
  bl        -0x421724
  mr.       r30, r3
  bne-      .loc_0x54
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xA5A
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B150

.loc_0x54:
  extsb.    r0, r28
  li        r31, 0
  mr        r3, r31
  blt-      .loc_0x74
  extsb     r0, r28
  cmpwi     r0, 0x3
  bge-      .loc_0x74
  li        r3, 0x1

.loc_0x74:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x98
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0x967
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B194

.loc_0x98:
  li        r0, 0
  mr        r3, r27
  stb       r0, 0x14(r1)
  mr        r4, r28
  addi      r5, r1, 0x8
  li        r6, 0
  stw       r0, 0x18(r1)
  stw       r0, 0x1C(r1)
  stw       r0, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r0, 0x28(r1)
  stw       r0, 0x2C(r1)
  stw       r0, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r0, 0x38(r1)
  stw       r0, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r0, 0x44(r1)
  bl        -0x9D8
  mr.       r0, r3
  blt-      .loc_0x148
  cmpwi     r0, 0x4
  bge-      .loc_0x148
  lis       r3, 0x1
  lwz       r5, -0x7978(r13)
  subi      r7, r3, 0x4000
  mr        r3, r27
  mullw     r8, r0, r7
  mr        r6, r30
  li        r4, 0
  addi      r8, r8, 0x6000
  bl        -0x3AF0
  rlwinm.   r0,r3,0,24,31
  mr        r31, r3
  beq-      .loc_0x180
  mr        r3, r27
  mr        r4, r30
  bl        0x1BC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x180
  li        r0, 0x2
  li        r31, 0
  stw       r0, 0xD8(r27)
  b         .loc_0x180

.loc_0x148:
  lwz       r3, 0x8(r1)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x496E
  bne-      .loc_0x174
  lwz       r3, -0x6514(r13)
  extsb     r4, r28
  lwz       r3, 0x60(r3)
  bl        0x1710
  lwz       r3, -0x6B70(r13)
  bl        -0x25EDEC
  b         .loc_0x180

.loc_0x174:
  li        r0, 0x2
  li        r31, 0
  stw       r0, 0xD8(r27)

.loc_0x180:
  rlwinm.   r0,r31,0,24,31
  mr        r28, r31
  beq-      .loc_0x1A8
  stb       r29, 0x8(r30)
  mr        r3, r27
  mr        r4, r29
  mr        r5, r30
  li        r6, 0
  bl        -0x3A4
  mr        r28, r3

.loc_0x1A8:
  mr        r3, r30
  bl        -0x421838
  mr        r3, r28
  lmw       r27, 0x4C(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	80445908
 * Size:	000024
 */
void writePlayer__Q34Game10MemoryCard3MgrFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, -0x6B70(r13)
  bl        -0x228924
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8044592C
 * Size:	000024
 */
void readPlayer__Q34Game10MemoryCard3MgrFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, -0x6B70(r13)
  bl        -0x228208
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445950
 * Size:	000074
 */
void checkOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r4
  lbz       r0, 0xD0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x58
  bl        0x70
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  lwz       r3, 0x0(r30)
  subis     r0, r3, 0x4F70
  cmplwi    r0, 0x5661
  bne-      .loc_0x58
  lwz       r3, 0x4(r30)
  subis     r0, r3, 0x3030
  cmplwi    r0, 0x3032
  bne-      .loc_0x58
  li        r31, 0x1

.loc_0x58:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804459C4
 * Size:	000024
 */
void calcCheckSumOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x1FFC
  stw       r0, 0x14(r1)
  bl        -0x3344
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804459E8
 * Size:	000040
 */
void testCheckSumOptionInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10OptionInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0x1FFC
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  bl        -0x3370
  lwz       r0, 0x1FFC(r31)
  sub       r0, r3, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445A28
 * Size:	000074
 */
void checkPlayerInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10PlayerInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r4
  lbz       r0, 0xD0(r3)
  cmplwi    r0, 0
  beq-      .loc_0x58
  bl        0x74
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  lwz       r3, 0x0(r30)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x58
  lwz       r3, 0x4(r30)
  subis     r0, r3, 0x3030
  cmplwi    r0, 0x3033
  bne-      .loc_0x58
  li        r31, 0x1

.loc_0x58:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445A9C
 * Size:	000028
 */
void calcCheckSumPlayerInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10PlayerInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x1
  stw       r0, 0x14(r1)
  subi      r5, r5, 0x4004
  bl        -0x3420
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445AC4
 * Size:	000048
 */
void testCheckSumPlayerInfo__Q34Game10MemoryCard3MgrFPQ34Game10MemoryCard10PlayerInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x1
  stw       r0, 0x14(r1)
  subi      r5, r5, 0x4004
  stw       r31, 0xC(r1)
  mr        r31, r4
  bl        -0x3450
  addis     r4, r31, 0x1
  lwz       r0, -0x4004(r4)
  sub       r0, r3, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445B0C
 * Size:	0000B8
 */
void getCardStatus__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x4B68
  cmplwi    r3, 0x2
  bne-      .loc_0x90
  lwz       r0, 0xD8(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0x60
  bge-      .loc_0x44
  cmpwi     r0, 0
  beq-      .loc_0x50
  bge-      .loc_0x58
  b         .loc_0x70

.loc_0x44:
  cmpwi     r0, 0x4
  bge-      .loc_0x70
  b         .loc_0x68

.loc_0x50:
  li        r31, 0x2
  b         .loc_0x9C

.loc_0x58:
  li        r31, 0xC
  b         .loc_0x9C

.loc_0x60:
  li        r31, 0xD
  b         .loc_0x9C

.loc_0x68:
  li        r31, 0xE
  b         .loc_0x9C

.loc_0x70:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB10
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B554
  b         .loc_0x9C

.loc_0x90:
  mr        r3, r30
  bl        -0x4BE4
  mr        r31, r3

.loc_0x9C:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80445BC4
 * Size:	0000B8
 */
void writeInvalidGameOption__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r5, -0x20
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  li        r3, 0x2000
  lwz       r4, 0xCC(r27)
  bl        -0x421B9C
  mr.       r29, r3
  bne-      .loc_0x48
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB29
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B5C8

.loc_0x48:
  lis       r3, 0x4F70
  li        r30, 0x1
  addi      r0, r3, 0x496E
  li        r28, 0
  stw       r0, 0x0(r29)
  li        r31, 0x2000

.loc_0x60:
  lwz       r5, -0x7978(r13)
  mr        r3, r27
  mr        r6, r29
  mr        r8, r31
  li        r4, 0
  li        r7, 0x2000
  bl        -0x41A0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88
  li        r30, 0

.loc_0x88:
  addi      r28, r28, 0x1
  addi      r31, r31, 0x2000
  cmpwi     r28, 0x2
  blt+      .loc_0x60
  mr        r3, r29
  bl        -0x421BAC
  mr        r3, r30
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80445C7C
 * Size:	000070
 */
void writeInvalidPlayerInfoAll__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0x1
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3

.loc_0x24:
  subi      r0, r30, 0x1
  mr        r3, r29
  mr        r4, r30
  extsb     r5, r0
  bl        .loc_0x70
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x44
  li        r31, 0

.loc_0x44:
  addi      r30, r30, 0x1
  cmpwi     r30, 0x4
  blt+      .loc_0x24
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x70:
*/
}

/*
 * --INFO--
 * Address:	80445CEC
 * Size:	000110
 */
void writeInvalidPlayerInfo__Q34Game10MemoryCard3MgrFiSc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr.       r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  blt-      .loc_0x3C
  cmpwi     r29, 0x4
  bge-      .loc_0x3C
  li        r0, 0x1

.loc_0x3C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB6A
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B708

.loc_0x60:
  lwz       r4, 0xCC(r28)
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x421D10
  mr.       r31, r3
  bne-      .loc_0x94
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB6D
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B73C

.loc_0x94:
  mr        r3, r31
  li        r4, 0xCD
  li        r5, 0x2000
  bl        -0x440CD8
  lis       r3, 0x506C
  lis       r4, 0x1
  addi      r5, r3, 0x496E
  mr        r3, r28
  subi      r0, r4, 0x4000
  stw       r5, 0x0(r31)
  mullw     r8, r29, r0
  mr        r6, r31
  stb       r30, 0x8(r31)
  li        r4, 0
  li        r7, 0x2000
  lwz       r5, -0x7978(r13)
  addi      r8, r8, 0x6000
  bl        -0x4328
  mr        r0, r3
  mr        r3, r31
  mr        r31, r0
  bl        -0x421D20
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80445DFC
 * Size:	0001A8
 */
void checkPlayerNoPlayerInfo__Q34Game10MemoryCard3MgrFiScPQ34Game10MemoryCard16PlayerInfoHeader(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r25, 0x24(r1)
  mr        r26, r4
  mr        r28, r5
  mr        r29, r6
  mr        r25, r3
  addi      r4, r1, 0x8
  li        r31, 0
  li        r5, 0
  lwz       r0, -0x7978(r13)
  mr        r27, r0
  mr        r6, r0
  bl        -0x4A0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  mr        r3, r25
  addi      r5, r1, 0x8
  li        r4, 0
  bl        -0x41AC
  addi      r3, r1, 0x8
  bl        -0x36C3F8

.loc_0x5C:
  lbz       r0, 0xD0(r25)
  cmplwi    r0, 0
  beq-      .loc_0x188
  lwz       r4, 0xCC(r25)
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x421E28
  mr.       r30, r3
  bne-      .loc_0x9C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB9F
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41B854

.loc_0x9C:
  lis       r4, 0x1
  mr        r3, r25
  subi      r0, r4, 0x4000
  mr        r5, r27
  mullw     r8, r26, r0
  mr        r6, r30
  li        r4, 0
  li        r7, 0x200
  addi      r8, r8, 0x6000
  bl        -0x4158
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x17C
  cmplwi    r29, 0
  beq-      .loc_0x154
  lwz       r0, 0x0(r30)
  stw       r0, 0x0(r29)
  lwz       r0, 0x4(r30)
  stw       r0, 0x4(r29)
  lbz       r0, 0x8(r30)
  stb       r0, 0x8(r29)
  lwz       r3, 0xC(r30)
  lwz       r0, 0x10(r30)
  stw       r3, 0xC(r29)
  stw       r0, 0x10(r29)
  lwz       r3, 0x14(r30)
  lwz       r0, 0x18(r30)
  stw       r3, 0x14(r29)
  stw       r0, 0x18(r29)
  lwz       r3, 0x1C(r30)
  lwz       r0, 0x20(r30)
  stw       r3, 0x1C(r29)
  stw       r0, 0x20(r29)
  lwz       r3, 0x24(r30)
  lwz       r0, 0x28(r30)
  stw       r3, 0x24(r29)
  stw       r0, 0x28(r29)
  lwz       r3, 0x2C(r30)
  lwz       r0, 0x30(r30)
  stw       r3, 0x2C(r29)
  stw       r0, 0x30(r29)
  lwz       r3, 0x34(r30)
  lwz       r0, 0x38(r30)
  stw       r3, 0x34(r29)
  stw       r0, 0x38(r29)
  lwz       r0, 0x3C(r30)
  stw       r0, 0x3C(r29)

.loc_0x154:
  lbz       r3, 0x8(r30)
  extsb     r0, r28
  extsb     r3, r3
  cmpw      r3, r0
  bne-      .loc_0x17C
  lwz       r3, 0x0(r30)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x17C
  li        r31, 0x1

.loc_0x17C:
  mr        r3, r30
  bl        -0x421EC8
  b         .loc_0x190

.loc_0x188:
  li        r0, -0x1
  stw       r0, 0x0(r29)

.loc_0x190:
  mr        r3, r31
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void loadPlayerHeaderProc__Q34Game10MemoryCard3MgrFiPUc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80445FA4
 * Size:	000380
 */
void getIndexInvalidPlayerInfo__Q34Game10MemoryCard3MgrFPiPScScUlb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  li        r10, -0x1
  lis       r9, 0xCDCE
  stw       r0, 0x84(r1)
  subi      r0, r9, 0x3233
  stmw      r15, 0x3C(r1)
  mr        r25, r3
  mr        r15, r4
  lis       r3, 0x804A
  mr        r26, r5
  stw       r10, 0x24(r1)
  subi      r23, r3, 0x5248
  mr        r27, r6
  stw       r0, 0x14(r1)
  mr        r28, r7
  mr        r29, r8
  addi      r19, r1, 0x24
  stw       r10, 0x28(r1)
  addi      r18, r1, 0x14
  li        r31, 0x1
  li        r30, -0x1
  stw       r0, 0x18(r1)
  li        r3, 0x200
  li        r5, -0x20
  stw       r10, 0x2C(r1)
  stw       r0, 0x1C(r1)
  stw       r10, 0x30(r1)
  stw       r0, 0x20(r1)
  lwz       r4, 0xCC(r25)
  bl        -0x421FD4
  mr.       r17, r3
  bne-      .loc_0x98
  addi      r3, r23, 0x14
  addi      r5, r23, 0x30
  li        r4, 0xBFF
  crclr     6, 0x6
  bl        -0x41B9F8

.loc_0x98:
  mr        r21, r19
  mr        r20, r18
  extsb     r24, r27
  li        r16, 0
  li        r22, 0x6000

.loc_0xAC:
  lwz       r5, -0x7978(r13)
  mr        r3, r25
  mr        r6, r17
  mr        r8, r22
  li        r4, 0
  li        r7, 0x200
  bl        -0x4304
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x170
  lbz       r0, 0x8(r17)
  cmpwi     r30, -0x1
  lwz       r3, 0x0(r17)
  extsb     r4, r0
  stw       r4, 0x0(r21)
  stw       r3, 0x0(r20)
  bne-      .loc_0x10C
  extsb     r0, r27
  cmpw      r4, r0
  bne-      .loc_0x10C
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x10C
  stb       r27, 0x0(r26)
  mr        r30, r16

.loc_0x10C:
  lbz       r0, 0x8(r17)
  extsb     r0, r0
  cmpw      r0, r24
  bne-      .loc_0x178
  lwz       r3, 0x0(r17)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x178
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x178
  lwz       r6, 0x10(r17)
  cmplw     r6, r28
  blt-      .loc_0x178
  cmplwi    r28, 0x1
  beq-      .loc_0x160
  mr        r7, r28
  addi      r3, r23, 0x14
  addi      r5, r23, 0xC4
  li        r4, 0xC4C
  crclr     6, 0x6
  bl        -0x41BAC0

.loc_0x160:
  li        r0, 0x3
  li        r31, 0
  stw       r0, 0xD8(r25)
  b         .loc_0x194

.loc_0x170:
  li        r31, 0
  b         .loc_0x194

.loc_0x178:
  addi      r16, r16, 0x1
  addis     r22, r22, 0x1
  cmpwi     r16, 0x4
  addi      r21, r21, 0x4
  subi      r22, r22, 0x4000
  addi      r20, r20, 0x4
  blt+      .loc_0xAC

.loc_0x194:
  mr        r3, r17
  bl        -0x422088
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x364
  cmpwi     r30, -0x1
  bne-      .loc_0x364
  li        r6, -0x1
  li        r0, 0x4
  mr        r3, r19
  mr        r4, r18
  stw       r6, 0x8(r1)
  li        r5, 0
  stw       r6, 0xC(r1)
  stw       r6, 0x10(r1)
  mtctr     r0

.loc_0x1D0:
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0
  blt-      .loc_0x294
  cmpwi     r0, 0x3
  bge-      .loc_0x294
  rlwinm    r0,r0,2,0,29
  addi      r6, r1, 0x8
  lwzx      r7, r6, r0
  cmpwi     r7, -0x1
  bne-      .loc_0x200
  stwx      r5, r6, r0
  b         .loc_0x294

.loc_0x200:
  lwz       r8, 0x0(r4)
  subis     r0, r8, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x230
  rlwinm    r0,r7,2,0,29
  addi      r6, r1, 0x14
  lwzx      r6, r6, r0
  subis     r0, r6, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x230
  mr        r30, r7
  b         .loc_0x284

.loc_0x230:
  subis     r0, r8, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x25C
  rlwinm    r0,r7,2,0,29
  addi      r6, r1, 0x14
  lwzx      r6, r6, r0
  subis     r0, r6, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x25C
  mr        r30, r5
  b         .loc_0x284

.loc_0x25C:
  subis     r0, r8, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x284
  rlwinm    r0,r7,2,0,29
  addi      r6, r1, 0x14
  lwzx      r6, r6, r0
  subis     r0, r6, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x284
  mr        r30, r5

.loc_0x284:
  cmpwi     r30, -0x1
  beq-      .loc_0x294
  stb       r27, 0x0(r26)
  b         .loc_0x2A4

.loc_0x294:
  addi      r3, r3, 0x4
  addi      r4, r4, 0x4
  addi      r5, r5, 0x1
  bdnz+     .loc_0x1D0

.loc_0x2A4:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0x364
  cmpwi     r30, -0x1
  bne-      .loc_0x364
  li        r0, 0x2
  li        r4, 0
  mtctr     r0

.loc_0x2C0:
  lwz       r0, 0x0(r19)
  cmpwi     r0, 0
  blt-      .loc_0x2D4
  cmpwi     r0, 0x2
  ble-      .loc_0x2DC

.loc_0x2D4:
  mr        r30, r4
  b         .loc_0x2F8

.loc_0x2DC:
  lwz       r3, 0x0(r18)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x2F8
  cmplwi    r0, 0x496E
  beq-      .loc_0x2F8
  mr        r30, r4

.loc_0x2F8:
  cmpwi     r30, -0x1
  beq-      .loc_0x308
  stb       r27, 0x0(r26)
  b         .loc_0x364

.loc_0x308:
  lwz       r0, 0x4(r19)
  addi      r4, r4, 0x1
  cmpwi     r0, 0
  blt-      .loc_0x320
  cmpwi     r0, 0x2
  ble-      .loc_0x328

.loc_0x320:
  mr        r30, r4
  b         .loc_0x344

.loc_0x328:
  lwz       r3, 0x4(r18)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  beq-      .loc_0x344
  cmplwi    r0, 0x496E
  beq-      .loc_0x344
  mr        r30, r4

.loc_0x344:
  cmpwi     r30, -0x1
  beq-      .loc_0x354
  stb       r27, 0x0(r26)
  b         .loc_0x364

.loc_0x354:
  addi      r19, r19, 0x8
  addi      r18, r18, 0x8
  addi      r4, r4, 0x1
  bdnz+     .loc_0x2C0

.loc_0x364:
  stw       r30, 0x0(r15)
  mr        r3, r31
  lmw       r15, 0x3C(r1)
  lwz       r0, 0x84(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	80446324
 * Size:	0004BC
 */
void modifyPlayerInfo__Q34Game10MemoryCard3MgrFScPb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stmw      r19, 0x2C(r1)
  mr.       r23, r5
  mr        r31, r3
  mr        r26, r4
  beq-      .loc_0x28
  li        r0, 0
  stb       r0, 0x0(r23)

.loc_0x28:
  li        r3, 0
  li        r0, -0x1
  addi      r27, r1, 0xC
  stw       r3, 0x1C(r1)
  mr        r24, r27
  li        r25, 0
  stb       r3, 0x8(r1)
  li        r22, 0x6000
  lis       r20, 0x1
  stw       r0, 0x10(r1)
  stw       r3, 0x20(r1)
  stb       r3, 0x9(r1)
  stw       r0, 0x14(r1)
  stw       r3, 0x24(r1)
  stb       r3, 0xA(r1)
  stw       r0, 0x18(r1)
  stb       r3, 0xC(r1)
  stb       r3, 0xD(r1)
  stb       r3, 0xE(r1)
  stb       r3, 0xF(r1)

.loc_0x78:
  lwz       r4, 0xCC(r31)
  subi      r3, r20, 0x4000
  li        r5, -0x20
  bl        -0x422360
  mr.       r28, r3
  bne-      .loc_0xAC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xD75
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41BD8C

.loc_0xAC:
  lwz       r5, -0x7978(r13)
  mr        r3, r31
  mr        r6, r28
  mr        r8, r22
  subi      r7, r20, 0x4000
  li        r4, 0
  bl        -0x4684
  rlwinm.   r0,r3,0,24,31
  mr        r29, r3
  beq-      .loc_0x214
  lbz       r0, 0xD0(r31)
  li        r19, 0
  mr        r21, r19
  cmplwi    r0, 0
  mr        r30, r19
  beq-      .loc_0x114
  lis       r5, 0x1
  mr        r3, r31
  mr        r4, r28
  subi      r5, r5, 0x4004
  bl        -0x3D90
  addis     r4, r28, 0x1
  lwz       r0, -0x4004(r4)
  cmplw     r0, r3
  bne-      .loc_0x114
  li        r30, 0x1

.loc_0x114:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x130
  lwz       r3, 0x0(r28)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x5661
  bne-      .loc_0x130
  li        r21, 0x1

.loc_0x130:
  rlwinm.   r0,r21,0,24,31
  beq-      .loc_0x14C
  lwz       r3, 0x4(r28)
  subis     r0, r3, 0x3030
  cmplwi    r0, 0x3033
  bne-      .loc_0x14C
  li        r19, 0x1

.loc_0x14C:
  rlwinm.   r0,r19,0,24,31
  beq-      .loc_0x1B4
  lbz       r0, 0x8(r28)
  addi      r7, r1, 0x1C
  extsb     r0, r0
  rlwinm    r4,r0,2,0,29
  lwzx      r3, r7, r4
  cmplwi    r3, 0
  beq-      .loc_0x17C
  lwz       r0, 0x10(r28)
  cmplw     r0, r3
  ble-      .loc_0x1A8

.loc_0x17C:
  addi      r6, r1, 0x10
  lwzx      r5, r6, r4
  cmpwi     r5, -0x1
  beq-      .loc_0x198
  addi      r3, r1, 0xC
  li        r0, 0x1
  stbx      r0, r3, r5

.loc_0x198:
  lwz       r0, 0x10(r28)
  stwx      r25, r6, r4
  stwx      r0, r7, r4
  b         .loc_0x214

.loc_0x1A8:
  li        r0, 0x1
  stb       r0, 0x0(r24)
  b         .loc_0x214

.loc_0x1B4:
  lwz       r3, 0x0(r28)
  subis     r0, r3, 0x506C
  cmplwi    r0, 0x496E
  bne-      .loc_0x20C
  lbz       r3, 0x8(r28)
  extsb.    r0, r3
  blt-      .loc_0x20C
  extsb     r0, r3
  cmpwi     r0, 0x3
  bge-      .loc_0x20C
  addi      r3, r1, 0x8
  lbzx      r0, r3, r0
  cmplwi    r0, 0
  beq-      .loc_0x1F4
  li        r0, 0x1
  stb       r0, 0x0(r24)

.loc_0x1F4:
  lbz       r0, 0x8(r28)
  addi      r3, r1, 0x8
  li        r4, 0x1
  extsb     r0, r0
  stbx      r4, r3, r0
  b         .loc_0x214

.loc_0x20C:
  li        r0, 0x1
  stb       r0, 0x0(r24)

.loc_0x214:
  mr        r3, r28
  subi      r5, r20, 0x4000
  li        r4, 0xCD
  bl        -0x441490
  mr        r3, r28
  bl        -0x422498
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x24C
  addi      r25, r25, 0x1
  addis     r22, r22, 0x1
  cmpwi     r25, 0x4
  addi      r24, r24, 0x1
  subi      r22, r22, 0x4000
  blt+      .loc_0x78

.loc_0x24C:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x4A4
  extsb     r25, r26
  addi      r20, r1, 0x8
  addi      r22, r1, 0x10
  li        r28, 0
  rlwinm    r24,r25,2,0,29
  li        r30, 0x6000

.loc_0x26C:
  lbz       r0, 0x0(r27)
  cmplwi    r0, 0
  beq-      .loc_0x48C
  lbzx      r0, r20, r25
  cmplwi    r0, 0
  bne-      .loc_0x350
  lwzx      r0, r22, r24
  cmpwi     r0, -0x1
  bne-      .loc_0x350
  cmpwi     r28, 0
  li        r0, 0
  blt-      .loc_0x2A8
  cmpwi     r28, 0x4
  bge-      .loc_0x2A8
  li        r0, 0x1

.loc_0x2A8:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x2CC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB6A
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41BFAC

.loc_0x2CC:
  lwz       r4, 0xCC(r31)
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x4225B4
  mr.       r21, r3
  bne-      .loc_0x300
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB6D
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41BFE0

.loc_0x300:
  mr        r3, r21
  li        r4, 0xCD
  li        r5, 0x2000
  bl        -0x44157C
  lis       r4, 0x506C
  mr        r3, r31
  addi      r0, r4, 0x496E
  mr        r6, r21
  stw       r0, 0x0(r21)
  mr        r8, r30
  li        r4, 0
  li        r7, 0x2000
  stb       r26, 0x8(r21)
  lwz       r5, -0x7978(r13)
  bl        -0x4BC0
  mr        r19, r3
  mr        r3, r21
  bl        -0x4225B4
  mr        r0, r19
  b         .loc_0x46C

.loc_0x350:
  lbz       r0, 0x8(r1)
  mr        r21, r26
  cmplwi    r0, 0
  bne-      .loc_0x374
  lwz       r0, 0x10(r1)
  cmpwi     r0, -0x1
  bne-      .loc_0x374
  li        r21, 0
  b         .loc_0x3B0

.loc_0x374:
  lbz       r0, 0x9(r1)
  cmplwi    r0, 0
  bne-      .loc_0x394
  lwz       r0, 0x14(r1)
  cmpwi     r0, -0x1
  bne-      .loc_0x394
  li        r21, 0x1
  b         .loc_0x3B0

.loc_0x394:
  lbz       r0, 0xA(r1)
  cmplwi    r0, 0
  bne-      .loc_0x3B0
  lwz       r0, 0x18(r1)
  cmpwi     r0, -0x1
  bne-      .loc_0x3B0
  li        r21, 0x2

.loc_0x3B0:
  cmpwi     r28, 0
  li        r0, 0
  blt-      .loc_0x3C8
  cmpwi     r28, 0x4
  bge-      .loc_0x3C8
  li        r0, 0x1

.loc_0x3C8:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x3EC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB6A
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41C0CC

.loc_0x3EC:
  lwz       r4, 0xCC(r31)
  li        r3, 0x2000
  li        r5, -0x20
  bl        -0x4226D4
  mr.       r19, r3
  bne-      .loc_0x420
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xB6D
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41C100

.loc_0x420:
  mr        r3, r19
  li        r4, 0xCD
  li        r5, 0x2000
  bl        -0x44169C
  lis       r4, 0x506C
  mr        r3, r31
  addi      r0, r4, 0x496E
  mr        r6, r19
  stw       r0, 0x0(r19)
  mr        r8, r30
  li        r4, 0
  li        r7, 0x2000
  stb       r21, 0x8(r19)
  lwz       r5, -0x7978(r13)
  bl        -0x4CE0
  mr        r21, r3
  mr        r3, r19
  bl        -0x4226D4
  mr        r0, r21

.loc_0x46C:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x488
  cmplwi    r23, 0
  beq-      .loc_0x4A4
  li        r0, 0x1
  stb       r0, 0x0(r23)
  b         .loc_0x4A4

.loc_0x488:
  li        r29, 0

.loc_0x48C:
  addi      r28, r28, 0x1
  addis     r30, r30, 0x1
  cmpwi     r28, 0x4
  addi      r27, r27, 0x1
  subi      r30, r30, 0x4000
  blt+      .loc_0x26C

.loc_0x4A4:
  mr        r3, r29
  lmw       r19, 0x2C(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	804467E0
 * Size:	000084
 */
void verifyCardSerialNo__Q34Game10MemoryCard3MgrFPUxQ213MemoryCardMgr9ECardSlot(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  mr        r30, r4
  addi      r4, r1, 0x8
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x4080
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  lwz       r4, 0x8(r1)
  lwz       r0, 0x0(r30)
  lwz       r5, 0xC(r1)
  lwz       r3, 0x4(r30)
  xor       r0, r4, r0
  xor       r3, r5, r3
  or.       r0, r3, r0
  bne-      .loc_0x5C
  li        r31, 0x1
  b         .loc_0x64

.loc_0x5C:
  li        r0, 0x3
  stw       r0, 0xD8(r29)

.loc_0x64:
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80446864
 * Size:	00007C
 */
void resetError__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0
  bl        -0x36E47C
  cmpwi     r3, 0
  beq-      .loc_0x3C
  mr        r3, r31
  bl        -0x5A20
  li        r0, 0
  stw       r0, 0xD8(r31)
  mr        r31, r3
  b         .loc_0x40

.loc_0x3C:
  li        r31, 0x1

.loc_0x40:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5234
  li        r4, 0xEBD
  subi      r5, r5, 0x5218
  crclr     6, 0x6
  bl        -0x41C284

.loc_0x64:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804468E0
 * Size:	00012C
 */
void doMakeHeader__Q34Game10MemoryCard3MgrFPUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x44(r1)
  subi      r5, r5, 0x516C
  stw       r31, 0x3C(r1)
  mr        r31, r4
  li        r4, 0x20
  stw       r30, 0x38(r1)
  mr        r30, r3
  addi      r3, r31, 0x1800
  crclr     6, 0x6
  bl        -0x37F3F8
  bl        -0x353D84
  addi      r5, r1, 0x10
  bl        -0x353B6C
  lwz       r0, 0x10(r1)
  lis       r3, 0x804A
  subi      r5, r3, 0x5160
  li        r4, 0x20
  stw       r0, 0x8(r1)
  addi      r3, r31, 0x1820
  lwz       r6, 0x20(r1)
  lwz       r7, 0x1C(r1)
  lwz       r8, 0x24(r1)
  addi      r6, r6, 0x1
  lwz       r9, 0x18(r1)
  lwz       r10, 0x14(r1)
  crclr     6, 0x6
  bl        -0x37F43C
  lwz       r4, 0xDC(r30)
  cmplwi    r4, 0
  beq-      .loc_0xD4
  lwz       r0, 0xE0(r30)
  cmplwi    r0, 0
  beq-      .loc_0xD4
  mr        r3, r31
  li        r5, 0xE00
  bl        -0x4417DC
  lwz       r4, 0xE0(r30)
  addi      r3, r31, 0xE00
  li        r5, 0x400
  bl        -0x4417EC
  lwz       r4, 0xE0(r30)
  addi      r3, r31, 0x1200
  li        r5, 0x400
  bl        -0x4417FC
  lwz       r4, 0xE0(r30)
  addi      r3, r31, 0x1600
  li        r5, 0x200
  addi      r4, r4, 0x400
  bl        -0x441810
  b         .loc_0x114

.loc_0xD4:
  mr        r3, r31
  li        r4, 0
  li        r5, 0xC00
  bl        -0x44190C
  addi      r3, r31, 0xC00
  li        r4, 0xFF
  li        r5, 0x200
  bl        -0x44191C
  addi      r3, r31, 0xE00
  li        r4, 0
  li        r5, 0x2000
  bl        -0x44192C
  addi      r3, r31, 0x2E00
  li        r4, 0xFF
  li        r5, 0x200
  bl        -0x44193C

.loc_0x114:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80446A0C
 * Size:	000104
 */
void doSetCardStat__Q34Game10MemoryCard3MgrFP8CARDStat(void)
{
/*
.loc_0x0:
  li        r3, 0
  li        r0, 0x1800
  stw       r3, 0x30(r4)
  stw       r0, 0x38(r4)
  lbz       r0, 0x2E(r4)
  rlwinm    r0,r0,0,0,29
  ori       r0, r0, 0x1
  stb       r0, 0x2E(r4)
  lbz       r0, 0x2E(r4)
  rlwinm    r0,r0,0,30,28
  ori       r0, r0, 0x4
  stb       r0, 0x2E(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,0,29
  ori       r0, r0, 0x1
  sth       r0, 0x34(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,30,27
  ori       r0, r0, 0x4
  sth       r0, 0x34(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,28,25
  sth       r0, 0x34(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,26,23
  sth       r0, 0x34(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,24,21
  sth       r0, 0x34(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,22,19
  sth       r0, 0x34(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,20,17
  sth       r0, 0x34(r4)
  lhz       r0, 0x34(r4)
  rlwinm    r0,r0,0,18,31
  sth       r0, 0x34(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,0,29
  ori       r0, r0, 0x3
  sth       r0, 0x36(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,30,27
  ori       r0, r0, 0xC
  sth       r0, 0x36(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,28,25
  sth       r0, 0x36(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,26,23
  sth       r0, 0x36(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,24,21
  sth       r0, 0x36(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,22,19
  sth       r0, 0x36(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,20,17
  sth       r0, 0x36(r4)
  lhz       r0, 0x36(r4)
  rlwinm    r0,r0,0,18,31
  sth       r0, 0x36(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80446B10
 * Size:	0000DC
 */
void doCheckCardStat__Q34Game10MemoryCard3MgrFP8CARDStat(void)
{
/*
.loc_0x0:
  lwz       r0, 0x30(r4)
  cmplwi    r0, 0
  bne-      .loc_0xCC
  lwz       r0, 0x38(r4)
  cmplwi    r0, 0x1800
  bne-      .loc_0xCC
  lbz       r3, 0x2E(r4)
  rlwinm    r0,r3,0,30,31
  cmpwi     r0, 0x1
  bne-      .loc_0xCC
  rlwinm    r0,r3,0,29,29
  cmpwi     r0, 0x4
  bne-      .loc_0xCC
  lhz       r3, 0x34(r4)
  rlwinm    r0,r3,0,30,31
  cmpwi     r0, 0x1
  bne-      .loc_0xCC
  rlwinm    r0,r3,30,30,31
  cmpwi     r0, 0x1
  bne-      .loc_0xCC
  rlwinm.   r0,r3,28,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,26,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,24,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,22,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,20,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,18,30,31
  bne-      .loc_0xCC
  lhz       r3, 0x36(r4)
  rlwinm    r0,r3,0,30,31
  cmpwi     r0, 0x3
  bne-      .loc_0xCC
  rlwinm    r0,r3,30,30,31
  cmpwi     r0, 0x3
  bne-      .loc_0xCC
  rlwinm.   r0,r3,28,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,26,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,24,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,22,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,20,30,31
  bne-      .loc_0xCC
  rlwinm.   r0,r3,18,30,31
  beq-      .loc_0xD4

.loc_0xCC:
  li        r3, 0
  blr       

.loc_0xD4:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80446BEC
 * Size:	000008
 */
void getClassSize__Q34Game10MemoryCard25MgrCommandGetPlayerHeaderFv(void)
{
/*
.loc_0x0:
  li        r3, 0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	80446BF4
 * Size:	000008
 */
void getClassSize__Q34Game10MemoryCard20MgrCommandCopyPlayerFv(void)
{
/*
.loc_0x0:
  li        r3, 0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	80446BFC
 * Size:	000008
 */
void getClassSize__Q34Game10MemoryCard18MgrCommandPlayerNoFv(void)
{
/*
.loc_0x0:
  li        r3, 0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	80446C04
 * Size:	00005C
 */
void __dt__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804F
  subi      r0, r3, 0x3054
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804F
  subi      r0, r3, 0x30F0
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        -0x422B90

.loc_0x44:
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80446C60
 * Size:	000008
 */
void getHeaderSize__Q34Game10MemoryCard3MgrFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2000
  blr
*/
}