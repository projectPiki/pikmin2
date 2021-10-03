

/*
 * --INFO--
 * Address:	80099E60
 * Size:	000060
 */
void JASBasicWaveBank::JASBasicWaveBank()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x14(r1)
  addi      r0, r4, 0x37F8
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x804A
  stw       r0, 0x0(r31)
  addi      r4, r3, 0x37E4
  li        r0, 0
  addi      r3, r31, 0x4
  stw       r4, 0x0(r31)
  stw       r0, 0x1C(r31)
  stw       r0, 0x20(r31)
  stw       r0, 0x24(r31)
  stw       r0, 0x28(r31)
  bl        0x55C8C
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
 * Address:	80099EC0
 * Size:	000048
 */
void JASWaveBank::~JASWaveBank()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x37F8
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x75E38

.loc_0x30:
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
 * Address:	80099F08
 * Size:	0000BC
 */
void JASBasicWaveBank::~JASBasicWaveBank()
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
  mr.       r28, r3
  beq-      .loc_0x98
  lis       r3, 0x804A
  addi      r0, r3, 0x37E4
  stw       r0, 0x0(r28)
  lwz       r3, 0x1C(r28)
  bl        -0x75E68
  li        r30, 0
  li        r31, 0
  b         .loc_0x60

.loc_0x48:
  lwz       r3, 0x24(r28)
  li        r4, 0x1
  lwzx      r3, r3, r31
  bl        0x260
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x60:
  lwz       r0, 0x28(r28)
  cmplw     r30, r0
  blt+      .loc_0x48
  lwz       r3, 0x24(r28)
  bl        -0x75EA0
  cmplwi    r28, 0
  beq-      .loc_0x88
  lis       r3, 0x804A
  addi      r0, r3, 0x37F8
  stw       r0, 0x0(r28)

.loc_0x88:
  extsh.    r0, r29
  ble-      .loc_0x98
  mr        r3, r28
  bl        -0x75EE8

.loc_0x98:
  lwz       r0, 0x24(r1)
  mr        r3, r28
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
 * Address:	80099FC4
 * Size:	000024
 */
