

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E5354
 * Size:	000010
 */
void __ct__Q24Game11KindCounterFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  sth       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E5364
 * Size:	000074
 */
void alloc__Q24Game11KindCounterFi(void)
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
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x44
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x12B
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BAD64

.loc_0x44:
  sth       r31, 0x0(r30)
  lhz       r3, 0x0(r30)
  bl        -0x1C1404
  stw       r3, 0x4(r30)
  mr        r3, r30
  bl        .loc_0x74
  lwz       r0, 0x14(r1)
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
 * Address:	801E53D8
 * Size:	000028
 */
void clear__Q24Game11KindCounterFv(void)
{
/*
.loc_0x0:
  li        r6, 0
  li        r5, 0
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x4(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x0(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void copyFrom__Q24Game11KindCounterFRQ24Game11KindCounter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void addTo__Q24Game11KindCounterFRQ24Game11KindCounter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E5400
 * Size:	000078
 */
void __cl__Q24Game11KindCounterFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  li        r3, 0
  blt-      .loc_0x34
  lhz       r0, 0x0(r30)
  cmpw      r31, r0
  bge-      .loc_0x34
  li        r3, 0x1

.loc_0x34:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BAE14

.loc_0x58:
  lwz       r0, 0x4(r30)
  add       r3, r0, r31
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
 * Size:	00018C
 */
void __ct__Q24Game16PelletCropMemoryFiii(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E5478
 * Size:	000280
 */
void createClone__Q24Game16PelletCropMemoryFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r3
  li        r3, 0x1C
  bl        -0x1C15EC
  mr.       r31, r3
  beq-      .loc_0x16C
  lis       r3, 0x804C
  lhz       r30, 0x14(r28)
  lhz       r29, 0xC(r28)
  addi      r3, r3, 0x850
  lhz       r27, 0x4(r28)
  li        r0, 0
  stw       r3, 0x0(r31)
  sth       r0, 0x4(r31)
  stw       r0, 0x8(r31)
  sth       r0, 0xC(r31)
  stw       r0, 0x10(r31)
  sth       r0, 0x14(r31)
  stw       r0, 0x18(r31)
  lwz       r0, 0x8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x80
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x12B
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BAEB4

.loc_0x80:
  sth       r27, 0x4(r31)
  lhz       r3, 0x4(r31)
  bl        -0x1C1554
  li        r5, 0
  stw       r3, 0x8(r31)
  mr        r4, r5
  b         .loc_0xA8

.loc_0x9C:
  lwz       r3, 0x8(r31)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0xA8:
  lhz       r0, 0x4(r31)
  cmpw      r5, r0
  blt+      .loc_0x9C
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0xDC
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x12B
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BAF10

.loc_0xDC:
  sth       r29, 0xC(r31)
  lhz       r3, 0xC(r31)
  bl        -0x1C15B0
  li        r5, 0
  stw       r3, 0x10(r31)
  mr        r4, r5
  b         .loc_0x104

.loc_0xF8:
  lwz       r3, 0x10(r31)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x104:
  lhz       r0, 0xC(r31)
  cmpw      r5, r0
  blt+      .loc_0xF8
  lwz       r0, 0x18(r31)
  cmplwi    r0, 0
  beq-      .loc_0x138
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x12B
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BAF6C

.loc_0x138:
  sth       r30, 0x14(r31)
  lhz       r3, 0x14(r31)
  bl        -0x1C160C
  li        r5, 0
  stw       r3, 0x18(r31)
  mr        r4, r5
  b         .loc_0x160

.loc_0x154:
  lwz       r3, 0x18(r31)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x160:
  lhz       r0, 0x14(r31)
  cmpw      r5, r0
  blt+      .loc_0x154

.loc_0x16C:
  lhz       r3, 0x4(r31)
  lhz       r0, 0x4(r28)
  cmplw     r3, r0
  beq-      .loc_0x198
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x13A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BAFCC

.loc_0x198:
  li        r5, 0
  b         .loc_0x1B4

.loc_0x1A0:
  lwz       r4, 0x8(r28)
  lwz       r3, 0x8(r31)
  lbzx      r0, r4, r5
  stbx      r0, r3, r5
  addi      r5, r5, 0x1

.loc_0x1B4:
  lhz       r0, 0x4(r31)
  cmpw      r5, r0
  blt+      .loc_0x1A0
  lhz       r3, 0xC(r31)
  lhz       r0, 0xC(r28)
  cmplw     r3, r0
  beq-      .loc_0x1EC
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x13A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB020

.loc_0x1EC:
  li        r5, 0
  b         .loc_0x208

.loc_0x1F4:
  lwz       r4, 0x10(r28)
  lwz       r3, 0x10(r31)
  lbzx      r0, r4, r5
  stbx      r0, r3, r5
  addi      r5, r5, 0x1

.loc_0x208:
  lhz       r0, 0xC(r31)
  cmpw      r5, r0
  blt+      .loc_0x1F4
  lhz       r3, 0x14(r31)
  lhz       r0, 0x14(r28)
  cmplw     r3, r0
  beq-      .loc_0x240
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x13A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB074

.loc_0x240:
  li        r5, 0
  b         .loc_0x25C

.loc_0x248:
  lwz       r4, 0x18(r28)
  lwz       r3, 0x18(r31)
  lbzx      r0, r4, r5
  stbx      r0, r3, r5
  addi      r5, r5, 0x1

.loc_0x25C:
  lhz       r0, 0x14(r31)
  cmpw      r5, r0
  blt+      .loc_0x248
  mr        r3, r31
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E56F8
 * Size:	000148
 */
void addTo__Q24Game16PelletCropMemoryFPQ24Game16PelletCropMemory(void)
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
  lhz       r3, 0x4(r3)
  lhz       r0, 0x4(r4)
  cmplw     r3, r0
  beq-      .loc_0x48
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x142
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB0FC

.loc_0x48:
  li        r6, 0
  b         .loc_0x6C

.loc_0x50:
  lwz       r5, 0x8(r30)
  lwz       r3, 0x8(r31)
  lbzx      r4, r5, r6
  lbzx      r0, r3, r6
  add       r0, r4, r0
  stbx      r0, r5, r6
  addi      r6, r6, 0x1

.loc_0x6C:
  lhz       r0, 0x4(r30)
  cmpw      r6, r0
  blt+      .loc_0x50
  lhz       r3, 0xC(r30)
  lhz       r0, 0xC(r31)
  cmplw     r3, r0
  beq-      .loc_0xA4
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x142
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB158

.loc_0xA4:
  li        r6, 0
  b         .loc_0xC8

.loc_0xAC:
  lwz       r5, 0x10(r30)
  lwz       r3, 0x10(r31)
  lbzx      r4, r5, r6
  lbzx      r0, r3, r6
  add       r0, r4, r0
  stbx      r0, r5, r6
  addi      r6, r6, 0x1

.loc_0xC8:
  lhz       r0, 0xC(r30)
  cmpw      r6, r0
  blt+      .loc_0xAC
  lhz       r3, 0x14(r30)
  lhz       r0, 0x14(r31)
  cmplw     r3, r0
  beq-      .loc_0x100
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x142
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB1B4

.loc_0x100:
  li        r6, 0
  b         .loc_0x124

.loc_0x108:
  lwz       r5, 0x18(r30)
  lwz       r3, 0x18(r31)
  lbzx      r4, r5, r6
  lbzx      r0, r3, r6
  add       r0, r4, r0
  stbx      r0, r5, r6
  addi      r6, r6, 0x1

.loc_0x124:
  lhz       r0, 0x14(r30)
  cmpw      r6, r0
  blt+      .loc_0x108
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
 * Address:	801E5840
 * Size:	000070
 */
void clear__Q24Game16PelletCropMemoryFv(void)
{
/*
.loc_0x0:
  li        r6, 0
  mr        r5, r6
  b         .loc_0x18

.loc_0xC:
  lwz       r4, 0x8(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x18:
  lhz       r0, 0x4(r3)
  cmpw      r6, r0
  blt+      .loc_0xC
  li        r6, 0
  mr        r5, r6
  b         .loc_0x3C

.loc_0x30:
  lwz       r4, 0x10(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x3C:
  lhz       r0, 0xC(r3)
  cmpw      r6, r0
  blt+      .loc_0x30
  li        r6, 0
  mr        r5, r6
  b         .loc_0x60

.loc_0x54:
  lwz       r4, 0x18(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x60:
  lhz       r0, 0x14(r3)
  cmpw      r6, r0
  blt+      .loc_0x54
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000288
 */
void obtainPellet__Q24Game16PelletCropMemoryFPQ24Game6Pellet(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E58B0
 * Size:	000048
 */
void calcEarnKinds__Q24Game16PelletCropMemoryFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r3, r30, 0xC
  bl        0x67C
  mr        r31, r3
  addi      r3, r30, 0x4
  bl        0x670
  lwz       r0, 0x14(r1)
  add       r3, r3, r31
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
void calcNumKinds__Q24Game16PelletCropMemoryFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000198
 */
void __ct__Q24Game17PelletFirstMemoryFiii(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E58F8
 * Size:	0002C8
 */
void firstCarryPellet__Q24Game17PelletFirstMemoryFPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0xF8
  mr        r3, r30
  bl        -0x7EF5C
  mr.       r31, r3
  li        r3, 0
  blt-      .loc_0x64
  lhz       r0, 0x4(r29)
  cmpw      r31, r0
  bge-      .loc_0x64
  li        r3, 0x1

.loc_0x64:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB33C

.loc_0x88:
  lwz       r3, 0x8(r29)
  lbzx      r0, r3, r31
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x2A8
  cmpwi     r31, 0
  li        r3, 0
  blt-      .loc_0xB4
  lhz       r0, 0x4(r29)
  cmpw      r31, r0
  bge-      .loc_0xB4
  li        r3, 0x1

.loc_0xB4:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xD8
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB38C

.loc_0xD8:
  lwz       r4, 0x8(r29)
  mr        r3, r30
  lbzx      r0, r4, r31
  ori       r0, r0, 0x2
  stbx      r0, r4, r31
  bl        -0x7EFAC
  li        r3, 0x1
  b         .loc_0x2AC

.loc_0xF8:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x1D0
  mr        r3, r30
  bl        -0x7F034
  mr.       r31, r3
  li        r3, 0
  blt-      .loc_0x13C
  lhz       r0, 0xC(r29)
  cmpw      r31, r0
  bge-      .loc_0x13C
  li        r3, 0x1

.loc_0x13C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x160
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB414

.loc_0x160:
  lwz       r3, 0x10(r29)
  lbzx      r0, r3, r31
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x2A8
  cmpwi     r31, 0
  li        r3, 0
  blt-      .loc_0x18C
  lhz       r0, 0xC(r29)
  cmpw      r31, r0
  bge-      .loc_0x18C
  li        r3, 0x1

.loc_0x18C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1B0
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB464

.loc_0x1B0:
  lwz       r4, 0x10(r29)
  mr        r3, r30
  lbzx      r0, r4, r31
  ori       r0, r0, 0x2
  stbx      r0, r4, r31
  bl        -0x7F084
  li        r3, 0x1
  b         .loc_0x2AC

.loc_0x1D0:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  bne-      .loc_0x2A8
  mr        r3, r30
  bl        -0x7F10C
  mr.       r31, r3
  li        r3, 0
  blt-      .loc_0x214
  lhz       r0, 0x14(r29)
  cmpw      r31, r0
  bge-      .loc_0x214
  li        r3, 0x1

.loc_0x214:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x238
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB4EC

.loc_0x238:
  lwz       r3, 0x18(r29)
  lbzx      r0, r3, r31
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x2A8
  cmpwi     r31, 0
  li        r3, 0
  blt-      .loc_0x264
  lhz       r0, 0x14(r29)
  cmpw      r31, r0
  bge-      .loc_0x264
  li        r3, 0x1

.loc_0x264:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x288
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB53C

.loc_0x288:
  lwz       r4, 0x18(r29)
  mr        r3, r30
  lbzx      r0, r4, r31
  ori       r0, r0, 0x2
  stbx      r0, r4, r31
  bl        -0x7F15C
  li        r3, 0x1
  b         .loc_0x2AC

.loc_0x2A8:
  li        r3, 0

.loc_0x2AC:
  lwz       r0, 0x24(r1)
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
 * Address:	801E5BC0
 * Size:	000154
 */
void obtainPellet__Q24Game17PelletFirstMemoryFPQ24Game13BasePelletMgri(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0xA4
  cmpwi     r31, 0
  li        r3, 0
  blt-      .loc_0x60
  lhz       r0, 0x4(r29)
  cmpw      r31, r0
  bge-      .loc_0x60
  li        r3, 0x1

.loc_0x60:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x84
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB600

.loc_0x84:
  lwz       r5, 0x8(r29)
  mr        r3, r30
  mr        r4, r31
  lbzx      r0, r5, r31
  ori       r0, r0, 0x2
  stbx      r0, r5, r31
  bl        -0x79ED4
  b         .loc_0x138

.loc_0xA4:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x124
  cmpwi     r31, 0
  li        r3, 0
  blt-      .loc_0xE0
  lhz       r0, 0xC(r29)
  cmpw      r31, r0
  bge-      .loc_0xE0
  li        r3, 0x1

.loc_0xE0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x104
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB680

.loc_0x104:
  lwz       r5, 0x10(r29)
  mr        r3, r30
  mr        r4, r31
  lbzx      r0, r5, r31
  ori       r0, r0, 0x2
  stbx      r0, r5, r31
  bl        -0x79F54
  b         .loc_0x138

.loc_0x124:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     

.loc_0x138:
  lwz       r0, 0x24(r1)
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
 * Address:	801E5D14
 * Size:	000154
 */
void losePellet__Q24Game17PelletFirstMemoryFPQ24Game13BasePelletMgri(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0xA4
  cmpwi     r31, 0
  li        r3, 0
  blt-      .loc_0x60
  lhz       r0, 0x4(r29)
  cmpw      r31, r0
  bge-      .loc_0x60
  li        r3, 0x1

.loc_0x60:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x84
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB754

.loc_0x84:
  lwz       r5, 0x8(r29)
  mr        r3, r30
  mr        r4, r31
  lbzx      r0, r5, r31
  rlwinm    r0,r0,0,31,29
  stbx      r0, r5, r31
  bl        -0x7A028
  b         .loc_0x138

.loc_0xA4:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x124
  cmpwi     r31, 0
  li        r3, 0
  blt-      .loc_0xE0
  lhz       r0, 0xC(r29)
  cmpw      r31, r0
  bge-      .loc_0xE0
  li        r3, 0x1

.loc_0xE0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x104
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB7D4

.loc_0x104:
  lwz       r5, 0x10(r29)
  mr        r3, r30
  mr        r4, r31
  lbzx      r0, r5, r31
  rlwinm    r0,r0,0,31,29
  stbx      r0, r5, r31
  bl        -0x7A0A8
  b         .loc_0x138

.loc_0x124:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     

.loc_0x138:
  lwz       r0, 0x24(r1)
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
 * Address:	801E5E68
 * Size:	00004C
 */
void isCompletePelletTrigger__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r4, 0x2F(r3)
  rlwinm.   r0,r4,0,31,31
  beq-      .loc_0x38
  rlwinm.   r0,r4,0,30,30
  bne-      .loc_0x38
  lwz       r3, 0xB0(r3)
  bl        .loc_0x4C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x38
  li        r3, 0x1
  b         .loc_0x3C

.loc_0x38:
  li        r3, 0

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	801E5EB4
 * Size:	000058
 */
void completeAll__Q24Game16PelletCropMemoryFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x4
  bl        .loc_0x58
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x44

.loc_0x2C:
  addi      r3, r31, 0xC
  bl        .loc_0x58
  rlwinm    r3,r3,0,24,31
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31

.loc_0x44:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x58:
*/
}

/*
 * --INFO--
 * Address:	801E5F0C
 * Size:	00003C
 */
void completeAll__Q24Game11KindCounterFv(void)
{
/*
.loc_0x0:
  lhz       r0, 0x0(r3)
  li        r5, 0
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x34

.loc_0x14:
  lwz       r4, 0x4(r3)
  lbzx      r0, r4, r5
  cmplwi    r0, 0
  bne-      .loc_0x2C
  li        r3, 0
  blr       

.loc_0x2C:
  addi      r5, r5, 0x1
  bdnz+     .loc_0x14

.loc_0x34:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	801E5F48
 * Size:	00003C
 */
void getEarnKinds__Q24Game11KindCounterFv(void)
{
/*
.loc_0x0:
  lhz       r0, 0x0(r3)
  li        r5, 0
  li        r6, 0
  mtctr     r0
  cmpwi     r0, 0
  ble-      .loc_0x34

.loc_0x18:
  lwz       r4, 0x4(r3)
  lbzx      r0, r4, r6
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x2C
  addi      r5, r5, 0x1

.loc_0x2C:
  addi      r6, r6, 0x1
  bdnz+     .loc_0x18

.loc_0x34:
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	801E5F84
 * Size:	00003C
 */
void __ct__Q24Game10OlimarDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stb       r0, 0x0(r3)
  stb       r0, 0x1(r3)
  bl        .loc_0x3C
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x3C:
*/
}

/*
 * --INFO--
 * Address:	801E5FC0
 * Size:	000010
 */
void clear__Q24Game10OlimarDataFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x0(r3)
  stb       r0, 0x1(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E5FD0
 * Size:	000098
 */
void hasItem__Q24Game10OlimarDataFi(void)
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
  cmpwi     r31, 0xC
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x24C
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BB9E0

.loc_0x54:
  srawi     r0, r31, 0x3
  li        r4, 0x1
  rlwinm    r3,r0,3,0,28
  subfic    r0, r0, 0x1
  sub       r3, r31, r3
  lbzx      r0, r30, r0
  slw       r3, r4, r3
  and       r3, r3, r0
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E6068
 * Size:	0000CC
 */
void getItem__Q24Game10OlimarDataFi(void)
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
  cmpwi     r31, 0xC
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x259
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BBA78

.loc_0x54:
  cmpwi     r31, 0x10
  bge-      .loc_0x80
  srawi     r0, r31, 0x3
  li        r3, 0x1
  subfic    r5, r0, 0x1
  rlwinm    r0,r0,3,0,28
  lbzx      r4, r30, r5
  sub       r0, r31, r0
  slw       r0, r3, r0
  or        r0, r4, r0
  stbx      r0, r30, r5

.loc_0x80:
  cmpwi     r31, 0xB
  beq-      .loc_0xA8
  bge-      .loc_0xB4
  cmpwi     r31, 0xA
  bge-      .loc_0x98
  b         .loc_0xB4

.loc_0x98:
  lwz       r3, -0x6B70(r13)
  li        r4, 0x1
  bl        0x3260
  b         .loc_0xB4

.loc_0xA8:
  lwz       r3, -0x6B70(r13)
  li        r4, 0x2
  bl        0x3250

.loc_0xB4:
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
 * Address:	801E6134
 * Size:	000084
 */
void construct__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8048
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r3, 0xE40
  lwz       r0, -0x6B70(r13)
  cmplwi    r0, 0
  beq-      .loc_0x38
  addi      r3, r31, 0xC
  addi      r5, r31, 0x20
  li        r4, 0x2B2
  crclr     6, 0x6
  bl        -0x1BBB28

.loc_0x38:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x2C
  li        r5, 0
  bl        0x23D1E4
  li        r3, 0x130
  bl        -0x1C22DC
  mr.       r0, r3
  beq-      .loc_0x60
  bl        .loc_0x84
  mr        r0, r3

.loc_0x60:
  stw       r0, -0x6B70(r13)
  addi      r4, r31, 0x2C
  lwz       r3, -0x6514(r13)
  bl        0x23D1C4
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x84:
*/
}

/*
 * --INFO--
 * Address:	801E61B8
 * Size:	000854
 */
void __ct__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r31, r3
  addi      r26, r4, 0xE40
  bl        0x22B1BC
  lis       r3, 0x804C
  li        r0, 0
  subi      r4, r3, 0x5C90
  addi      r3, r31, 0x30
  stw       r4, 0x0(r31)
  stb       r0, 0x20(r31)
  stb       r0, 0x2F(r31)
  bl        0x235FB4
  addi      r3, r31, 0x38
  bl        0x235FAC
  addi      r3, r31, 0x40
  bl        0x4D674
  lis       r4, 0x801E
  addi      r3, r31, 0x48
  addi      r4, r4, 0x5F84
  li        r5, 0
  li        r6, 0x2
  li        r7, 0x2
  bl        -0x1249E4
  addi      r3, r31, 0x4C
  bl        0x3518
  li        r0, 0
  addi      r3, r31, 0xA8
  stb       r0, 0x84(r31)
  stb       r0, 0x85(r31)
  stb       r0, 0x86(r31)
  stb       r0, 0x87(r31)
  stb       r0, 0x88(r31)
  stb       r0, 0x89(r31)
  stb       r0, 0x8A(r31)
  stb       r0, 0x8B(r31)
  stb       r0, 0x8C(r31)
  stb       r0, 0x8D(r31)
  stb       r0, 0x8E(r31)
  stb       r0, 0x8F(r31)
  stb       r0, 0x90(r31)
  stb       r0, 0x91(r31)
  stb       r0, 0x92(r31)
  stb       r0, 0x93(r31)
  bl        0xAFCC
  li        r0, 0
  stb       r0, 0xF0(r31)
  stb       r0, 0xF1(r31)
  stw       r0, 0x1C(r31)
  lwz       r3, -0x6C38(r13)
  lhz       r28, 0x100(r3)
  mr        r3, r28
  bl        -0x1C22E8
  stw       r3, 0xD8(r31)
  mr        r3, r28
  bl        -0x1C22F4
  stw       r3, 0xDC(r31)
  mr        r3, r28
  bl        -0x1C2300
  cmpwi     r28, 0
  stw       r3, 0xF4(r31)
  li        r3, 0
  ble-      .loc_0x1FC
  cmpwi     r28, 0x8
  subi      r4, r28, 0x8
  ble-      .loc_0x1D0
  addi      r0, r4, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r4, 0
  ble-      .loc_0x1D0

.loc_0x128:
  lwz       r4, 0xDC(r31)
  li        r11, 0
  addi      r10, r3, 0x1
  addi      r9, r3, 0x2
  stbx      r11, r4, r3
  addi      r8, r3, 0x3
  addi      r7, r3, 0x4
  addi      r6, r3, 0x5
  lwz       r4, 0xF4(r31)
  addi      r5, r3, 0x6
  addi      r0, r3, 0x7
  stbx      r11, r4, r3
  addi      r3, r3, 0x8
  lwz       r4, 0xDC(r31)
  stbx      r11, r4, r10
  lwz       r4, 0xF4(r31)
  stbx      r11, r4, r10
  lwz       r4, 0xDC(r31)
  stbx      r11, r4, r9
  lwz       r4, 0xF4(r31)
  stbx      r11, r4, r9
  lwz       r4, 0xDC(r31)
  stbx      r11, r4, r8
  lwz       r4, 0xF4(r31)
  stbx      r11, r4, r8
  lwz       r4, 0xDC(r31)
  stbx      r11, r4, r7
  lwz       r4, 0xF4(r31)
  stbx      r11, r4, r7
  lwz       r4, 0xDC(r31)
  stbx      r11, r4, r6
  lwz       r4, 0xF4(r31)
  stbx      r11, r4, r6
  lwz       r4, 0xDC(r31)
  stbx      r11, r4, r5
  lwz       r4, 0xF4(r31)
  stbx      r11, r4, r5
  lwz       r4, 0xDC(r31)
  stbx      r11, r4, r0
  lwz       r4, 0xF4(r31)
  stbx      r11, r4, r0
  bdnz+     .loc_0x128

.loc_0x1D0:
  sub       r0, r28, r3
  li        r5, 0
  mtctr     r0
  cmpw      r3, r28
  bge-      .loc_0x1FC

.loc_0x1E4:
  lwz       r4, 0xDC(r31)
  stbx      r5, r4, r3
  lwz       r4, 0xF4(r31)
  stbx      r5, r4, r3
  addi      r3, r3, 0x1
  bdnz+     .loc_0x1E4

.loc_0x1FC:
  rlwinm    r3,r28,4,0,27
  addi      r3, r3, 0x10
  bl        -0x1C2410
  lis       r4, 0x801E
  mr        r7, r28
  addi      r4, r4, 0x6A20
  li        r5, 0
  li        r6, 0x10
  bl        -0x1249E4
  stw       r3, 0xE4(r31)
  li        r30, 0
  li        r29, 0
  b         .loc_0x278

.loc_0x230:
  lwz       r0, 0xE4(r31)
  mr        r4, r30
  lwz       r3, -0x6C38(r13)
  add       r25, r0, r29
  bl        -0x3844C
  mr        r27, r3
  mr        r3, r25
  lwz       r0, 0x4C(r27)
  li        r5, 0
  rlwinm    r4,r0,0,16,31
  bl        0x235EC0
  lwz       r0, 0x74(r27)
  addi      r3, r25, 0x8
  li        r5, 0
  rlwinm    r4,r0,0,16,31
  bl        0x235EAC
  addi      r29, r29, 0x10
  addi      r30, r30, 0x1

.loc_0x278:
  cmpw      r30, r28
  blt+      .loc_0x230
  addi      r3, r31, 0x40
  li        r4, 0x66
  bl        0x4D60C
  mulli     r3, r28, 0xC
  addi      r27, r3, 0x10
  mr        r3, r27
  bl        -0x1C24A4
  lis       r4, 0x801E
  mr        r7, r28
  addi      r4, r4, 0x6A0C
  li        r5, 0
  li        r6, 0xC
  bl        -0x124A78
  stw       r3, 0xE0(r31)
  mr        r3, r27
  bl        -0x1C24C8
  lis       r4, 0x801E
  mr        r7, r28
  addi      r4, r4, 0x6A0C
  li        r5, 0
  li        r6, 0xC
  bl        -0x124A9C
  stw       r3, 0xF8(r31)
  li        r29, 0
  li        r27, 0
  b         .loc_0x3E4

.loc_0x2E8:
  lwz       r0, 0xE0(r31)
  mr        r4, r29
  lwz       r3, -0x6C38(r13)
  add       r25, r0, r27
  bl        -0x38504
  mr        r24, r3
  bl        -0x38840
  mr.       r30, r3
  ble-      .loc_0x368
  stb       r30, 0x0(r25)
  bl        -0x1C251C
  stw       r3, 0x4(r25)
  rlwinm    r3,r30,2,0,29
  bl        -0x1C2528
  stw       r3, 0x8(r25)
  lbz       r0, 0x0(r25)
  cmplwi    r0, 0
  beq-      .loc_0x368
  li        r6, 0
  mr        r7, r6
  mr        r5, r6
  mr        r4, r6
  b         .loc_0x35C

.loc_0x344:
  lwz       r3, 0x4(r25)
  stbx      r5, r3, r6
  addi      r6, r6, 0x1
  lwz       r3, 0x8(r25)
  stwx      r4, r3, r7
  addi      r7, r7, 0x4

.loc_0x35C:
  lbz       r0, 0x0(r25)
  cmpw      r6, r0
  blt+      .loc_0x344

.loc_0x368:
  lwz       r0, 0xF8(r31)
  mr        r3, r24
  add       r24, r0, r27
  bl        -0x388B4
  mr.       r30, r3
  ble-      .loc_0x3DC
  stb       r30, 0x0(r24)
  bl        -0x1C2590
  stw       r3, 0x4(r24)
  rlwinm    r3,r30,2,0,29
  bl        -0x1C259C
  stw       r3, 0x8(r24)
  lbz       r0, 0x0(r24)
  cmplwi    r0, 0
  beq-      .loc_0x3DC
  li        r6, 0
  mr        r7, r6
  mr        r5, r6
  mr        r4, r6
  b         .loc_0x3D0

.loc_0x3B8:
  lwz       r3, 0x4(r24)
  stbx      r5, r3, r6
  addi      r6, r6, 0x1
  lwz       r3, 0x8(r24)
  stwx      r4, r3, r7
  addi      r7, r7, 0x4

.loc_0x3D0:
  lbz       r0, 0x0(r24)
  cmpw      r6, r0
  blt+      .loc_0x3B8

.loc_0x3DC:
  addi      r27, r27, 0xC
  addi      r29, r29, 0x1

.loc_0x3E4:
  cmpw      r29, r28
  blt+      .loc_0x2E8
  li        r3, 0x3
  bl        0x41824
  mr        r27, r3
  li        r3, 0x4
  bl        0x41818
  mr        r28, r3
  li        r3, 0x1
  bl        0x4180C
  mr        r29, r3
  li        r3, 0x1C
  bl        -0x1C2728
  mr.       r30, r3
  beq-      .loc_0x550
  lis       r3, 0x804C
  li        r0, 0
  addi      r3, r3, 0x850
  stw       r3, 0x0(r30)
  sth       r0, 0x4(r30)
  stw       r0, 0x8(r30)
  sth       r0, 0xC(r30)
  stw       r0, 0x10(r30)
  sth       r0, 0x14(r30)
  stw       r0, 0x18(r30)
  lwz       r0, 0x8(r30)
  cmplwi    r0, 0
  beq-      .loc_0x468
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BBFDC

.loc_0x468:
  sth       r27, 0x4(r30)
  lhz       r3, 0x4(r30)
  bl        -0x1C267C
  li        r5, 0
  stw       r3, 0x8(r30)
  mr        r4, r5
  b         .loc_0x490

.loc_0x484:
  lwz       r3, 0x8(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x490:
  lhz       r0, 0x4(r30)
  cmpw      r5, r0
  blt+      .loc_0x484
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  beq-      .loc_0x4BC
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC030

.loc_0x4BC:
  sth       r28, 0xC(r30)
  lhz       r3, 0xC(r30)
  bl        -0x1C26D0
  li        r5, 0
  stw       r3, 0x10(r30)
  mr        r4, r5
  b         .loc_0x4E4

.loc_0x4D8:
  lwz       r3, 0x10(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x4E4:
  lhz       r0, 0xC(r30)
  cmpw      r5, r0
  blt+      .loc_0x4D8
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  beq-      .loc_0x510
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC084

.loc_0x510:
  sth       r29, 0x14(r30)
  lhz       r3, 0x14(r30)
  bl        -0x1C2724
  li        r5, 0
  stw       r3, 0x18(r30)
  mr        r4, r5
  b         .loc_0x538

.loc_0x52C:
  lwz       r3, 0x18(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x538:
  lhz       r0, 0x14(r30)
  cmpw      r5, r0
  blt+      .loc_0x52C
  lis       r3, 0x804C
  subi      r0, r3, 0x5C80
  stw       r0, 0x0(r30)

.loc_0x550:
  stw       r30, 0xB0(r31)
  li        r3, 0x1C
  bl        -0x1C286C
  mr.       r30, r3
  beq-      .loc_0x688
  lis       r3, 0x804C
  li        r0, 0
  addi      r3, r3, 0x850
  stw       r3, 0x0(r30)
  sth       r0, 0x4(r30)
  stw       r0, 0x8(r30)
  sth       r0, 0xC(r30)
  stw       r0, 0x10(r30)
  sth       r0, 0x14(r30)
  stw       r0, 0x18(r30)
  lwz       r0, 0x8(r30)
  cmplwi    r0, 0
  beq-      .loc_0x5AC
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC120

.loc_0x5AC:
  sth       r27, 0x4(r30)
  lhz       r3, 0x4(r30)
  bl        -0x1C27C0
  li        r5, 0
  stw       r3, 0x8(r30)
  mr        r4, r5
  b         .loc_0x5D4

.loc_0x5C8:
  lwz       r3, 0x8(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x5D4:
  lhz       r0, 0x4(r30)
  cmpw      r5, r0
  blt+      .loc_0x5C8
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  beq-      .loc_0x600
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC174

.loc_0x600:
  sth       r28, 0xC(r30)
  lhz       r3, 0xC(r30)
  bl        -0x1C2814
  li        r5, 0
  stw       r3, 0x10(r30)
  mr        r4, r5
  b         .loc_0x628

.loc_0x61C:
  lwz       r3, 0x10(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x628:
  lhz       r0, 0xC(r30)
  cmpw      r5, r0
  blt+      .loc_0x61C
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  beq-      .loc_0x654
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC1C8

.loc_0x654:
  sth       r29, 0x14(r30)
  lhz       r3, 0x14(r30)
  bl        -0x1C2868
  li        r5, 0
  stw       r3, 0x18(r30)
  mr        r4, r5
  b         .loc_0x67C

.loc_0x670:
  lwz       r3, 0x18(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x67C:
  lhz       r0, 0x14(r30)
  cmpw      r5, r0
  blt+      .loc_0x670

.loc_0x688:
  stw       r30, 0xB4(r31)
  li        r3, 0x1C
  bl        -0x1C29A4
  mr.       r30, r3
  beq-      .loc_0x7C0
  lis       r3, 0x804C
  li        r0, 0
  addi      r3, r3, 0x850
  stw       r3, 0x0(r30)
  sth       r0, 0x4(r30)
  stw       r0, 0x8(r30)
  sth       r0, 0xC(r30)
  stw       r0, 0x10(r30)
  sth       r0, 0x14(r30)
  stw       r0, 0x18(r30)
  lwz       r0, 0x8(r30)
  cmplwi    r0, 0
  beq-      .loc_0x6E4
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC258

.loc_0x6E4:
  sth       r27, 0x4(r30)
  lhz       r3, 0x4(r30)
  bl        -0x1C28F8
  li        r5, 0
  stw       r3, 0x8(r30)
  mr        r4, r5
  b         .loc_0x70C

.loc_0x700:
  lwz       r3, 0x8(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x70C:
  lhz       r0, 0x4(r30)
  cmpw      r5, r0
  blt+      .loc_0x700
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  beq-      .loc_0x738
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC2AC

.loc_0x738:
  sth       r28, 0xC(r30)
  lhz       r3, 0xC(r30)
  bl        -0x1C294C
  li        r5, 0
  stw       r3, 0x10(r30)
  mr        r4, r5
  b         .loc_0x760

.loc_0x754:
  lwz       r3, 0x10(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x760:
  lhz       r0, 0xC(r30)
  cmpw      r5, r0
  blt+      .loc_0x754
  lwz       r0, 0x18(r30)
  cmplwi    r0, 0
  beq-      .loc_0x78C
  addi      r3, r26, 0xC
  addi      r5, r26, 0x20
  li        r4, 0x12B
  crclr     6, 0x6
  bl        -0x1BC300

.loc_0x78C:
  sth       r29, 0x14(r30)
  lhz       r3, 0x14(r30)
  bl        -0x1C29A0
  li        r5, 0
  stw       r3, 0x18(r30)
  mr        r4, r5
  b         .loc_0x7B4

.loc_0x7A8:
  lwz       r3, 0x18(r30)
  stbx      r4, r3, r5
  addi      r5, r5, 0x1

.loc_0x7B4:
  lhz       r0, 0x14(r30)
  cmpw      r5, r0
  blt+      .loc_0x7A8

.loc_0x7C0:
  stw       r30, 0xB8(r31)
  addi      r3, r31, 0x30
  li        r4, 0x39
  li        r5, 0
  bl        0x235948
  addi      r3, r31, 0x30
  bl        0x235994
  li        r3, 0x4
  bl        0x41434
  rlwinm    r4,r3,0,16,31
  addi      r3, r31, 0x38
  li        r5, 0
  bl        0x235928
  addi      r3, r31, 0x38
  bl        0x235974
  lwz       r3, -0x6514(r13)
  addi      r4, r26, 0x38
  li        r5, 0
  bl        0x23C99C
  li        r3, 0x140
  bl        -0x1C2B24
  mr.       r0, r3
  beq-      .loc_0x824
  bl        0xAF34
  mr        r0, r3

.loc_0x824:
  stw       r0, -0x6B40(r13)
  addi      r4, r26, 0x38
  lwz       r3, -0x6514(r13)
  bl        0x23C97C
  mr        r3, r31
  bl        0xD0
  mr        r3, r31
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801E6A0C
 * Size:	000014
 */
void __ct__Q34Game8PlayData11CaveOtakaraFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E6A20
 * Size:	000038
 */
void __ct__Q34Game8PlayData8LimitGenFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x235774
  addi      r3, r31, 0x8
  bl        0x23576C
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
 * Size:	00003C
 */
void __dt__Q32kh6Screen12MailSaveDataFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E6A58
 * Size:	000068
 */
void __dt__Q24Game8PlayDataFv(void)
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
  beq-      .loc_0x4C
  lis       r4, 0x804C
  li        r0, 0
  subi      r5, r4, 0x5C90
  li        r4, 0
  stw       r5, 0x0(r30)
  stw       r0, -0x6B70(r13)
  bl        0x22AAF8
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x1C29EC

.loc_0x4C:
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
 * Address:	801E6AC0
 * Size:	0003D0
 */
void reset__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, -0x4990(r2)
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stfs      f0, 0x28(r3)
  stfs      f0, 0x24(r3)
  stb       r0, 0x20(r3)
  bl        -0xF3F58
  stw       r4, 0xD4(r31)
  li        r0, 0
  li        r6, 0
  li        r4, 0x1
  stw       r3, 0xD0(r31)
  stb       r0, 0x18(r31)
  stb       r0, 0x19(r31)
  stb       r0, 0x2F(r31)
  stb       r0, 0xF0(r31)
  stb       r0, 0xF1(r31)
  b         .loc_0x88

.loc_0x58:
  cmpwi     r6, 0x10
  bge-      .loc_0x84
  srawi     r3, r6, 0x3
  subfic    r0, r3, 0x1
  add       r5, r31, r0
  rlwinm    r0,r3,3,0,28
  lbz       r3, 0xF0(r5)
  sub       r0, r6, r0
  slw       r0, r4, r0
  or        r0, r3, r0
  stb       r0, 0xF0(r5)

.loc_0x84:
  addi      r6, r6, 0x1

.loc_0x88:
  cmpwi     r6, -0x1
  ble+      .loc_0x58
  lwz       r3, -0x6B40(r13)
  bl        0xAE9C
  li        r0, 0
  addi      r3, r31, 0xA8
  stw       r0, 0xE8(r31)
  stw       r0, 0xEC(r31)
  stw       r0, 0xFC(r31)
  stw       r0, 0xC0(r31)
  stw       r0, 0xC8(r31)
  stw       r0, 0xC4(r31)
  stw       r0, 0xCC(r31)
  bl        0xA710
  mr        r3, r31
  li        r4, 0
  bl        0x2774
  mr        r3, r31
  bl        0x2708
  mr        r3, r31
  bl        0x1F80
  lwz       r3, -0x6C38(r13)
  li        r7, 0
  lwz       r6, 0xB4(r31)
  mr        r5, r7
  lhz       r3, 0x100(r3)
  b         .loc_0x100

.loc_0xF4:
  lwz       r4, 0x8(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x100:
  lhz       r0, 0x4(r6)
  cmpw      r7, r0
  blt+      .loc_0xF4
  li        r7, 0
  mr        r5, r7
  b         .loc_0x124

.loc_0x118:
  lwz       r4, 0x10(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x124:
  lhz       r0, 0xC(r6)
  cmpw      r7, r0
  blt+      .loc_0x118
  li        r7, 0
  mr        r5, r7
  b         .loc_0x148

.loc_0x13C:
  lwz       r4, 0x18(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x148:
  lhz       r0, 0x14(r6)
  cmpw      r7, r0
  blt+      .loc_0x13C
  li        r7, 0
  lwz       r6, 0xB8(r31)
  mr        r5, r7
  b         .loc_0x170

.loc_0x164:
  lwz       r4, 0x8(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x170:
  lhz       r0, 0x4(r6)
  cmpw      r7, r0
  blt+      .loc_0x164
  li        r7, 0
  mr        r5, r7
  b         .loc_0x194

.loc_0x188:
  lwz       r4, 0x10(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x194:
  lhz       r0, 0xC(r6)
  cmpw      r7, r0
  blt+      .loc_0x188
  li        r7, 0
  mr        r5, r7
  b         .loc_0x1B8

.loc_0x1AC:
  lwz       r4, 0x18(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x1B8:
  lhz       r0, 0x14(r6)
  cmpw      r7, r0
  blt+      .loc_0x1AC
  li        r7, 0
  lwz       r6, 0xB0(r31)
  mr        r5, r7
  b         .loc_0x1E0

.loc_0x1D4:
  lwz       r4, 0x8(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x1E0:
  lhz       r0, 0x4(r6)
  cmpw      r7, r0
  blt+      .loc_0x1D4
  li        r7, 0
  mr        r5, r7
  b         .loc_0x204

.loc_0x1F8:
  lwz       r4, 0x10(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x204:
  lhz       r0, 0xC(r6)
  cmpw      r7, r0
  blt+      .loc_0x1F8
  li        r7, 0
  mr        r5, r7
  b         .loc_0x228

.loc_0x21C:
  lwz       r4, 0x18(r6)
  stbx      r5, r4, r7
  addi      r7, r7, 0x1

.loc_0x228:
  lhz       r0, 0x14(r6)
  cmpw      r7, r0
  blt+      .loc_0x21C
  li        r0, 0
  cmpwi     r3, 0
  stw       r0, 0xBC(r31)
  li        r4, 0
  ble-      .loc_0x33C
  cmpwi     r3, 0x8
  subi      r5, r3, 0x8
  ble-      .loc_0x310
  addi      r0, r5, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r5, 0
  ble-      .loc_0x310

.loc_0x268:
  lwz       r5, 0xDC(r31)
  li        r12, 0
  addi      r11, r4, 0x1
  addi      r10, r4, 0x2
  stbx      r12, r5, r4
  addi      r9, r4, 0x3
  addi      r8, r4, 0x4
  addi      r7, r4, 0x5
  lwz       r5, 0xF4(r31)
  addi      r6, r4, 0x6
  addi      r0, r4, 0x7
  stbx      r12, r5, r4
  addi      r4, r4, 0x8
  lwz       r5, 0xDC(r31)
  stbx      r12, r5, r11
  lwz       r5, 0xF4(r31)
  stbx      r12, r5, r11
  lwz       r5, 0xDC(r31)
  stbx      r12, r5, r10
  lwz       r5, 0xF4(r31)
  stbx      r12, r5, r10
  lwz       r5, 0xDC(r31)
  stbx      r12, r5, r9
  lwz       r5, 0xF4(r31)
  stbx      r12, r5, r9
  lwz       r5, 0xDC(r31)
  stbx      r12, r5, r8
  lwz       r5, 0xF4(r31)
  stbx      r12, r5, r8
  lwz       r5, 0xDC(r31)
  stbx      r12, r5, r7
  lwz       r5, 0xF4(r31)
  stbx      r12, r5, r7
  lwz       r5, 0xDC(r31)
  stbx      r12, r5, r6
  lwz       r5, 0xF4(r31)
  stbx      r12, r5, r6
  lwz       r5, 0xDC(r31)
  stbx      r12, r5, r0
  lwz       r5, 0xF4(r31)
  stbx      r12, r5, r0
  bdnz+     .loc_0x268

.loc_0x310:
  sub       r0, r3, r4
  li        r5, 0
  mtctr     r0
  cmpw      r4, r3
  bge-      .loc_0x33C

.loc_0x324:
  lwz       r3, 0xDC(r31)
  stbx      r5, r3, r4
  lwz       r3, 0xF4(r31)
  stbx      r5, r3, r4
  addi      r4, r4, 0x1
  bdnz+     .loc_0x324

.loc_0x33C:
  mr        r3, r31
  bl        0x20C
  addi      r3, r31, 0x30
  bl        0x235544
  addi      r3, r31, 0x38
  bl        0x23553C
  addi      r3, r31, 0x40
  bl        0x4CB6C
  li        r0, 0
  addi      r3, r31, 0x4C
  stb       r0, 0x48(r31)
  stb       r0, 0x49(r31)
  stb       r0, 0x4A(r31)
  stb       r0, 0x4B(r31)
  bl        0x2990
  addi      r3, r31, 0x84
  bl        0x22A1A4
  li        r0, 0
  stw       r0, 0x118(r31)
  stw       r0, 0x100(r31)
  stw       r0, 0x11C(r31)
  stw       r0, 0x104(r31)
  stw       r0, 0x120(r31)
  stw       r0, 0x108(r31)
  stw       r0, 0x124(r31)
  stw       r0, 0x10C(r31)
  stw       r0, 0x128(r31)
  stw       r0, 0x110(r31)
  stw       r0, 0x12C(r31)
  stw       r0, 0x114(r31)
  bl        0x49820
  bl        0x48B84
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E6E90
 * Size:	0000C8
 */
void setDevelopSetting__Q24Game8PlayDataFbb(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,24,31
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  stb       r4, 0x18(r3)
  beq-      .loc_0xB0
  li        r4, 0x1
  bl        0x2440
  mr        r3, r30
  bl        0x438
  addi      r3, r30, 0x30
  bl        0x2354A8
  addi      r3, r30, 0x38
  bl        0x2354A0
  lbz       r0, 0x48(r30)
  li        r4, 0x1
  ori       r0, r0, 0x4
  stb       r0, 0x48(r30)
  lwz       r3, -0x6B70(r13)
  bl        0x247C
  mr        r3, r30
  li        r4, 0x1
  bl        0x2404
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xB0
  addi      r3, r30, 0x30
  li        r4, 0x32
  bl        0x2354C0
  addi      r3, r30, 0x30
  li        r4, 0x1B
  bl        0x2354B4
  addi      r3, r30, 0x30
  li        r4, 0x1C
  bl        0x2354A8
  addi      r3, r30, 0x30
  li        r4, 0x1D
  bl        0x23549C
  addi      r3, r30, 0x30
  li        r4, 0x1E
  bl        0x235490

.loc_0xB0:
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
 * Address:	801E6F58
 * Size:	0000B4
 */
void calcPlayMinutes__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stw       r31, 0x8C(r1)
  stw       r30, 0x88(r1)
  stw       r29, 0x84(r1)
  mr        r29, r3
  bl        -0xF43E4
  mr        r30, r4
  mr        r31, r3
  addi      r5, r1, 0x58
  bl        -0xF41D4
  lwz       r3, 0xD0(r29)
  addi      r5, r1, 0x30
  lwz       r4, 0xD4(r29)
  bl        -0xF41E4
  lwz       r3, 0xD4(r29)
  addi      r5, r1, 0x8
  lwz       r0, 0xD0(r29)
  subc      r30, r30, r3
  subfe     r31, r0, r31
  mr        r4, r30
  mr        r3, r31
  bl        -0xF4204
  lis       r4, 0x8000
  mr        r3, r31
  lwz       r0, 0xF8(r4)
  mr        r4, r30
  li        r5, 0
  rlwinm    r6,r0,30,2,31
  bl        -0x12520C
  lis       r3, 0x8889
  subi      r0, r3, 0x7777
  mulhw     r0, r0, r4
  add       r0, r0, r4
  srawi     r0, r0, 0x5
  rlwinm    r3,r0,1,31,31
  add       r3, r0, r3
  lwz       r31, 0x8C(r1)
  lwz       r30, 0x88(r1)
  lwz       r29, 0x84(r1)
  lwz       r0, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	801E700C
 * Size:	000014
 */
void resetContainerFlag__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x2E(r3)
  stb       r0, 0x2D(r3)
  stb       r0, 0x2C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E7020
 * Size:	000088
 */
void hasContainer__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x5
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x3EA
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BCA30

.loc_0x54:
  li        r0, 0x1
  lbz       r3, 0x2C(r30)
  slw       r0, r0, r31
  and       r3, r3, r0
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E70A8
 * Size:	000030
 */
void hasMetPikmin__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  cmpwi     r4, 0x5
  bne-      .loc_0x10
  li        r3, 0x1
  blr       

.loc_0x10:
  li        r0, 0x1
  lbz       r3, 0x2E(r3)
  slw       r0, r0, r4
  and       r3, r3, r0
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	801E70D8
 * Size:	0000A4
 */
void hasBootContainer__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  cmpwi     r31, 0x4
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x2C
  cmpwi     r31, 0x3
  bne-      .loc_0x34

.loc_0x2C:
  li        r3, 0
  b         .loc_0x8C

.loc_0x34:
  cmpwi     r31, 0
  li        r0, 0
  blt-      .loc_0x4C
  cmpwi     r31, 0x2
  bgt-      .loc_0x4C
  li        r0, 0x1

.loc_0x4C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x70
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x3FA
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BCB04

.loc_0x70:
  li        r0, 0x1
  lbz       r3, 0x2D(r30)
  slw       r0, r0, r31
  and       r3, r3, r0
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31

.loc_0x8C:
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
 * Address:	801E717C
 * Size:	000080
 */
void setContainer__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x5
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x400
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BCB8C

.loc_0x54:
  li        r0, 0x1
  lbz       r3, 0x2C(r30)
  slw       r0, r0, r31
  or        r0, r3, r0
  stb       r0, 0x2C(r30)
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
 * Address:	801E71FC
 * Size:	000080
 */
void setMeetPikmin__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x5
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x406
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BCC0C

.loc_0x54:
  li        r0, 0x1
  lbz       r3, 0x2E(r30)
  slw       r0, r0, r31
  or        r0, r3, r0
  stb       r0, 0x2E(r30)
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
 * Address:	801E727C
 * Size:	000080
 */
void setBootContainer__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x2
  bgt-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x40C
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BCC8C

.loc_0x54:
  li        r0, 0x1
  lbz       r3, 0x2D(r30)
  slw       r0, r0, r31
  or        r0, r3, r0
  stb       r0, 0x2D(r30)
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
 * Address:	801E72FC
 * Size:	0000A8
 */
void debugSetContainerFlagOn__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  lbz       r4, 0x2C(r3)
  li        r0, 0x1
  ori       r4, r4, 0x1
  stb       r4, 0x2C(r3)
  lbz       r4, 0x2C(r3)
  ori       r4, r4, 0x2
  stb       r4, 0x2C(r3)
  lbz       r4, 0x2C(r3)
  ori       r4, r4, 0x4
  stb       r4, 0x2C(r3)
  lbz       r4, 0x2C(r3)
  ori       r4, r4, 0x10
  stb       r4, 0x2C(r3)
  lbz       r4, 0x2C(r3)
  ori       r4, r4, 0x8
  stb       r4, 0x2C(r3)
  lbz       r4, 0x2D(r3)
  ori       r4, r4, 0x1
  stb       r4, 0x2D(r3)
  lbz       r4, 0x2D(r3)
  ori       r4, r4, 0x2
  stb       r4, 0x2D(r3)
  lbz       r4, 0x2D(r3)
  ori       r4, r4, 0x4
  stb       r4, 0x2D(r3)
  lbz       r4, 0x2E(r3)
  ori       r4, r4, 0x1
  stb       r4, 0x2E(r3)
  lbz       r4, 0x2E(r3)
  ori       r4, r4, 0x2
  stb       r4, 0x2E(r3)
  lbz       r4, 0x2E(r3)
  ori       r4, r4, 0x4
  stb       r4, 0x2E(r3)
  lbz       r4, 0x2E(r3)
  ori       r4, r4, 0x10
  stb       r4, 0x2E(r3)
  lbz       r4, 0x2E(r3)
  ori       r4, r4, 0x8
  stb       r4, 0x2E(r3)
  stb       r0, 0x19(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E73A4
 * Size:	00003C
 */
void setDemoFlag__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r4,r4,0,16,31
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x30
  bl        0x234FDC
  addi      r3, r31, 0x30
  bl        0x234DF0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E73E0
 * Size:	000028
 */
void isDemoFlag__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x30
  rlwinm    r4,r4,0,16,31
  stw       r0, 0x14(r1)
  bl        0x235008
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E7408
 * Size:	00003C
 */
void setFindItemDemoFlag__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r4,r4,0,16,31
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x38
  bl        0x234F78
  addi      r3, r31, 0x38
  bl        0x234D8C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E7444
 * Size:	000028
 */
void isFindItemDemoFlag__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x38
  rlwinm    r4,r4,0,16,31
  stw       r0, 0x14(r1)
  bl        0x234FA4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E746C
 * Size:	000008
 */
void setCurrentCourse__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stw       r4, 0x50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E7474
 * Size:	00000C
 */
void clearCurrentCave__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x4C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E7480
 * Size:	00004C
 */
void setCurrentCave__Q24Game8PlayDataFR4ID32i(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  addi      r3, r30, 0x54
  lwz       r4, 0x8(r4)
  bl        0x22BE34
  stw       r31, 0x74(r30)
  li        r0, 0x1
  stb       r0, 0x4C(r30)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E74CC
 * Size:	000010
 */
void setCurrentCaveFloor__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stw       r4, 0x74(r3)
  li        r0, 0x1
  stb       r0, 0x4C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E74DC
 * Size:	000008
 */
void getCurrentCourseIndex__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0x50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E74E4
 * Size:	000038
 */
void getCurrentCourse__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x50(r3)
  cmpwi     r4, -0x1
  beq-      .loc_0x24
  lwz       r3, -0x6C38(r13)
  bl        -0x39554
  b         .loc_0x28

.loc_0x24:
  li        r3, 0

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E751C
 * Size:	000048
 */
void getCurrentCave__Q24Game8PlayDataFR4ID32Ri(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r4
  lwz       r4, 0x5C(r30)
  bl        0x22BD98
  lwz       r0, 0x74(r30)
  stw       r0, 0x0(r31)
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
 * Address:	801E7564
 * Size:	000030
 */
void firstCarryPellet__Q24Game8PlayDataFPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0xB0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E7594
 * Size:	000030
 */
void obtainPellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0xB0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E75C4
 * Size:	000030
 */
void losePellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0xB0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E75F4
 * Size:	000320
 */
void obtainPellet_Main__Q24Game8PlayDataFPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  stw       r28, 0x10(r1)
  lwz       r12, 0x0(r30)
  lwz       r31, 0xB4(r29)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0xEC
  mr        r3, r30
  bl        -0x80C60
  mr.       r28, r3
  li        r3, 0
  blt-      .loc_0x6C
  lhz       r0, 0x4(r31)
  cmpw      r28, r0
  bge-      .loc_0x6C
  li        r3, 0x1

.loc_0x6C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x90
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD040

.loc_0x90:
  lwz       r5, 0x8(r31)
  mr        r3, r30
  lbzx      r4, r5, r28
  addi      r0, r4, 0x1
  stbx      r0, r5, r28
  bl        -0x80C60
  cmpwi     r28, 0
  li        r3, 0
  blt-      .loc_0xC4
  lhz       r0, 0x4(r31)
  cmpw      r28, r0
  bge-      .loc_0xC4
  li        r3, 0x1

.loc_0xC4:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x270
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD098
  b         .loc_0x270

.loc_0xEC:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x1B0
  mr        r3, r30
  bl        -0x80D24
  mr.       r28, r3
  li        r3, 0
  blt-      .loc_0x130
  lhz       r0, 0xC(r31)
  cmpw      r28, r0
  bge-      .loc_0x130
  li        r3, 0x1

.loc_0x130:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x154
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD104

.loc_0x154:
  lwz       r5, 0x10(r31)
  mr        r3, r30
  lbzx      r4, r5, r28
  addi      r0, r4, 0x1
  stbx      r0, r5, r28
  bl        -0x80D24
  cmpwi     r28, 0
  li        r3, 0
  blt-      .loc_0x188
  lhz       r0, 0xC(r31)
  cmpw      r28, r0
  bge-      .loc_0x188
  li        r3, 0x1

.loc_0x188:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x270
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD15C
  b         .loc_0x270

.loc_0x1B0:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  bne-      .loc_0x270
  mr        r3, r30
  bl        -0x80DE8
  mr.       r28, r3
  li        r3, 0
  blt-      .loc_0x1F4
  lhz       r0, 0x14(r31)
  cmpw      r28, r0
  bge-      .loc_0x1F4
  li        r3, 0x1

.loc_0x1F4:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x218
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD1C8

.loc_0x218:
  lwz       r5, 0x18(r31)
  mr        r3, r30
  lbzx      r4, r5, r28
  addi      r0, r4, 0x1
  stbx      r0, r5, r28
  bl        -0x80DE8
  cmpwi     r28, 0
  li        r3, 0
  blt-      .loc_0x24C
  lhz       r0, 0x14(r31)
  cmpw      r28, r0
  bge-      .loc_0x24C
  li        r3, 0x1

.loc_0x24C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x270
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD220

.loc_0x270:
  mr        r3, r30
  li        r28, 0
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x29C
  lwz       r28, -0x6AE0(r13)
  b         .loc_0x2C0

.loc_0x29C:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x2C0
  lwz       r28, -0x6AD8(r13)

.loc_0x2C0:
  cmplwi    r28, 0
  beq-      .loc_0x2EC
  mr        r3, r30
  bl        -0x80EE0
  mr        r5, r3
  lwz       r3, 0xB0(r29)
  mr        r4, r28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x2EC:
  lwz       r3, 0x35C(r30)
  lwz       r4, 0xE8(r29)
  lwz       r0, 0x170(r3)
  add       r0, r4, r0
  stw       r0, 0xE8(r29)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E7914
 * Size:	000284
 */
void obtainPellet_Cave__Q24Game8PlayDataFPQ24Game6Pellet(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  lwz       r12, 0x0(r30)
  lwz       r31, 0xB8(r3)
  mr        r3, r30
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0xE4
  mr        r3, r30
  bl        -0x80F78
  mr.       r29, r3
  li        r3, 0
  blt-      .loc_0x64
  lhz       r0, 0x4(r31)
  cmpw      r29, r0
  bge-      .loc_0x64
  li        r3, 0x1

.loc_0x64:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD358

.loc_0x88:
  lwz       r5, 0x8(r31)
  mr        r3, r30
  lbzx      r4, r5, r29
  addi      r0, r4, 0x1
  stbx      r0, r5, r29
  bl        -0x80F78
  cmpwi     r29, 0
  li        r3, 0
  blt-      .loc_0xBC
  lhz       r0, 0x4(r31)
  cmpw      r29, r0
  bge-      .loc_0xBC
  li        r3, 0x1

.loc_0xBC:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x268
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD3B0
  b         .loc_0x268

.loc_0xE4:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x1A8
  mr        r3, r30
  bl        -0x8103C
  mr.       r29, r3
  li        r3, 0
  blt-      .loc_0x128
  lhz       r0, 0xC(r31)
  cmpw      r29, r0
  bge-      .loc_0x128
  li        r3, 0x1

.loc_0x128:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x14C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD41C

.loc_0x14C:
  lwz       r5, 0x10(r31)
  mr        r3, r30
  lbzx      r4, r5, r29
  addi      r0, r4, 0x1
  stbx      r0, r5, r29
  bl        -0x8103C
  cmpwi     r29, 0
  li        r3, 0
  blt-      .loc_0x180
  lhz       r0, 0xC(r31)
  cmpw      r29, r0
  bge-      .loc_0x180
  li        r3, 0x1

.loc_0x180:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x268
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD474
  b         .loc_0x268

.loc_0x1A8:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x1F4(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x1
  bne-      .loc_0x268
  mr        r3, r30
  bl        -0x81100
  mr.       r29, r3
  li        r3, 0
  blt-      .loc_0x1EC
  lhz       r0, 0x14(r31)
  cmpw      r29, r0
  bge-      .loc_0x1EC
  li        r3, 0x1

.loc_0x1EC:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x210
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD4E0

.loc_0x210:
  lwz       r5, 0x18(r31)
  mr        r3, r30
  lbzx      r4, r5, r29
  addi      r0, r4, 0x1
  stbx      r0, r5, r29
  bl        -0x81100
  cmpwi     r29, 0
  li        r3, 0
  blt-      .loc_0x244
  lhz       r0, 0x14(r31)
  cmpw      r29, r0
  bge-      .loc_0x244
  li        r3, 0x1

.loc_0x244:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x268
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD538

.loc_0x268:
  lwz       r0, 0x24(r1)
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
 * Address:	........
 * Size:	000004
 */
void confirmCaveCropMemory__Q24Game8PlayDataFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void isPelletEverGot__Q24Game8PlayDataFPQ24Game6Pellet(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E7B98
 * Size:	000104
 */
void isPelletEverGot__Q24Game8PlayDataFUcUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,0,24,31
  lis       r4, 0x8048
  stw       r31, 0xC(r1)
  cmplwi    r0, 0x4
  addi      r4, r4, 0xE40
  stw       r30, 0x8(r1)
  bne-      .loc_0x7C
  rlwinm.   r30,r5,0,24,31
  lwz       r31, 0xB0(r3)
  li        r3, 0
  blt-      .loc_0x48
  lhz       r0, 0xC(r31)
  cmpw      r30, r0
  bge-      .loc_0x48
  li        r3, 0x1

.loc_0x48:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x64
  addi      r3, r4, 0xC
  addi      r5, r4, 0x20
  li        r4, 0x14A
  crclr     6, 0x6
  bl        -0x1BD5B8

.loc_0x64:
  lwz       r3, 0x10(r31)
  lbzx      r3, r3, r30
  neg       r0, r3
  andc      r0, r0, r3
  rlwinm    r3,r0,1,31,31
  b         .loc_0xEC

.loc_0x7C:
  cmplwi    r0, 0x3
  bne-      .loc_0xD8
  rlwinm.   r30,r5,0,24,31
  lwz       r31, 0xB0(r3)
  li        r3, 0
  blt-      .loc_0xA4
  lhz       r0, 0x4(r31)
  cmpw      r30, r0
  bge-      .loc_0xA4
  li        r3, 0x1

.loc_0xA4:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xC0
  addi      r3, r4, 0xC
  addi      r5, r4, 0x20
  li        r4, 0x14A
  crclr     6, 0x6
  bl        -0x1BD614

.loc_0xC0:
  lwz       r3, 0x8(r31)
  lbzx      r3, r3, r30
  neg       r0, r3
  andc      r0, r0, r3
  rlwinm    r3,r0,1,31,31
  b         .loc_0xEC

.loc_0xD8:
  addi      r3, r4, 0xC
  addi      r5, r4, 0x48
  li        r4, 0x57E
  crclr     6, 0x6
  bl        -0x1BD640

.loc_0xEC:
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
 * Address:	801E7C9C
 * Size:	000128
 */
void isPelletZukanVisible__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x3
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        0x400A0
  mr        r4, r30
  bl        -0x337A0
  cmplwi    r3, 0
  beq-      .loc_0x94
  lha       r30, 0x258(r3)
  li        r3, 0
  lwz       r31, 0xB0(r31)
  cmpwi     r30, 0
  blt-      .loc_0x58
  lhz       r0, 0x4(r31)
  cmpw      r30, r0
  bge-      .loc_0x58
  li        r3, 0x1

.loc_0x58:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x7C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD6D4

.loc_0x7C:
  lwz       r3, 0x8(r31)
  lbzx      r0, r3, r30
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x10C
  li        r3, 0x1
  b         .loc_0x110

.loc_0x94:
  li        r3, 0x4
  bl        0x40028
  mr        r4, r30
  bl        -0x33818
  cmplwi    r3, 0
  beq-      .loc_0x10C
  lha       r30, 0x258(r3)
  li        r3, 0
  lwz       r31, 0xB0(r31)
  cmpwi     r30, 0
  blt-      .loc_0xD0
  lhz       r0, 0xC(r31)
  cmpw      r30, r0
  bge-      .loc_0xD0
  li        r3, 0x1

.loc_0xD0:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xF4
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD74C

.loc_0xF4:
  lwz       r3, 0x10(r31)
  lbzx      r0, r3, r30
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x10C
  li        r3, 0x1
  b         .loc_0x110

.loc_0x10C:
  li        r3, 0

.loc_0x110:
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
 * Address:	801E7DC4
 * Size:	000138
 */
void isPelletZukanWhatsNew__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x3
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        0x3FF78
  mr        r4, r30
  bl        -0x338C8
  cmplwi    r3, 0
  beq-      .loc_0x9C
  lha       r30, 0x258(r3)
  li        r3, 0
  lwz       r31, 0xB0(r31)
  cmpwi     r30, 0
  blt-      .loc_0x58
  lhz       r0, 0x4(r31)
  cmpw      r30, r0
  bge-      .loc_0x58
  li        r3, 0x1

.loc_0x58:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x7C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD7FC

.loc_0x7C:
  lwz       r3, 0x8(r31)
  lbzx      r3, r3, r30
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0x11C
  rlwinm.   r0,r3,0,29,29
  bne-      .loc_0x11C
  li        r3, 0x1
  b         .loc_0x120

.loc_0x9C:
  li        r3, 0x4
  bl        0x3FEF8
  mr        r4, r30
  bl        -0x33948
  cmplwi    r3, 0
  beq-      .loc_0x11C
  lha       r30, 0x258(r3)
  li        r3, 0
  lwz       r31, 0xB0(r31)
  cmpwi     r30, 0
  blt-      .loc_0xD8
  lhz       r0, 0xC(r31)
  cmpw      r30, r0
  bge-      .loc_0xD8
  li        r3, 0x1

.loc_0xD8:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xFC
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD87C

.loc_0xFC:
  lwz       r3, 0x10(r31)
  lbzx      r3, r3, r30
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0x11C
  rlwinm.   r0,r3,0,29,29
  bne-      .loc_0x11C
  li        r3, 0x1
  b         .loc_0x120

.loc_0x11C:
  li        r3, 0

.loc_0x120:
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
 * Address:	801E7EFC
 * Size:	0001BC
 */
void hasPelletZukanWhatsNew__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r31, 0xB0(r3)
  b         .loc_0xD0

.loc_0x28:
  cmpwi     r30, 0
  li        r0, 0
  blt-      .loc_0x40
  cmpw      r30, r3
  bge-      .loc_0x40
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD91C

.loc_0x64:
  lwz       r3, 0x8(r31)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  beq-      .loc_0xCC
  cmpwi     r30, 0
  li        r3, 0
  blt-      .loc_0x90
  lhz       r0, 0x4(r31)
  cmpw      r30, r0
  bge-      .loc_0x90
  li        r3, 0x1

.loc_0x90:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB4
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD96C

.loc_0xB4:
  lwz       r3, 0x8(r31)
  lbzx      r0, r3, r30
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0xCC
  li        r3, 0x1
  b         .loc_0x1A0

.loc_0xCC:
  addi      r30, r30, 0x1

.loc_0xD0:
  lhz       r3, 0x4(r31)
  cmpw      r30, r3
  blt+      .loc_0x28
  lwz       r31, 0xB0(r29)
  li        r30, 0
  b         .loc_0x190

.loc_0xE8:
  cmpwi     r30, 0
  li        r0, 0
  blt-      .loc_0x100
  cmpw      r30, r3
  bge-      .loc_0x100
  li        r0, 0x1

.loc_0x100:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x124
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BD9DC

.loc_0x124:
  lwz       r3, 0x10(r31)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  beq-      .loc_0x18C
  cmpwi     r30, 0
  li        r3, 0
  blt-      .loc_0x150
  lhz       r0, 0xC(r31)
  cmpw      r30, r0
  bge-      .loc_0x150
  li        r3, 0x1

.loc_0x150:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x174
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDA2C

.loc_0x174:
  lwz       r3, 0x10(r31)
  lbzx      r0, r3, r30
  rlwinm.   r0,r0,0,29,29
  bne-      .loc_0x18C
  li        r3, 0x1
  b         .loc_0x1A0

.loc_0x18C:
  addi      r30, r30, 0x1

.loc_0x190:
  lhz       r3, 0xC(r31)
  cmpw      r30, r3
  blt+      .loc_0xE8
  li        r3, 0

.loc_0x1A0:
  lwz       r0, 0x24(r1)
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
 * Address:	801E80B8
 * Size:	0001A8
 */
void setPelletZukanOutOfDateAll__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r31, 0xB0(r3)
  b         .loc_0xC8

.loc_0x28:
  cmpwi     r30, 0
  li        r0, 0
  blt-      .loc_0x40
  cmpw      r30, r3
  bge-      .loc_0x40
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDAD8

.loc_0x64:
  lwz       r3, 0x8(r31)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  beq-      .loc_0xC4
  cmpwi     r30, 0
  li        r3, 0
  blt-      .loc_0x90
  lhz       r0, 0x4(r31)
  cmpw      r30, r0
  bge-      .loc_0x90
  li        r3, 0x1

.loc_0x90:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB4
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDB28

.loc_0xB4:
  lwz       r3, 0x8(r31)
  lbzx      r0, r3, r30
  ori       r0, r0, 0x4
  stbx      r0, r3, r30

.loc_0xC4:
  addi      r30, r30, 0x1

.loc_0xC8:
  lhz       r3, 0x4(r31)
  cmpw      r30, r3
  blt+      .loc_0x28
  lwz       r31, 0xB0(r29)
  li        r30, 0
  b         .loc_0x180

.loc_0xE0:
  cmpwi     r30, 0
  li        r0, 0
  blt-      .loc_0xF8
  cmpw      r30, r3
  bge-      .loc_0xF8
  li        r0, 0x1

.loc_0xF8:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x11C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDB90

.loc_0x11C:
  lwz       r3, 0x10(r31)
  lbzx      r0, r3, r30
  cmplwi    r0, 0
  beq-      .loc_0x17C
  cmpwi     r30, 0
  li        r3, 0
  blt-      .loc_0x148
  lhz       r0, 0xC(r31)
  cmpw      r30, r0
  bge-      .loc_0x148
  li        r3, 0x1

.loc_0x148:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x16C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x14A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDBE0

.loc_0x16C:
  lwz       r3, 0x10(r31)
  lbzx      r0, r3, r30
  ori       r0, r0, 0x4
  stbx      r0, r3, r30

.loc_0x17C:
  addi      r30, r30, 0x1

.loc_0x180:
  lhz       r3, 0xC(r31)
  cmpw      r30, r3
  blt+      .loc_0xE0
  lwz       r0, 0x24(r1)
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
 * Address:	........
 * Size:	0000C4
 */
void getTekiCarcassMoney__Q24Game8PlayDataFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E8260
 * Size:	00007C
 */
void getGroundOtakaraNum__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x607
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDC78

.loc_0x5C:
  lwz       r3, 0xDC(r30)
  lwz       r0, 0x14(r1)
  lbzx      r3, r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E82DC
 * Size:	000078
 */
void getGroundOtakaraMax__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  blt-      .loc_0x30
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x30
  li        r4, 0x1

.loc_0x30:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x60E
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDCEC

.loc_0x54:
  lwz       r3, -0x6C38(r13)
  mr        r4, r31
  bl        -0x3A38C
  lwz       r0, 0x14(r1)
  lwz       r3, 0xCC(r3)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8354
 * Size:	000084
 */
void incGroundOtakara__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x616
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDD6C

.loc_0x5C:
  lwz       r4, 0xDC(r30)
  lbzx      r3, r4, r31
  addi      r0, r3, 0x1
  stbx      r0, r4, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E83D8
 * Size:	000078
 */
void getDopeCount__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x2
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x624
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDDE8

.loc_0x54:
  rlwinm    r0,r31,2,0,29
  add       r3, r30, r0
  lwz       r3, 0xC0(r3)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8450
 * Size:	000084
 */
void setDopeCount__Q24Game8PlayDataFii(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr.       r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  blt-      .loc_0x38
  cmpwi     r30, 0x2
  bge-      .loc_0x38
  li        r0, 0x1

.loc_0x38:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x62A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDE68

.loc_0x5C:
  rlwinm    r0,r30,2,0,29
  add       r3, r29, r0
  stw       r31, 0xC0(r3)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E84D4
 * Size:	000080
 */
void incDopeCount__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x2
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x630
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDEE4

.loc_0x54:
  rlwinm    r0,r31,2,0,29
  add       r4, r30, r0
  lwz       r3, 0xC0(r4)
  addi      r0, r3, 0x1
  stw       r0, 0xC0(r4)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8554
 * Size:	000084
 */
void hasDope__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x2
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x636
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDF64

.loc_0x54:
  rlwinm    r0,r31,2,0,29
  add       r3, r30, r0
  lwz       r3, 0xC0(r3)
  neg       r0, r3
  andc      r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E85D8
 * Size:	000078
 */
void getDopeFruitCount__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x2
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x63C
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BDFE8

.loc_0x54:
  rlwinm    r0,r31,2,0,29
  add       r3, r30, r0
  lwz       r3, 0xC8(r3)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8650
 * Size:	0000B4
 */
void addDopeFruit__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x2
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x642
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BE060

.loc_0x54:
  rlwinm    r0,r31,2,0,29
  add       r5, r30, r0
  lwz       r3, 0xC8(r5)
  addi      r0, r3, 0x1
  stw       r0, 0xC8(r5)
  lwz       r3, -0x6C10(r13)
  lwz       r4, 0xC8(r5)
  lwz       r0, 0x38(r3)
  cmpw      r4, r0
  blt-      .loc_0x98
  li        r0, 0
  li        r3, 0x1
  stw       r0, 0xC8(r5)
  lwz       r4, 0xC0(r5)
  addi      r0, r4, 0x1
  stw       r0, 0xC0(r5)
  b         .loc_0x9C

.loc_0x98:
  li        r3, 0

.loc_0x9C:
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
 * Address:	801E8704
 * Size:	0000C4
 */
void useDope__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x2
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x64E
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BE114

.loc_0x54:
  cmpwi     r31, 0
  li        r0, 0
  blt-      .loc_0x6C
  cmpwi     r31, 0x2
  bge-      .loc_0x6C
  li        r0, 0x1

.loc_0x6C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x90
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x636
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BE150

.loc_0x90:
  rlwinm    r0,r31,2,0,29
  add       r4, r30, r0
  lwz       r3, 0xC0(r4)
  cmpwi     r3, 0
  ble-      .loc_0xAC
  subi      r0, r3, 0x1
  stw       r0, 0xC0(r4)

.loc_0xAC:
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
 * Address:	801E87C8
 * Size:	0000DC
 */
void isCaveFirstTime__Q24Game8PlayDataFiR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r4
  lwz       r3, -0x6C38(r13)
  bl        -0x3A844
  cmplwi    r3, 0
  beq-      .loc_0x84
  mulli     r0, r29, 0xC
  lwz       r5, 0xE0(r31)
  mr        r4, r30
  add       r31, r5, r0
  bl        -0x3ACF8
  cmpwi     r3, -0x1
  beq-      .loc_0x84
  cmpwi     r3, 0
  blt-      .loc_0x7C
  lbz       r0, 0x0(r31)
  cmpw      r3, r0
  bge-      .loc_0x7C
  lwz       r4, 0x8(r31)
  rlwinm    r0,r3,2,0,29
  lwzx      r0, r4, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  b         .loc_0xC0

.loc_0x7C:
  li        r3, 0
  b         .loc_0xC0

.loc_0x84:
  addi      r3, r1, 0x8
  bl        0x22AA20
  lwz       r4, 0x8(r30)
  addi      r3, r1, 0x8
  bl        0x22AA7C
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0xEB0
  mr        r6, r29
  addi      r3, r3, 0xE4C
  mr        r7, r30
  li        r4, 0x66D
  crclr     6, 0x6
  bl        -0x1BE240
  li        r3, 0

.loc_0xC0:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void isCaveFirstReturn__Q24Game8PlayDataFiR4ID32(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E88A4
 * Size:	0000BC
 */
void setCaveVisit__Q24Game8PlayDataFiR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  lwz       r3, -0x6C38(r13)
  bl        -0x3A920
  cmplwi    r3, 0
  beq-      .loc_0x7C
  mulli     r0, r29, 0xC
  lwz       r5, 0xE0(r31)
  mr        r4, r30
  add       r31, r5, r0
  bl        -0x3ADD4
  cmpwi     r3, -0x1
  beq-      .loc_0x7C
  lwz       r4, 0x8(r31)
  rlwinm    r3,r3,2,0,29
  lwzx      r0, r4, r3
  cmpwi     r0, 0
  bne-      .loc_0x70
  li        r0, 0x1
  stwx      r0, r4, r3
  b         .loc_0xA0

.loc_0x70:
  li        r0, 0x2
  stwx      r0, r4, r3
  b         .loc_0xA0

.loc_0x7C:
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0xEB0
  mr        r6, r29
  addi      r3, r3, 0xE4C
  mr        r7, r30
  li        r4, 0x690
  crclr     6, 0x6
  bl        -0x1BE300

.loc_0xA0:
  lwz       r0, 0x24(r1)
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
 * Address:	801E8960
 * Size:	0000B8
 */
void incCaveOtakara__Q24Game8PlayDataFiR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r3, -0x6C38(r13)
  bl        -0x3A9E0
  mr.       r31, r3
  beq-      .loc_0x98
  mulli     r0, r29, 0xC
  lwz       r5, 0xE0(r28)
  mr        r4, r30
  add       r30, r5, r0
  bl        -0x3AE94
  mr        r4, r3
  cmpwi     r4, -0x1
  beq-      .loc_0x98
  cmpwi     r4, 0
  blt-      .loc_0x84
  lbz       r0, 0x0(r30)
  cmpw      r4, r0
  bge-      .loc_0x84
  lwz       r5, 0x4(r30)
  li        r6, 0x1
  lbzx      r3, r5, r4
  addi      r0, r3, 0x1
  stbx      r0, r5, r4
  b         .loc_0x88

.loc_0x84:
  li        r6, 0

.loc_0x88:
  rlwinm.   r0,r6,0,24,31
  beq-      .loc_0x98
  mr        r3, r31
  bl        -0x3AF18

.loc_0x98:
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
 * Address:	801E8A18
 * Size:	0000B8
 */
void getOtakaraNum_Course_CaveID__Q24Game8PlayDataFiR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, -0x6C38(r13)
  bl        -0x3AA94
  cmplwi    r3, 0
  beq-      .loc_0x78
  mulli     r0, r30, 0xC
  lwz       r5, 0xE0(r29)
  mr        r4, r31
  add       r31, r5, r0
  bl        -0x3AF48
  cmpwi     r3, -0x1
  beq-      .loc_0x98
  cmpwi     r3, 0
  blt-      .loc_0x70
  lbz       r0, 0x0(r31)
  cmpw      r3, r0
  bge-      .loc_0x70
  lwz       r4, 0x4(r31)
  lbzx      r3, r4, r3
  b         .loc_0x9C

.loc_0x70:
  li        r3, -0x1
  b         .loc_0x9C

.loc_0x78:
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0xED0
  mr        r6, r30
  addi      r3, r3, 0xE4C
  li        r4, 0x6BF
  crclr     6, 0x6
  bl        -0x1BE46C

.loc_0x98:
  li        r3, -0x1

.loc_0x9C:
  lwz       r0, 0x24(r1)
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
 * Address:	801E8AD0
 * Size:	000048
 */
void getOtakaraMax_Course_CaveID__Q24Game8PlayDataFiR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r5
  lwz       r3, -0x6C38(r13)
  bl        -0x3AB3C
  cmplwi    r3, 0
  beq-      .loc_0x30
  mr        r4, r31
  bl        -0x3B0A4
  b         .loc_0x34

.loc_0x30:
  li        r3, -0x1

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8B18
 * Size:	0000D4
 */
void initCaveOtakaras__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6C38(r13)
  li        r10, 0
  mr        r6, r10
  lhz       r8, 0x100(r4)
  mr        r5, r10
  mtctr     r8
  cmpwi     r8, 0
  ble-      .loc_0x6C

.loc_0x20:
  lwz       r0, 0xE0(r3)
  add       r11, r0, r10
  lbz       r0, 0x0(r11)
  cmplwi    r0, 0
  beq-      .loc_0x64
  li        r7, 0
  mr        r9, r7
  b         .loc_0x58

.loc_0x40:
  lwz       r4, 0x4(r11)
  stbx      r6, r4, r7
  addi      r7, r7, 0x1
  lwz       r4, 0x8(r11)
  stwx      r5, r4, r9
  addi      r9, r9, 0x4

.loc_0x58:
  lbz       r0, 0x0(r11)
  cmpw      r7, r0
  blt+      .loc_0x40

.loc_0x64:
  addi      r10, r10, 0xC
  bdnz+     .loc_0x20

.loc_0x6C:
  li        r9, 0
  mr        r6, r9
  mr        r5, r9
  mtctr     r8
  cmpwi     r8, 0
  blelr-    

.loc_0x84:
  lwz       r0, 0xF8(r3)
  add       r10, r0, r9
  lbz       r0, 0x0(r10)
  cmplwi    r0, 0
  beq-      .loc_0xC8
  li        r7, 0
  mr        r8, r7
  b         .loc_0xBC

.loc_0xA4:
  lwz       r4, 0x4(r10)
  stbx      r6, r4, r7
  addi      r7, r7, 0x1
  lwz       r4, 0x8(r10)
  stwx      r5, r4, r8
  addi      r8, r8, 0x4

.loc_0xBC:
  lbz       r0, 0x0(r10)
  cmpw      r7, r0
  blt+      .loc_0xA4

.loc_0xC8:
  addi      r9, r9, 0xC
  bdnz+     .loc_0x84
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8BEC
 * Size:	000060
 */
void read_CaveOtakara__Q24Game8PlayDataFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  li        r29, 0
  li        r30, 0
  lwz       r5, -0x6C38(r13)
  lhz       r31, 0x100(r5)
  b         .loc_0x44

.loc_0x2C:
  lwz       r0, 0xE0(r27)
  mr        r4, r28
  add       r3, r0, r30
  bl        0x178
  addi      r30, r30, 0xC
  addi      r29, r29, 0x1

.loc_0x44:
  cmpw      r29, r31
  blt+      .loc_0x2C
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8C4C
 * Size:	000078
 */
void write_CaveOtakara__Q24Game8PlayDataFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  addi      r4, r5, 0xEFC
  mr        r3, r28
  bl        0x22B3AC
  lwz       r3, -0x6C38(r13)
  li        r29, 0
  li        r30, 0
  lhz       r31, 0x100(r3)
  b         .loc_0x54

.loc_0x3C:
  lwz       r0, 0xE0(r27)
  mr        r4, r28
  add       r3, r0, r30
  bl        .loc_0x78
  addi      r30, r30, 0xC
  addi      r29, r29, 0x1

.loc_0x54:
  cmpw      r29, r31
  blt+      .loc_0x3C
  mr        r3, r28
  bl        0x22B3F4
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x78:
*/
}

/*
 * --INFO--
 * Address:	801E8CC4
 * Size:	0000D8
 */
void write__Q34Game8PlayData11CaveOtakaraFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r28, r4
  mr        r27, r3
  addi      r31, r5, 0xE40
  mr        r3, r28
  lwz       r4, 0x414(r4)
  bl        0x22B748
  lbz       r4, 0x0(r27)
  mr        r3, r28
  bl        0x22C978
  mr        r3, r28
  addi      r4, r31, 0xCC
  crclr     6, 0x6
  bl        0x22B4D4
  li        r29, 0
  li        r30, 0
  b         .loc_0xB8

.loc_0x54:
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        0x22B714
  lwz       r4, 0x4(r27)
  mr        r3, r28
  lbzx      r4, r4, r29
  bl        0x22C940
  mr        r3, r28
  addi      r4, r31, 0xD8
  crclr     6, 0x6
  bl        0x22B49C
  lwz       r4, 0x414(r28)
  mr        r3, r28
  bl        0x22B6E8
  lwz       r4, 0x8(r27)
  mr        r3, r28
  lwzx      r0, r4, r30
  rlwinm    r4,r0,0,24,31
  bl        0x22C910
  mr        r3, r28
  addi      r4, r31, 0xE4
  crclr     6, 0x6
  bl        0x22B46C
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0xB8:
  lbz       r0, 0x0(r27)
  cmpw      r29, r0
  blt+      .loc_0x54
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8D9C
 * Size:	0000C0
 */
void read__Q34Game8PlayData11CaveOtakaraFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lbz       r31, 0x0(r3)
  mr        r3, r29
  bl        0x22B6D4
  stb       r3, 0x0(r28)
  lbz       r0, 0x0(r28)
  cmplw     r31, r0
  beq-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x705
  addi      r5, r5, 0xF30
  crclr     6, 0x6
  bl        -0x1BE7B4

.loc_0x5C:
  li        r30, 0
  li        r31, 0
  b         .loc_0x94

.loc_0x68:
  mr        r3, r29
  bl        0x22B694
  lwz       r4, 0x4(r28)
  stbx      r3, r4, r30
  mr        r3, r29
  bl        0x22B684
  lwz       r4, 0x8(r28)
  rlwinm    r0,r3,0,24,31
  addi      r30, r30, 0x1
  stwx      r0, r4, r31
  addi      r31, r31, 0x4

.loc_0x94:
  lbz       r0, 0x0(r28)
  cmpw      r30, r0
  blt+      .loc_0x68
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
 * Address:	801E8E5C
 * Size:	000124
 */
void getRepayLevel__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r5, 0x4330
  lfd       f3, -0x4988(r2)
  lwz       r4, -0x6C10(r13)
  lwz       r6, 0xE8(r3)
  lis       r3, 0x8048
  lwz       r0, 0x48(r4)
  xoris     r4, r6, 0x8000
  stw       r5, 0x8(r1)
  xoris     r0, r0, 0x8000
  lfs       f4, -0x498C(r2)
  stw       r4, 0xC(r1)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f2, f0, f3
  lfsu      f0, 0xF58(r3)
  stw       r5, 0x10(r1)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f3
  fdivs     f1, f2, f1
  fmuls     f1, f4, f1
  fcmpo     cr0, f0, f1
  ble-      .loc_0x64
  li        r3, -0x1
  b         .loc_0x11C

.loc_0x64:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x78
  li        r3, 0
  b         .loc_0x11C

.loc_0x78:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x8C
  li        r3, 0x1
  b         .loc_0x11C

.loc_0x8C:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xA0
  li        r3, 0x2
  b         .loc_0x11C

.loc_0xA0:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xB4
  li        r3, 0x3
  b         .loc_0x11C

.loc_0xB4:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xC8
  li        r3, 0x4
  b         .loc_0x11C

.loc_0xC8:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xDC
  li        r3, 0x5
  b         .loc_0x11C

.loc_0xDC:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xF0
  li        r3, 0x6
  b         .loc_0x11C

.loc_0xF0:
  lfsu      f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x104
  li        r3, 0x7
  b         .loc_0x11C

.loc_0x104:
  lfs       f0, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x118
  li        r3, 0x8
  b         .loc_0x11C

.loc_0x118:
  li        r3, 0x9

.loc_0x11C:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8F80
 * Size:	000044
 */
void getRepayLevelPercent__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  cmpwi     r4, 0
  stwu      r1, -0x10(r1)
  blt-      .loc_0x20
  lis       r3, 0x8048
  rlwinm    r0,r4,2,0,29
  addi      r3, r3, 0xF58
  lfsx      f1, r3, r0
  b         .loc_0x3C

.loc_0x20:
  xoris     r3, r4, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xC(r1)
  lfd       f1, -0x4988(r2)
  stw       r0, 0x8(r1)
  lfd       f0, 0x8(r1)
  fsubs     f1, f0, f1

.loc_0x3C:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E8FC4
 * Size:	000160
 */
void checkRepayLevelFirstClear__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r6, 0x4330
  lfd       f3, -0x4988(r2)
  lis       r4, 0x8048
  lwz       r5, -0x6C10(r13)
  lwz       r7, 0xE8(r3)
  lwz       r0, 0x48(r5)
  xoris     r5, r7, 0x8000
  stw       r6, 0x8(r1)
  xoris     r0, r0, 0x8000
  lfs       f4, -0x498C(r2)
  stw       r5, 0xC(r1)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f2, f0, f3
  lfsu      f0, 0xF58(r4)
  stw       r6, 0x10(r1)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f3
  fdivs     f1, f2, f1
  fmuls     f1, f4, f1
  fcmpo     cr0, f0, f1
  ble-      .loc_0x64
  li        r6, -0x1
  b         .loc_0x11C

.loc_0x64:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x78
  li        r6, 0
  b         .loc_0x11C

.loc_0x78:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x8C
  li        r6, 0x1
  b         .loc_0x11C

.loc_0x8C:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xA0
  li        r6, 0x2
  b         .loc_0x11C

.loc_0xA0:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xB4
  li        r6, 0x3
  b         .loc_0x11C

.loc_0xB4:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xC8
  li        r6, 0x4
  b         .loc_0x11C

.loc_0xC8:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xDC
  li        r6, 0x5
  b         .loc_0x11C

.loc_0xDC:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xF0
  li        r6, 0x6
  b         .loc_0x11C

.loc_0xF0:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x104
  li        r6, 0x7
  b         .loc_0x11C

.loc_0x104:
  lfs       f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x118
  li        r6, 0x8
  b         .loc_0x11C

.loc_0x118:
  li        r6, 0x9

.loc_0x11C:
  cmpwi     r6, 0
  blt-      .loc_0x154
  srawi     r4, r6, 0x3
  li        r5, 0x1
  subfic    r0, r4, 0x1
  rlwinm    r4,r4,3,0,28
  add       r3, r3, r0
  sub       r4, r6, r4
  lbz       r0, 0xF0(r3)
  slw       r3, r5, r4
  and.      r0, r3, r0
  bne-      .loc_0x154
  li        r3, 0x1
  b         .loc_0x158

.loc_0x154:
  li        r3, 0

.loc_0x158:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9124
 * Size:	000174
 */
void experienceRepayLevelFirstClear__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  lis       r6, 0x4330
  lfd       f3, -0x4988(r2)
  lis       r4, 0x8048
  lwz       r5, -0x6C10(r13)
  lwz       r7, 0xE8(r3)
  lwz       r0, 0x48(r5)
  xoris     r5, r7, 0x8000
  stw       r6, 0x8(r1)
  xoris     r0, r0, 0x8000
  lfs       f4, -0x498C(r2)
  stw       r5, 0xC(r1)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsubs     f2, f0, f3
  lfsu      f0, 0xF58(r4)
  stw       r6, 0x10(r1)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f3
  fdivs     f1, f2, f1
  fmuls     f1, f4, f1
  fcmpo     cr0, f0, f1
  ble-      .loc_0x64
  li        r4, -0x1
  b         .loc_0x11C

.loc_0x64:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x78
  li        r4, 0
  b         .loc_0x11C

.loc_0x78:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x8C
  li        r4, 0x1
  b         .loc_0x11C

.loc_0x8C:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xA0
  li        r4, 0x2
  b         .loc_0x11C

.loc_0xA0:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xB4
  li        r4, 0x3
  b         .loc_0x11C

.loc_0xB4:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xC8
  li        r4, 0x4
  b         .loc_0x11C

.loc_0xC8:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xDC
  li        r4, 0x5
  b         .loc_0x11C

.loc_0xDC:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xF0
  li        r4, 0x6
  b         .loc_0x11C

.loc_0xF0:
  lfsu      f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x104
  li        r4, 0x7
  b         .loc_0x11C

.loc_0x104:
  lfs       f0, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x118
  li        r4, 0x8
  b         .loc_0x11C

.loc_0x118:
  li        r4, 0x9

.loc_0x11C:
  cmpwi     r4, 0
  blt-      .loc_0x16C
  addi      r0, r4, 0x1
  li        r7, 0
  li        r4, 0x1
  mtctr     r0
  blt-      .loc_0x16C

.loc_0x138:
  cmpwi     r7, 0x10
  bge-      .loc_0x164
  srawi     r5, r7, 0x3
  subfic    r0, r5, 0x1
  add       r6, r3, r0
  rlwinm    r0,r5,3,0,28
  lbz       r5, 0xF0(r6)
  sub       r0, r7, r0
  slw       r0, r4, r0
  or        r0, r5, r0
  stb       r0, 0xF0(r6)

.loc_0x164:
  addi      r7, r7, 0x1
  bdnz+     .loc_0x138

.loc_0x16C:
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9298
 * Size:	000064
 */
void initLimitGens__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  li        r29, 0
  li        r30, 0
  lwz       r4, -0x6C38(r13)
  lhz       r31, 0x100(r4)
  b         .loc_0x48

.loc_0x28:
  lwz       r0, 0xE4(r27)
  add       r28, r0, r30
  mr        r3, r28
  bl        0x233058
  addi      r3, r28, 0x8
  bl        0x233050
  addi      r30, r30, 0x10
  addi      r29, r29, 0x1

.loc_0x48:
  cmpw      r29, r31
  blt+      .loc_0x28
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801E92FC
 * Size:	00006C
 */
void initCourses__Q24Game8PlayDataFb(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x34
  li        r6, 0
  li        r5, 0x3
  b         .loc_0x20

.loc_0x14:
  lwz       r4, 0xD8(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x20:
  lwz       r4, -0x6C38(r13)
  lhz       r0, 0x100(r4)
  cmpw      r6, r0
  blt+      .loc_0x14
  blr       

.loc_0x34:
  li        r6, 0
  li        r5, 0
  b         .loc_0x4C

.loc_0x40:
  lwz       r4, 0xD8(r3)
  stbx      r5, r4, r6
  addi      r6, r6, 0x1

.loc_0x4C:
  lwz       r4, -0x6C38(r13)
  lhz       r0, 0x100(r4)
  cmpw      r6, r0
  blt+      .loc_0x40
  lwz       r3, 0xD8(r3)
  li        r0, 0x3
  stb       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9368
 * Size:	000094
 */
void openCourse__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x771
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BED80

.loc_0x5C:
  mr        r3, r30
  mr        r4, r31
  bl        0xB4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x7C
  lwz       r3, 0xD8(r30)
  li        r0, 0x1
  stbx      r0, r3, r31

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
 * Address:	801E93FC
 * Size:	000084
 */
void visitCourse__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x77E
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BEE14

.loc_0x5C:
  lwz       r3, 0xD8(r30)
  lbzx      r0, r3, r31
  ori       r0, r0, 0x4
  stbx      r0, r3, r31
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
 * Size:	000080
 */
void closeCourse__Q24Game8PlayDataFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801E9480
 * Size:	000080
 */
void courseOpen__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x78A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BEE98

.loc_0x5C:
  lwz       r3, 0xD8(r30)
  lbzx      r0, r3, r31
  lwz       r31, 0xC(r1)
  rlwinm    r3,r0,0,31,31
  lwz       r0, 0x14(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9500
 * Size:	0000E4
 */
void courseJustOpen__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x790
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BEF18

.loc_0x5C:
  cmpwi     r31, 0
  li        r4, 0
  blt-      .loc_0x7C
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x7C
  li        r4, 0x1

.loc_0x7C:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0xA0
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x78A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BEF5C

.loc_0xA0:
  lwz       r4, 0xD8(r30)
  lbzx      r3, r4, r31
  rlwinm.   r0,r3,0,31,31
  bne-      .loc_0xB8
  li        r3, 0
  b         .loc_0xCC

.loc_0xB8:
  rlwinm    r0,r3,0,30,30
  ori       r3, r3, 0x2
  cntlzw    r0, r0
  stbx      r3, r4, r31
  rlwinm    r3,r0,27,5,31

.loc_0xCC:
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
 * Address:	801E95E4
 * Size:	0000DC
 */
void courseFirstTime__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x7A3
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BEFFC

.loc_0x5C:
  cmpwi     r31, 0
  li        r4, 0
  blt-      .loc_0x7C
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x7C
  li        r4, 0x1

.loc_0x7C:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0xA0
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x78A
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BF040

.loc_0xA0:
  lwz       r3, 0xD8(r30)
  lbzx      r3, r3, r31
  rlwinm.   r0,r3,0,31,31
  bne-      .loc_0xB8
  li        r3, 0
  b         .loc_0xC4

.loc_0xB8:
  rlwinm    r0,r3,0,30,30
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31

.loc_0xC4:
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
 * Address:	801E96C0
 * Size:	000080
 */
void courseVisited__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x7AD
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BF0D8

.loc_0x5C:
  lwz       r3, 0xD8(r30)
  lbzx      r0, r3, r31
  lwz       r31, 0xC(r1)
  rlwinm    r3,r0,30,31,31
  lwz       r0, 0x14(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9740
 * Size:	000084
 */
void __ct__Q24Game12CaveSaveDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x8
  bl        0x229B18
  addi      r3, r31, 0x14
  bl        0x7AE0
  addi      r3, r31, 0x30
  bl        0x7AD8
  addi      r3, r31, 0x14
  bl        0x7B1C
  lfs       f0, -0x4990(r2)
  lis       r4, 0x6E6F
  li        r5, 0
  li        r0, -0x1
  stfs      f0, 0x1C(r31)
  addi      r3, r31, 0x8
  addi      r4, r4, 0x6E65
  stb       r5, 0x0(r31)
  stw       r0, 0x4(r31)
  bl        0x229B40
  li        r0, 0x1
  lfs       f0, -0x4990(r2)
  stb       r0, 0x20(r31)
  mr        r3, r31
  stfs      f0, 0x24(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E97C4
 * Size:	000068
 */
void clear__Q24Game12CaveSaveDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x14
  bl        0x7AB0
  lfs       f0, -0x4990(r2)
  lis       r4, 0x6E6F
  li        r5, 0
  li        r0, -0x1
  stfs      f0, 0x1C(r31)
  addi      r3, r31, 0x8
  addi      r4, r4, 0x6E65
  stb       r5, 0x0(r31)
  stw       r0, 0x4(r31)
  bl        0x229AD4
  li        r0, 0x1
  lfs       f0, -0x4990(r2)
  stb       r0, 0x20(r31)
  stfs      f0, 0x24(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E982C
 * Size:	000194
 */
void doneWorldMapEffect__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  li        r5, 0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lwz       r4, -0x6C38(r13)
  lwz       r0, 0xE8(r3)
  lhz       r4, 0x100(r4)
  cmpwi     r4, 0
  stw       r0, 0xFC(r3)
  ble-      .loc_0x114
  cmpwi     r4, 0x8
  subi      r6, r4, 0x8
  ble-      .loc_0xEC
  addi      r0, r6, 0x7
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r6, 0
  ble-      .loc_0xEC

.loc_0x48:
  lwz       r7, 0xDC(r3)
  addi      r31, r5, 0x1
  lwz       r6, 0xF4(r3)
  addi      r12, r5, 0x2
  lbzx      r0, r7, r5
  addi      r11, r5, 0x3
  addi      r10, r5, 0x4
  addi      r9, r5, 0x5
  stbx      r0, r6, r5
  addi      r8, r5, 0x6
  addi      r7, r5, 0x7
  addi      r5, r5, 0x8
  lwz       r30, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r30, r31
  stbx      r0, r6, r31
  lwz       r31, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r31, r12
  stbx      r0, r6, r12
  lwz       r12, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r12, r11
  stbx      r0, r6, r11
  lwz       r11, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r11, r10
  stbx      r0, r6, r10
  lwz       r10, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r10, r9
  stbx      r0, r6, r9
  lwz       r9, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r9, r8
  stbx      r0, r6, r8
  lwz       r8, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r8, r7
  stbx      r0, r6, r7
  bdnz+     .loc_0x48

.loc_0xEC:
  sub       r0, r4, r5
  mtctr     r0
  cmpw      r5, r4
  bge-      .loc_0x114

.loc_0xFC:
  lwz       r7, 0xDC(r3)
  lwz       r6, 0xF4(r3)
  lbzx      r0, r7, r5
  stbx      r0, r6, r5
  addi      r5, r5, 0x1
  bdnz+     .loc_0xFC

.loc_0x114:
  li        r7, 0
  mtctr     r4
  cmpwi     r4, 0
  ble-      .loc_0x184

.loc_0x124:
  lwz       r0, 0xE0(r3)
  li        r10, 0
  lwz       r4, 0xF8(r3)
  li        r6, 0
  add       r8, r0, r7
  lbz       r0, 0x0(r8)
  add       r9, r4, r7
  stb       r0, 0x0(r9)
  b         .loc_0x170

.loc_0x148:
  lwz       r5, 0x4(r8)
  lwz       r4, 0x4(r9)
  lbzx      r0, r5, r10
  stbx      r0, r4, r10
  addi      r10, r10, 0x1
  lwz       r5, 0x8(r8)
  lwz       r4, 0x8(r9)
  lwzx      r0, r5, r6
  stwx      r0, r4, r6
  addi      r6, r6, 0x4

.loc_0x170:
  lbz       r0, 0x0(r8)
  cmpw      r10, r0
  blt+      .loc_0x148
  addi      r7, r7, 0xC
  bdnz+     .loc_0x124

.loc_0x184:
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E99C0
 * Size:	00007C
 */
void getGroundOtakaraNum_Old__Q24Game8PlayDataFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  blt-      .loc_0x38
  lwz       r3, -0x6C38(r13)
  lhz       r0, 0x100(r3)
  cmpw      r31, r0
  bge-      .loc_0x38
  li        r4, 0x1

.loc_0x38:
  rlwinm.   r0,r4,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x7F8
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BF3D8

.loc_0x5C:
  lwz       r3, 0xF4(r30)
  lwz       r0, 0x14(r1)
  lbzx      r3, r3, r31
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9A3C
 * Size:	0000B8
 */
void getOtakaraNum_Course_CaveID_Old__Q24Game8PlayDataFiR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, -0x6C38(r13)
  bl        -0x3BAB8
  cmplwi    r3, 0
  beq-      .loc_0x78
  mulli     r0, r30, 0xC
  lwz       r5, 0xF8(r29)
  mr        r4, r31
  add       r31, r5, r0
  bl        -0x3BF6C
  cmpwi     r3, -0x1
  beq-      .loc_0x98
  cmpwi     r3, 0
  blt-      .loc_0x70
  lbz       r0, 0x0(r31)
  cmpw      r3, r0
  bge-      .loc_0x70
  lwz       r4, 0x4(r31)
  lbzx      r3, r4, r3
  b         .loc_0x9C

.loc_0x70:
  li        r3, -0x1
  b         .loc_0x9C

.loc_0x78:
  lis       r3, 0x8048
  lis       r4, 0x8048
  addi      r5, r4, 0xED0
  mr        r6, r30
  addi      r3, r3, 0xE4C
  li        r4, 0x809
  crclr     6, 0x6
  bl        -0x1BF490

.loc_0x98:
  li        r3, -0x1

.loc_0x9C:
  lwz       r0, 0x24(r1)
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
 * Address:	801E9AF4
 * Size:	000008
 */
void getMoney_Old__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  lwz       r3, 0xFC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9AFC
 * Size:	0000A4
 */
void isCaveFirstTime_Old__Q24Game8PlayDataFiR4ID32(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, -0x6C38(r13)
  bl        -0x3BB78
  cmplwi    r3, 0
  beq-      .loc_0x84
  mulli     r0, r30, 0xC
  lwz       r5, 0xF8(r29)
  mr        r4, r31
  add       r31, r5, r0
  bl        -0x3C02C
  cmpwi     r3, -0x1
  beq-      .loc_0x84
  cmpwi     r3, 0
  blt-      .loc_0x7C
  lbz       r0, 0x0(r31)
  cmpw      r3, r0
  bge-      .loc_0x7C
  lwz       r4, 0x8(r31)
  rlwinm    r0,r3,2,0,29
  lwzx      r0, r4, r0
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  b         .loc_0x88

.loc_0x7C:
  li        r3, 0
  b         .loc_0x88

.loc_0x84:
  li        r3, 0

.loc_0x88:
  lwz       r0, 0x24(r1)
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
 * Address:	801E9BA0
 * Size:	0000D4
 */
void read_CaveOtakara_Old__Q24Game8PlayDataFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r29, r3
  mr        r30, r4
  li        r31, 0
  li        r25, 0
  lwz       r5, -0x6C38(r13)
  lhz       r27, 0x100(r5)
  b         .loc_0xB8

.loc_0x2C:
  lwz       r0, 0xF8(r29)
  mr        r3, r30
  add       r24, r0, r25
  lbz       r28, 0x0(r24)
  bl        0x22A8C0
  stb       r3, 0x0(r24)
  lbz       r0, 0x0(r24)
  cmplw     r28, r0
  beq-      .loc_0x6C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x705
  addi      r5, r5, 0xF30
  crclr     6, 0x6
  bl        -0x1BF5C8

.loc_0x6C:
  li        r28, 0
  mr        r26, r28
  b         .loc_0xA4

.loc_0x78:
  mr        r3, r30
  bl        0x22A880
  lwz       r4, 0x4(r24)
  stbx      r3, r4, r28
  mr        r3, r30
  bl        0x22A870
  lwz       r4, 0x8(r24)
  rlwinm    r0,r3,0,24,31
  addi      r28, r28, 0x1
  stwx      r0, r4, r26
  addi      r26, r26, 0x4

.loc_0xA4:
  lbz       r0, 0x0(r24)
  cmpw      r28, r0
  blt+      .loc_0x78
  addi      r25, r25, 0xC
  addi      r31, r31, 0x1

.loc_0xB8:
  cmpw      r31, r27
  blt+      .loc_0x2C
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9C74
 * Size:	000118
 */
void write_CaveOtakara_Old__Q24Game8PlayDataFR6Stream(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r24, r4
  addi      r31, r5, 0xE40
  mr        r23, r3
  mr        r3, r24
  addi      r4, r31, 0x140
  bl        0x22A380
  lwz       r3, -0x6C38(r13)
  li        r26, 0
  li        r27, 0
  lhz       r29, 0x100(r3)
  b         .loc_0xF4

.loc_0x40:
  lwz       r0, 0xF8(r23)
  mr        r3, r24
  lwz       r4, 0x414(r24)
  add       r25, r0, r27
  bl        0x22A770
  lbz       r4, 0x0(r25)
  mr        r3, r24
  bl        0x22B9A0
  mr        r3, r24
  addi      r4, r31, 0xCC
  crclr     6, 0x6
  bl        0x22A4FC
  li        r30, 0
  mr        r28, r30
  b         .loc_0xE0

.loc_0x7C:
  lwz       r4, 0x414(r24)
  mr        r3, r24
  bl        0x22A73C
  lwz       r4, 0x4(r25)
  mr        r3, r24
  lbzx      r4, r4, r30
  bl        0x22B968
  mr        r3, r24
  addi      r4, r31, 0xD8
  crclr     6, 0x6
  bl        0x22A4C4
  lwz       r4, 0x414(r24)
  mr        r3, r24
  bl        0x22A710
  lwz       r4, 0x8(r25)
  mr        r3, r24
  lwzx      r0, r4, r28
  rlwinm    r4,r0,0,24,31
  bl        0x22B938
  mr        r3, r24
  addi      r4, r31, 0xE4
  crclr     6, 0x6
  bl        0x22A494
  addi      r28, r28, 0x4
  addi      r30, r30, 0x1

.loc_0xE0:
  lbz       r0, 0x0(r25)
  cmpw      r30, r0
  blt+      .loc_0x7C
  addi      r27, r27, 0xC
  addi      r26, r26, 0x1

.loc_0xF4:
  cmpw      r26, r29
  blt+      .loc_0x40
  mr        r3, r24
  bl        0x22A32C
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9D8C
 * Size:	000078
 */
void getPikminCount_Today__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x6
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x842
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BF79C

.loc_0x54:
  rlwinm    r0,r31,2,0,29
  add       r3, r30, r0
  lwz       r3, 0x118(r3)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9E04
 * Size:	000078
 */
void getPikminCount_Yesterday__Q24Game8PlayDataFi(void)
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
  cmpwi     r31, 0x6
  bge-      .loc_0x30
  li        r0, 0x1

.loc_0x30:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x54
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0xE4C
  li        r4, 0x849
  addi      r5, r5, 0xE60
  crclr     6, 0x6
  bl        -0x1BF814

.loc_0x54:
  rlwinm    r0,r31,2,0,29
  add       r3, r30, r0
  lwz       r3, 0x100(r3)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9E7C
 * Size:	000108
 */
void setPikminCounts_Today__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r27, r3
  bl        0x460E4
  bl        0x46394
  lis       r4, 0x8051
  lis       r3, 0x8051
  addi      r30, r4, 0x262C
  mr        r31, r27
  addi      r29, r3, 0x25EC
  li        r28, 0

.loc_0x34:
  cmpwi     r28, 0x5
  bne-      .loc_0xA0
  lwz       r3, -0x6B40(r13)
  bl        0x7C64
  lis       r4, 0x8051
  mr        r25, r3
  addi      r3, r4, 0x25EC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8051
  mr        r26, r3
  addi      r3, r4, 0x262C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  sub.      r26, r26, r3
  bge-      .loc_0x88
  li        r26, 0

.loc_0x88:
  addi      r3, r27, 0xA8
  bl        0x777C
  add       r0, r26, r3
  add       r0, r25, r0
  stw       r0, 0x118(r31)
  b         .loc_0xDC

.loc_0xA0:
  lwz       r3, -0x6B40(r13)
  mr        r4, r28
  bl        0x7C20
  lwz       r4, 0x4(r30)
  mr        r26, r3
  lwz       r0, 0x4(r29)
  sub.      r25, r0, r4
  bge-      .loc_0xC4
  li        r25, 0

.loc_0xC4:
  mr        r4, r28
  addi      r3, r27, 0xA8
  bl        0x7668
  add       r0, r25, r3
  add       r0, r26, r0
  stw       r0, 0x118(r31)

.loc_0xDC:
  addi      r28, r28, 0x1
  addi      r30, r30, 0x4
  cmpwi     r28, 0x6
  addi      r29, r29, 0x4
  addi      r31, r31, 0x4
  blt+      .loc_0x34
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801E9F84
 * Size:	000034
 */
void setPikminCounts_Yesterday__Q24Game8PlayDataFv(void)
{
/*
.loc_0x0:
  lwz       r0, 0x118(r3)
  stw       r0, 0x100(r3)
  lwz       r0, 0x11C(r3)
  stw       r0, 0x104(r3)
  lwz       r0, 0x120(r3)
  stw       r0, 0x108(r3)
  lwz       r0, 0x124(r3)
  stw       r0, 0x10C(r3)
  lwz       r0, 0x128(r3)
  stw       r0, 0x110(r3)
  lwz       r0, 0x12C(r3)
  stw       r0, 0x114(r3)
  blr
*/
}