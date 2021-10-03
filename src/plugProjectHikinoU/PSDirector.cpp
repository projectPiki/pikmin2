

/*
 * --INFO--
 * Address:	80342EB4
 * Size:	000214
 */
void PSSystem::DirectorBase::__ct( (int, char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r31, r4
  mr        r30, r3
  li        r4, 0
  bl        -0x288CE4
  lis       r3, 0x804E
  li        r4, 0
  subi      r3, r3, 0x4FC0
  li        r0, 0x2
  stw       r3, 0x0(r30)
  addi      r3, r30, 0xC
  stw       r4, 0x4(r30)
  stw       r0, 0x8(r30)
  bl        -0x2533C4
  addi      r3, r30, 0x24
  bl        -0x2533CC
  li        r0, 0
  cmpwi     r31, 0
  stb       r0, 0x3C(r30)
  stb       r0, 0x40(r30)
  stb       r31, 0x41(r30)
  bgt-      .loc_0x80
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x18
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x3188F0

.loc_0x80:
  rlwinm    r3,r31,2,0,29
  bl        -0x31EF8C
  stw       r3, 0x4(r30)
  mr        r3, r31
  bl        -0x31EF98
  stw       r3, 0x44(r30)
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0xC0
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x1D
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x318930

.loc_0xC0:
  cmpwi     r31, 0
  li        r5, 0
  ble-      .loc_0x1FC
  cmpwi     r31, 0x8
  subi      r3, r31, 0x8
  ble-      .loc_0x1CC
  b         .loc_0x1C0

.loc_0xDC:
  lwz       r6, 0x4(r30)
  rlwinm    r4,r5,2,22,29
  li        r0, 0
  addi      r12, r5, 0x1
  stwx      r0, r6, r4
  addi      r11, r5, 0x2
  addi      r10, r5, 0x3
  rlwinm    r23,r5,0,24,31
  lwz       r6, 0x44(r30)
  rlwinm    r26,r11,0,24,31
  rlwinm    r24,r12,0,24,31
  addi      r9, r5, 0x4
  stbx      r0, r6, r23
  addi      r23, r4, 0x4
  addi      r8, r5, 0x5
  rlwinm    r28,r10,0,24,31
  lwz       r12, 0x4(r30)
  addi      r7, r5, 0x6
  addi      r6, r5, 0x7
  rlwinm    r10,r8,0,24,31
  stwx      r0, r12, r23
  rlwinm    r12,r9,0,24,31
  rlwinm    r8,r7,0,24,31
  addi      r25, r4, 0x8
  lwz       r23, 0x44(r30)
  addi      r27, r4, 0xC
  addi      r29, r4, 0x10
  addi      r11, r4, 0x14
  stbx      r0, r23, r24
  addi      r9, r4, 0x18
  addi      r7, r4, 0x1C
  rlwinm    r4,r6,0,24,31
  lwz       r6, 0x4(r30)
  addi      r5, r5, 0x8
  stwx      r0, r6, r25
  lwz       r6, 0x44(r30)
  stbx      r0, r6, r26
  lwz       r6, 0x4(r30)
  stwx      r0, r6, r27
  lwz       r6, 0x44(r30)
  stbx      r0, r6, r28
  lwz       r6, 0x4(r30)
  stwx      r0, r6, r29
  lwz       r6, 0x44(r30)
  stbx      r0, r6, r12
  lwz       r6, 0x4(r30)
  stwx      r0, r6, r11
  lwz       r6, 0x44(r30)
  stbx      r0, r6, r10
  lwz       r6, 0x4(r30)
  stwx      r0, r6, r9
  lwz       r6, 0x44(r30)
  stbx      r0, r6, r8
  lwz       r6, 0x4(r30)
  stwx      r0, r6, r7
  lwz       r6, 0x44(r30)
  stbx      r0, r6, r4

.loc_0x1C0:
  rlwinm    r0,r5,0,24,31
  cmpw      r0, r3
  blt+      .loc_0xDC

.loc_0x1CC:
  li        r4, 0
  b         .loc_0x1F0

.loc_0x1D4:
  lwz       r3, 0x4(r30)
  rlwinm    r0,r5,2,22,29
  rlwinm    r6,r5,0,24,31
  addi      r5, r5, 0x1
  stwx      r4, r3, r0
  lwz       r3, 0x44(r30)
  stbx      r4, r3, r6

.loc_0x1F0:
  rlwinm    r0,r5,0,24,31
  cmpw      r0, r31
  blt+      .loc_0x1D4

.loc_0x1FC:
  mr        r3, r30
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void PSSystem::DirectorBase::isUnderTask(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803430C8
 * Size:	000010
 */
void PSSystem::DirectorBase::isUnderDirection(void)
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  blr
*/
}

/*
 * --INFO--
 * Address:	803430D8
 * Size:	0000A4
 */
void PSSystem::DirectorBase::setTrack( (unsigned char, PSSystem::SeqTrackBase *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r3
  lbz       r0, 0x41(r3)
  rlwinm    r3,r4,0,24,31
  cmplw     r3, r0
  blt-      .loc_0x50
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x3E
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x318AE4

.loc_0x50:
  lwz       r3, 0x4(r29)
  rlwinm    r31,r31,2,22,29
  lwzx      r0, r3, r31
  cmplwi    r0, 0
  beq-      .loc_0x80
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x3F
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x318B14

.loc_0x80:
  lwz       r3, 0x4(r29)
  stwx      r30, r3, r31
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
 * Size:	000094
 */
void PSSystem::DirectorBase::initCheck(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8034317C
 * Size:	00014C
 */
void PSSystem::DirectorBase::exec(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        -0x2517D0
  bl        -0x2506BC
  cmpwi     r3, 0x10
  beq-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x65
  addi      r5, r5, 0x19C
  crclr     6, 0x6
  bl        -0x318B7C

.loc_0x44:
  lbz       r0, 0x3C(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x84
  mr        r3, r31
  bl        0x350
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x24
  bl        -0x253684
  li        r0, 0
  addi      r3, r31, 0x24
  stb       r0, 0x3C(r31)
  bl        -0x2535B8

.loc_0x84:
  lbz       r0, 0x40(r31)
  cmplwi    r0, 0
  beq-      .loc_0x134
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x114
  li        r30, 0
  b         .loc_0xE4

.loc_0xB8:
  lwz       r3, 0x4(r31)
  rlwinm    r0,r30,2,22,29
  lwzx      r3, r3, r0
  bl        -0xF3C
  mr        r4, r31
  bl        -0x4FD8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE0
  li        r0, 0x1
  b         .loc_0xF8

.loc_0xE0:
  addi      r30, r30, 0x1

.loc_0xE4:
  lbz       r0, 0x41(r31)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0xB8
  li        r0, 0

.loc_0xF8:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x114
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x114
  li        r0, 0x2
  stw       r0, 0x8(r31)

.loc_0x114:
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0
  bne-      .loc_0x134
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x134:
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
 * Size:	0000C8
 */
void PSSystem::DirectorBase::playInit( (JASTrack *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void PSSystem::DirectorBase::directOn_Tool(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void PSSystem::DirectorBase::directOff_Tool(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803432C8
 * Size:	000074
 */
void PSSystem::DirectorBase::directOn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x251918
  bl        -0x250804
  cmpwi     r3, 0x10
  beq-      .loc_0x40
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0xB8
  addi      r5, r5, 0x19C
  crclr     6, 0x6
  bl        -0x318CC4

.loc_0x40:
  lbz       r0, -0x6778(r13)
  cmplwi    r0, 0x1
  beq-      .loc_0x60
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0
  beq-      .loc_0x60
  mr        r3, r31
  bl        .loc_0x74

.loc_0x60:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x74:
*/
}

/*
 * --INFO--
 * Address:	8034333C
 * Size:	0000B0
 */
void PSSystem::DirectorBase::directOnInner(void)
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
  bl        -0x2537F0
  lbz       r0, 0x40(r30)
  cmplwi    r0, 0
  bne-      .loc_0x38
  addi      r3, r30, 0xC
  bl        -0x253728
  b         .loc_0x98

.loc_0x38:
  li        r31, 0
  b         .loc_0x64

.loc_0x40:
  lwz       r12, 0x0(r30)
  rlwinm    r0,r31,2,22,29
  lwz       r4, 0x4(r30)
  mr        r3, r30
  lwz       r12, 0x20(r12)
  lwzx      r4, r4, r0
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x64:
  lbz       r0, 0x41(r30)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x40
  addi      r3, r30, 0xC
  bl        -0x253770
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x8(r30)

.loc_0x98:
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
 * Address:	803433EC
 * Size:	000080
 */
void PSSystem::DirectorBase::directOff(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, -0x6778(r13)
  cmplwi    r0, 0x1
  beq-      .loc_0x6C
  bl        -0x251A48
  bl        -0x250934
  cmpwi     r3, 0x10
  beq-      .loc_0x4C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0xDB
  addi      r5, r5, 0x19C
  crclr     6, 0x6
  bl        -0x318DF4

.loc_0x4C:
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x6C
  cmpwi     r0, 0x2
  bne-      .loc_0x64
  b         .loc_0x6C

.loc_0x64:
  mr        r3, r31
  bl        .loc_0x80

.loc_0x6C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x80:
*/
}

/*
 * --INFO--
 * Address:	8034346C
 * Size:	0000B0
 */
void PSSystem::DirectorBase::directOffInner(void)
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
  bl        -0x253920
  lbz       r0, 0x40(r30)
  cmplwi    r0, 0
  bne-      .loc_0x38
  addi      r3, r30, 0xC
  bl        -0x253858
  b         .loc_0x98

.loc_0x38:
  li        r31, 0
  b         .loc_0x64

.loc_0x40:
  lwz       r12, 0x0(r30)
  rlwinm    r0,r31,2,22,29
  lwz       r4, 0x4(r30)
  mr        r3, r30
  lwz       r12, 0x24(r12)
  lwzx      r4, r4, r0
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x64:
  lbz       r0, 0x41(r30)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x40
  addi      r3, r30, 0xC
  bl        -0x2538A0
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stw       r0, 0x8(r30)

.loc_0x98:
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
 * Address:	8034351C
 * Size:	000004
 */
void PSSystem::DirectorBase::doUpdateRequest(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343520
 * Size:	000040
 */
void PSSystem::DirectorBase::powerOn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xC
  bl        -0x2539D0
  li        r0, 0x1
  addi      r3, r31, 0xC
  stb       r0, 0x40(r31)
  bl        -0x253904
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void PSSystem::DirectorBase::powerOff(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80343560
 * Size:	000150
 */
void PSSystem::OneShotDirector::exec(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  bl        -0x251BB4
  bl        -0x250AA0
  cmpwi     r3, 0x10
  beq-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x150
  addi      r5, r5, 0x19C
  crclr     6, 0x6
  bl        -0x318F60

.loc_0x44:
  lbz       r0, 0x3C(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x94
  addi      r3, r31, 0xC
  bl        -0x253A4C
  li        r0, 0x1
  addi      r3, r31, 0xC
  stb       r0, 0x40(r31)
  bl        -0x253980
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x24
  bl        -0x253A78
  li        r0, 0
  addi      r3, r31, 0x24
  stb       r0, 0x3C(r31)
  bl        -0x2539AC

.loc_0x94:
  lbz       r0, 0x40(r31)
  cmplwi    r0, 0
  beq-      .loc_0x138
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x118
  li        r30, 0
  b         .loc_0xF4

.loc_0xC8:
  lwz       r3, 0x4(r31)
  rlwinm    r0,r30,2,22,29
  lwzx      r3, r3, r0
  bl        -0x1330
  mr        r4, r31
  bl        -0x53CC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xF0
  li        r0, 0x1
  b         .loc_0x108

.loc_0xF0:
  addi      r30, r30, 0x1

.loc_0xF4:
  lbz       r0, 0x41(r31)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0xC8
  li        r0, 0

.loc_0x108:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x118
  li        r0, 0x2
  stw       r0, 0x8(r31)

.loc_0x118:
  lwz       r0, 0x8(r31)
  cmpwi     r0, 0
  bne-      .loc_0x138
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x138:
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
 * Address:	803436B0
 * Size:	000198
 */
void PSSystem::SwitcherDirector::doUpdateRequest(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  lwz       r0, 0x8(r3)
  cmpwi     r0, 0
  bne-      .loc_0xA8
  addi      r3, r31, 0xC
  bl        -0x253B70
  lbz       r0, 0x40(r31)
  cmplwi    r0, 0
  bne-      .loc_0x44
  addi      r3, r31, 0xC
  bl        -0x253AA8
  b         .loc_0x180

.loc_0x44:
  li        r30, 0
  b         .loc_0x70

.loc_0x4C:
  lwz       r12, 0x0(r31)
  rlwinm    r0,r30,2,22,29
  lwz       r4, 0x4(r31)
  mr        r3, r31
  lwz       r12, 0x20(r12)
  lwzx      r4, r4, r0
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1

.loc_0x70:
  lbz       r0, 0x41(r31)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x4C
  addi      r3, r31, 0xC
  bl        -0x253AF0
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x8(r31)
  b         .loc_0x180

.loc_0xA8:
  cmpwi     r0, 0x1
  bne-      .loc_0x180
  li        r30, 0
  b         .loc_0xE4

.loc_0xB8:
  lwz       r3, 0x4(r31)
  rlwinm    r0,r30,2,22,29
  lwzx      r3, r3, r0
  bl        -0x1470
  mr        r4, r31
  bl        -0x550C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE0
  li        r0, 0x1
  b         .loc_0xF8

.loc_0xE0:
  addi      r30, r30, 0x1

.loc_0xE4:
  lbz       r0, 0x41(r31)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0xB8
  li        r0, 0

.loc_0xF8:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x180
  addi      r3, r31, 0xC
  bl        -0x253C4C
  lbz       r0, 0x40(r31)
  cmplwi    r0, 0
  bne-      .loc_0x120
  addi      r3, r31, 0xC
  bl        -0x253B84
  b         .loc_0x180

.loc_0x120:
  li        r30, 0
  b         .loc_0x14C

.loc_0x128:
  lwz       r12, 0x0(r31)
  rlwinm    r0,r30,2,22,29
  lwz       r4, 0x4(r31)
  mr        r3, r31
  lwz       r12, 0x24(r12)
  lwzx      r4, r4, r0
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x1

.loc_0x14C:
  lbz       r0, 0x41(r31)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x128
  addi      r3, r31, 0xC
  bl        -0x253BCC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stw       r0, 0x8(r31)

.loc_0x180:
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
 * Address:	80343848
 * Size:	000088
 */
void PSSystem::DirectorMgrBase::__ct( (unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r5, 0x180
  stw       r30, 0x18(r1)
  mr        r30, r4
  addi      r4, r31, 0x3C
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x289688
  lis       r3, 0x804E
  li        r0, 0
  subi      r3, r3, 0x5040
  stw       r3, 0x0(r29)
  stw       r0, 0x4(r29)
  stb       r30, 0x8(r29)
  lbz       r0, 0x8(r29)
  cmplwi    r0, 0
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0x10
  li        r4, 0x18A
  crclr     6, 0x6
  bl        -0x31926C

.loc_0x68:
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
 * Address:	803438D0
 * Size:	00012C
 */
void PSSystem::DirectorMgrBase::initAndAdaptToBgm( (PSSystem::DirectedBgm &))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r25, 0x14(r1)
  mr        r30, r3
  mr        r31, r4
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x40
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x191
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x3192CC

.loc_0x40:
  lbz       r0, 0x8(r30)
  rlwinm    r3,r0,2,0,29
  bl        -0x31F96C
  stw       r3, 0x4(r30)
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x78
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x193
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x319304

.loc_0x78:
  lis       r4, 0x8049
  lis       r3, 0x8049
  addi      r28, r4, 0x180
  li        r25, 0
  addi      r29, r3, 0x190
  b         .loc_0x108

.loc_0x90:
  mr        r3, r30
  mr        r4, r25
  lwz       r12, 0x0(r30)
  mr        r5, r31
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x4(r30)
  rlwinm    r0,r25,2,22,29
  li        r27, 0
  stwx      r3, r4, r0
  lwz       r3, 0x4(r30)
  lwzx      r26, r3, r0
  b         .loc_0xF4

.loc_0xC8:
  lwz       r3, 0x4(r26)
  rlwinm    r0,r27,2,22,29
  lwzx      r0, r3, r0
  cmplwi    r0, 0
  bne-      .loc_0xF0
  mr        r3, r28
  mr        r5, r29
  li        r4, 0x49
  crclr     6, 0x6
  bl        -0x31937C

.loc_0xF0:
  addi      r27, r27, 0x1

.loc_0xF4:
  lbz       r0, 0x41(r26)
  rlwinm    r3,r27,0,24,31
  cmplw     r3, r0
  blt+      .loc_0xC8
  addi      r25, r25, 0x1

.loc_0x108:
  lbz       r0, 0x8(r30)
  rlwinm    r3,r25,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x90
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803439FC
 * Size:	000164
 */
void PSSystem::DirectorMgrBase::playInit( (JASTrack *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  li        r30, 0
  b         .loc_0x140

.loc_0x20:
  rlwinm    r31,r30,2,22,29
  li        r29, 0
  b         .loc_0x124

.loc_0x2C:
  lbz       r0, 0x41(r24)
  rlwinm    r3,r29,0,24,31
  cmplw     r3, r0
  blt-      .loc_0x58
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x1D4
  li        r4, 0x33
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x319410

.loc_0x58:
  lwz       r3, 0x4(r24)
  rlwinm    r0,r29,2,22,29
  lwzx      r3, r3, r0
  bl        -0x175C
  lwz       r0, 0x24(r3)
  cmplw     r0, r28
  bne-      .loc_0x120
  lwz       r0, 0x4(r27)
  mr        r4, r28
  lwzx      r24, r31, r0
  mr        r3, r24
  lwz       r12, 0x0(r24)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r24, 0xC
  bl        -0x253F2C
  li        r25, 0
  li        r26, 0x1
  b         .loc_0xF0

.loc_0xA8:
  lwz       r3, 0x4(r24)
  rlwinm    r0,r25,2,22,29
  rlwinm    r23,r25,0,24,31
  lwzx      r3, r3, r0
  bl        -0x17B0
  lwz       r0, 0x24(r3)
  cmplw     r0, r28
  bne-      .loc_0xD0
  lwz       r3, 0x44(r24)
  stbx      r26, r3, r23

.loc_0xD0:
  lwz       r3, 0x44(r24)
  lbzx      r0, r3, r23
  cmplwi    r0, 0
  bne-      .loc_0xEC
  addi      r3, r24, 0xC
  bl        -0x253E9C
  b         .loc_0x120

.loc_0xEC:
  addi      r25, r25, 0x1

.loc_0xF0:
  lbz       r0, 0x41(r24)
  rlwinm    r3,r25,0,24,31
  cmplw     r3, r0
  blt+      .loc_0xA8
  addi      r3, r24, 0xC
  bl        -0x253EBC
  addi      r3, r24, 0x24
  bl        -0x253FA0
  li        r0, 0x1
  addi      r3, r24, 0x24
  stb       r0, 0x3C(r24)
  bl        -0x253ED4

.loc_0x120:
  addi      r29, r29, 0x1

.loc_0x124:
  lwz       r3, 0x4(r27)
  rlwinm    r0,r29,0,24,31
  lwzx      r24, r31, r3
  lbz       r3, 0x41(r24)
  cmplw     r0, r3
  blt+      .loc_0x2C
  addi      r30, r30, 0x1

.loc_0x140:
  lbz       r0, 0x8(r27)
  rlwinm    r3,r30,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x20
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80343B60
 * Size:	000068
 */
void PSSystem::DirectorMgrBase::exec(void)
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
  b         .loc_0x40

.loc_0x20:
  lwz       r3, 0x4(r30)
  rlwinm    r0,r31,2,22,29
  lwzx      r3, r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x1

.loc_0x40:
  lbz       r0, 0x8(r30)
  rlwinm    r3,r31,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x20
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
 * Size:	000060
 */
void PSSystem::DirectorMgrBase::lock(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void PSSystem::DirectorMgrBase::unlock(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80343BC8
 * Size:	0001BC
 */
void PSSystem::DirectorMgrBase::off( (PSSystem::DirectedBgm *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr.       r31, r4
  mr        r30, r3
  bne-      .loc_0x38
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x1CA
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x3195BC

.loc_0x38:
  li        r29, 0
  b         .loc_0x58

.loc_0x40:
  lwz       r3, 0x4(r30)
  rlwinm    r0,r29,2,22,29
  lwzx      r3, r3, r0
  addi      r3, r3, 0xC
  bl        -0x2540B0
  addi      r29, r29, 0x1

.loc_0x58:
  lbz       r0, 0x8(r30)
  rlwinm    r3,r29,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x40
  lbz       r0, 0xB4(r31)
  li        r3, 0
  cmplwi    r0, 0x1
  bne-      .loc_0x88
  lwz       r0, 0x70(r31)
  cmplwi    r0, 0
  beq-      .loc_0x88
  li        r3, 0x1

.loc_0x88:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA8
  lis       r4, 0x8049
  subi      r3, r2, 0x170
  addi      r5, r4, 0x190
  li        r4, 0x19F
  crclr     6, 0x6
  bl        -0x31962C

.loc_0xA8:
  lwz       r3, 0x70(r31)
  bl        -0x1970
  bl        -0x5770
  lis       r3, 0x8049
  li        r27, 0
  addi      r29, r3, 0x190
  b         .loc_0x104

.loc_0xC4:
  rlwinm    r28,r27,0,24,31
  cmpwi     r28, 0x10
  blt-      .loc_0xE4
  mr        r5, r29
  subi      r3, r2, 0x170
  li        r4, 0x1A3
  crclr     6, 0x6
  bl        -0x319668

.loc_0xE4:
  rlwinm    r3,r28,2,0,29
  addi      r0, r3, 0x74
  lwzx      r3, r31, r0
  cmplwi    r3, 0
  beq-      .loc_0x100
  bl        -0x19BC
  bl        -0x57BC

.loc_0x100:
  addi      r27, r27, 0x1

.loc_0x104:
  rlwinm    r0,r27,0,24,31
  cmplwi    r0, 0x10
  blt+      .loc_0xC4
  li        r27, 0
  b         .loc_0x168

.loc_0x118:
  lwz       r3, 0x4(r30)
  rlwinm    r0,r27,2,22,29
  lwzx      r29, r3, r0
  addi      r3, r29, 0xC
  bl        -0x254188
  li        r4, 0
  stb       r4, 0x40(r29)
  mr        r5, r4
  b         .loc_0x14C

.loc_0x13C:
  lwz       r3, 0x44(r29)
  rlwinm    r0,r5,0,24,31
  addi      r5, r5, 0x1
  stbx      r4, r3, r0

.loc_0x14C:
  lbz       r0, 0x41(r29)
  rlwinm    r3,r5,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x13C
  addi      r3, r29, 0xC
  bl        -0x2540E4
  addi      r27, r27, 0x1

.loc_0x168:
  lbz       r0, 0x8(r30)
  rlwinm    r3,r27,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x118
  li        r29, 0
  b         .loc_0x198

.loc_0x180:
  lwz       r3, 0x4(r30)
  rlwinm    r0,r29,2,22,29
  lwzx      r3, r3, r0
  addi      r3, r3, 0xC
  bl        -0x254114
  addi      r29, r29, 0x1

.loc_0x198:
  lbz       r0, 0x8(r30)
  rlwinm    r3,r29,0,24,31
  cmplw     r3, r0
  blt+      .loc_0x180
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
 * Size:	000010
 */
void PSSystem::DirectorActorBase::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80343D84
 * Size:	000024
 */
void PSSystem::DirectorCopyActor::__ct( (PSSystem::DirectorBase *, PSSystem::DirectorBase *))
{
/*
.loc_0x0:
  lis       r7, 0x804E
  lis       r6, 0x804E
  subi      r0, r7, 0x504C
  stw       r0, 0x0(r3)
  subi      r0, r6, 0x5060
  stw       r0, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r5, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80343DA8
 * Size:	000120
 */
void PSSystem::DirectorCopyActor::exec( (PSSystem::DirectorBase *))
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
  bne-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x201
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x3197A8

.loc_0x44:
  lwz       r0, 0x4(r30)
  cmplw     r31, r0
  bne-      .loc_0x68
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x108

.loc_0x68:
  lwz       r0, 0x8(r30)
  cmplw     r0, r31
  bne-      .loc_0x108
  cmplwi    r0, 0
  bne-      .loc_0x98
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x180
  li        r4, 0x20D
  addi      r5, r5, 0x190
  crclr     6, 0x6
  bl        -0x3197FC

.loc_0x98:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r30)
  lwz       r5, 0x8(r3)
  cmpwi     r5, 0
  bne-      .loc_0xE0
  lwz       r4, 0x4(r30)
  lwz       r0, 0x8(r4)
  cmpwi     r0, 0
  beq-      .loc_0xE0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x108

.loc_0xE0:
  cmpwi     r5, 0
  beq-      .loc_0x108
  lwz       r4, 0x4(r30)
  lwz       r0, 0x8(r4)
  cmpwi     r0, 0
  bne-      .loc_0x108
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x108:
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
 * Address:	80343EC8
 * Size:	000004
 */
void PSSystem::DirectorBase::underDirection(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343ECC
 * Size:	000004
 */
void PSSystem::DirectorBase::execInner(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343ED0
 * Size:	000004
 */
void PSSystem::DirectorBase::onPlayInit( (JASTrack *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343ED4
 * Size:	000004
 */
void PSSystem::DirectorBase::onDirectOn(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343ED8
 * Size:	000004
 */
void PSSystem::DirectorBase::onDirectOff(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343EDC
 * Size:	000004
 */
void PSSystem::DirectorCopyActor::onUpdateFromSlaveD(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343EE0
 * Size:	000004
 */
void PSSystem::DirectorCopyActor::onUpdateFromMasterD(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80343EE4
 * Size:	000060
 */
void PSSystem::DirectorMgrBase::__dt(void)
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
  subi      r0, r5, 0x5040
  stw       r0, 0x0(r30)
  bl        -0x289D18
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x31FE70

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
 * Address:	80343F44
 * Size:	000070
 */
void PSSystem::SwitcherDirector::__dt(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804E
  subi      r0, r4, 0x5030
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x289D88

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x31FEE0

.loc_0x54:
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
 * Address:	80343FB4
 * Size:	000070
 */
void PSSystem::OneShotDirector::__dt(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804E
  subi      r0, r4, 0x4FF8
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804E
  li        r4, 0
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x289DF8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x31FF50

.loc_0x54:
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
 * Address:	80344024
 * Size:	000004
 */
void PSSystem::OneShotDirector::directOffTrack( (PSSystem::SeqTrackBase &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80344028
 * Size:	000060
 */
void PSSystem::DirectorBase::__dt(void)
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
  subi      r0, r5, 0x4FC0
  stw       r0, 0x0(r30)
  bl        -0x289E5C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        -0x31FFB4

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