void JASBasicWaveBank::getWaveGroup(int)
{
/*
.loc_0x0:
  lwz       r0, 0x28(r3)
  cmplw     r4, r0
  blt-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  lwz       r3, 0x24(r3)
  rlwinm    r0,r4,2,0,29
  lwzx      r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80099FE8
 * Size:	0000E8
 */
void JASBasicWaveBank::setGroupCount(unsigned long)
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
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  b         .loc_0x48

.loc_0x30:
  lwz       r3, 0x24(r28)
  li        r4, 0x1
  lwzx      r3, r3, r31
  bl        0x198
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x48:
  lwz       r0, 0x28(r28)
  cmplw     r30, r0
  blt+      .loc_0x30
  lwz       r3, 0x24(r28)
  bl        -0x75F68
  stw       r29, 0x28(r28)
  bl        0x1FE8
  mr        r4, r3
  rlwinm    r3,r29,2,0,29
  li        r5, 0
  bl        -0x76010
  stw       r3, 0x24(r28)
  li        r30, 0
  li        r31, 0
  b         .loc_0xBC

.loc_0x84:
  bl        0x1FC4
  mr        r4, r3
  li        r3, 0x68
  li        r5, 0
  bl        -0x7613C
  mr.       r0, r3
  beq-      .loc_0xAC
  mr        r4, r28
  bl        0xD8
  mr        r0, r3

.loc_0xAC:
  lwz       r3, 0x24(r28)
  addi      r30, r30, 0x1
  stwx      r0, r3, r31
  addi      r31, r31, 0x4

.loc_0xBC:
  lwz       r0, 0x28(r28)
  cmplw     r30, r0
  blt+      .loc_0x84
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
 * Address:	8009A0D0
 * Size:	000064
 */
void JASBasicWaveBank::setWaveTableSize(unsigned long)
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
  lwz       r3, 0x1C(r3)
  bl        -0x76018
  bl        0x1F3C
  mr        r4, r3
  rlwinm    r3,r31,2,0,29
  li        r5, 0
  bl        -0x760BC
  stw       r3, 0x1C(r30)
  rlwinm    r4,r31,2,0,29
  lwz       r3, 0x1C(r30)
  bl        0xC150
  stw       r31, 0x20(r30)
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
 * Size:	0000A0
 */
void JASBasicWaveBank::incWaveTable(const JASBasicWaveBank::TWaveGroup *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JASMutexLock::~JASMutexLock()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void JASBasicWaveBank::decWaveTable(const JASBasicWaveBank::TWaveGroup *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009A134
 * Size:	000030
 */
void JASBasicWaveBank::getWaveHandle(unsigned long) const
{
/*
.loc_0x0:
  lwz       r0, 0x20(r3)
  cmplw     r4, r0
  blt-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  lwz       r3, 0x1C(r3)
  rlwinm    r0,r4,2,0,29
  lwzx      r3, r3, r0
  cmplwi    r3, 0
  bnelr-    
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A164
 * Size:	000058
 */
void JASBasicWaveBank::TWaveGroup::__ct( (JASBasicWaveBank *))
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
  bl        0x1914
  lis       r3, 0x804A
  li        r0, 0
  addi      r4, r3, 0x37A8
  mr        r3, r30
  stw       r4, 0x0(r30)
  stw       r31, 0x5C(r30)
  stw       r0, 0x60(r30)
  stw       r0, 0x64(r30)
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
 * Address:	........
 * Size:	000090
 */
void JASWaveArc::~JASWaveArc()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009A1BC
 * Size:	0000B4
 */
void JASBasicWaveBank::TWaveGroup::__dt(void)
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
  beq-      .loc_0x98
  lis       r4, 0x804A
  lis       r3, 0x800A
  addi      r0, r4, 0x37A8
  stw       r0, 0x0(r30)
  subi      r4, r3, 0x5D90
  lwz       r3, 0x60(r30)
  bl        0x27554
  cmplwi    r30, 0
  beq-      .loc_0x88
  lis       r3, 0x804A
  addic.    r0, r30, 0x4
  addi      r0, r3, 0x38D8
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  addic.    r0, r30, 0x4
  beq-      .loc_0x88
  addic.    r0, r30, 0x10
  beq-      .loc_0x74
  addi      r3, r30, 0x10
  li        r4, 0
  bl        -0x73A5C

.loc_0x74:
  addic.    r0, r30, 0x4
  beq-      .loc_0x88
  addi      r3, r30, 0x4
  li        r4, 0
  bl        -0x739D8

.loc_0x88:
  extsh.    r0, r31
  ble-      .loc_0x98
  mr        r3, r30
  bl        -0x7619C

.loc_0x98:
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
 * Address:	8009A270
 * Size:	000060
 */
void JASBasicWaveBank::TWaveInfo::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x48
  beq-      .loc_0x38
  lis       r3, 0x804A
  addi      r0, r3, 0x37D0
  stw       r0, 0x0(r31)
  beq-      .loc_0x38
  lis       r3, 0x804A
  addi      r0, r3, 0x37BC
  stw       r0, 0x0(r31)

.loc_0x38:
  extsh.    r0, r4
  ble-      .loc_0x48
  mr        r3, r31
  bl        -0x76200

.loc_0x48:
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
 * Address:	8009A2D0
 * Size:	0001BC
 */
void JASBasicWaveBank::TWaveGroup::setWaveCount( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r23, 0xC(r1)
  mr        r30, r3
  lis       r3, 0x800A
  mr        r31, r4
  subi      r0, r3, 0x5D90
  mr        r4, r0
  lwz       r3, 0x60(r30)
  bl        0x27450
  stw       r31, 0x64(r30)
  bl        0x1D30
  mulli     r6, r31, 0x3C
  mr        r4, r3
  li        r5, 0
  addi      r3, r6, 0x10
  bl        -0x762CC
  lis       r4, 0x800A
  lis       r5, 0x800A
  subi      r4, r4, 0x5B74
  mr        r7, r31
  subi      r5, r5, 0x5D90
  li        r6, 0x3C
  bl        0x276C0
  cmplwi    r31, 0
  stw       r3, 0x60(r30)
  li        r5, 0
  ble-      .loc_0x1A8
  cmplwi    r31, 0x8
  subi      r7, r31, 0x8
  ble-      .loc_0x16C
  addi      r6, r7, 0x7
  addi      r3, r30, 0x4
  rlwinm    r6,r6,29,3,31
  addi      r0, r30, 0x48
  li        r4, 0
  mtctr     r6
  cmplwi    r7, 0
  ble-      .loc_0x16C

.loc_0xA0:
  lwz       r9, 0x60(r30)
  addi      r8, r4, 0x2C
  addi      r7, r4, 0x28
  addi      r6, r4, 0x68
  stwx      r3, r9, r8
  addi      r24, r4, 0x64
  addi      r25, r4, 0xA4
  addi      r26, r4, 0xA0
  lwz       r8, 0x60(r30)
  addi      r27, r4, 0xE0
  addi      r28, r4, 0xDC
  addi      r29, r4, 0x11C
  stwx      r0, r8, r7
  addi      r12, r4, 0x118
  addi      r11, r4, 0x158
  addi      r10, r4, 0x154
  lwz       r23, 0x60(r30)
  addi      r9, r4, 0x194
  addi      r8, r4, 0x190
  addi      r7, r4, 0x1D0
  stwx      r3, r23, r6
  addi      r6, r4, 0x1CC
  addi      r4, r4, 0x1E0
  addi      r5, r5, 0x8
  lwz       r23, 0x60(r30)
  stwx      r0, r23, r24
  lwz       r24, 0x60(r30)
  stwx      r3, r24, r25
  lwz       r25, 0x60(r30)
  stwx      r0, r25, r26
  lwz       r26, 0x60(r30)
  stwx      r3, r26, r27
  lwz       r27, 0x60(r30)
  stwx      r0, r27, r28
  lwz       r28, 0x60(r30)
  stwx      r3, r28, r29
  lwz       r29, 0x60(r30)
  stwx      r0, r29, r12
  lwz       r12, 0x60(r30)
  stwx      r3, r12, r11
  lwz       r11, 0x60(r30)
  stwx      r0, r11, r10
  lwz       r10, 0x60(r30)
  stwx      r3, r10, r9
  lwz       r9, 0x60(r30)
  stwx      r0, r9, r8
  lwz       r8, 0x60(r30)
  stwx      r3, r8, r7
  lwz       r7, 0x60(r30)
  stwx      r0, r7, r6
  bdnz+     .loc_0xA0

.loc_0x16C:
  sub       r0, r31, r5
  addi      r6, r30, 0x4
  mulli     r7, r5, 0x3C
  addi      r4, r30, 0x48
  mtctr     r0
  cmplw     r5, r31
  bge-      .loc_0x1A8

.loc_0x188:
  lwz       r5, 0x60(r30)
  addi      r3, r7, 0x2C
  addi      r0, r7, 0x28
  addi      r7, r7, 0x3C
  stwx      r6, r5, r3
  lwz       r3, 0x60(r30)
  stwx      r4, r3, r0
  bdnz+     .loc_0x188

.loc_0x1A8:
  lmw       r23, 0xC(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A48C
 * Size:	000030
 */
void JASBasicWaveBank::TWaveInfo::__ct(void)
{
/*
.loc_0x0:
  lis       r5, 0x804A
  lis       r4, 0x804A
  addi      r5, r5, 0x37BC
  li        r0, 0
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x37D0
  stw       r4, 0x0(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x30(r3)
  stw       r0, 0x34(r3)
  stw       r0, 0x38(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A4BC
 * Size:	00005C
 */
void JASBasicWaveBank::TWaveHandle::__dt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x44
  lis       r3, 0x804A
  addi      r0, r3, 0x37D0
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  addi      r0, r3, 0x37BC
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        -0x76448

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
 * Address:	8009A518
 * Size:	000048
 */
void JASWaveHandle::~JASWaveHandle()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r3
  beq-      .loc_0x30
  lis       r5, 0x804A
  extsh.    r0, r4
  addi      r0, r5, 0x37BC
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        -0x76490

.loc_0x30:
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
 * Address:	8009A560
 * Size:	000090
 */
void JASBasicWaveBank::TWaveGroup::setWaveInfo( (int, unsigned long, JASWaveInfo const &))
{
/*
.loc_0x0:
  mulli     r11, r4, 0x3C
  lwz       r7, 0x60(r3)
  lbz       r9, 0x0(r6)
  addi      r4, r3, 0x48
  lbz       r0, 0x1(r6)
  add       r7, r7, r11
  stw       r5, 0x30(r7)
  addi      r10, r11, 0x4
  lfs       f0, 0x4(r6)
  lwz       r5, 0x60(r3)
  lwz       r8, 0x8(r6)
  add       r10, r5, r10
  lwz       r7, 0xC(r6)
  stb       r9, 0x0(r10)
  lwz       r5, 0x10(r6)
  stb       r0, 0x1(r10)
  lwz       r0, 0x14(r6)
  stfs      f0, 0x4(r10)
  lwz       r9, 0x18(r6)
  stw       r8, 0x8(r10)
  lwz       r8, 0x1C(r6)
  stw       r7, 0xC(r10)
  lha       r7, 0x20(r6)
  stw       r5, 0x10(r10)
  lha       r5, 0x22(r6)
  stw       r0, 0x14(r10)
  lwz       r0, 0x24(r6)
  stw       r9, 0x18(r10)
  stw       r8, 0x1C(r10)
  sth       r7, 0x20(r10)
  sth       r5, 0x22(r10)
  stw       r0, 0x24(r10)
  lwz       r0, 0x60(r3)
  add       r3, r0, r11
  stw       r4, 0x28(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A5F0
 * Size:	0000A0
 */
void JASBasicWaveBank::TWaveGroup::onLoadDone(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r27, 0x1C(r1)
  mr        r27, r3
  lwz       r29, 0x5C(r3)
  addi      r3, r29, 0x4
  stw       r3, 0x8(r1)
  bl        0x55558
  li        r30, 0
  mr        r28, r30
  mr        r31, r30
  b         .loc_0x78

.loc_0x34:
  mr        r3, r27
  mr        r4, r30
  bl        0x14C
  lwz       r0, 0x60(r27)
  rlwinm    r4,r3,2,0,29
  lwz       r3, 0x1C(r29)
  add       r5, r0, r28
  stw       r31, 0x38(r5)
  lwzx      r0, r3, r4
  stw       r0, 0x34(r5)
  lwzx      r6, r3, r4
  cmplwi    r6, 0
  beq-      .loc_0x6C
  stw       r5, 0x38(r6)

.loc_0x6C:
  stwx      r5, r3, r4
  addi      r28, r28, 0x3C
  addi      r30, r30, 0x1

.loc_0x78:
  lwz       r0, 0x64(r27)
  cmplw     r30, r0
  blt+      .loc_0x34
  lwz       r3, 0x8(r1)
  bl        0x555CC
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A690
 * Size:	0000E8
 */
void JASBasicWaveBank::TWaveGroup::onEraseDone(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r30, 0x5C(r3)
  addi      r3, r30, 0x4
  stw       r3, 0x8(r1)
  bl        0x554AC
  li        r31, 0
  mr        r29, r31
  b         .loc_0xB4

.loc_0x3C:
  mr        r3, r28
  mr        r4, r31
  bl        .loc_0xE8
  lwz       r4, 0x1C(r30)
  rlwinm    r3,r3,2,0,29
  lwz       r0, 0x60(r28)
  lwzx      r5, r4, r3
  add       r0, r0, r29
  b         .loc_0xA4

.loc_0x60:
  cmplw     r5, r0
  bne-      .loc_0xA0
  lwz       r6, 0x38(r5)
  cmplwi    r6, 0
  bne-      .loc_0x80
  lwz       r0, 0x34(r5)
  stwx      r0, r4, r3
  b         .loc_0x88

.loc_0x80:
  lwz       r0, 0x34(r5)
  stw       r0, 0x34(r6)

.loc_0x88:
  lwz       r3, 0x34(r5)
  cmplwi    r3, 0
  beq-      .loc_0xAC
  lwz       r0, 0x38(r5)
  stw       r0, 0x38(r3)
  b         .loc_0xAC

.loc_0xA0:
  lwz       r5, 0x34(r5)

.loc_0xA4:
  cmplwi    r5, 0
  bne+      .loc_0x60

.loc_0xAC:
  addi      r29, r29, 0x3C
  addi      r31, r31, 0x1

.loc_0xB4:
  lwz       r0, 0x64(r28)
  cmplw     r31, r0
  blt+      .loc_0x3C
  lwz       r3, 0x8(r1)
  bl        0x554F0
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xE8:
*/
}

/*
 * --INFO--
 * Address:	8009A778
 * Size:	000014
 */
void JASBasicWaveBank::TWaveGroup::getWaveID( const(int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x3C
  lwz       r3, 0x60(r3)
  add       r3, r3, r0
  lwz       r3, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A78C
 * Size:	000008
 */
void JASBasicWaveBank::TWaveHandle::getWaveInfo( const
{
/*
.loc_0x0:
  addi      r3, r3, 0x4
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A794
 * Size:	000024
 */
void JASBasicWaveBank::TWaveHandle::getWavePtr( const
{
/*
.loc_0x0:
  lwz       r4, 0x2C(r3)
  lwz       r4, 0x38(r4)
  cmplwi    r4, 0
  bne-      .loc_0x18
  li        r3, 0
  blr       

.loc_0x18:
  lwz       r0, 0xC(r3)
  add       r3, r4, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8009A7B8
 * Size:	000024
 */
void JASBasicWaveBank::getWaveArc(int)
{
/*
.loc_0x0:
  lwz       r0, 0x28(r3)
  cmplw     r4, r0
  blt-      .loc_0x14
  li        r3, 0
  blr       

.loc_0x14:
  lwz       r3, 0x24(r3)
  rlwinm    r0,r4,2,0,29
  lwzx      r3, r3, r0
  blr
*/
}
