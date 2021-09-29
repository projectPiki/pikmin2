

/*
 * --INFO--
 * Address:	800A8840
 * Size:	000060
 */
void JASTaskThread::JASTaskThread(int, int, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r7, r4
  stw       r0, 0x14(r1)
  mr        r0, r6
  mr        r6, r5
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r5, r0
  lwz       r4, -0x7548(r13)
  bl        -0x83178
  lis       r3, 0x804A
  li        r0, 0
  addi      r4, r3, 0x4490
  addi      r3, r31, 0x7C
  stw       r4, 0x0(r31)
  stb       r0, 0x84(r31)
  bl        0x49130
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
 * Address:	800A88A0
 * Size:	000128
 */
void JASTaskThread::~JASTaskThread()
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr.       r30, r3
  mr        r31, r4
  beq-      .loc_0x110
  lis       r3, 0x804A
  addi      r0, r3, 0x4490
  stw       r0, 0x0(r30)

.loc_0x28:
  addi      r3, r30, 0x30
  addi      r4, r1, 0xC
  li        r5, 0
  bl        0x46D10
  addic.    r0, r1, 0x10
  beq-      .loc_0x44
  stw       r3, 0x10(r1)

.loc_0x44:
  lwz       r0, 0x10(r1)
  lwz       r28, 0xC(r1)
  cmpwi     r0, 0
  beq-      .loc_0xF4
  bl        -0x1530
  mr        r29, r3
  addi      r3, r29, 0x4
  stw       r3, 0x8(r1)
  bl        0x47264
  lwz       r3, 0x0(r29)
  li        r27, 0
  b         .loc_0xE0

.loc_0x74:
  addi      r0, r3, 0xC
  li        r4, 0
  cmplw     r0, r28
  bgt-      .loc_0x94
  addi      r0, r3, 0x40C
  cmplw     r28, r0
  bge-      .loc_0x94
  li        r4, 0x1

.loc_0x94:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0xD8
  lwz       r4, 0x8(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  lwz       r0, 0x0(r29)
  cmplw     r3, r0
  beq-      .loc_0xCC
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  bne-      .loc_0xCC
  lwz       r28, 0x0(r3)
  bl        -0x848B0
  stw       r28, 0x0(r27)

.loc_0xCC:
  lwz       r3, 0x8(r1)
  bl        0x472D4
  b         .loc_0x28

.loc_0xD8:
  mr        r27, r3
  lwz       r3, 0x0(r3)

.loc_0xE0:
  cmplwi    r3, 0
  bne+      .loc_0x74
  lwz       r3, 0x8(r1)
  bl        0x472B8
  b         .loc_0x28

.loc_0xF4:
  mr        r3, r30
  li        r4, 0
  bl        -0x83164
  extsh.    r0, r31
  ble-      .loc_0x110
  mr        r3, r30
  bl        -0x848F8

.loc_0x110:
  mr        r3, r30
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000198
 */
void JASTaskThread::allocCallStack(void (*) (void *), const void *, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void JASTaskThread::allocCallStack(void (*) (void *), void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A89C8
 * Size:	000260
 */
void JASTaskThread::sendCmdMsg(void (*) (void *), const void *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r30, r6
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  addi      r26, r30, 0x8
  bl        -0x1628
  mr        r31, r3
  addi      r3, r31, 0x4
  stw       r3, 0x8(r1)
  bl        0x4716C
  lwz       r25, 0x0(r31)
  lwz       r0, 0x4(r25)
  subfic    r0, r0, 0x400
  cmplw     r0, r26
  bge-      .loc_0x12C
  cmplwi    r26, 0x400
  ble-      .loc_0x64
  lwz       r3, 0x8(r1)
  bl        0x47224
  li        r31, 0
  b         .loc_0x158

.loc_0x64:
  cmplwi    r25, 0
  beq-      .loc_0x88
  lwz       r0, 0x8(r25)
  cmplwi    r0, 0
  bne-      .loc_0x88
  li        r0, 0
  li        r3, 0x1
  stw       r0, 0x4(r25)
  b         .loc_0x114

.loc_0x88:
  bl        -0x1694
  mr        r4, r3
  li        r3, 0x40C
  li        r5, 0
  bl        -0x84B20
  cmplwi    r3, 0
  beq-      .loc_0xB4
  stw       r25, 0x0(r3)
  li        r0, 0
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)

.loc_0xB4:
  stw       r3, 0x0(r31)
  lwz       r0, 0x0(r31)
  cmplwi    r0, 0
  beq-      .loc_0xCC
  li        r3, 0x1
  b         .loc_0x114

.loc_0xCC:
  lwz       r4, -0x77D8(r13)
  li        r3, 0x40C
  li        r5, 0
  bl        -0x84B60
  cmplwi    r3, 0
  beq-      .loc_0xF4
  stw       r25, 0x0(r3)
  li        r0, 0
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)

.loc_0xF4:
  stw       r3, 0x0(r31)
  lwz       r0, 0x0(r31)
  cmplwi    r0, 0
  beq-      .loc_0x10C
  li        r3, 0x1
  b         .loc_0x114

.loc_0x10C:
  stw       r25, 0x0(r31)
  li        r3, 0

.loc_0x114:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x12C
  lwz       r3, 0x8(r1)
  bl        0x4715C
  li        r31, 0
  b         .loc_0x158

.loc_0x12C:
  lwz       r5, 0x0(r31)
  lwz       r3, 0x8(r1)
  lwz       r4, 0x4(r5)
  add       r0, r4, r26
  addi      r31, r4, 0xC
  stw       r0, 0x4(r5)
  add       r31, r5, r31
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  bl        0x47128

.loc_0x158:
  cmplwi    r31, 0
  bne-      .loc_0x168
  li        r31, 0
  b         .loc_0x184

.loc_0x168:
  li        r0, 0x1
  mr        r3, r29
  stw       r0, 0x4(r31)
  mr        r5, r30
  addi      r4, r31, 0x8
  bl        -0x2BB4
  stw       r28, 0x0(r31)

.loc_0x184:
  cmplwi    r31, 0
  bne-      .loc_0x194
  li        r3, 0
  b         .loc_0x24C

.loc_0x194:
  mr        r4, r31
  addi      r3, r27, 0x30
  li        r5, 0
  bl        0x469B4
  mr.       r28, r3
  bne-      .loc_0x248
  bl        -0x17B0
  mr        r27, r3
  addi      r3, r27, 0x4
  stw       r3, 0xC(r1)
  bl        0x46FE4
  lwz       r3, 0x0(r27)
  li        r26, 0
  b         .loc_0x238

.loc_0x1CC:
  addi      r0, r3, 0xC
  li        r4, 0
  cmplw     r0, r31
  bgt-      .loc_0x1EC
  addi      r0, r3, 0x40C
  cmplw     r31, r0
  bge-      .loc_0x1EC
  li        r4, 0x1

.loc_0x1EC:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x230
  lwz       r4, 0x8(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  lwz       r0, 0x0(r27)
  cmplw     r3, r0
  beq-      .loc_0x224
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x224
  lwz       r27, 0x0(r3)
  bl        -0x84B30
  stw       r27, 0x0(r26)

.loc_0x224:
  lwz       r3, 0xC(r1)
  bl        0x47054
  b         .loc_0x248

.loc_0x230:
  mr        r26, r3
  lwz       r3, 0x0(r3)

.loc_0x238:
  cmplwi    r3, 0
  bne+      .loc_0x1CC
  lwz       r3, 0xC(r1)
  bl        0x47038

.loc_0x248:
  mr        r3, r28

.loc_0x24C:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800A8C28
 * Size:	000234
 */
void JASTaskThread::sendCmdMsg(void (*) (void *), void *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r29, r3
  mr        r30, r4
  mr        r31, r5
  bl        -0x1880
  mr        r28, r3
  addi      r3, r28, 0x4
  stw       r3, 0x8(r1)
  bl        0x46F14
  lwz       r27, 0x0(r28)
  lwz       r0, 0x4(r27)
  subfic    r0, r0, 0x400
  cmplwi    r0, 0xC
  bge-      .loc_0x10C
  cmplwi    r27, 0
  beq-      .loc_0x68
  lwz       r0, 0x8(r27)
  cmplwi    r0, 0
  bne-      .loc_0x68
  li        r0, 0
  li        r3, 0x1
  stw       r0, 0x4(r27)
  b         .loc_0xF4

.loc_0x68:
  bl        -0x18D4
  mr        r4, r3
  li        r3, 0x40C
  li        r5, 0
  bl        -0x84D60
  cmplwi    r3, 0
  beq-      .loc_0x94
  stw       r27, 0x0(r3)
  li        r0, 0
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)

.loc_0x94:
  stw       r3, 0x0(r28)
  lwz       r0, 0x0(r28)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  li        r3, 0x1
  b         .loc_0xF4

.loc_0xAC:
  lwz       r4, -0x77D8(r13)
  li        r3, 0x40C
  li        r5, 0
  bl        -0x84DA0
  cmplwi    r3, 0
  beq-      .loc_0xD4
  stw       r27, 0x0(r3)
  li        r0, 0
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)

.loc_0xD4:
  stw       r3, 0x0(r28)
  lwz       r0, 0x0(r28)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  li        r3, 0x1
  b         .loc_0xF4

.loc_0xEC:
  stw       r27, 0x0(r28)
  li        r3, 0

.loc_0xF4:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x10C
  lwz       r3, 0x8(r1)
  bl        0x46F1C
  li        r27, 0
  b         .loc_0x138

.loc_0x10C:
  lwz       r5, 0x0(r28)
  lwz       r3, 0x8(r1)
  lwz       r4, 0x4(r5)
  addi      r0, r4, 0xC
  stw       r0, 0x4(r5)
  mr        r27, r0
  add       r27, r5, r27
  lwz       r4, 0x8(r5)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r5)
  bl        0x46EE8

.loc_0x138:
  cmplwi    r27, 0
  bne-      .loc_0x148
  li        r27, 0
  b         .loc_0x158

.loc_0x148:
  li        r0, 0
  stw       r0, 0x4(r27)
  stw       r31, 0x8(r27)
  stw       r30, 0x0(r27)

.loc_0x158:
  cmplwi    r27, 0
  bne-      .loc_0x168
  li        r3, 0
  b         .loc_0x220

.loc_0x168:
  mr        r4, r27
  addi      r3, r29, 0x30
  li        r5, 0
  bl        0x46780
  mr.       r30, r3
  bne-      .loc_0x21C
  bl        -0x19E4
  mr        r29, r3
  addi      r3, r29, 0x4
  stw       r3, 0xC(r1)
  bl        0x46DB0
  lwz       r3, 0x0(r29)
  li        r28, 0
  b         .loc_0x20C

.loc_0x1A0:
  addi      r0, r3, 0xC
  li        r4, 0
  cmplw     r0, r27
  bgt-      .loc_0x1C0
  addi      r0, r3, 0x40C
  cmplw     r27, r0
  bge-      .loc_0x1C0
  li        r4, 0x1

.loc_0x1C0:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x204
  lwz       r4, 0x8(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  lwz       r0, 0x0(r29)
  cmplw     r3, r0
  beq-      .loc_0x1F8
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x1F8
  lwz       r27, 0x0(r3)
  bl        -0x84D64
  stw       r27, 0x0(r28)

.loc_0x1F8:
  lwz       r3, 0xC(r1)
  bl        0x46E20
  b         .loc_0x21C

.loc_0x204:
  mr        r28, r3
  lwz       r3, 0x0(r3)

.loc_0x20C:
  cmplwi    r3, 0
  bne+      .loc_0x1A0
  lwz       r3, 0xC(r1)
  bl        0x46E04

.loc_0x21C:
  mr        r3, r30

.loc_0x220:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800A8E5C
 * Size:	000148
 */
void JASTaskThread::run()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r3, 0x4
  stw       r30, 0x18(r1)
  oris      r3, r3, 0x4
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mtspr     914, r3
  li        r3, 0x5
  oris      r3, r3, 0x5
  mtspr     915, r3
  li        r3, 0x6
  oris      r3, r3, 0x6
  mtspr     916, r3
  li        r3, 0x7
  oris      r3, r3, 0x7
  mtspr     917, r3

.loc_0x50:
  addi      r3, r31, 0x30
  addi      r4, r1, 0xC
  li        r5, 0x1
  bl        0x4672C
  lbz       r0, 0x84(r31)
  lwz       r28, 0xC(r1)
  cmplwi    r0, 0
  beq-      .loc_0x78
  addi      r3, r31, 0x7C
  bl        0x49A1C

.loc_0x78:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x98
  lwz       r12, 0x0(r28)
  addi      r3, r28, 0x8
  mtctr     r12
  bctrl     
  b         .loc_0xA8

.loc_0x98:
  lwz       r12, 0x0(r28)
  lwz       r3, 0x8(r28)
  mtctr     r12
  bctrl     

.loc_0xA8:
  bl        -0x1B40
  mr        r30, r3
  addi      r3, r30, 0x4
  stw       r3, 0x8(r1)
  bl        0x46C54
  lwz       r3, 0x0(r30)
  li        r29, 0
  b         .loc_0x134

.loc_0xC8:
  addi      r0, r3, 0xC
  li        r4, 0
  cmplw     r0, r28
  bgt-      .loc_0xE8
  addi      r0, r3, 0x40C
  cmplw     r28, r0
  bge-      .loc_0xE8
  li        r4, 0x1

.loc_0xE8:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x12C
  lwz       r4, 0x8(r3)
  subi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  lwz       r0, 0x0(r30)
  cmplw     r3, r0
  beq-      .loc_0x120
  lwz       r0, 0x8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x120
  lwz       r28, 0x0(r3)
  bl        -0x84EC0
  stw       r28, 0x0(r29)

.loc_0x120:
  lwz       r3, 0x8(r1)
  bl        0x46CC4
  b         .loc_0x50

.loc_0x12C:
  mr        r29, r3
  lwz       r3, 0x0(r3)

.loc_0x134:
  cmplwi    r3, 0
  bne+      .loc_0xC8
  lwz       r3, 0x8(r1)
  bl        0x46CA8
  b         .loc_0x50
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JASTaskThread::pause(bool)
{
	// UNUSED FUNCTION
}