

/*
 * --INFO--
 * Address:	80334268
 * Size:	000028
 */
void PSGame::CaveFloorInfo::getCaveNoFromID(void)
{
/*
.loc_0x0:
  lwz       r4, 0x44(r3)
  subis     r0, r4, 0x7465
  cmplwi    r0, 0x7374
  bne-      .loc_0x18
  li        r3, 0
  blr       

.loc_0x18:
  lbz       r3, 0x47(r3)
  subi      r0, r3, 0x31
  rlwinm    r3,r0,0,24,31
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void PSGame::ConductorList::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80334290
 * Size:	0000D4
 */
void PSGame::ConductorList::__dt(void)
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
  mr.       r29, r3
  beq-      .loc_0xB4
  lis       r3, 0x804E
  li        r31, 0
  subi      r3, r3, 0x5594
  stw       r3, 0x0(r29)
  addi      r0, r3, 0x10
  stw       r0, 0x1C(r29)
  b         .loc_0x58

.loc_0x40:
  rlwinm    r3,r31,3,21,28
  lwz       r4, 0x24(r29)
  addi      r0, r3, 0x4
  lwzx      r3, r4, r0
  bl        -0x310208
  addi      r31, r31, 0x1

.loc_0x58:
  lbz       r0, 0x20(r29)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x40
  lwz       r3, 0x24(r29)
  cmplwi    r3, 0
  beq-      .loc_0x7C
  subi      r3, r3, 0x10
  bl        -0x310230

.loc_0x7C:
  addic.    r0, r29, 0x1C
  beq-      .loc_0x98
  lis       r3, 0x804E
  li        r0, 0
  subi      r3, r3, 0x5578
  stw       r3, 0x1C(r29)
  stw       r0, -0x67AC(r13)

.loc_0x98:
  mr        r3, r29
  li        r4, 0
  bl        0x4694
  extsh.    r0, r30
  ble-      .loc_0xB4
  mr        r3, r29
  bl        -0x31028C

.loc_0xB4:
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	80334364
 * Size:	0001AC
 */
void PSGame::ConductorList::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r29, r4
  mr        r28, r3
  subi      r31, r5, 0x6E8
  mr        r3, r29
  bl        0xE0114
  stb       r3, 0x20(r28)
  lwz       r0, 0x24(r28)
  cmplwi    r0, 0
  beq-      .loc_0x4C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x8C
  crclr     6, 0x6
  bl        -0x309D6C

.loc_0x4C:
  lbz       r27, 0x20(r28)
  li        r5, -0x20
  lwz       r4, -0x77D4(r13)
  rlwinm    r3,r27,3,0,28
  addi      r3, r3, 0x10
  bl        -0x31037C
  lis       r4, 0x8033
  mr        r7, r27
  addi      r4, r4, 0x4510
  li        r5, 0
  li        r6, 0x8
  bl        -0x2729EC
  stw       r3, 0x24(r28)
  lwz       r0, 0x24(r28)
  cmplwi    r0, 0
  bne-      .loc_0xA0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x90
  crclr     6, 0x6
  bl        -0x309DC0

.loc_0xA0:
  li        r30, 0
  b         .loc_0x184

.loc_0xA8:
  mr        r3, r29
  bl        0xE008C
  lwz       r4, 0x24(r28)
  mr        r27, r3
  rlwinm    r26,r30,3,21,28
  rlwinm    r3,r3,5,19,26
  stbx      r27, r4, r26
  li        r5, -0x20
  lwz       r4, -0x77D4(r13)
  bl        -0x3103E8
  lwz       r4, 0x24(r28)
  addi      r0, r26, 0x4
  rlwinm    r27,r27,0,24,31
  li        r25, 0
  stwx      r3, r4, r0
  b         .loc_0x174

.loc_0xE8:
  lwz       r4, 0x24(r28)
  rlwinm    r0,r25,5,19,26
  mr        r3, r29
  li        r5, 0x20
  addi      r4, r4, 0x4
  lwzx      r4, r26, r4
  add       r24, r4, r0
  mr        r4, r24
  bl        0xE0C68
  mr        r3, r24
  addi      r4, r31, 0x18
  bl        -0x269DB8
  cmpwi     r3, 0
  bne-      .loc_0x134
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x9C
  crclr     6, 0x6
  bl        -0x309E54

.loc_0x134:
  lbz       r0, 0x0(r24)
  li        r3, 0
  extsb     r0, r0
  cmpwi     r0, 0x30
  blt-      .loc_0x150
  cmpwi     r0, 0x39
  ble-      .loc_0x154

.loc_0x150:
  li        r3, 0x1

.loc_0x154:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x170
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x9E
  crclr     6, 0x6
  bl        -0x309E90

.loc_0x170:
  addi      r25, r25, 0x1

.loc_0x174:
  rlwinm    r0,r25,0,24,31
  cmplw     r0, r27
  blt+      .loc_0xE8
  addi      r30, r30, 0x1

.loc_0x184:
  lbz       r0, 0x20(r28)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0xA8
  lmw       r24, 0x10(r1)
  li        r3, 0x1
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80334510
 * Size:	000014
 */
void PSGame::ConductorList::CaveInfo::__ct(void)
{
/*
.loc_0x0:
  li        r4, 0xFF
  li        r0, 0
  stb       r4, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void PSGame::ConductorList::getInfo( (unsigned char, unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void PSGame::ConductorList::getAutoBgmInfo( (unsigned char, unsigned char))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80334524
 * Size:	0003D4
 */
void PSGame::ConductorList::getSeqAndWaveFromConductor( (char const *, unsigned char *, char **))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r3, 0x6E8
  addi      r3, r31, 0x24
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r4
  bl        -0x269C48
  mr        r5, r3
  mr        r4, r28
  addi      r3, r31, 0x24
  bl        -0x269EE8
  cmpwi     r3, 0
  bne-      .loc_0xB8
  addi      r0, r31, 0x30
  addi      r3, r31, 0x40
  stw       r0, 0x0(r30)
  bl        -0x269C70
  add       r28, r28, r3
  subi      r4, r2, 0x2A0
  mr        r3, r28
  li        r5, 0x2
  bl        -0x269F14
  cmpwi     r3, 0
  bne-      .loc_0x88
  li        r0, 0x16
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x88:
  mr        r3, r28
  subi      r4, r2, 0x29C
  li        r5, 0x2
  bl        -0x269F38
  cmpwi     r3, 0
  bne-      .loc_0xAC
  li        r0, 0x21
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0xAC:
  li        r0, 0x22
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0xB8:
  addi      r3, r31, 0x4C
  bl        -0x269CD0
  mr        r5, r3
  mr        r4, r28
  addi      r3, r31, 0x4C
  bl        -0x269F70
  cmpwi     r3, 0
  bne-      .loc_0x140
  addi      r0, r31, 0x58
  addi      r3, r31, 0x68
  stw       r0, 0x0(r30)
  bl        -0x269CF8
  add       r28, r28, r3
  subi      r4, r2, 0x2A0
  mr        r3, r28
  li        r5, 0x2
  bl        -0x269F9C
  cmpwi     r3, 0
  bne-      .loc_0x110
  li        r0, 0xA
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x110:
  mr        r3, r28
  subi      r4, r2, 0x29C
  li        r5, 0x2
  bl        -0x269FC0
  cmpwi     r3, 0
  bne-      .loc_0x134
  li        r0, 0x1D
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x134:
  li        r0, 0x1E
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x140:
  addi      r3, r31, 0x74
  bl        -0x269D58
  mr        r5, r3
  mr        r4, r28
  addi      r3, r31, 0x74
  bl        -0x269FF8
  cmpwi     r3, 0
  bne-      .loc_0x1C8
  addi      r0, r31, 0x80
  addi      r3, r31, 0x90
  stw       r0, 0x0(r30)
  bl        -0x269D80
  add       r28, r28, r3
  subi      r4, r2, 0x2A0
  mr        r3, r28
  li        r5, 0x2
  bl        -0x26A024
  cmpwi     r3, 0
  bne-      .loc_0x198
  li        r0, 0x1A
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x198:
  mr        r3, r28
  subi      r4, r2, 0x29C
  li        r5, 0x2
  bl        -0x26A048
  cmpwi     r3, 0
  bne-      .loc_0x1BC
  li        r0, 0x1F
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x1BC:
  li        r0, 0x20
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x1C8:
  subi      r3, r2, 0x298
  bl        -0x269DE0
  mr        r5, r3
  mr        r4, r28
  subi      r3, r2, 0x298
  bl        -0x26A080
  cmpwi     r3, 0
  bne-      .loc_0x2D0
  lis       r3, 0x8051
  mr        r4, r28
  addi      r3, r3, 0x3FFC
  bl        -0x269EC0
  lis       r3, 0x8051
  subi      r4, r2, 0x294
  addi      r3, r3, 0x3FFC
  addi      r3, r3, 0x6
  bl        -0x269ED4
  lis       r3, 0x8051
  addi      r3, r3, 0x3FFC
  stw       r3, 0x0(r30)
  lbz       r3, 0x5(r3)
  extsb     r0, r3
  cmpwi     r0, 0x30
  blt-      .loc_0x23C
  cmpwi     r0, 0x39
  bgt-      .loc_0x23C
  subi      r0, r3, 0x30
  rlwinm    r0,r0,0,24,31
  b         .loc_0x240

.loc_0x23C:
  li        r0, 0xFF

.loc_0x240:
  rlwinm    r28,r0,0,24,31
  addis     r0, r28, 0
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x264
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x102
  crclr     6, 0x6
  bl        -0x30A144

.loc_0x264:
  lis       r3, 0x8051
  addi      r3, r3, 0x3FFC
  lbz       r3, 0x4(r3)
  extsb     r0, r3
  cmpwi     r0, 0x30
  blt-      .loc_0x290
  cmpwi     r0, 0x39
  bgt-      .loc_0x290
  subi      r0, r3, 0x30
  rlwinm    r0,r0,0,24,31
  b         .loc_0x294

.loc_0x290:
  li        r0, 0xFF

.loc_0x294:
  rlwinm    r30,r0,0,24,31
  addis     r0, r30, 0
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x2B8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x104
  crclr     6, 0x6
  bl        -0x30A198

.loc_0x2B8:
  mulli     r0, r30, 0xA
  add       r0, r28, r0
  rlwinm    r3,r0,0,24,31
  addi      r0, r3, 0x25
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x2D0:
  addi      r3, r31, 0x9C
  bl        -0x269EE8
  mr        r5, r3
  mr        r4, r28
  addi      r3, r31, 0x9C
  bl        -0x26A188
  cmpwi     r3, 0
  bne-      .loc_0x304
  addi      r3, r31, 0xA8
  li        r0, 0x18
  stw       r3, 0x0(r30)
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x304:
  addi      r3, r31, 0xB8
  bl        -0x269F1C
  mr        r5, r3
  mr        r4, r28
  addi      r3, r31, 0xB8
  bl        -0x26A1BC
  cmpwi     r3, 0
  bne-      .loc_0x338
  addi      r3, r31, 0xC4
  li        r0, 0x17
  stw       r3, 0x0(r30)
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x338:
  addi      r3, r31, 0xD4
  bl        -0x269F50
  mr        r5, r3
  mr        r4, r28
  addi      r3, r31, 0xD4
  bl        -0x26A1F0
  cmpwi     r3, 0
  bne-      .loc_0x36C
  addi      r3, r31, 0xE0
  li        r0, 0x19
  stw       r3, 0x0(r30)
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x36C:
  addi      r3, r31, 0xF0
  bl        -0x269F84
  mr        r5, r3
  mr        r4, r28
  addi      r3, r31, 0xF0
  bl        -0x26A224
  cmpwi     r3, 0
  bne-      .loc_0x3A0
  addi      r3, r31, 0xFC
  li        r0, 0x1C
  stw       r3, 0x0(r30)
  stb       r0, 0x0(r29)
  b         .loc_0x3B4

.loc_0x3A0:
  mr        r5, r28
  addi      r3, r31, 0
  li        r4, 0x121
  crclr     6, 0x6
  bl        -0x30A294

.loc_0x3B4:
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
 * Address:	803348F8
 * Size:	0000E0
 */
void PSGame::SoundTable::CategoryMgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804E
  lis       r4, 0x804E
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x55AC
  stw       r31, 0xC(r1)
  li        r31, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  subi      r3, r5, 0x55A0
  stw       r3, 0x0(r30)
  stw       r30, -0x6E3C(r13)
  stw       r0, 0x0(r30)
  b         .loc_0xB8

.loc_0x3C:
  li        r3, 0x18
  bl        -0x310A94
  cmplwi    r3, 0
  beq-      .loc_0x74
  lfs       f1, -0x28C(r2)
  li        r0, 0
  lfs       f0, -0x288(r2)
  stfs      f1, 0x0(r3)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  stb       r0, 0x14(r3)
  stb       r0, 0x15(r3)

.loc_0x74:
  rlwinm    r4,r31,2,22,29
  addi      r0, r4, 0x4
  stwx      r3, r30, r0
  lwzx      r0, r30, r0
  cmplwi    r0, 0
  bne-      .loc_0xA8
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x6E8
  li        r4, 0x138
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30A35C

.loc_0xA8:
  mr        r3, r30
  mr        r4, r31
  bl        .loc_0xE0
  addi      r31, r31, 0x1

.loc_0xB8:
  rlwinm    r0,r31,0,24,31
  cmplwi    r0, 0x6
  blt+      .loc_0x3C
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xE0:
*/
}

/*
 * --INFO--
 * Address:	803349D8
 * Size:	000174
 */
void PSGame::SoundTable::CategoryMgr::initiate( (unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,2,22,29
  stw       r31, 0xC(r1)
  add       r31, r3, r0
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x48
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x6E8
  li        r4, 0x13F
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30A3DC

.loc_0x48:
  rlwinm    r0,r30,0,24,31
  cmpwi     r0, 0x3
  beq-      .loc_0xE0
  bge-      .loc_0x70
  cmpwi     r0, 0x1
  beq-      .loc_0xA0
  bge-      .loc_0xC0
  cmpwi     r0, 0
  bge-      .loc_0x80
  b         .loc_0x140

.loc_0x70:
  cmpwi     r0, 0x5
  beq-      .loc_0x120
  bge-      .loc_0x140
  b         .loc_0x100

.loc_0x80:
  lwz       r3, 0x4(r31)
  lfs       f1, -0x28C(r2)
  lfs       f2, -0x284(r2)
  lfs       f3, -0x280(r2)
  lfs       f4, -0x27C(r2)
  lfs       f5, -0x278(r2)
  bl        .loc_0x174
  b         .loc_0x15C

.loc_0xA0:
  lwz       r3, 0x4(r31)
  lfs       f1, -0x28C(r2)
  lfs       f2, -0x284(r2)
  lfs       f3, -0x280(r2)
  lfs       f4, -0x27C(r2)
  lfs       f5, -0x278(r2)
  bl        .loc_0x174
  b         .loc_0x15C

.loc_0xC0:
  lwz       r3, 0x4(r31)
  lfs       f1, -0x28C(r2)
  lfs       f2, -0x284(r2)
  lfs       f3, -0x280(r2)
  lfs       f4, -0x27C(r2)
  lfs       f5, -0x278(r2)
  bl        .loc_0x174
  b         .loc_0x15C

.loc_0xE0:
  lwz       r3, 0x4(r31)
  lfs       f1, -0x28C(r2)
  lfs       f2, -0x284(r2)
  lfs       f3, -0x280(r2)
  lfs       f4, -0x27C(r2)
  lfs       f5, -0x278(r2)
  bl        .loc_0x174
  b         .loc_0x15C

.loc_0x100:
  lwz       r3, 0x4(r31)
  lfs       f1, -0x28C(r2)
  lfs       f2, -0x274(r2)
  lfs       f3, -0x270(r2)
  lfs       f4, -0x26C(r2)
  lfs       f5, -0x278(r2)
  bl        .loc_0x174
  b         .loc_0x15C

.loc_0x120:
  lwz       r3, 0x4(r31)
  lfs       f1, -0x28C(r2)
  lfs       f2, -0x284(r2)
  lfs       f3, -0x280(r2)
  lfs       f4, -0x27C(r2)
  lfs       f5, -0x278(r2)
  bl        .loc_0x174
  b         .loc_0x15C

.loc_0x140:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x6E8
  li        r4, 0x155
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30A4F0

.loc_0x15C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x174:
*/
}

/*
 * --INFO--
 * Address:	80334B4C
 * Size:	000018
 */
void PSGame::SoundTable::SePerspInfo::set( (float, float, float, float, float))
{
/*
.loc_0x0:
  stfs      f1, 0x0(r3)
  stfs      f2, 0x4(r3)
  stfs      f3, 0x8(r3)
  stfs      f4, 0xC(r3)
  stfs      f5, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80334B64
 * Size:	000164
 */
void PSGame::SoundTable::SePerspInfo::getDistVol( (float, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stfd      f30, 0x10(r1)
  psq_st    f30,0x18(r1),0,0
  stw       r31, 0xC(r1)
  mr        r31, r3
  fmr       f30, f1
  lbz       r0, 0x15(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  lfs       f1, -0x288(r2)
  b         .loc_0x140

.loc_0x3C:
  rlwinm    r0,r4,0,24,31
  lfs       f31, 0x4(r31)
  cmpwi     r0, 0x5
  beq-      .loc_0x90
  bge-      .loc_0x68
  cmpwi     r0, 0x3
  beq-      .loc_0x78
  bge-      .loc_0x84
  cmpwi     r0, 0
  bge-      .loc_0xCC
  b         .loc_0xB0

.loc_0x68:
  cmpwi     r0, 0x7
  beq-      .loc_0xA8
  bge-      .loc_0xB0
  b         .loc_0x9C

.loc_0x78:
  lfs       f0, -0x268(r2)
  fmuls     f31, f31, f0
  b         .loc_0xCC

.loc_0x84:
  lfs       f0, -0x288(r2)
  fmuls     f31, f31, f0
  b         .loc_0xCC

.loc_0x90:
  lfs       f0, -0x264(r2)
  fmuls     f31, f31, f0
  b         .loc_0xCC

.loc_0x9C:
  lfs       f0, -0x260(r2)
  fmuls     f31, f31, f0
  b         .loc_0xCC

.loc_0xA8:
  lfs       f31, 0x10(r31)
  b         .loc_0xCC

.loc_0xB0:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x6E8
  li        r4, 0x193
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30A5EC

.loc_0xCC:
  bl        -0x287154
  fcmpo     cr0, f30, f1
  bge-      .loc_0xE0
  lfs       f1, 0x0(r31)
  b         .loc_0x140

.loc_0xE0:
  fcmpo     cr0, f30, f31
  bge-      .loc_0x10C
  bl        -0x287170
  fmr       f2, f1
  lfs       f4, 0x0(r31)
  fmr       f1, f30
  lfs       f5, 0x8(r31)
  fmr       f3, f31
  li        r3, 0
  bl        -0x27AA24
  b         .loc_0x140

.loc_0x10C:
  lfs       f0, 0xC(r31)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x13C
  bl        -0x287198
  fmr       f5, f1
  lfs       f3, 0xC(r31)
  fmr       f1, f30
  lfs       f4, 0x8(r31)
  fmr       f2, f31
  li        r3, 0
  bl        -0x27AA54
  b         .loc_0x140

.loc_0x13C:
  lfs       f1, -0x288(r2)

.loc_0x140:
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  psq_l     f30,0x18(r1),0,0
  lfd       f30, 0x10(r1)
  lwz       r0, 0x34(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80334CC8
 * Size:	0000A8
 */
void PSGame::CameraMgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x317D10
  lis       r3, 0x804E
  li        r0, 0
  subi      r3, r3, 0x55B8
  lfs       f3, -0x258(r2)
  stw       r3, 0x0(r31)
  mr        r3, r31
  lfs       f2, -0x254(r2)
  stb       r0, 0x4C(r31)
  lfs       f1, -0x250(r2)
  stb       r0, 0x4D(r31)
  lfs       f0, -0x24C(r2)
  stfs      f3, 0x18(r31)
  lfs       f4, -0x28C(r2)
  stfs      f2, 0x1C(r31)
  lfs       f3, -0x248(r2)
  stfs      f1, 0x20(r31)
  lfs       f2, -0x244(r2)
  stfs      f0, 0x24(r31)
  lfs       f1, -0x240(r2)
  stfs      f4, 0x28(r31)
  lfs       f0, -0x23C(r2)
  stfs      f3, 0x2C(r31)
  stfs      f2, 0x30(r31)
  stfs      f1, 0x34(r31)
  stfs      f0, 0x38(r31)
  lfs       f0, 0x1C(r31)
  stfs      f0, 0x3C(r31)
  lfs       f0, 0x1C(r31)
  stfs      f0, 0x40(r31)
  stfs      f4, 0x44(r31)
  stfs      f4, 0x48(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80334D70
 * Size:	000060
 */
void PSGame::CameraMgr::__dt(void)
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
  beq-      .loc_0x44
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x55B8
  stw       r0, 0x0(r30)
  bl        -0x317D6C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x310CFC

.loc_0x44:
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
 * Address:	80334DD0
 * Size:	000024
 */
void PSGame::CameraMgr::getBgmCamVol( (unsigned char))
{
/*
.loc_0x0:
  rlwinm    r0,r4,0,24,31
  add       r4, r3, r0
  lbz       r0, 0x4C(r4)
  cmplwi    r0, 0
  beq-      .loc_0x1C
  lfs       f1, 0x38(r3)
  blr       

.loc_0x1C:
  lfs       f1, -0x28C(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	80334DF4
 * Size:	00004C
 */
void PSGame::CameraMgr::update( (unsigned char, float))
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
  bl        0x40
  rlwinm    r0,r31,2,22,29
  lfs       f0, -0x28C(r2)
  add       r3, r30, r0
  stfs      f1, 0x3C(r3)
  stfs      f0, 0x44(r3)
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
 * Address:	80334E40
 * Size:	000010
 */
void PSGame::CameraMgr::getCurrentCamDistVol( (unsigned char))
{
/*
.loc_0x0:
  rlwinm    r0,r4,2,22,29
  add       r3, r3, r0
  lfs       f1, 0x3C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80334E50
 * Size:	000088
 */
void PSGame::CameraMgr::getVol_DistBetweenCamAndLookat( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lfs       f3, 0x1C(r3)
  fcmpo     cr0, f1, f3
  cror      2, 0, 0x2
  bne-      .loc_0x34
  lfs       f2, 0x18(r3)
  lfs       f4, 0x28(r3)
  lfs       f5, 0x2C(r3)
  li        r3, 0
  bl        -0x27AC38
  b         .loc_0x78

.loc_0x34:
  lfs       f0, 0x20(r3)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x60
  fmr       f2, f3
  lfs       f4, 0x2C(r3)
  lfs       f5, 0x30(r3)
  fmr       f3, f0
  li        r3, 0
  bl        -0x27AC64
  b         .loc_0x78

.loc_0x60:
  fmr       f2, f0
  lfs       f3, 0x24(r3)
  lfs       f4, 0x30(r3)
  lfs       f5, 0x34(r3)
  li        r3, 0
  bl        -0x27AC80

.loc_0x78:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80334ED8
 * Size:	000034
 */
void PSGame::SysFactory::__ct(void)
{
/*
.loc_0x0:
  lis       r5, 0x804E
  lis       r4, 0x15
  subi      r0, r5, 0x55C4
  li        r5, 0
  stw       r0, 0x10(r3)
  addi      r0, r4, 0x1800
  stw       r5, 0x0(r3)
  stw       r5, 0x4(r3)
  stw       r5, 0x8(r3)
  stw       r5, 0xC(r3)
  stw       r0, 0x14(r3)
  stw       r5, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80334F0C
 * Size:	000404
 */
void PSGame::SysFactory::newSoundSystem(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r27, 0x2C(r1)
  mr        r27, r3
  lis       r3, 0x8049
  subi      r31, r3, 0x6E8
  lwz       r0, 0x0(r27)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x2CB
  crclr     6, 0x6
  bl        -0x30A904

.loc_0x3C:
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x2CC
  crclr     6, 0x6
  bl        -0x30A924

.loc_0x5C:
  lwz       r0, 0x8(r27)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x2CD
  crclr     6, 0x6
  bl        -0x30A944

.loc_0x7C:
  mr        r3, r27
  bl        .loc_0x404
  lwz       r30, -0x77D4(r13)
  lwz       r3, 0x0(r27)
  bl        -0x3119F4
  lwz       r28, 0x0(r27)
  mr        r3, r28
  bl        -0x3117F0
  mr        r4, r28
  li        r5, 0
  bl        -0x310240
  mr.       r29, r3
  bne-      .loc_0xC4
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x2E5
  crclr     6, 0x6
  bl        -0x30A98C

.loc_0xC4:
  mr        r3, r29
  bl        -0x311A30
  bl        0x3174
  mr        r3, r29
  bl        -0x31182C
  lwz       r0, 0x14(r27)
  cmplw     r0, r3
  blt-      .loc_0xF8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x2EC
  crclr     6, 0x6
  bl        -0x30A9C0

.loc_0xF8:
  lwz       r3, 0x14(r27)
  mr        r4, r29
  li        r5, 0
  bl        -0x3102A0
  stw       r3, 0x18(r27)
  lwz       r0, 0x18(r27)
  cmplwi    r0, 0
  bne-      .loc_0x12C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x2F2
  crclr     6, 0x6
  bl        -0x30A9F4

.loc_0x12C:
  lwz       r0, 0x118(r31)
  lwz       r7, 0x11C(r31)
  lwz       r6, 0x120(r31)
  lwz       r5, 0x124(r31)
  lwz       r4, 0x128(r31)
  lwz       r3, 0x12C(r31)
  stw       r0, 0x8(r1)
  lwz       r0, -0x67A8(r13)
  stw       r7, 0xC(r1)
  cmplwi    r0, 0
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r4, 0x18(r1)
  stw       r3, 0x1C(r1)
  lwz       r0, 0x18(r27)
  stw       r0, 0x8(r1)
  lwz       r0, 0x4(r27)
  stw       r0, 0xC(r1)
  lwz       r0, 0x8(r27)
  stw       r0, 0x18(r1)
  beq-      .loc_0x194
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x301
  crclr     6, 0x6
  bl        -0x30AA5C

.loc_0x194:
  lwz       r0, 0xC(r27)
  li        r3, 0x4C
  stw       r0, -0x67A0(r13)
  bl        -0x311208
  mr.       r28, r3
  beq-      .loc_0x1B8
  addi      r4, r1, 0x8
  bl        0x3360
  mr        r28, r3

.loc_0x1B8:
  cmplwi    r28, 0
  bne-      .loc_0x1D4
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x305
  crclr     6, 0x6
  bl        -0x30AA9C

.loc_0x1D4:
  mr        r3, r27
  lwz       r12, 0x10(r27)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  stw       r3, -0x6780(r13)
  bne-      .loc_0x208
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x308
  crclr     6, 0x6
  bl        -0x30AAD0

.loc_0x208:
  mr        r3, r27
  bl        0x278
  lwz       r0, -0x6794(r13)
  cmplwi    r0, 0
  beq-      .loc_0x230
  addi      r3, r31, 0x130
  addi      r5, r31, 0xC
  li        r4, 0x2D6
  crclr     6, 0x6
  bl        -0x30AAF8

.loc_0x230:
  li        r3, 0x8
  bl        -0x31129C
  mr.       r27, r3
  beq-      .loc_0x28C
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x55D0
  addi      r3, r31, 0x13C
  stw       r4, 0x0(r27)
  li        r4, 0x3
  li        r6, 0x1
  stw       r0, 0x4(r27)
  lwz       r5, -0x77D4(r13)
  bl        -0x31A040
  stw       r3, 0x4(r27)
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x28C
  addi      r3, r31, 0x130
  addi      r5, r31, 0xC
  li        r4, 0x2EA
  crclr     6, 0x6
  bl        -0x30AB54

.loc_0x28C:
  cmplwi    r27, 0
  stw       r27, -0x6794(r13)
  bne-      .loc_0x2AC
  addi      r3, r31, 0x130
  addi      r5, r31, 0xC
  li        r4, 0x2D8
  crclr     6, 0x6
  bl        -0x30AB74

.loc_0x2AC:
  lwz       r0, -0x6E54(r13)
  cmplwi    r0, 0
  beq-      .loc_0x2CC
  addi      r3, r31, 0x154
  addi      r5, r31, 0xC
  li        r4, 0x47
  crclr     6, 0x6
  bl        -0x30AB94

.loc_0x2CC:
  li        r3, 0x1C
  bl        -0x311338
  mr.       r0, r3
  beq-      .loc_0x334
  mr        r27, r0
  bl        -0x318220
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x55DC
  addi      r3, r31, 0x164
  stw       r4, 0x0(r27)
  li        r4, 0x1
  li        r6, 0x1
  stw       r0, 0x18(r27)
  lwz       r5, -0x77D4(r13)
  bl        -0x31A0E4
  stw       r3, 0x18(r27)
  lwz       r0, 0x18(r27)
  cmplwi    r0, 0
  bne-      .loc_0x330
  addi      r3, r31, 0x154
  addi      r5, r31, 0xC
  li        r4, 0x5C
  crclr     6, 0x6
  bl        -0x30ABF8

.loc_0x330:
  mr        r0, r27

.loc_0x334:
  cmplwi    r0, 0
  stw       r0, -0x6E54(r13)
  bne-      .loc_0x354
  addi      r3, r31, 0x154
  addi      r5, r31, 0xC
  li        r4, 0x4A
  crclr     6, 0x6
  bl        -0x30AC1C

.loc_0x354:
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  beq-      .loc_0x374
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x76
  crclr     6, 0x6
  bl        -0x30AC3C

.loc_0x374:
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  bne-      .loc_0x39C
  li        r3, 0x30
  bl        -0x3113EC
  mr.       r0, r3
  beq-      .loc_0x398
  bl        0x9EBC
  mr        r0, r3

.loc_0x398:
  stw       r0, -0x6E38(r13)

.loc_0x39C:
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3BC
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x79
  crclr     6, 0x6
  bl        -0x30AC84

.loc_0x3BC:
  mr        r3, r30
  bl        -0x311D28
  mr        r3, r29
  bl        -0x31038C
  addi      r3, r28, 0x28
  bl        -0x245774
  li        r0, 0x1
  addi      r3, r28, 0x28
  stw       r0, 0x40(r28)
  bl        -0x2456A8
  bl        -0x2466B8
  stw       r28, -0x67A8(r13)
  bl        -0x2466AC
  lmw       r27, 0x2C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x404:
*/
}

/*
 * --INFO--
 * Address:	80335310
 * Size:	000080
 */
void PSGame::SysFactory::preInitJAI(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8049
  stw       r0, 0x14(r1)
  subi      r3, r3, 0x564
  bl        -0x28794C
  subi      r3, r2, 0x238
  bl        -0x28794C
  li        r3, 0x2
  bl        -0x287944
  li        r3, 0xE7
  bl        -0x287944
  li        r3, 0x5
  bl        -0x2879D0
  li        r3, 0xA
  bl        -0x2879C8
  li        r3, 0xA
  bl        -0x287954
  lis       r3, 0x1
  subi      r3, r3, 0x1000
  bl        -0x287990
  li        r3, 0x3
  bl        -0x2879DC
  lis       r3, 0x1
  subi      r3, r3, 0x5D01
  bl        -0x2879AC
  li        r3, 0x1
  bl        -0x2879E8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80335390
 * Size:	000120
 */
void PSGame::SysFactory::postInitJAI(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lfs       f31, -0x288(r2)
  li        r30, 0
  b         .loc_0xD0

.loc_0x2C:
  mr        r3, r30
  bl        -0x27DD84
  rlwinm.   r0,r3,0,16,31
  beq-      .loc_0xCC
  rlwinm    r31,r30,2,22,29
  lwz       r29, -0x6E3C(r13)
  addi      r0, r31, 0x4
  lwzx      r0, r29, r0
  cmplwi    r0, 0
  bne-      .loc_0x70
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x558
  li        r4, 0x5D
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30ADBC

.loc_0x70:
  addi      r0, r31, 0x4
  lwzx      r3, r29, r0
  lfs       f0, 0xC(r3)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x88
  fmr       f31, f0

.loc_0x88:
  lwz       r29, -0x6E3C(r13)
  addi      r0, r31, 0x4
  lwzx      r0, r29, r0
  cmplwi    r0, 0
  bne-      .loc_0xB8
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x558
  li        r4, 0x5D
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30AE04

.loc_0xB8:
  addi      r0, r31, 0x4
  lwz       r3, -0x7414(r13)
  lwzx      r4, r29, r0
  lfs       f0, 0x0(r4)
  stfsx     f0, r3, r31

.loc_0xCC:
  addi      r30, r30, 0x1

.loc_0xD0:
  bl        -0x2879F0
  rlwinm    r3,r3,0,24,31
  rlwinm    r0,r30,0,24,31
  cmplw     r0, r3
  blt+      .loc_0x2C
  fmr       f1, f31
  bl        -0x287ADC
  lfs       f1, -0x288(r2)
  bl        -0x287AD4
  lfs       f1, -0x230(r2)
  bl        -0x287AE4
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803354B0
 * Size:	000038
 */
void PSGame::SceneInfo::__ct(void)
{
/*
.loc_0x0:
  lis       r4, 0x804E
  li        r0, 0
  subi      r4, r4, 0x55E8
  stw       r4, 0x0(r3)
  sth       r0, 0x4(r3)
  stb       r0, 0x6(r3)
  stb       r0, 0x7(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803354E8
 * Size:	000078
 */
void PSGame::SceneInfo::setStageFlag( (PSGame::SceneInfo::FlagDef, PSGame::SceneInfo::FlagBitShift))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0
  stw       r0, 0x14(r1)
  bne-      .loc_0x2C
  li        r0, 0x1
  lhz       r4, 0x4(r3)
  slw       r0, r0, r5
  andc      r0, r4, r0
  sth       r0, 0x4(r3)
  b         .loc_0x68

.loc_0x2C:
  cmpwi     r4, 0x1
  bne-      .loc_0x4C
  li        r0, 0x1
  lhz       r4, 0x4(r3)
  slw       r0, r0, r5
  or        r0, r4, r0
  sth       r0, 0x4(r3)
  b         .loc_0x68

.loc_0x4C:
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x6E8
  li        r4, 0x38A
  subi      r5, r5, 0x54C
  crclr     6, 0x6
  bl        -0x30AF0C

.loc_0x68:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80335560
 * Size:	000010
 */
void PSGame::SceneInfo::getFlag( const(PSGame::SceneInfo::FlagBitShift))
{
/*
.loc_0x0:
  lhz       r0, 0x4(r3)
  sraw      r0, r0, r4
  rlwinm    r3,r0,0,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	80335570
 * Size:	000074
 */
void PSGame::SceneInfo::setStageCamera( const
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  lbz       r31, 0x7(r3)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  b         .loc_0x4C

.loc_0x28:
  rlwinm    r0,r30,2,22,29
  lwz       r3, -0x7498(r13)
  add       r6, r29, r0
  rlwinm    r7,r30,0,24,31
  lwz       r4, 0x8(r6)
  lwz       r5, 0x10(r6)
  lwz       r6, 0x18(r6)
  bl        -0x289170
  addi      r30, r30, 0x1

.loc_0x4C:
  rlwinm    r0,r30,0,24,31
  cmplw     r0, r31
  blt+      .loc_0x28
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
 * Address:	803355E4
 * Size:	00003C
 */
void PSGame::PikScene::__ct( (unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0xBF40
  lis       r4, 0x804E
  mr        r3, r31
  subi      r0, r4, 0x5610
  stw       r0, 0x0(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80335620
 * Size:	000060
 */
void PSGame::PikScene::__dt(void)
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
  beq-      .loc_0x44
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x5610
  stw       r0, 0x0(r30)
  bl        0xC000
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x3115AC

.loc_0x44:
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
 * Address:	80335680
 * Size:	0000A8
 */
void PSGame::PikScene::getMiddleBossBgm(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1
  addi      r3, r3, 0x10
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  bl        -0x1800
  mr.       r30, r3
  bne-      .loc_0x30
  li        r3, 0
  b         .loc_0x90

.loc_0x30:
  lwz       r31, 0x14(r30)
  lis       r3, 0x8049
  subi      r4, r3, 0x53C
  mr        r3, r31
  bl        -0x26B000
  cmpwi     r3, 0
  beq-      .loc_0x64
  lis       r4, 0x8049
  mr        r3, r31
  subi      r4, r4, 0x530
  bl        -0x26B018
  cmpwi     r3, 0
  bne-      .loc_0x8C

.loc_0x64:
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x8C
  mr        r3, r30
  b         .loc_0x90

.loc_0x8C:
  li        r3, 0

.loc_0x90:
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
 * Size:	00007C
 */
void PSGame::PikScene::getJumpMainBgm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80335728
 * Size:	000378
 */
void PSGame::PikSceneMgr::newAndSetGlobalScene(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  stw       r30, 0x68(r1)
  mr        r30, r3
  lis       r3, 0x8049
  stw       r29, 0x64(r1)
  subi      r31, r3, 0x6E8
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x44
  addi      r3, r31, 0
  addi      r5, r31, 0x1E4
  li        r4, 0x3EA
  crclr     6, 0x6
  bl        -0x30B128

.loc_0x44:
  li        r6, 0
  lis       r3, 0x804E
  stb       r6, 0x2E(r1)
  subi      r7, r3, 0x55E8
  rlwinm    r0,r6,0,31,29
  mr        r3, r30
  sth       r6, 0x2C(r1)
  addi      r5, r1, 0x28
  li        r4, 0
  stb       r6, 0x2F(r1)
  stw       r7, 0x28(r1)
  stw       r6, 0x30(r1)
  stw       r6, 0x38(r1)
  stw       r6, 0x40(r1)
  stw       r6, 0x34(r1)
  stw       r6, 0x3C(r1)
  stw       r6, 0x44(r1)
  stb       r6, 0x2E(r1)
  stb       r6, 0x2F(r1)
  sth       r0, 0x2C(r1)
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x4(r30)
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0xC8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x3F7
  crclr     6, 0x6
  bl        -0x30B1AC

.loc_0xC8:
  lwz       r3, 0x4(r30)
  addi      r4, r30, 0x4
  bl        0xBFD8
  lwz       r0, 0x4(r30)
  stw       r0, 0x8(r30)
  lwz       r0, -0x6E30(r13)
  cmplwi    r0, 0
  beq-      .loc_0xFC
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x76
  crclr     6, 0x6
  bl        -0x30B1E0

.loc_0xFC:
  lwz       r0, -0x6E30(r13)
  cmplwi    r0, 0
  bne-      .loc_0x124
  li        r3, 0x20
  bl        -0x311990
  mr.       r0, r3
  beq-      .loc_0x120
  bl        -0x4930
  mr        r0, r3

.loc_0x120:
  stw       r0, -0x6E30(r13)

.loc_0x124:
  lwz       r0, -0x6E30(r13)
  cmplwi    r0, 0
  bne-      .loc_0x144
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x79
  crclr     6, 0x6
  bl        -0x30B228

.loc_0x144:
  lwz       r0, -0x6E30(r13)
  cmplwi    r0, 0
  bne-      .loc_0x164
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x30B248

.loc_0x164:
  lwz       r3, -0x6E30(r13)
  addi      r4, r31, 0x20C
  li        r5, 0x1
  bl        0x3218
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x190
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x400
  crclr     6, 0x6
  bl        -0x30B274

.loc_0x190:
  lwz       r0, -0x6E34(r13)
  cmplwi    r0, 0
  beq-      .loc_0x1B0
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x76
  crclr     6, 0x6
  bl        -0x30B294

.loc_0x1B0:
  lwz       r0, -0x6E34(r13)
  cmplwi    r0, 0
  bne-      .loc_0x1D8
  li        r3, 0x20
  bl        -0x311A44
  mr.       r0, r3
  beq-      .loc_0x1D4
  bl        -0x4BD4
  mr        r0, r3

.loc_0x1D4:
  stw       r0, -0x6E34(r13)

.loc_0x1D8:
  lwz       r0, -0x6E34(r13)
  cmplwi    r0, 0
  bne-      .loc_0x1F8
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x79
  crclr     6, 0x6
  bl        -0x30B2DC

.loc_0x1F8:
  lwz       r0, -0x6E34(r13)
  cmplwi    r0, 0
  bne-      .loc_0x218
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x30B2FC

.loc_0x218:
  lwz       r3, -0x6E34(r13)
  addi      r4, r31, 0x228
  li        r5, 0x1
  bl        0x3164
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x244
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x404
  crclr     6, 0x6
  bl        -0x30B328

.loc_0x244:
  lwz       r0, 0x1D0(r31)
  lwz       r5, 0x1C4(r31)
  stw       r0, 0x24(r1)
  lwz       r4, 0x1C8(r31)
  lbz       r0, 0x24(r1)
  lwz       r3, 0x1CC(r31)
  cmplwi    r0, 0x7F
  stw       r5, 0x18(r1)
  stw       r4, 0x1C(r1)
  stw       r3, 0x20(r1)
  ble-      .loc_0x284
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x410
  crclr     6, 0x6
  bl        -0x30B368

.loc_0x284:
  li        r3, 0x68
  bl        -0x311B0C
  mr.       r29, r3
  beq-      .loc_0x2AC
  addi      r5, r1, 0x18
  subi      r4, r2, 0x22C
  bl        -0x43BC
  lis       r3, 0x804E
  subi      r0, r3, 0x5A58
  stw       r0, 0x10(r29)

.loc_0x2AC:
  cmplwi    r29, 0
  bne-      .loc_0x2C8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x413
  crclr     6, 0x6
  bl        -0x30B3AC

.loc_0x2C8:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r30)
  mr        r4, r29
  bl        0xBE8C
  lwz       r8, 0x1D4(r31)
  lis       r4, 0xC001
  lwz       r7, 0x1D8(r31)
  mr        r3, r30
  lwz       r6, 0x1DC(r31)
  addi      r4, r4, 0x1011
  lwz       r0, 0x1E0(r31)
  addi      r5, r1, 0x8
  stw       r8, 0x8(r1)
  stw       r7, 0xC(r1)
  stw       r6, 0x10(r1)
  stw       r0, 0x14(r1)
  bl        0x5A4
  mr.       r29, r3
  bne-      .loc_0x338
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x425
  crclr     6, 0x6
  bl        -0x30B41C

.loc_0x338:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r30)
  mr        r4, r29
  bl        0xBE1C
  lwz       r0, 0x74(r1)
  lwz       r3, 0x4(r30)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  lwz       r29, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80335AA0
 * Size:	0004AC
 */
void PSGame::PikSceneMgr::newAndSetCurrentScene( (PSGame::SceneInfo &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r27, r4
  lis       r4, 0x8049
  mr        r26, r3
  subi      r31, r4, 0x6E8
  lbz       r28, 0x6(r27)
  cmplwi    r28, 0
  bne-      .loc_0x40
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x445
  crclr     6, 0x6
  bl        -0x30B49C

.loc_0x40:
  rlwinm    r0,r28,0,24,31
  cmplwi    r0, 0x15
  blt-      .loc_0x60
  addi      r3, r31, 0
  addi      r5, r31, 0x244
  li        r4, 0x446
  crclr     6, 0x6
  bl        -0x30B4BC

.loc_0x60:
  lwz       r0, 0x4(r26)
  cmplwi    r0, 0
  bne-      .loc_0x80
  addi      r3, r31, 0x254
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x30B4DC

.loc_0x80:
  lwz       r3, 0x4(r26)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0xA4
  addi      r3, r31, 0
  addi      r5, r31, 0x260
  li        r4, 0x447
  crclr     6, 0x6
  bl        -0x30B500

.loc_0xA4:
  li        r28, 0
  b         .loc_0xD0

.loc_0xAC:
  rlwinm    r0,r28,2,22,29
  lwz       r3, -0x7498(r13)
  add       r6, r27, r0
  rlwinm    r7,r28,0,24,31
  lwz       r4, 0x8(r6)
  lwz       r5, 0x10(r6)
  lwz       r6, 0x18(r6)
  bl        -0x289724
  addi      r28, r28, 0x1

.loc_0xD0:
  lbz       r0, 0x7(r27)
  rlwinm    r3,r28,0,24,31
  cmplw     r3, r0
  blt+      .loc_0xAC
  lwz       r0, 0x4(r26)
  cmplwi    r0, 0
  bne-      .loc_0x100
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x451
  crclr     6, 0x6
  bl        -0x30B55C

.loc_0x100:
  lwz       r3, 0x4(r26)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x124
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x452
  crclr     6, 0x6
  bl        -0x30B580

.loc_0x124:
  lwz       r0, -0x77D4(r13)
  li        r3, 0xFF
  stb       r3, 0x8(r1)
  mr        r3, r26
  mr        r4, r27
  addi      r5, r1, 0x8
  stw       r0, -0x6798(r13)
  bl        0x9DC
  mr.       r30, r3
  bne-      .loc_0x160
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x46C
  crclr     6, 0x6
  bl        -0x30B5BC

.loc_0x160:
  lbz       r3, 0x6(r27)
  li        r29, 0
  li        r28, 0
  cmplwi    r3, 0x6
  beq-      .loc_0x1AC
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x7
  beq-      .loc_0x1AC
  subi      r0, r3, 0x1
  rlwinm    r0,r0,0,24,31
  cmplwi    r0, 0x3
  ble-      .loc_0x1AC
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B0

.loc_0x1AC:
  li        r29, 0x1

.loc_0x1B0:
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x228
  lbz       r0, 0x6(r27)
  cmplwi    r0, 0x3
  bne-      .loc_0x228
  lwz       r3, 0x44(r27)
  subis     r0, r3, 0x7465
  cmplwi    r0, 0x7374
  bne-      .loc_0x1F0
  li        r0, 0
  b         .loc_0x1FC

.loc_0x1F0:
  lbz       r3, 0x47(r27)
  subi      r0, r3, 0x31
  rlwinm    r0,r0,0,24,31

.loc_0x1FC:
  rlwinm    r0,r0,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x228
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x228
  li        r29, 0

.loc_0x228:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x25C
  mr        r3, r26
  mr        r4, r27
  addi      r5, r1, 0x8
  bl        0x390
  mr.       r28, r3
  bne-      .loc_0x25C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x48B
  crclr     6, 0x6
  bl        -0x30B6B8

.loc_0x25C:
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x350
  li        r3, 0x4C
  bl        -0x311E78
  cmplwi    r3, 0
  beq-      .loc_0x348
  lis       r5, 0x804E
  lis       r4, 0x804B
  subi      r0, r5, 0x55E8
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x1250
  lhz       r4, 0x4(r27)
  sth       r4, 0x4(r3)
  lbz       r4, 0x6(r27)
  stb       r4, 0x6(r3)
  lbz       r4, 0x7(r27)
  stb       r4, 0x7(r3)
  lwz       r5, 0x8(r27)
  lwz       r4, 0xC(r27)
  stw       r5, 0x8(r3)
  stw       r4, 0xC(r3)
  lwz       r5, 0x10(r27)
  lwz       r4, 0x14(r27)
  stw       r5, 0x10(r3)
  stw       r4, 0x14(r3)
  lwz       r5, 0x18(r27)
  lwz       r4, 0x1C(r27)
  stw       r5, 0x18(r3)
  stw       r4, 0x1C(r3)
  lfs       f0, 0x20(r27)
  stfs      f0, 0x20(r3)
  lfs       f0, 0x24(r27)
  stfs      f0, 0x24(r3)
  lfs       f0, 0x28(r27)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x2C(r27)
  stfs      f0, 0x2C(r3)
  lfs       f0, 0x30(r27)
  stfs      f0, 0x30(r3)
  lfs       f0, 0x34(r27)
  stfs      f0, 0x34(r3)
  stw       r0, 0x0(r3)
  lwz       r0, 0x38(r27)
  stw       r0, 0x38(r3)
  lwz       r0, 0x3C(r27)
  stw       r0, 0x3C(r3)
  lbz       r0, 0x40(r27)
  stb       r0, 0x40(r3)
  lwz       r0, 0x44(r27)
  stw       r0, 0x44(r3)
  lbz       r0, 0x48(r27)
  stb       r0, 0x48(r3)
  lbz       r0, 0x49(r27)
  stb       r0, 0x49(r3)

.loc_0x348:
  mr        r5, r3
  b         .loc_0x3E8

.loc_0x350:
  li        r3, 0x38
  bl        -0x311F50
  cmplwi    r3, 0
  beq-      .loc_0x3E4
  lis       r4, 0x804E
  subi      r0, r4, 0x55E8
  stw       r0, 0x0(r3)
  lhz       r0, 0x4(r27)
  sth       r0, 0x4(r3)
  lbz       r0, 0x6(r27)
  stb       r0, 0x6(r3)
  lbz       r0, 0x7(r27)
  stb       r0, 0x7(r3)
  lwz       r4, 0x8(r27)
  lwz       r0, 0xC(r27)
  stw       r4, 0x8(r3)
  stw       r0, 0xC(r3)
  lwz       r4, 0x10(r27)
  lwz       r0, 0x14(r27)
  stw       r4, 0x10(r3)
  stw       r0, 0x14(r3)
  lwz       r4, 0x18(r27)
  lwz       r0, 0x1C(r27)
  stw       r4, 0x18(r3)
  stw       r0, 0x1C(r3)
  lfs       f0, 0x20(r27)
  stfs      f0, 0x20(r3)
  lfs       f0, 0x24(r27)
  stfs      f0, 0x24(r3)
  lfs       f0, 0x28(r27)
  stfs      f0, 0x28(r3)
  lfs       f0, 0x2C(r27)
  stfs      f0, 0x2C(r3)
  lfs       f0, 0x30(r27)
  stfs      f0, 0x30(r3)
  lfs       f0, 0x34(r27)
  stfs      f0, 0x34(r3)

.loc_0x3E4:
  mr        r5, r3

.loc_0x3E8:
  lwz       r12, 0x0(r26)
  mr        r3, r26
  lbz       r4, 0x8(r1)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  cmplwi    r30, 0
  mr        r25, r3
  bne-      .loc_0x420
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4A1
  crclr     6, 0x6
  bl        -0x30B87C

.loc_0x420:
  mr        r3, r25
  mr        r4, r30
  bl        0xB9D0
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x45C
  cmplwi    r28, 0
  bne-      .loc_0x450
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4A7
  crclr     6, 0x6
  bl        -0x30B8AC

.loc_0x450:
  mr        r3, r25
  mr        r4, r28
  bl        0xB9A0

.loc_0x45C:
  mr        r3, r26
  mr        r4, r27
  mr        r5, r25
  bl        0x2B4
  cmplwi    r25, 0
  bne-      .loc_0x488
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4BE
  crclr     6, 0x6
  bl        -0x30B8E4

.loc_0x488:
  lwz       r3, 0x4(r26)
  mr        r4, r25
  bl        0xB7E4
  mr        r3, r25
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80335F4C
 * Size:	000098
 */
void PSGame::PikSceneMgr::newBgmSeq( (char const *, JAInter::SoundInfo &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r3, 0x6C
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  bl        -0x3120CC
  mr.       r31, r3
  beq-      .loc_0x40
  mr        r4, r29
  mr        r5, r30
  bl        -0x3F40
  mr        r31, r3

.loc_0x40:
  cmplwi    r31, 0
  bne-      .loc_0x64
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x6E8
  li        r4, 0x4C7
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30B96C

.loc_0x64:
  mr        r3, r31
  lwz       r12, 0x10(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
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
 * Address:	80335FE4
 * Size:	000088
 */
void PSGame::PikSceneMgr::newStreamBgm( (unsigned long, JAInter::SoundInfo &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x74
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r4
  stw       r0, 0x0(r5)
  bl        -0x312168
  mr.       r0, r3
  beq-      .loc_0x44
  mr        r4, r30
  mr        r5, r31
  bl        -0x3E08
  mr        r0, r3

.loc_0x44:
  cmplwi    r0, 0
  mr        r31, r0
  bne-      .loc_0x6C
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x6E8
  li        r4, 0x4D2
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30BA0C

.loc_0x6C:
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
 * Address:	8033606C
 * Size:	000150
 */
void PSGame::PikSceneMgr::initBossBgm( (PSGame::SceneInfo &, unsigned char *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  subi      r31, r4, 0x6E8
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r3
  lwz       r6, 0x284(r31)
  lwz       r5, 0x288(r31)
  lwz       r4, 0x28C(r31)
  lwz       r0, 0x290(r31)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x8C
  mr        r3, r29
  addi      r4, r31, 0x1B8
  lwz       r12, 0x0(r29)
  addi      r5, r1, 0x8
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x23
  stb       r0, 0x0(r30)
  mr        r30, r3
  b         .loc_0xAC

.loc_0x8C:
  mr        r3, r29
  addi      r4, r31, 0x1AC
  lwz       r12, 0x0(r29)
  addi      r5, r1, 0x8
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3

.loc_0xAC:
  cmplwi    r30, 0
  bne-      .loc_0xC8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4F0
  crclr     6, 0x6
  bl        -0x30BAF0

.loc_0xC8:
  lbz       r0, 0xB4(r30)
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0xE8
  lwz       r0, 0x70(r30)
  cmplwi    r0, 0
  beq-      .loc_0xE8
  li        r3, 0x1

.loc_0xE8:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x104
  addi      r5, r31, 0xC
  subi      r3, r2, 0x224
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x30BB2C

.loc_0x104:
  lwz       r3, 0x70(r30)
  li        r0, 0x3C
  sth       r0, 0x3E(r3)
  lbz       r0, 0x14(r1)
  cmplwi    r0, 0x7F
  ble-      .loc_0x130
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4F3
  crclr     6, 0x6
  bl        -0x30BB58

.loc_0x130:
  lwz       r0, 0x34(r1)
  mr        r3, r30
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
 * Address:	803361BC
 * Size:	000400
 */
void PSGame::PikSceneMgr::initAdditionalBgm( (PSGame::SceneInfo &, PSSystem::Scene *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r6, 0x8049
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  subi      r31, r6, 0x6E8
  mr        r29, r4
  mr        r27, r3
  mr        r30, r5
  lwz       r6, 0x294(r31)
  lwz       r4, 0x298(r31)
  lwz       r3, 0x29C(r31)
  lwz       r0, 0x2A0(r31)
  stw       r6, 0x8(r1)
  stw       r4, 0xC(r1)
  stw       r3, 0x10(r1)
  stw       r0, 0x14(r1)
  lbz       r0, 0x6(r29)
  cmpwi     r0, 0x8
  beq-      .loc_0x6C
  bge-      .loc_0x60
  cmpwi     r0, 0x6
  beq-      .loc_0x244
  b         .loc_0x300

.loc_0x60:
  cmpwi     r0, 0x14
  beq-      .loc_0x1C8
  b         .loc_0x300

.loc_0x6C:
  li        r0, 0
  li        r3, 0x74
  stw       r0, 0x8(r1)
  bl        -0x312390
  mr.       r28, r3
  beq-      .loc_0x98
  lis       r4, 0xC001
  addi      r5, r1, 0x8
  addi      r4, r4, 0x1011
  bl        -0x4034
  mr        r28, r3

.loc_0x98:
  cmplwi    r28, 0
  bne-      .loc_0xB4
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4D2
  crclr     6, 0x6
  bl        -0x30BC2C

.loc_0xB4:
  cmplwi    r28, 0
  bne-      .loc_0xD0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x50A
  crclr     6, 0x6
  bl        -0x30BC48

.loc_0xD0:
  mr        r3, r30
  mr        r4, r28
  bl        0xB604
  li        r3, 0x6C
  bl        -0x3123F8
  mr.       r28, r3
  beq-      .loc_0xFC
  addi      r4, r31, 0x2A4
  addi      r5, r1, 0x8
  bl        -0x426C
  mr        r28, r3

.loc_0xFC:
  cmplwi    r28, 0
  bne-      .loc_0x118
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30BC90

.loc_0x118:
  mr        r3, r28
  lwz       r12, 0x10(r28)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r28, 0
  bne-      .loc_0x148
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x510
  crclr     6, 0x6
  bl        -0x30BCC0

.loc_0x148:
  mr        r3, r30
  mr        r4, r28
  bl        0xB58C
  li        r0, 0
  li        r3, 0x74
  stw       r0, 0x8(r1)
  bl        -0x312478
  mr.       r28, r3
  beq-      .loc_0x180
  lis       r4, 0xC001
  addi      r5, r1, 0x8
  addi      r4, r4, 0x1010
  bl        -0x411C
  mr        r28, r3

.loc_0x180:
  cmplwi    r28, 0
  bne-      .loc_0x19C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4D2
  crclr     6, 0x6
  bl        -0x30BD14

.loc_0x19C:
  cmplwi    r28, 0
  bne-      .loc_0x1B8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x516
  crclr     6, 0x6
  bl        -0x30BD30

.loc_0x1B8:
  mr        r3, r30
  mr        r4, r28
  bl        0xB51C
  b         .loc_0x300

.loc_0x1C8:
  li        r3, 0x6C
  bl        -0x3124E4
  mr.       r28, r3
  beq-      .loc_0x1E8
  addi      r4, r31, 0x2B0
  addi      r5, r1, 0x8
  bl        -0x4358
  mr        r28, r3

.loc_0x1E8:
  cmplwi    r28, 0
  bne-      .loc_0x204
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30BD7C

.loc_0x204:
  mr        r3, r28
  lwz       r12, 0x10(r28)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r28, 0
  bne-      .loc_0x234
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x526
  crclr     6, 0x6
  bl        -0x30BDAC

.loc_0x234:
  mr        r3, r30
  mr        r4, r28
  bl        0xB4A0
  b         .loc_0x300

.loc_0x244:
  li        r3, 0x4
  li        r4, 0x23
  li        r0, 0x1F00
  stb       r3, 0xD(r1)
  addi      r3, r30, 0x10
  stb       r4, 0x14(r1)
  stw       r0, 0x8(r1)
  lbz       r28, 0xC(r27)
  bl        -0x25C4
  mr        r9, r3
  mr        r3, r27
  lwz       r12, 0x0(r27)
  mr        r7, r28
  mr        r8, r29
  addi      r4, r31, 0x2C8
  lwz       r12, 0x1C(r12)
  addi      r5, r31, 0x2D8
  addi      r6, r1, 0x8
  lwz       r9, 0x6C(r9)
  mtctr     r12
  bctrl     
  mr        r0, r3
  mr        r3, r30
  mr        r28, r0
  mr        r4, r28
  bl        0xB434
  lwz       r0, 0x8(r30)
  cmplwi    r0, 0
  bne-      .loc_0x2CC
  addi      r3, r31, 0x254
  addi      r5, r31, 0xC
  li        r4, 0x4A
  crclr     6, 0x6
  bl        -0x30BE44

.loc_0x2CC:
  lwz       r5, 0x8(r30)
  li        r0, 0x5
  addi      r3, r30, 0x10
  li        r4, 0x2
  stb       r0, 0x5(r5)
  bl        -0x2600
  cmplw     r28, r3
  beq-      .loc_0x300
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x53E
  crclr     6, 0x6
  bl        -0x30BE78

.loc_0x300:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3EC
  lbz       r0, 0x6(r29)
  cmplwi    r0, 0x3
  bne-      .loc_0x3EC
  lwz       r3, 0x44(r29)
  subis     r0, r3, 0x7465
  cmplwi    r0, 0x7374
  bne-      .loc_0x340
  li        r0, 0
  b         .loc_0x34C

.loc_0x340:
  lbz       r3, 0x47(r29)
  subi      r0, r3, 0x31
  rlwinm    r0,r0,0,24,31

.loc_0x34C:
  rlwinm    r0,r0,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x3EC
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3EC
  li        r3, 0x6C
  bl        -0x312690
  mr.       r28, r3
  beq-      .loc_0x394
  addi      r4, r31, 0x2E8
  addi      r5, r1, 0x8
  bl        -0x4504
  mr        r28, r3

.loc_0x394:
  cmplwi    r28, 0
  bne-      .loc_0x3B0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30BF28

.loc_0x3B0:
  mr        r3, r28
  lwz       r12, 0x10(r28)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r28, 0
  bne-      .loc_0x3E0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x549
  crclr     6, 0x6
  bl        -0x30BF58

.loc_0x3E0:
  mr        r3, r30
  mr        r4, r28
  bl        0xB2F4

.loc_0x3EC:
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803365BC
 * Size:	000D24
 */
void PSGame::PikSceneMgr::initMainBgm( (PSGame::SceneInfo &, unsigned char *))
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stmw      r24, 0x50(r1)
  mr.       r30, r5
  lis       r5, 0x8049
  mr        r27, r3
  mr        r28, r4
  subi      r31, r5, 0x6E8
  bne-      .loc_0x3C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x562
  crclr     6, 0x6
  bl        -0x30BFB4

.loc_0x3C:
  lbz       r29, 0xC(r27)
  li        r0, 0x1
  lwz       r3, 0x2FC(r31)
  cmplwi    r0, 0x5
  lwz       r5, 0x2F8(r31)
  li        r24, 0
  stw       r3, 0x3C(r1)
  lwz       r4, 0x300(r31)
  lwz       r3, 0x304(r31)
  stw       r5, 0x38(r1)
  stw       r4, 0x40(r1)
  stw       r3, 0x44(r1)
  stb       r0, 0x3D(r1)
  blt-      .loc_0x88
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x571
  crclr     6, 0x6
  bl        -0x30C000

.loc_0x88:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x77C
  lbz       r0, 0x6(r28)
  cmpwi     r0, 0x7
  beq-      .loc_0x2E8
  bge-      .loc_0x310
  cmpwi     r0, 0x6
  bge-      .loc_0xC0
  b         .loc_0x310

.loc_0xC0:
  lwz       r0, -0x67AC(r13)
  addi      r24, r31, 0x308
  cmplwi    r0, 0
  beq-      .loc_0xE4
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x7E
  crclr     6, 0x6
  bl        -0x30C05C

.loc_0xE4:
  lwz       r0, -0x67AC(r13)
  cmplwi    r0, 0
  bne-      .loc_0x150
  lwz       r4, -0x77D4(r13)
  li        r3, 0x28
  li        r5, -0x4
  bl        -0x312778
  mr.       r25, r3
  beq-      .loc_0x14C
  bl        0x22BC
  lis       r3, 0x804E
  addic.    r4, r25, 0x1C
  subi      r0, r3, 0x5578
  stw       r0, 0x1C(r25)
  beq-      .loc_0x124
  subi      r4, r4, 0x1C

.loc_0x124:
  lis       r3, 0x804E
  stw       r4, -0x67AC(r13)
  subi      r4, r3, 0x5594
  li        r3, 0
  stw       r4, 0x0(r25)
  addi      r4, r4, 0x10
  li        r0, 0xFF
  stw       r4, 0x1C(r25)
  stw       r3, 0x24(r25)
  stb       r0, 0x20(r25)

.loc_0x14C:
  stw       r25, -0x67AC(r13)

.loc_0x150:
  lwz       r0, -0x67AC(r13)
  cmplwi    r0, 0
  bne-      .loc_0x170
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x81
  crclr     6, 0x6
  bl        -0x30C0E8

.loc_0x170:
  lwz       r0, -0x67AC(r13)
  cmplwi    r0, 0
  bne-      .loc_0x190
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x30C108

.loc_0x190:
  lwz       r25, -0x67AC(r13)
  mr        r4, r24
  li        r5, 0x2
  mr        r3, r25
  bl        0x22D8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1C0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x589
  crclr     6, 0x6
  bl        -0x30C138

.loc_0x1C0:
  lbz       r0, -0x67B0(r13)
  lbz       r26, 0x40(r28)
  cmplwi    r0, 0
  lbz       r24, 0x49(r28)
  beq-      .loc_0x200
  lbz       r0, 0x20(r25)
  cmplw     r24, r0
  bge-      .loc_0x1F4
  lwz       r3, 0x24(r25)
  rlwinm    r0,r24,3,21,28
  lbzx      r0, r3, r0
  cmplw     r26, r0
  blt-      .loc_0x200

.loc_0x1F4:
  lwz       r3, 0x24(r25)
  lwz       r4, 0x4(r3)
  b         .loc_0x25C

.loc_0x200:
  lbz       r0, 0x20(r25)
  cmplw     r24, r0
  blt-      .loc_0x220
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0xAF
  crclr     6, 0x6
  bl        -0x30C198

.loc_0x220:
  lwz       r3, 0x24(r25)
  rlwinm    r24,r24,3,21,28
  lbzx      r0, r3, r24
  cmplw     r26, r0
  blt-      .loc_0x248
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0xB0
  crclr     6, 0x6
  bl        -0x30C1C0

.loc_0x248:
  lwz       r3, 0x24(r25)
  rlwinm    r0,r26,5,19,26
  add       r3, r3, r24
  lwz       r3, 0x4(r3)
  add       r4, r3, r0

.loc_0x25C:
  stw       r4, 0x18(r1)
  mr        r3, r25
  addi      r5, r1, 0x1C
  addi      r6, r1, 0x14
  bl        -0x2304
  lwz       r0, 0x1C(r1)
  mr        r3, r27
  lwz       r5, 0x14(r1)
  mr        r7, r29
  stw       r0, 0x34(r1)
  mr        r8, r28
  lwz       r4, 0x18(r1)
  addi      r6, r1, 0x38
  lbz       r0, 0x34(r1)
  li        r9, 0
  stw       r5, 0x2C(r1)
  stb       r0, 0x0(r30)
  lwz       r12, 0x0(r27)
  stw       r4, 0x30(r1)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x67AC(r13)
  mr        r24, r3
  cmplwi    r0, 0
  beq-      .loc_0x2DC
  mr        r3, r0
  li        r4, 0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x2DC:
  li        r0, 0
  stw       r0, -0x67AC(r13)
  b         .loc_0x310

.loc_0x2E8:
  mr        r3, r27
  addi      r4, r31, 0x32C
  lwz       r12, 0x0(r27)
  addi      r5, r1, 0x38
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x6
  mr        r24, r3
  stb       r0, 0x0(r30)

.loc_0x310:
  cmplwi    r24, 0
  bne-      .loc_0x3A0
  lwz       r0, 0x3C(r28)
  cmpwi     r0, 0x2
  beq-      .loc_0x368
  bge-      .loc_0x3A0
  cmpwi     r0, 0x1
  bge-      .loc_0x334
  b         .loc_0x3A0

.loc_0x334:
  mr        r3, r27
  mr        r7, r29
  lwz       r12, 0x0(r27)
  mr        r8, r28
  addi      r4, r31, 0x33C
  addi      r5, r31, 0x80
  lwz       r12, 0x1C(r12)
  addi      r6, r1, 0x38
  li        r9, 0
  mtctr     r12
  bctrl     
  mr        r24, r3
  b         .loc_0x3A0

.loc_0x368:
  mr        r3, r27
  mr        r7, r29
  lwz       r12, 0x0(r27)
  mr        r8, r28
  addi      r4, r31, 0x350
  addi      r5, r31, 0xFC
  lwz       r12, 0x1C(r12)
  addi      r6, r1, 0x38
  li        r9, 0
  mtctr     r12
  bctrl     
  li        r0, 0x1C
  mr        r24, r3
  stb       r0, 0x0(r30)

.loc_0x3A0:
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x488
  lbz       r0, 0x6(r28)
  cmplwi    r0, 0x3
  bne-      .loc_0x488
  lwz       r3, 0x44(r28)
  subis     r0, r3, 0x7465
  cmplwi    r0, 0x7374
  bne-      .loc_0x3E0
  li        r0, 0
  b         .loc_0x3EC

.loc_0x3E0:
  lbz       r3, 0x47(r28)
  subi      r0, r3, 0x31
  rlwinm    r0,r0,0,24,31

.loc_0x3EC:
  rlwinm    r0,r0,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x488
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x488
  li        r3, 0x6C
  bl        -0x312B30
  mr.       r24, r3
  beq-      .loc_0x434
  addi      r4, r31, 0x360
  addi      r5, r1, 0x38
  bl        -0x49A4
  mr        r24, r3

.loc_0x434:
  cmplwi    r24, 0
  bne-      .loc_0x450
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30C3C8

.loc_0x450:
  mr        r3, r24
  lwz       r12, 0x10(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmplwi    r24, 0
  bne-      .loc_0x480
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x61E
  crclr     6, 0x6
  bl        -0x30C3F8

.loc_0x480:
  li        r0, 0x30
  stb       r0, 0x0(r30)

.loc_0x488:
  cmplwi    r24, 0
  bne-      .loc_0xCD0
  lwz       r0, 0x3C(r28)
  cmpwi     r0, 0
  beq-      .loc_0x4B0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x626
  crclr     6, 0x6
  bl        -0x30C428

.loc_0x4B0:
  lbz       r0, 0x6(r28)
  li        r25, 0
  cmplwi    r0, 0x14
  bgt-      .loc_0x4FC
  lis       r3, 0x804E
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x568C
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  addi      r25, r31, 0x370
  b         .loc_0x4FC
  addi      r25, r31, 0x394
  b         .loc_0x4FC
  addi      r25, r31, 0x3B4
  b         .loc_0x4FC
  addi      r25, r31, 0x3D8
  b         .loc_0x4FC
  addi      r25, r31, 0x3F8

.loc_0x4FC:
  lwz       r0, -0x67AC(r13)
  cmplwi    r0, 0
  beq-      .loc_0x51C
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x7E
  crclr     6, 0x6
  bl        -0x30C494

.loc_0x51C:
  lwz       r0, -0x67AC(r13)
  cmplwi    r0, 0
  bne-      .loc_0x588
  lwz       r4, -0x77D4(r13)
  li        r3, 0x28
  li        r5, -0x4
  bl        -0x312BB0
  mr.       r24, r3
  beq-      .loc_0x584
  bl        0x1E84
  lis       r3, 0x804E
  addic.    r4, r24, 0x1C
  subi      r0, r3, 0x5578
  stw       r0, 0x1C(r24)
  beq-      .loc_0x55C
  subi      r4, r4, 0x1C

.loc_0x55C:
  lis       r3, 0x804E
  stw       r4, -0x67AC(r13)
  subi      r4, r3, 0x5594
  li        r3, 0
  stw       r4, 0x0(r24)
  addi      r4, r4, 0x10
  li        r0, 0xFF
  stw       r4, 0x1C(r24)
  stw       r3, 0x24(r24)
  stb       r0, 0x20(r24)

.loc_0x584:
  stw       r24, -0x67AC(r13)

.loc_0x588:
  lwz       r0, -0x67AC(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5A8
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x81
  crclr     6, 0x6
  bl        -0x30C520

.loc_0x5A8:
  lwz       r0, -0x67AC(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5C8
  addi      r3, r31, 0x178
  addi      r5, r31, 0xC
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x30C540

.loc_0x5C8:
  lwz       r24, -0x67AC(r13)
  mr        r4, r25
  li        r5, 0x2
  mr        r3, r24
  bl        0x1EA0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5F8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x641
  crclr     6, 0x6
  bl        -0x30C570

.loc_0x5F8:
  lwz       r4, 0x44(r28)
  addi      r3, r31, 0x41C
  subis     r0, r4, 0x7465
  cmplwi    r0, 0x7374
  bne-      .loc_0x614
  li        r0, 0
  b         .loc_0x620

.loc_0x614:
  lbz       r4, 0x47(r28)
  subi      r0, r4, 0x31
  rlwinm    r0,r0,0,24,31

.loc_0x620:
  rlwinm    r4,r0,0,24,31
  crclr     6, 0x6
  bl        -0x2494F8
  lwz       r3, 0x44(r28)
  lbz       r26, 0x40(r28)
  subis     r0, r3, 0x7465
  cmplwi    r0, 0x7374
  bne-      .loc_0x648
  li        r25, 0
  b         .loc_0x654

.loc_0x648:
  lbz       r3, 0x47(r28)
  subi      r0, r3, 0x31
  rlwinm    r25,r0,0,24,31

.loc_0x654:
  lbz       r0, -0x67B0(r13)
  cmplwi    r0, 0
  beq-      .loc_0x690
  lbz       r0, 0x20(r24)
  rlwinm    r3,r25,0,24,31
  cmplw     r3, r0
  bge-      .loc_0x684
  lwz       r3, 0x24(r24)
  rlwinm    r0,r25,3,21,28
  lbzx      r0, r3, r0
  cmplw     r26, r0
  blt-      .loc_0x690

.loc_0x684:
  lwz       r3, 0x24(r24)
  lwz       r4, 0x4(r3)
  b         .loc_0x6F0

.loc_0x690:
  lbz       r0, 0x20(r24)
  rlwinm    r3,r25,0,24,31
  cmplw     r3, r0
  blt-      .loc_0x6B4
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0xAF
  crclr     6, 0x6
  bl        -0x30C62C

.loc_0x6B4:
  lwz       r3, 0x24(r24)
  rlwinm    r25,r25,3,21,28
  lbzx      r0, r3, r25
  cmplw     r26, r0
  blt-      .loc_0x6DC
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0xB0
  crclr     6, 0x6
  bl        -0x30C654

.loc_0x6DC:
  lwz       r3, 0x24(r24)
  rlwinm    r0,r26,5,19,26
  add       r3, r3, r25
  lwz       r3, 0x4(r3)
  add       r4, r3, r0

.loc_0x6F0:
  stw       r4, 0xC(r1)
  mr        r3, r24
  addi      r5, r1, 0x10
  addi      r6, r1, 0x8
  bl        -0x2798
  lwz       r0, 0x10(r1)
  mr        r3, r27
  lwz       r5, 0x8(r1)
  mr        r7, r29
  stw       r0, 0x28(r1)
  mr        r8, r28
  lwz       r4, 0xC(r1)
  addi      r6, r1, 0x38
  lbz       r0, 0x28(r1)
  li        r9, 0
  stw       r5, 0x20(r1)
  stb       r0, 0x0(r30)
  lwz       r12, 0x0(r27)
  stw       r4, 0x24(r1)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x67AC(r13)
  mr        r24, r3
  cmplwi    r0, 0
  beq-      .loc_0x770
  mr        r3, r0
  li        r4, 0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x770:
  li        r0, 0
  stw       r0, -0x67AC(r13)
  b         .loc_0xCD0

.loc_0x77C:
  lbz       r0, 0x6(r28)
  cmplwi    r0, 0x14
  bgt-      .loc_0xCBC
  lis       r3, 0x804E
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x56E0
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  mr        r3, r27
  addi      r4, r31, 0x428
  lwz       r12, 0x0(r27)
  addi      r5, r1, 0x38
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0xF
  mr        r24, r3
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  mr        r3, r27
  addi      r4, r31, 0x438
  lwz       r12, 0x0(r27)
  addi      r5, r1, 0x38
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x2
  mr        r24, r3
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  mr        r3, r27
  addi      r4, r31, 0x444
  lwz       r12, 0x0(r27)
  addi      r5, r1, 0x38
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x3
  mr.       r24, r3
  stb       r0, 0x0(r30)
  bne-      .loc_0x838
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x668
  crclr     6, 0x6
  bl        -0x30C7B0

.loc_0x838:
  lbz       r0, 0xB4(r24)
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0x858
  lwz       r0, 0x70(r24)
  cmplwi    r0, 0
  beq-      .loc_0x858
  li        r3, 0x1

.loc_0x858:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x874
  addi      r5, r31, 0xC
  subi      r3, r2, 0x224
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x30C7EC

.loc_0x874:
  lwz       r3, 0x70(r24)
  li        r0, 0x1E
  sth       r0, 0x3E(r3)
  b         .loc_0xCD0
  mr        r3, r27
  addi      r4, r31, 0x454
  lwz       r12, 0x0(r27)
  addi      r5, r1, 0x38
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x4
  mr.       r24, r3
  stb       r0, 0x0(r30)
  bne-      .loc_0x8C4
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x672
  crclr     6, 0x6
  bl        -0x30C83C

.loc_0x8C4:
  lbz       r0, 0xB4(r24)
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0x8E4
  lwz       r0, 0x70(r24)
  cmplwi    r0, 0
  beq-      .loc_0x8E4
  li        r3, 0x1

.loc_0x8E4:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x900
  addi      r5, r31, 0xC
  subi      r3, r2, 0x224
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x30C878

.loc_0x900:
  lwz       r3, 0x70(r24)
  li        r0, 0x1E
  sth       r0, 0x3E(r3)
  b         .loc_0xCD0
  li        r0, 0
  li        r3, 0x74
  stw       r0, 0x38(r1)
  bl        -0x313034
  mr.       r24, r3
  beq-      .loc_0x93C
  lis       r4, 0xC001
  addi      r5, r1, 0x38
  addi      r4, r4, 0x1000
  bl        -0x4CD8
  mr        r24, r3

.loc_0x93C:
  cmplwi    r24, 0
  bne-      .loc_0x958
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4D2
  crclr     6, 0x6
  bl        -0x30C8D0

.loc_0x958:
  li        r0, 0x15
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  li        r0, 0
  li        r3, 0x74
  stw       r0, 0x38(r1)
  bl        -0x313088
  mr.       r24, r3
  beq-      .loc_0x990
  lis       r4, 0xC001
  addi      r5, r1, 0x38
  addi      r4, r4, 0x1013
  bl        -0x4D2C
  mr        r24, r3

.loc_0x990:
  cmplwi    r24, 0
  bne-      .loc_0xCD0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4D2
  crclr     6, 0x6
  bl        -0x30C924
  b         .loc_0xCD0
  li        r0, 0
  li        r3, 0x74
  stw       r0, 0x38(r1)
  bl        -0x3130D4
  mr.       r24, r3
  beq-      .loc_0x9DC
  lis       r4, 0xC001
  addi      r5, r1, 0x38
  addi      r4, r4, 0x1014
  bl        -0x4D78
  mr        r24, r3

.loc_0x9DC:
  cmplwi    r24, 0
  bne-      .loc_0xCD0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4D2
  crclr     6, 0x6
  bl        -0x30C970
  b         .loc_0xCD0
  li        r0, 0
  li        r3, 0x74
  stw       r0, 0x38(r1)
  bl        -0x313120
  mr.       r24, r3
  beq-      .loc_0xA28
  lis       r4, 0xC001
  addi      r5, r1, 0x38
  addi      r4, r4, 0x101E
  bl        -0x4DC4
  mr        r24, r3

.loc_0xA28:
  cmplwi    r24, 0
  bne-      .loc_0xCD0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4D2
  crclr     6, 0x6
  bl        -0x30C9BC
  b         .loc_0xCD0
  li        r3, 0x6C
  bl        -0x313164
  mr.       r24, r3
  beq-      .loc_0xA68
  addi      r4, r31, 0x460
  addi      r5, r1, 0x38
  bl        -0x4FD8
  mr        r24, r3

.loc_0xA68:
  cmplwi    r24, 0
  bne-      .loc_0xA84
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30C9FC

.loc_0xA84:
  mr        r3, r24
  lwz       r12, 0x10(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x10
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  li        r3, 0x6C
  bl        -0x3131C0
  mr.       r24, r3
  beq-      .loc_0xAC4
  addi      r4, r31, 0x470
  addi      r5, r1, 0x38
  bl        -0x5034
  mr        r24, r3

.loc_0xAC4:
  cmplwi    r24, 0
  bne-      .loc_0xAE0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30CA58

.loc_0xAE0:
  mr        r3, r24
  lwz       r12, 0x10(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x10
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  li        r3, 0x6C
  bl        -0x31321C
  mr.       r24, r3
  beq-      .loc_0xB20
  addi      r4, r31, 0x484
  addi      r5, r1, 0x38
  bl        -0x5090
  mr        r24, r3

.loc_0xB20:
  cmplwi    r24, 0
  bne-      .loc_0xB3C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30CAB4

.loc_0xB3C:
  mr        r3, r24
  lwz       r12, 0x10(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x14
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  li        r3, 0x6C
  bl        -0x313278
  mr.       r24, r3
  beq-      .loc_0xB7C
  addi      r4, r31, 0x490
  addi      r5, r1, 0x38
  bl        -0x50EC
  mr        r24, r3

.loc_0xB7C:
  cmplwi    r24, 0
  bne-      .loc_0xB98
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30CB10

.loc_0xB98:
  mr        r3, r24
  lwz       r12, 0x10(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x24
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  li        r3, 0x6C
  bl        -0x3132D4
  mr.       r24, r3
  beq-      .loc_0xBD8
  addi      r4, r31, 0x49C
  addi      r5, r1, 0x38
  bl        -0x5148
  mr        r24, r3

.loc_0xBD8:
  cmplwi    r24, 0
  bne-      .loc_0xBF4
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30CB6C

.loc_0xBF4:
  mr        r3, r24
  lwz       r12, 0x10(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x13
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  li        r3, 0x6C
  bl        -0x313330
  mr.       r24, r3
  beq-      .loc_0xC34
  addi      r4, r31, 0x4AC
  addi      r5, r1, 0x38
  bl        -0x51A4
  mr        r24, r3

.loc_0xC34:
  cmplwi    r24, 0
  bne-      .loc_0xC50
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4C7
  crclr     6, 0x6
  bl        -0x30CBC8

.loc_0xC50:
  mr        r3, r24
  lwz       r12, 0x10(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x13
  stb       r0, 0x0(r30)
  b         .loc_0xCD0
  li        r0, 0
  li        r3, 0x74
  stw       r0, 0x38(r1)
  bl        -0x313394
  mr.       r24, r3
  beq-      .loc_0xC9C
  lis       r4, 0xC001
  addi      r5, r1, 0x38
  addi      r4, r4, 0x100F
  bl        -0x5038
  mr        r24, r3

.loc_0xC9C:
  cmplwi    r24, 0
  bne-      .loc_0xCD0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x4D2
  crclr     6, 0x6
  bl        -0x30CC30
  b         .loc_0xCD0

.loc_0xCBC:
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x6D1
  crclr     6, 0x6
  bl        -0x30CC48

.loc_0xCD0:
  cmplwi    r24, 0
  bne-      .loc_0xCEC
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x6D5
  crclr     6, 0x6
  bl        -0x30CC64

.loc_0xCEC:
  lbz       r0, 0x44(r1)
  cmplwi    r0, 0x7F
  ble-      .loc_0xD0C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x6D6
  crclr     6, 0x6
  bl        -0x30CC84

.loc_0xD0C:
  mr        r3, r24
  lmw       r24, 0x50(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A8
 */
void PSGame::ConductorSelector::getConductorFile( (char const *, PSGame::CaveFloorInfo &, unsigned char *, char *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803372E0
 * Size:	00094C
 */
void PSGame::seqCpuSync(JASTrack *, unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  rlwinm    r30,r4,0,16,31
  cmpwi     r30, 0x3001
  mr        r26, r4
  mr        r28, r3
  subi      r31, r5, 0x6E8
  beq-      .loc_0xE0
  bge-      .loc_0x54
  cmpwi     r30, 0x1
  beq-      .loc_0x380
  bge-      .loc_0x48
  cmpwi     r30, 0
  bge-      .loc_0x248
  b         .loc_0x388

.loc_0x48:
  cmpwi     r30, 0x3000
  bge-      .loc_0x70
  b         .loc_0x388

.loc_0x54:
  cmpwi     r30, 0x5000
  beq-      .loc_0x238
  bge-      .loc_0x388
  cmpwi     r30, 0x3003
  beq-      .loc_0x1C4
  bge-      .loc_0x388
  b         .loc_0x150

.loc_0x70:
  lwz       r0, -0x7AC0(r13)
  cmplwi    r0, 0
  bne-      .loc_0x90
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CD2C

.loc_0x90:
  lwz       r0, -0x7AC0(r13)
  cmplwi    r0, 0
  bne-      .loc_0xB0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x753
  crclr     6, 0x6
  bl        -0x30CD4C

.loc_0xB0:
  lwz       r0, -0x7AC0(r13)
  cmplwi    r0, 0
  bne-      .loc_0xD0
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CD6C

.loc_0xD0:
  lwz       r3, -0x7AC0(r13)
  mr        r4, r28
  bl        0x8448
  b         .loc_0x938

.loc_0xE0:
  lwz       r0, -0x7AC0(r13)
  cmplwi    r0, 0
  bne-      .loc_0x100
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CD9C

.loc_0x100:
  lwz       r0, -0x7AC0(r13)
  cmplwi    r0, 0
  bne-      .loc_0x120
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x757
  crclr     6, 0x6
  bl        -0x30CDBC

.loc_0x120:
  lwz       r0, -0x7AC0(r13)
  cmplwi    r0, 0
  bne-      .loc_0x140
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CDDC

.loc_0x140:
  lwz       r3, -0x7AC0(r13)
  mr        r4, r28
  bl        0x839C
  b         .loc_0x938

.loc_0x150:
  subi      r27, r13, 0x7AC0
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x174
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CE10

.loc_0x174:
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x194
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x75B
  crclr     6, 0x6
  bl        -0x30CE30

.loc_0x194:
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x1B4
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CE50

.loc_0x1B4:
  lwz       r3, 0x4(r27)
  mr        r4, r28
  bl        0x8364
  b         .loc_0x938

.loc_0x1C4:
  subi      r27, r13, 0x7AC0
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x1E8
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CE84

.loc_0x1E8:
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x208
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x75F
  crclr     6, 0x6
  bl        -0x30CEA4

.loc_0x208:
  lwz       r0, 0x4(r27)
  cmplwi    r0, 0
  bne-      .loc_0x228
  addi      r5, r31, 0xC
  subi      r3, r2, 0x21C
  li        r4, 0x1C
  crclr     6, 0x6
  bl        -0x30CEC4

.loc_0x228:
  lwz       r3, 0x4(r27)
  mr        r4, r28
  bl        0x82B4
  b         .loc_0x938

.loc_0x238:
  lwz       r3, -0x6B70(r13)
  lbz       r0, 0x2F(r3)
  rlwinm    r3,r0,0,31,31
  b         .loc_0x938

.loc_0x248:
  rlwinm    r30,r30,0,31,31
  li        r25, 0
  li        r29, 0
  b         .loc_0x36C

.loc_0x258:
  mr        r3, r29
  bl        -0x283D14
  lwz       r0, 0x48(r3)
  cmplwi    r0, 0
  beq-      .loc_0x368
  mr        r3, r29
  bl        -0x283D28
  lwz       r4, 0x48(r3)
  mr        r3, r29
  addi      r27, r4, 0x30C
  bl        -0x283D38
  lwz       r3, 0x48(r3)
  lwz       r0, 0x20(r3)
  rlwinm.   r0,r0,0,20,20
  beq-      .loc_0x2A0
  lwz       r3, 0x2F8(r28)
  lwz       r26, 0x2F8(r3)
  b         .loc_0x2A4

.loc_0x2A0:
  lwz       r26, 0x2F8(r28)

.loc_0x2A4:
  cmplw     r27, r26
  bne-      .loc_0x368
  lwz       r3, 0x348(r28)
  bl        -0x28A1C4
  lwz       r0, -0x6780(r13)
  mr        r25, r3
  cmplwi    r0, 0
  bne-      .loc_0x2D8
  addi      r3, r31, 0x190
  addi      r5, r31, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x30CF74

.loc_0x2D8:
  lwz       r27, -0x6780(r13)
  cmplwi    r27, 0
  bne-      .loc_0x2F8
  addi      r3, r31, 0x190
  addi      r5, r31, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x30CF94

.loc_0x2F8:
  mr        r3, r27
  mr        r4, r28
  bl        0xA518
  mr.       r27, r3
  bne-      .loc_0x320
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x783
  crclr     6, 0x6
  bl        -0x30CFBC

.loc_0x320:
  mr        r3, r29
  bl        -0x283DDC
  lwz       r0, 0x18(r27)
  mr        r4, r26
  mr        r5, r25
  mr        r7, r30
  rlwinm    r6,r0,24,16,31
  bl        -0x27E4B8
  mr        r3, r29
  bl        -0x283DFC
  li        r0, 0x1
  lwz       r4, 0x4(r3)
  slw       r0, r0, r25
  li        r25, 0
  or        r0, r4, r0
  stw       r0, 0x4(r3)
  bl        -0x289B74
  mr        r29, r3

.loc_0x368:
  addi      r29, r29, 0x1

.loc_0x36C:
  bl        -0x289B80
  cmplw     r29, r3
  blt+      .loc_0x258
  mr        r3, r25
  b         .loc_0x938

.loc_0x380:
  bl        -0x28AB44
  b         .loc_0x938

.loc_0x388:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3A8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x79C
  crclr     6, 0x6
  bl        -0x30D044

.loc_0x3A8:
  lwz       r27, 0x348(r28)
  mr        r25, r28
  b         .loc_0x3B8

.loc_0x3B4:
  mr        r25, r0

.loc_0x3B8:
  lwz       r0, 0x2F8(r25)
  cmplwi    r0, 0
  bne+      .loc_0x3B4
  lwz       r3, -0x6780(r13)
  mr        r4, r25
  bl        0xA5A0
  mr.       r29, r3
  bne-      .loc_0x3EC
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x7A5
  crclr     6, 0x6
  bl        -0x30D088

.loc_0x3EC:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm.   r0,r0,1,31,31
  bne-      .loc_0x4A0
  cmpwi     r30, 0x900
  beq-      .loc_0x470
  bge-      .loc_0x444
  cmpwi     r30, 0x600
  beq-      .loc_0x490
  bge-      .loc_0x438
  cmpwi     r30, 0x300
  beq-      .loc_0x488
  b         .loc_0x498

.loc_0x438:
  cmpwi     r30, 0x800
  beq-      .loc_0x490
  b         .loc_0x498

.loc_0x444:
  cmpwi     r30, 0xD00
  beq-      .loc_0x480
  bge-      .loc_0x45C
  cmpwi     r30, 0xC00
  beq-      .loc_0x478
  b         .loc_0x498

.loc_0x45C:
  cmpwi     r30, 0x2E00
  beq-      .loc_0x468
  b         .loc_0x498

.loc_0x468:
  li        r3, 0x1E
  b         .loc_0x938

.loc_0x470:
  li        r3, 0x1
  b         .loc_0x938

.loc_0x478:
  li        r3, 0x4
  b         .loc_0x938

.loc_0x480:
  li        r3, 0x1
  b         .loc_0x938

.loc_0x488:
  li        r3, 0
  b         .loc_0x938

.loc_0x490:
  li        r3, 0xA
  b         .loc_0x938

.loc_0x498:
  li        r3, 0
  b         .loc_0x938

.loc_0x4A0:
  cmpwi     r30, 0xD00
  beq-      .loc_0x63C
  bge-      .loc_0x4DC
  cmpwi     r30, 0xB00
  beq-      .loc_0x680
  bge-      .loc_0x4D0
  cmpwi     r30, 0xA00
  beq-      .loc_0x5A8
  bge-      .loc_0x6BC
  cmpwi     r30, 0x900
  beq-      .loc_0x570
  b         .loc_0x6BC

.loc_0x4D0:
  cmpwi     r30, 0xC00
  beq-      .loc_0x5EC
  b         .loc_0x6BC

.loc_0x4DC:
  cmpwi     r30, 0x1F00
  beq-      .loc_0x520
  bge-      .loc_0x4F4
  cmpwi     r30, 0x1E00
  beq-      .loc_0x500
  b         .loc_0x6BC

.loc_0x4F4:
  cmpwi     r30, 0x2E00
  beq-      .loc_0x550
  b         .loc_0x6BC

.loc_0x500:
  mr        r3, r28
  li        r4, 0x12
  bl        0xB84
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x938

.loc_0x520:
  cmplwi    r0, 0
  bne-      .loc_0x530
  li        r3, 0
  b         .loc_0x938

.loc_0x530:
  mr        r3, r28
  li        r4, 0x12
  bl        0xB54
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x938

.loc_0x550:
  mr        r3, r28
  li        r4, 0x12
  bl        0xB34
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x938

.loc_0x570:
  mr        r3, r28
  li        r4, 0x14
  bl        0xB14
  mr.       r25, r3
  bne-      .loc_0x598
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x7EC
  crclr     6, 0x6
  bl        -0x30D234

.loc_0x598:
  mr        r3, r25
  mr        r4, r28
  bl        0x3674
  b         .loc_0x938

.loc_0x5A8:
  mr        r3, r28
  li        r4, 0x14
  bl        0xADC
  mr.       r29, r3
  bne-      .loc_0x5D0
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x7F4
  crclr     6, 0x6
  bl        -0x30D26C

.loc_0x5D0:
  lbz       r0, 0x2C0(r29)
  mr        r4, r28
  rlwinm    r0,r0,2,0,29
  add       r3, r29, r0
  lwz       r3, 0x2B8(r3)
  bl        0x3784
  b         .loc_0x938

.loc_0x5EC:
  mr        r3, r28
  li        r4, 0x14
  bl        0xA98
  mr.       r29, r3
  bne-      .loc_0x614
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x7FB
  crclr     6, 0x6
  bl        -0x30D2B0

.loc_0x614:
  lbz       r0, 0x2C0(r29)
  mr        r4, r28
  rlwinm    r0,r0,2,0,29
  add       r3, r29, r0
  lwz       r3, 0x2B8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x938

.loc_0x63C:
  mr        r3, r28
  li        r4, 0x14
  bl        0xA48
  mr.       r29, r3
  bne-      .loc_0x664
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x801
  crclr     6, 0x6
  bl        -0x30D300

.loc_0x664:
  lbz       r0, 0x2C0(r29)
  mr        r4, r28
  rlwinm    r0,r0,2,0,29
  add       r3, r29, r0
  lwz       r3, 0x2B8(r3)
  bl        0x38BC
  b         .loc_0x938

.loc_0x680:
  mr        r3, r28
  li        r4, 0x14
  bl        0xA04
  mr.       r28, r3
  bne-      .loc_0x6A8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x807
  crclr     6, 0x6
  bl        -0x30D344

.loc_0x6A8:
  lis       r4, 0x1
  li        r3, 0
  subi      r0, r4, 0x1
  sth       r0, 0x2B6(r28)
  b         .loc_0x938

.loc_0x6BC:
  cmplwi    r29, 0
  bne-      .loc_0x6D4
  lwz       r3, -0x6780(r13)
  mr        r4, r28
  bl        0xA14C
  mr        r29, r3

.loc_0x6D4:
  cmpwi     r30, 0xE00
  beq-      .loc_0x7C0
  bge-      .loc_0x704
  cmpwi     r30, 0x600
  beq-      .loc_0x8F8
  bge-      .loc_0x6F8
  cmpwi     r30, 0x300
  beq-      .loc_0x8F8
  b         .loc_0x934

.loc_0x6F8:
  cmpwi     r30, 0x800
  beq-      .loc_0x8F8
  b         .loc_0x934

.loc_0x704:
  cmpwi     r30, 0x4000
  beq-      .loc_0x728
  bge-      .loc_0x71C
  cmpwi     r30, 0xF00
  beq-      .loc_0x858
  b         .loc_0x934

.loc_0x71C:
  cmpwi     r30, 0x4002
  bge-      .loc_0x934
  b         .loc_0x774

.loc_0x728:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  beq-      .loc_0x75C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x825
  crclr     6, 0x6
  bl        -0x30D3F8

.loc_0x75C:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x938

.loc_0x774:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  beq-      .loc_0x7A8
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x82F
  crclr     6, 0x6
  bl        -0x30D444

.loc_0x7A8:
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x5C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x938

.loc_0x7C0:
  mr        r3, r29
  li        r30, 0
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x2
  beq-      .loc_0x824
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  beq-      .loc_0x824
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x828

.loc_0x824:
  li        r30, 0x1

.loc_0x828:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x844
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x83B
  crclr     6, 0x6
  bl        -0x30D4E0

.loc_0x844:
  mr        r3, r29
  mr        r4, r28
  bl        -0x5144
  li        r3, 0
  b         .loc_0x938

.loc_0x858:
  mr        r3, r29
  li        r30, 0
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x2
  beq-      .loc_0x8BC
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  beq-      .loc_0x8BC
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  bne-      .loc_0x8C0

.loc_0x8BC:
  li        r30, 0x1

.loc_0x8C0:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x8DC
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x845
  crclr     6, 0x6
  bl        -0x30D578

.loc_0x8DC:
  lwz       r0, 0x348(r28)
  mr        r3, r29
  mr        r4, r28
  rlwinm    r5,r0,0,28,31
  bl        -0x5124
  li        r3, 0
  b         .loc_0x938

.loc_0x8F8:
  lwz       r29, 0x308(r29)
  cmplwi    r29, 0
  bne-      .loc_0x918
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x850
  crclr     6, 0x6
  bl        -0x30D5B4

.loc_0x918:
  mr        r3, r29
  mr        r4, r28
  mr        r5, r26
  mr        r6, r27
  mr        r7, r25
  bl        0x16DC
  b         .loc_0x938

.loc_0x934:
  li        r3, 0

.loc_0x938:
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80337C2C
 * Size:	00007C
 */
void PSPlayerChangeToOrimer()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  bl        .loc_0x7C
  mr.       r31, r3
  beq-      .loc_0x68
  lbz       r0, 0xB4(r31)
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0x3C
  lwz       r0, 0x70(r31)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  li        r3, 0x1

.loc_0x3C:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5C
  lis       r4, 0x8049
  subi      r3, r2, 0x224
  subi      r5, r4, 0x6DC
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x30D644

.loc_0x5C:
  lwz       r3, 0x70(r31)
  li        r0, 0
  stw       r0, 0x38(r3)

.loc_0x68:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x7C:
*/
}

/*
 * --INFO--
 * Address:	80337CA8
 * Size:	000124
 */
void PSGetDirectedMainBgm()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x6E8
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x190
  addi      r5, r31, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x30D6A0

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x190
  addi      r5, r31, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x30D6C0

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x254
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x30D6E0

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x94
  li        r3, 0
  b         .loc_0x10C

.loc_0x94:
  addi      r3, r3, 0x10
  bl        -0x3EE4
  mr.       r30, r3
  beq-      .loc_0x108
  lwz       r12, 0x10(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x2
  beq-      .loc_0x100
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  beq-      .loc_0x100
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x108

.loc_0x100:
  mr        r3, r30
  b         .loc_0x10C

.loc_0x108:
  li        r3, 0

.loc_0x10C:
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
 * Address:	80337DCC
 * Size:	000170
 */
void PSPlayerChangeToLugie()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x6E8
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x190
  addi      r5, r31, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x30D7C4

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x190
  addi      r5, r31, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x30D7E4

.loc_0x5C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0x254
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x30D804

.loc_0x7C:
  lwz       r3, 0x4(r30)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x94
  li        r30, 0
  b         .loc_0x108

.loc_0x94:
  addi      r3, r3, 0x10
  bl        -0x4008
  mr.       r30, r3
  beq-      .loc_0x104
  lwz       r12, 0x10(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x2
  beq-      .loc_0x108
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  beq-      .loc_0x108
  mr        r3, r30
  lwz       r12, 0x10(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x104
  b         .loc_0x108

.loc_0x104:
  li        r30, 0

.loc_0x108:
  cmplwi    r30, 0
  beq-      .loc_0x158
  lbz       r0, 0xB4(r30)
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0x130
  lwz       r0, 0x70(r30)
  cmplwi    r0, 0
  beq-      .loc_0x130
  li        r3, 0x1

.loc_0x130:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x14C
  addi      r5, r31, 0xC
  subi      r3, r2, 0x224
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x30D8D4

.loc_0x14C:
  lwz       r3, 0x70(r30)
  li        r0, 0x1
  stw       r0, 0x38(r3)

.loc_0x158:
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
 * Address:	80337F3C
 * Size:	000170
 */
void PSGetDirectedMainBgmA()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r3, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  subi      r30, r3, 0x6E8
  stw       r29, 0x14(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x40
  addi      r3, r30, 0x190
  addi      r5, r30, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x30D938

.loc_0x40:
  lwz       r31, -0x6780(r13)
  cmplwi    r31, 0
  bne-      .loc_0x60
  addi      r3, r30, 0x190
  addi      r5, r30, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x30D958

.loc_0x60:
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x80
  addi      r3, r30, 0x254
  addi      r5, r30, 0xC
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x30D978

.loc_0x80:
  lwz       r3, 0x4(r31)
  lwz       r31, 0x4(r3)
  cmplwi    r31, 0
  bne-      .loc_0xA4
  addi      r3, r30, 0x254
  addi      r5, r30, 0x4EC
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x30D99C

.loc_0xA4:
  addi      r3, r31, 0x10
  bl        -0x416C
  mr.       r29, r3
  beq-      .loc_0x13C
  lwz       r12, 0x10(r3)
  li        r31, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x2
  beq-      .loc_0x114
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x3
  beq-      .loc_0x114
  mr        r3, r29
  lwz       r12, 0x10(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,24,31
  cmplwi    r0, 0x4
  bne-      .loc_0x118

.loc_0x114:
  li        r31, 0x1

.loc_0x118:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x134
  addi      r3, r30, 0
  addi      r5, r30, 0xC
  li        r4, 0x8C1
  crclr     6, 0x6
  bl        -0x30DA2C

.loc_0x134:
  mr        r3, r29
  b         .loc_0x154

.loc_0x13C:
  addi      r3, r30, 0
  addi      r5, r30, 0xC
  li        r4, 0x8C4
  crclr     6, 0x6
  bl        -0x30DA48
  li        r3, 0

.loc_0x154:
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
 * Size:	00000C
 */
void PSSetBgmSelectAsToolMode()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803380AC
 * Size:	000050
 */
void __dt__Q28PSSystem39SingletonBase<PSGame::ConductorList>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x38
  lis       r5, 0x804E
  extsh.    r0, r4
  subi      r4, r5, 0x5578
  li        r0, 0
  stw       r4, 0x0(r31)
  stw       r0, -0x67AC(r13)
  ble-      .loc_0x38
  bl        -0x31402C

.loc_0x38:
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
 * Address:	803380FC
 * Size:	000050
 */
void __dt__Q28PSSystem49SingletonBase<PSGame::SoundTable::CategoryMgr>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x38
  lis       r5, 0x804E
  extsh.    r0, r4
  subi      r4, r5, 0x55A0
  li        r0, 0
  stw       r4, 0x0(r31)
  stw       r0, -0x6E3C(r13)
  ble-      .loc_0x38
  bl        -0x31407C

.loc_0x38:
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
 * Address:	8033814C
 * Size:	000098
 */
void newInstance__Q28PSSystem49SingletonBase<PSGame::SoundTable::CategoryMgr>Fv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, -0x6E3C(r13)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x570
  li        r4, 0x76
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30DB3C

.loc_0x34:
  lwz       r0, -0x6E3C(r13)
  cmplwi    r0, 0
  bne-      .loc_0x5C
  li        r3, 0x1C
  bl        -0x3142EC
  mr.       r0, r3
  beq-      .loc_0x58
  bl        -0x38A4
  mr        r0, r3

.loc_0x58:
  stw       r0, -0x6E3C(r13)

.loc_0x5C:
  lwz       r0, -0x6E3C(r13)
  cmplwi    r0, 0
  bne-      .loc_0x84
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x570
  li        r4, 0x79
  subi      r5, r5, 0x6DC
  crclr     6, 0x6
  bl        -0x30DB8C

.loc_0x84:
  lwz       r0, 0x14(r1)
  lwz       r3, -0x6E3C(r13)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803381E4
 * Size:	000008
 */
void @28@PSGame::ConductorList::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1C
  b         -0x3F58
*/
}

/*
 * --INFO--
 * Address:	803381EC
 * Size:	000008
 */
void PSGame::SceneInfo::isCaveFloor(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	803381F4
 * Size:	000008
 */
void PSGame::PikSceneMgr::curSceneIsBigBossFloor(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	803381FC
 * Size:	000038
 */
void PSSystem::SceneMgr::exec(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80338234
 * Size:	000004
 */
void PSSystem::Scene::init(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80338238
 * Size:	000050
 */
void PSAutoBgm::ConductorArcMgr::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x38
  lis       r5, 0x804E
  extsh.    r0, r4
  subi      r4, r5, 0x55D0
  li        r0, 0
  stw       r4, 0x0(r31)
  stw       r0, -0x6794(r13)
  ble-      .loc_0x38
  bl        -0x3141B8

.loc_0x38:
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
 * Address:	80338288
 * Size:	000064
 */
void PSGame::SoundTable::CategoryMgr::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x4C
  lis       r3, 0x804E
  subi      r0, r3, 0x55AC
  stw       r0, 0x0(r31)
  beq-      .loc_0x3C
  lis       r3, 0x804E
  li        r0, 0
  subi      r3, r3, 0x55A0
  stw       r3, 0x0(r31)
  stw       r0, -0x6E3C(r13)

.loc_0x3C:
  extsh.    r0, r4
  ble-      .loc_0x4C
  mr        r3, r31
  bl        -0x31421C

.loc_0x4C:
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
 * Address:	803382EC
 * Size:	000080
 */
void __dt__Q28PSSystem24ArcMgr<PSGame::BASARC>Fv(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804E
  lis       r3, 0x8049
  subi      r0, r4, 0x55DC
  lis       r4, 0x8049
  stw       r0, 0x0(r30)
  subi      r5, r4, 0x6DC
  subi      r3, r3, 0x594
  li        r4, 0x4D
  crclr     6, 0x6
  bl        -0x30DCF0
  mr        r3, r30
  li        r4, 0
  bl        -0x31B308
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x314298

.loc_0x64:
  lwz       r0, 0x14(r1)
  mr        r3, r30
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
