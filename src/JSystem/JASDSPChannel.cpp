

/*
 * --INFO--
 * Address:	800A4B48
 * Size:	00002C
 */
void JASDSPChannel::JASDSPChannel()
{
/*
.loc_0x0:
  li        r0, 0x1
  li        r4, -0x1
  stw       r0, 0x0(r3)
  li        r0, 0
  sth       r4, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A4B74
 * Size:	000010
 */
void JASDSPChannel::free()
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x10(r3)
  stw       r0, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A4B84
 * Size:	000010
 */
void JASDSPChannel::start()
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  ori       r0, r0, 0x1
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A4B94
 * Size:	000088
 */
void JASDSPChannel::drop()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x10(r3)
  cmplwi    r12, 0
  beq-      .loc_0x34
  lwz       r5, 0x14(r31)
  li        r3, 0x3
  li        r4, 0
  mtctr     r12
  bctrl     

.loc_0x34:
  li        r3, 0
  li        r0, -0x1
  stw       r3, 0x10(r31)
  stw       r3, 0x14(r31)
  sth       r0, 0x4(r31)
  lwz       r0, 0x8(r31)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x8(r31)
  lwz       r0, 0x0(r31)
  cmpwi     r0, 0
  bne-      .loc_0x74
  lwz       r3, 0x8(r31)
  li        r0, 0x2
  ori       r3, r3, 0x2
  stw       r3, 0x8(r31)
  stw       r0, 0x0(r31)

.loc_0x74:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A4C1C
 * Size:	000084
 */
void JASDSPChannel::initAll()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x710
  li        r5, 0x20
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  lwz       r4, -0x7548(r13)
  bl        -0x80BF4
  lis       r4, 0x800A
  li        r5, 0
  addi      r4, r4, 0x4B48
  li        r6, 0x1C
  li        r7, 0x40
  bl        0x1CD9C
  stw       r3, -0x7580(r13)
  li        r30, 0
  li        r31, 0

.loc_0x48:
  mr        r3, r30
  bl        0x780
  addi      r30, r30, 0x1
  lwz       r4, -0x7580(r13)
  addi      r0, r31, 0x18
  addi      r31, r31, 0x1C
  cmpwi     r30, 0x40
  stwx      r3, r4, r0
  blt+      .loc_0x48
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
 * Address:	800A4CA0
 * Size:	0000DC
 */
void JASDSPChannel::alloc(unsigned char, long (*) (unsigned long, JASDsp::TChannel *, void *), void *)
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
  rlwinm    r3,r3,0,24,31
  bl        0x1A0
  mr.       r31, r3
  bne-      .loc_0x40
  li        r3, 0
  b         .loc_0xBC

.loc_0x40:
  lwz       r12, 0x10(r31)
  cmplwi    r12, 0
  beq-      .loc_0x60
  lwz       r5, 0x14(r31)
  li        r3, 0x3
  li        r4, 0
  mtctr     r12
  bctrl     

.loc_0x60:
  li        r3, 0
  li        r0, -0x1
  stw       r3, 0x10(r31)
  stw       r3, 0x14(r31)
  sth       r0, 0x4(r31)
  lwz       r0, 0x8(r31)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x8(r31)
  lwz       r0, 0x0(r31)
  cmpwi     r0, 0
  bne-      .loc_0xA0
  lwz       r3, 0x8(r31)
  li        r0, 0x2
  ori       r3, r3, 0x2
  stw       r3, 0x8(r31)
  stw       r0, 0x0(r31)

.loc_0xA0:
  rlwinm    r3,r28,0,24,31
  li        r0, 0
  sth       r3, 0x4(r31)
  mr        r3, r31
  stw       r0, 0xC(r31)
  stw       r29, 0x10(r31)
  stw       r30, 0x14(r31)

.loc_0xBC:
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
 * Address:	800A4D7C
 * Size:	0000E4
 */
void JASDSPChannel::allocForce(unsigned char, long (*) (unsigned long, JASDsp::TChannel *, void *), void *)
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
  rlwinm    r3,r3,0,24,31
  bl        0xC4
  mr.       r31, r3
  bne-      .loc_0x40
  li        r3, 0
  b         .loc_0xC4

.loc_0x40:
  li        r0, 0x1
  stw       r0, 0x0(r31)
  lwz       r12, 0x10(r31)
  cmplwi    r12, 0
  beq-      .loc_0x68
  lwz       r5, 0x14(r31)
  li        r3, 0x3
  li        r4, 0
  mtctr     r12
  bctrl     

.loc_0x68:
  li        r3, 0
  li        r0, -0x1
  stw       r3, 0x10(r31)
  stw       r3, 0x14(r31)
  sth       r0, 0x4(r31)
  lwz       r0, 0x8(r31)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x8(r31)
  lwz       r0, 0x0(r31)
  cmpwi     r0, 0
  bne-      .loc_0xA8
  lwz       r3, 0x8(r31)
  li        r0, 0x2
  ori       r3, r3, 0x2
  stw       r3, 0x8(r31)
  stw       r0, 0x0(r31)

.loc_0xA8:
  rlwinm    r3,r28,0,24,31
  li        r0, 0
  sth       r3, 0x4(r31)
  mr        r3, r31
  stw       r0, 0xC(r31)
  stw       r29, 0x10(r31)
  stw       r30, 0x14(r31)

.loc_0xC4:
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
 * Address:	800A4E60
 * Size:	00000C
 */
void JASDSPChannel::setPriority(unsigned char)
{
/*
.loc_0x0:
  rlwinm    r0,r4,0,24,31
  sth       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800A4E6C
 * Size:	0000DC
 */
void JASDSPChannel::getLowestChannel(int)
{
/*
.loc_0x0:
  lwz       r5, -0x7580(r13)
  li        r0, 0x20
  li        r6, 0xFF
  li        r7, -0x1
  mr        r4, r5
  li        r8, 0
  li        r9, 0
  mtctr     r0

.loc_0x20:
  lha       r10, 0x4(r4)
  extsh.    r0, r10
  bge-      .loc_0x38
  mulli     r0, r9, 0x1C
  add       r3, r5, r0
  blr       

.loc_0x38:
  cmpw      r10, r3
  bgt-      .loc_0x68
  extsh     r0, r6
  cmpw      r10, r0
  bgt-      .loc_0x68
  bne-      .loc_0x5C
  lwz       r0, 0xC(r4)
  cmplw     r0, r8
  ble-      .loc_0x68

.loc_0x5C:
  lwz       r8, 0xC(r4)
  mr        r7, r9
  mr        r6, r10

.loc_0x68:
  lha       r10, 0x20(r4)
  addi      r9, r9, 0x1
  extsh.    r0, r10
  bge-      .loc_0x84
  mulli     r0, r9, 0x1C
  add       r3, r5, r0
  blr       

.loc_0x84:
  cmpw      r10, r3
  bgt-      .loc_0xB4
  extsh     r0, r6
  cmpw      r10, r0
  bgt-      .loc_0xB4
  bne-      .loc_0xA8
  lwz       r0, 0x28(r4)
  cmplw     r0, r8
  ble-      .loc_0xB4

.loc_0xA8:
  lwz       r8, 0x28(r4)
  mr        r7, r9
  mr        r6, r10

.loc_0xB4:
  addi      r4, r4, 0x38
  addi      r9, r9, 0x1
  bdnz+     .loc_0x20
  cmpwi     r7, 0
  bge-      .loc_0xD0
  li        r3, 0
  blr       

.loc_0xD0:
  mulli     r0, r7, 0x1C
  add       r3, r5, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void JASDSPChannel::getLowestActiveChannel()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A4F48
 * Size:	0001E4
 */
void JASDSPChannel::updateProc()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x18(r3)
  bl        0x7DC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x90
  lwz       r0, 0x8(r31)
  rlwinm    r0,r0,0,31,29
  stw       r0, 0x8(r31)
  lwz       r0, 0x0(r31)
  cmpwi     r0, 0
  bne-      .loc_0x74
  lwz       r12, 0x10(r31)
  cmplwi    r12, 0
  beq-      .loc_0x60
  lwz       r5, 0x14(r31)
  li        r3, 0x2
  li        r4, 0
  mtctr     r12
  bctrl     
  b         .loc_0x64

.loc_0x60:
  li        r3, -0x1

.loc_0x64:
  cmpwi     r3, 0
  bge-      .loc_0x74
  li        r0, -0x1
  sth       r0, 0x4(r31)

.loc_0x74:
  li        r0, 0x1
  stw       r0, 0x0(r31)
  lwz       r3, 0x18(r31)
  bl        0x758
  lwz       r3, 0x18(r31)
  bl        0x9F4
  b         .loc_0x1D0

.loc_0x90:
  lwz       r3, 0x8(r31)
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0xB8
  rlwinm    r0,r3,0,31,29
  stw       r0, 0x8(r31)
  lwz       r3, 0x18(r31)
  bl        0x740
  lwz       r3, 0x18(r31)
  bl        0x9CC
  b         .loc_0x1D0

.loc_0xB8:
  lwz       r4, 0x0(r31)
  cmpwi     r4, 0x2
  beq-      .loc_0x1D0
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x120
  cmpwi     r4, 0x1
  bne-      .loc_0x120
  rlwinm    r3,r3,0,0,30
  li        r0, 0
  stw       r3, 0x8(r31)
  stw       r0, 0x0(r31)
  lwz       r3, 0x18(r31)
  bl        0x608
  lwz       r12, 0x10(r31)
  cmplwi    r12, 0
  beq-      .loc_0x10C
  lwz       r4, 0x18(r31)
  li        r3, 0x1
  lwz       r5, 0x14(r31)
  mtctr     r12
  bctrl     

.loc_0x10C:
  lwz       r3, 0x18(r31)
  bl        0x61C
  lwz       r3, 0x18(r31)
  bl        0x964
  b         .loc_0x1D0

.loc_0x120:
  cmpwi     r4, 0x1
  beq-      .loc_0x1D0
  lwz       r12, 0x10(r31)
  li        r0, 0
  cmplwi    r12, 0
  beq-      .loc_0x154
  lwz       r4, 0x18(r31)
  li        r3, 0
  lwz       r5, 0x14(r31)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  b         .loc_0x158

.loc_0x154:
  li        r3, 0

.loc_0x158:
  cmpwi     r3, 0
  bge-      .loc_0x1B4
  li        r0, 0x1
  stw       r0, 0x0(r31)
  lwz       r12, 0x10(r31)
  cmplwi    r12, 0
  beq-      .loc_0x18C
  lwz       r5, 0x14(r31)
  li        r3, 0x2
  li        r4, 0
  mtctr     r12
  bctrl     
  b         .loc_0x190

.loc_0x18C:
  li        r3, -0x1

.loc_0x190:
  cmpwi     r3, 0
  bge-      .loc_0x1A0
  li        r0, -0x1
  sth       r0, 0x4(r31)

.loc_0x1A0:
  lwz       r3, 0x18(r31)
  bl        0x628
  lwz       r3, 0x18(r31)
  bl        0x8D0
  b         .loc_0x1D0

.loc_0x1B4:
  lwz       r3, 0xC(r31)
  rlwinm.   r0,r0,0,24,31
  addi      r0, r3, 0x1
  stw       r0, 0xC(r31)
  beq-      .loc_0x1D0
  lwz       r3, 0x18(r31)
  bl        0x8B0

.loc_0x1D0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A512C
 * Size:	000074
 */
void JASDSPChannel::updateAll()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  li        r30, 0

.loc_0x1C:
  rlwinm.   r0,r30,0,28,31
  bne-      .loc_0x38
  cmplwi    r30, 0
  beq-      .loc_0x38
  subi      r0, r30, 0x1
  rlwinm    r3,r0,28,4,31
  bl        0x1FC

.loc_0x38:
  lwz       r0, -0x7580(r13)
  add       r3, r0, r31
  bl        -0x224
  addi      r30, r30, 0x1
  addi      r31, r31, 0x1C
  cmplwi    r30, 0x40
  blt+      .loc_0x1C
  li        r3, 0x3
  bl        0x1D8
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
 * Address:	800A51A0
 * Size:	000160
 */
void JASDSPChannel::killActiveChannel()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  li        r7, 0xFF
  stw       r0, 0x14(r1)
  li        r0, 0x20
  mr        r4, r5
  li        r6, -0x1
  stw       r31, 0xC(r1)
  lwz       r9, -0x7580(r13)
  mr        r8, r9
  mtctr     r0

.loc_0x30:
  lwz       r0, 0x0(r8)
  cmpwi     r0, 0
  bne-      .loc_0x70
  lha       r3, 0x4(r8)
  cmpwi     r3, 0x7F
  bge-      .loc_0x70
  extsh     r0, r7
  cmpw      r3, r0
  bgt-      .loc_0x70
  bne-      .loc_0x64
  lwz       r0, 0xC(r8)
  cmplw     r0, r5
  ble-      .loc_0x70

.loc_0x64:
  lwz       r5, 0xC(r8)
  mr        r6, r4
  mr        r7, r3

.loc_0x70:
  lwz       r0, 0x1C(r8)
  addi      r4, r4, 0x1
  cmpwi     r0, 0
  bne-      .loc_0xB4
  lha       r3, 0x20(r8)
  cmpwi     r3, 0x7F
  bge-      .loc_0xB4
  extsh     r0, r7
  cmpw      r3, r0
  bgt-      .loc_0xB4
  bne-      .loc_0xA8
  lwz       r0, 0x28(r8)
  cmplw     r0, r5
  ble-      .loc_0xB4

.loc_0xA8:
  lwz       r5, 0x28(r8)
  mr        r6, r4
  mr        r7, r3

.loc_0xB4:
  addi      r8, r8, 0x38
  addi      r4, r4, 0x1
  bdnz+     .loc_0x30
  cmpwi     r6, 0
  bge-      .loc_0xD0
  li        r31, 0
  b         .loc_0xD8

.loc_0xD0:
  mulli     r0, r6, 0x1C
  add       r31, r9, r0

.loc_0xD8:
  cmplwi    r31, 0
  bne-      .loc_0xE8
  li        r3, 0
  b         .loc_0x14C

.loc_0xE8:
  lwz       r12, 0x10(r31)
  cmplwi    r12, 0
  beq-      .loc_0x108
  lwz       r5, 0x14(r31)
  li        r3, 0x3
  li        r4, 0
  mtctr     r12
  bctrl     

.loc_0x108:
  li        r3, 0
  li        r0, -0x1
  stw       r3, 0x10(r31)
  stw       r3, 0x14(r31)
  sth       r0, 0x4(r31)
  lwz       r0, 0x8(r31)
  rlwinm    r0,r0,0,0,30
  stw       r0, 0x8(r31)
  lwz       r0, 0x0(r31)
  cmpwi     r0, 0
  bne-      .loc_0x148
  lwz       r3, 0x8(r31)
  li        r0, 0x2
  ori       r3, r3, 0x2
  stw       r3, 0x8(r31)
  stw       r0, 0x0(r31)

.loc_0x148:
  li        r3, 0x1

.loc_0x14C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800A5300
 * Size:	000010
 */
void JASDSPChannel::getHandle(unsigned long)
{
/*
.loc_0x0:
  mulli     r0, r3, 0x1C
  lwz       r3, -0x7580(r13)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDSPChannel::getNumUse()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDSPChannel::getNumFree()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void JASDSPChannel::getNumBreak()
{
	// UNUSED FUNCTION
}