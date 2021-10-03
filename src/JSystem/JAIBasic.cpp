

/*
 * --INFO--
 * Address:	800AC158
 * Size:	00007C
 */
void JAIBasic::JAIBasic()
{
/*
.loc_0x0:
  lis       r4, 0x804A
  li        r5, 0
  addi      r4, r4, 0x6248
  li        r0, 0x2
  stw       r4, 0x0(r3)
  stw       r3, -0x7498(r13)
  lbz       r4, 0xE(r3)
  rlwimi    r4,r5,7,24,24
  stb       r4, 0xE(r3)
  lbz       r4, 0xE(r3)
  rlwimi    r4,r5,6,25,25
  stb       r4, 0xE(r3)
  lbz       r4, 0xE(r3)
  rlwimi    r4,r5,5,26,26
  stb       r4, 0xE(r3)
  lbz       r4, 0xE(r3)
  rlwimi    r4,r5,4,27,27
  stb       r4, 0xE(r3)
  lbz       r4, 0xE(r3)
  rlwimi    r4,r5,3,28,28
  stb       r4, 0xE(r3)
  stw       r5, 0x14(r3)
  stw       r5, 0x4(r3)
  stw       r5, 0x10(r3)
  stb       r0, 0xC(r3)
  stw       r5, 0x1C(r3)
  stw       r5, 0x8(r3)
  stw       r5, 0x18(r3)
  lwz       r0, -0x7548(r13)
  stw       r0, -0x7494(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC1D4
 * Size:	000020
 */
void JAIBasic::initDriver(JKRSolidHeap *, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2C0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC1F4
 * Size:	000020
 */
void JAIBasic::initInterface(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        .loc_0x20
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x20:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JAIBasic::bootDSP()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC214
 * Size:	0000C0
 */
void JAIBasic::initInterfaceMain()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0xC0
  mr        r3, r31
  bl        0x14C
  mr        r3, r31
  bl        0xF8
  mr        r3, r31
  bl        0x46C
  cmpwi     r3, 0
  beq-      .loc_0xAC
  lbz       r0, 0xE(r31)
  rlwinm.   r0,r0,25,31,31
  bne-      .loc_0x58
  lwz       r12, -0x7EB4(r13)
  cmplwi    r12, 0
  beq-      .loc_0x58
  mtctr     r12
  bctrl     

.loc_0x58:
  bl        0x1224
  bl        0x145C
  bl        0x46D0
  bl        0x1E28
  bl        0xB3D0
  lwz       r3, -0x7E7C(r13)
  lwz       r0, -0x7E80(r13)
  lwz       r4, -0x7E74(r13)
  rlwinm    r3,r3,0,24,31
  lwz       r6, -0x7E78(r13)
  rlwinm    r5,r0,0,24,31
  bl        0x40A8
  mr        r3, r31
  bl        0x298
  lwz       r12, -0x7DF8(r13)
  mtctr     r12
  bctrl     
  lbz       r0, 0xE(r31)
  rlwinm.   r0,r0,25,31,31
  bne-      .loc_0xAC
  bl        0x4E28

.loc_0xAC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xC0:
*/
}

/*
 * --INFO--
 * Address:	800AC2D4
 * Size:	00005C
 */
void JAIBasic::initHeap()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, -0x7444(r13)
  cmplwi    r0, 0
  beq-      .loc_0x40
  lwz       r4, -0x7548(r13)
  mr        r3, r0
  li        r5, 0
  bl        -0x87590
  stw       r3, 0x8(r31)
  lwz       r0, 0x8(r31)
  stw       r0, -0x7494(r13)
  b         .loc_0x48

.loc_0x40:
  lwz       r0, -0x7548(r13)
  stw       r0, -0x7494(r13)

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC330
 * Size:	00004C
 */
void JAIBasic::initArchive()
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  bl        0x4D60
  cmplwi    r3, 0
  bne-      .loc_0x3C
  addi      r3, r1, 0x8
  bl        0x4CDC
  lwz       r5, -0x7494(r13)
  addi      r3, r1, 0x8
  li        r4, 0x3
  li        r6, 0x1
  bl        -0x91230
  bl        0x4D30
  bl        0x4D34

.loc_0x3C:
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC37C
 * Size:	0000C8
 */
void JAIBasic::initResourcePath()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r0, -0x7E60(r13)
  cmplwi    r0, 0
  beq-      .loc_0xB4
  lwz       r3, -0x7E6C(r13)
  bl        0x1E574
  mr        r31, r3
  lwz       r3, -0x7E60(r13)
  bl        0x1E568
  mr        r4, r3
  addi      r0, r31, 0x1
  lwz       r3, -0x7548(r13)
  add       r4, r4, r0
  li        r5, 0
  bl        -0x88D80
  lwz       r5, -0x7E60(r13)
  mr        r31, r3
  lwz       r6, -0x7E6C(r13)
  subi      r4, r2, 0x7458
  li        r7, 0
  crclr     6, 0x6
  bl        0x1B05C
  stw       r31, -0x7E6C(r13)
  lwz       r3, -0x7E64(r13)
  bl        0x1E528
  mr        r31, r3
  lwz       r3, -0x7E60(r13)
  bl        0x1E51C
  mr        r4, r3
  addi      r0, r31, 0x1
  lwz       r3, -0x7548(r13)
  add       r4, r4, r0
  li        r5, 0
  bl        -0x88DCC
  lwz       r5, -0x7E60(r13)
  mr        r31, r3
  lwz       r6, -0x7E64(r13)
  subi      r4, r2, 0x7458
  li        r7, 0
  crclr     6, 0x6
  bl        0x1B010
  stw       r31, -0x7E64(r13)

.loc_0xB4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC444
 * Size:	000034
 */
void JAIBasic::setCameraInfo(Vec *, Vec *, float (*) [4], unsigned long)
{
/*
.loc_0x0:
  lwz       r0, -0x7E2C(r13)
  cmplw     r0, r7
  blelr-    
  mulli     r8, r7, 0xC
  lwz       r7, 0x4(r3)
  stwx      r4, r7, r8
  lwz       r0, 0x4(r3)
  add       r4, r0, r8
  stw       r5, 0x4(r4)
  lwz       r0, 0x4(r3)
  add       r3, r0, r8
  stw       r6, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC478
 * Size:	000028
 */
void JAIBasic::setRegisterTrackCallback()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x800B
  stw       r0, 0x14(r1)
  subi      r3, r3, 0x34E4
  bl        -0x9D40
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC4A0
 * Size:	000098
 */
void JAIBasic::initAudioThread(JKRSolidHeap *, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  li        r4, 0x2000
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r3, r0
  bl        -0x5224
  bl        0x26444
  mr        r4, r31
  bl        -0x5108
  lwz       r3, -0x7E28(r13)
  bl        -0x9D88
  lbz       r3, -0x7E9E(r13)
  li        r4, 0x80
  li        r5, 0x1000
  bl        -0x5B58
  lbz       r3, -0x7E9F(r13)
  bl        -0x696C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f1, -0x7E58(r13)
  lfs       f2, -0x7E54(r13)
  bl        -0x7CBC
  li        r0, 0
  stb       r0, -0x7EA8(r13)
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
 * Address:	800AC538
 * Size:	000158
 */
void JAIBasic::initCamera()
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  li        r5, 0x20
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r31, -0x7E2C(r13)
  lwz       r4, -0x7494(r13)
  mulli     r3, r31, 0xC
  addi      r3, r3, 0x10
  bl        -0x8851C
  lis       r4, 0x800B
  mr        r7, r31
  subi      r4, r4, 0x3970
  li        r5, 0
  li        r6, 0xC
  bl        0x15474
  stw       r3, 0x4(r30)
  lwz       r3, 0x4(r30)
  lwz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne-      .loc_0x140
  lis       r3, 0x8051
  lfs       f4, -0x7450(r2)
  addi      r31, r3, 0x21B0
  lfs       f0, -0x744C(r2)
  lwz       r5, 0x0(r31)
  lis       r3, 0x8051
  lis       r4, 0x804A
  lfs       f3, -0x7448(r2)
  stfs      f4, 0x0(r5)
  addi      r3, r3, 0x222C
  addi      r5, r1, 0x14
  addi      r6, r1, 0x8
  lwz       r7, 0x0(r31)
  stfs      f4, 0x4(r7)
  lwz       r7, 0x0(r31)
  stfs      f0, 0x8(r7)
  lwz       r7, 0x4(r31)
  stfs      f4, 0x0(r7)
  lwz       r7, 0x4(r31)
  stfs      f4, 0x4(r7)
  lwz       r7, 0x4(r31)
  stfs      f0, 0x8(r7)
  lfsu      f2, 0x6270(r4)
  stfs      f4, 0x14(r1)
  lfs       f1, 0x4(r4)
  lfs       f0, 0x8(r4)
  lwz       r4, 0x0(r31)
  stfs      f3, 0x18(r1)
  stfs      f4, 0x1C(r1)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        0x3E2E4
  lis       r4, 0x8051
  lis       r3, 0x8051
  addi      r6, r4, 0x21B0
  li        r10, 0
  addi      r4, r3, 0x222C
  li        r9, 0
  b         .loc_0x134

.loc_0xFC:
  cmplw     r0, r10
  lwz       r8, 0x4(r31)
  lwz       r7, 0x0(r6)
  ble-      .loc_0x12C
  lwz       r5, 0x4(r30)
  addi      r3, r9, 0x4
  addi      r0, r9, 0x8
  stwx      r7, r5, r9
  lwz       r5, 0x4(r30)
  stwx      r8, r5, r3
  lwz       r3, 0x4(r30)
  stwx      r4, r3, r0

.loc_0x12C:
  addi      r9, r9, 0xC
  addi      r10, r10, 0x1

.loc_0x134:
  lwz       r0, -0x7E2C(r13)
  cmplw     r10, r0
  blt+      .loc_0xFC

.loc_0x140:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC690
 * Size:	000014
 */
void JAInter::Camera::__defctor(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC6A4
 * Size:	000008
 */
void JAIBasic::setInitFileLoadSwitch(unsigned char)
{
/*
.loc_0x0:
  stb       r4, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC6AC
 * Size:	00006C
 */
void JAIBasic::initReadFile()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0xC(r3)
  cmpwi     r0, 0x3
  beq-      .loc_0x58
  bge-      .loc_0x28
  cmpwi     r0, 0x2
  bge-      .loc_0x34
  b         .loc_0x58

.loc_0x28:
  cmpwi     r0, 0x5
  bge-      .loc_0x58
  b         .loc_0x48

.loc_0x34:
  bl        0x14D4
  cmpwi     r3, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0x5C

.loc_0x48:
  lwz       r0, -0x7438(r13)
  cmplwi    r0, 0
  beq-      .loc_0x58
  bl        0x1598

.loc_0x58:
  li        r3, 0x1

.loc_0x5C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC718
 * Size:	000064
 */
void JAIBasic::processFrameWork()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, -0x7EA8(r13)
  cmplwi    r0, 0x2
  bge-      .loc_0x44
  bl        0xE9C
  lwz       r12, -0x7EB0(r13)
  cmplwi    r12, 0
  beq-      .loc_0x38
  mtctr     r12
  bctrl     

.loc_0x38:
  bl        0x1E7C
  bl        0x4958
  bl        0xC244

.loc_0x44:
  lwz       r3, 0x10(r31)
  addi      r0, r3, 0x1
  stw       r0, 0x10(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC77C
 * Size:	000064
 */
void JAIBasic::startSoundBasic(unsigned long, JAISound **, JAInter::Actor *, unsigned long, unsigned char, JAInter::SoundInfo *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r11,r4,0,0,1
  stw       r0, 0x14(r1)
  lis       r0, 0xC000
  cmpw      r11, r0
  beq-      .loc_0x50
  bge-      .loc_0x34
  lis       r10, 0x8000
  addi      r0, r10, 0x1
  cmpw      r11, r0
  bge-      .loc_0x54
  b         .loc_0x40

.loc_0x34:
  cmpwi     r11, 0
  beq-      .loc_0x48
  b         .loc_0x54

.loc_0x40:
  bl        .loc_0x64
  b         .loc_0x54

.loc_0x48:
  bl        0xA0
  b         .loc_0x54

.loc_0x50:
  bl        0xFC

.loc_0x54:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x64:
*/
}

/*
 * --INFO--
 * Address:	800AC7E0
 * Size:	000084
 */
void JAIBasic::startSoundBasic(unsigned long, JAISequence **, JAInter::Actor *, unsigned long, unsigned char, JAInter::SoundInfo *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r10, r4
  stw       r0, 0x14(r1)
  lbz       r0, 0xE(r3)
  rlwinm    r0,r0,26,31,31
  cmplwi    r0, 0x1
  beq-      .loc_0x74
  lwz       r3, -0x7420(r13)
  cmplwi    r3, 0
  beq-      .loc_0x40
  lwz       r3, 0x20(r3)
  rlwinm    r0,r10,0,22,31
  rlwinm    r3,r3,0,22,31
  cmplw     r3, r0
  beq-      .loc_0x74

.loc_0x40:
  cmplwi    r5, 0
  bne-      .loc_0x58
  lbz       r0, 0x5(r9)
  lwz       r3, -0x73F4(r13)
  rlwinm    r0,r0,2,0,29
  add       r5, r3, r0

.loc_0x58:
  mr        r3, r5
  mr        r4, r6
  mr        r5, r10
  mr        r6, r7
  mr        r7, r8
  mr        r8, r9
  bl        0x6648

.loc_0x74:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC864
 * Size:	000064
 */
void JAIBasic::startSoundBasic(unsigned long, JAISe **, JAInter::Actor *, unsigned long, unsigned char, JAInter::SoundInfo *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r10, r4
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,20,12,31
  lwz       r3, -0x7410(r13)
  lbzx      r0, r3, r0
  cmplwi    r0, 0
  bne-      .loc_0x44
  mr        r3, r5
  mr        r4, r6
  mr        r5, r10
  mr        r6, r7
  mr        r7, r8
  mr        r8, r9
  bl        0x3184
  b         .loc_0x54

.loc_0x44:
  cmplwi    r5, 0
  beq-      .loc_0x54
  li        r0, 0
  stw       r0, 0x0(r5)

.loc_0x54:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800AC8C8
 * Size:	000058
 */
void JAIBasic::startSoundBasic(unsigned long, JAIStream **, JAInter::Actor *, unsigned long, unsigned char, JAInter::SoundInfo *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r10, r4
  stw       r0, 0x14(r1)
  lbz       r0, 0xE(r3)
  rlwinm    r0,r0,27,31,31
  cmplwi    r0, 0x1
  beq-      .loc_0x48
  lbz       r0, -0x73C0(r13)
  rlwinm.   r0,r0,26,31,31
  bne-      .loc_0x48
  mr        r3, r5
  mr        r4, r6
  mr        r5, r10
  mr        r6, r7
  mr        r7, r8
  mr        r8, r9
  bl        0xB05C

.loc_0x48:
  lwz       r0, 0x14(r1)
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
void JAIBasic::getPlayingSoundHandle(JAISound **, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC920
 * Size:	000088
 */
void JAIBasic::stopSoundHandle(JAISound *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  beq-      .loc_0x78
  lwz       r3, 0x20(r4)
  lis       r0, 0xC000
  rlwinm    r6,r3,0,0,1
  cmpw      r6, r0
  beq-      .loc_0x6C
  bge-      .loc_0x40
  lis       r3, 0x8000
  addi      r0, r3, 0x1
  cmpw      r6, r0
  bge-      .loc_0x78
  b         .loc_0x4C

.loc_0x40:
  cmpwi     r6, 0
  beq-      .loc_0x5C
  b         .loc_0x78

.loc_0x4C:
  mr        r3, r4
  mr        r4, r5
  bl        0x6CDC
  b         .loc_0x78

.loc_0x5C:
  mr        r3, r4
  mr        r4, r5
  bl        0x37AC
  b         .loc_0x78

.loc_0x6C:
  mr        r3, r4
  mr        r4, r5
  bl        0xB32C

.loc_0x78:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void JAIBasic::stopPlayingObjectSe(void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JAIBasic::stopPlayingIDObjectSe(unsigned long, void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAIBasic::stopPlayingCategorySe(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JAIBasic::stopPlayingCategoryObjectSe(unsigned char, void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JAIBasic::stopAllSe(void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AC9A8
 * Size:	0000AC
 */
void JAIBasic::stopAllSe(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,3,21,28
  stw       r31, 0xC(r1)
  lwz       r3, -0x7424(r13)
  add       r3, r3, r0
  lwz       r3, 0x4(r3)
  lwz       r31, 0x0(r3)
  b         .loc_0x90

.loc_0x28:
  lwz       r3, 0x0(r31)
  lwz       r31, 0xC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x90
  lwz       r4, 0x20(r3)
  lis       r0, 0xC000
  rlwinm    r5,r4,0,0,1
  cmpw      r5, r0
  beq-      .loc_0x88
  bge-      .loc_0x64
  lis       r4, 0x8000
  addi      r0, r4, 0x1
  cmpw      r5, r0
  bge-      .loc_0x90
  b         .loc_0x70

.loc_0x64:
  cmpwi     r5, 0
  beq-      .loc_0x7C
  b         .loc_0x90

.loc_0x70:
  li        r4, 0
  bl        0x6C34
  b         .loc_0x90

.loc_0x7C:
  li        r4, 0
  bl        0x3708
  b         .loc_0x90

.loc_0x88:
  li        r4, 0
  bl        0xB28C

.loc_0x90:
  cmplwi    r31, 0
  bne+      .loc_0x28
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
 * Size:	000070
 */
void JAIBasic::stopAllSe(unsigned char, void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JAIBasic::stopAllSeq(void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JAIBasic::stopActorSoundOneBuffer(void *, JSULink<JAISound> *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void JAIBasic::stopIDSoundOneBuffer(unsigned long, JSULink<JAISound> *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JAIBasic::stopIDActorSoundOneBuffer(unsigned long, void *, JSULink<JAISound> *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void JAIBasic::stopAllSound(void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void JAIBasic::getPlayingSoundLinkHeadPointer(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void JAIBasic::stopAllSound(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000204
 */
void JAIBasic::stopAllSound(unsigned long, void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void JAIBasic::deleteObject(void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JAIBasic::setPauseFlagAll(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void JAIBasic::changeSoundScene(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACA54
 * Size:	000020
 */
void JAIStream::stop(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0xB260
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACA74
 * Size:	000020
 */
void JAISequence::stop(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x6BD0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACA94
 * Size:	000010
 */
void JAIBasic::getMapInfoFxline(unsigned long)
{
/*
.loc_0x0:
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACAA4
 * Size:	000010
 */
void JAIBasic::getMapInfoGround(unsigned long)
{
/*
.loc_0x0:
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r3,r0,1,31,31
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACAB4
 * Size:	000018
 */
void JAIBasic::getMapInfoFxParameter(unsigned long)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  bne-      .loc_0x10
  lfs       f1, -0x7450(r2)
  blr       

.loc_0x10:
  lfs       f1, -0x7448(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACACC
 * Size:	000050
 */
void JAIBasic::getSoundOffsetNumberFromID(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  bl        0xAAF8
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x34
  mr        r3, r31
  bl        0xAA24
  lhz       r3, 0x6(r3)
  b         .loc_0x3C

.loc_0x34:
  rlwinm    r0,r31,0,22,31
  mr        r3, r0

.loc_0x3C:
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
 * Size:	00004C
 */
void JAIBasic::setSeCancelSwitch(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JAIBasic::setSeCategoryVolume(unsigned char, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACB1C
 * Size:	0001DC
 */
void JAIBasic::setParameterSeqSync(JASTrack *, unsigned short)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r4,0,16,31
  cmpwi     r0, 0x1
  stmw      r26, 0x8(r1)
  mr        r29, r3
  li        r30, 0
  beq-      .loc_0x124
  bge-      .loc_0x34
  cmpwi     r0, 0
  bge-      .loc_0x40
  b         .loc_0x1C4

.loc_0x34:
  cmpwi     r0, 0x7F
  beq-      .loc_0x1B8
  b         .loc_0x1C4

.loc_0x40:
  rlwinm    r31,r0,0,31,31
  li        r26, 0
  b         .loc_0x114

.loc_0x4C:
  mr        r3, r26
  bl        0x6CBC
  lwz       r0, 0x48(r3)
  cmplwi    r0, 0
  beq-      .loc_0x110
  mr        r3, r26
  bl        0x6CA8
  lwz       r4, 0x48(r3)
  mr        r3, r26
  addi      r28, r4, 0x30C
  bl        0x6C98
  lwz       r3, 0x48(r3)
  lwz       r0, 0x20(r3)
  rlwinm.   r0,r0,0,20,20
  beq-      .loc_0x94
  lwz       r3, 0x2F8(r29)
  lwz       r27, 0x2F8(r3)
  b         .loc_0x98

.loc_0x94:
  lwz       r27, 0x2F8(r29)

.loc_0x98:
  cmplw     r28, r27
  bne-      .loc_0x110
  lwz       r3, 0x348(r29)
  bl        0x80C
  mr        r0, r3
  mr        r3, r26
  mr        r28, r0
  bl        0x6C58
  lwz       r3, 0x48(r3)
  lwz       r3, 0x20(r3)
  bl        0xA93C
  lwz       r0, 0x0(r3)
  mr        r3, r26
  rlwinm    r0,r0,24,16,31
  mr        r30, r0
  bl        0x6C38
  mr        r4, r27
  mr        r5, r28
  mr        r6, r30
  mr        r7, r31
  bl        0xC560
  mr        r3, r26
  bl        0x6C1C
  li        r0, 0x1
  lwz       r4, 0x4(r3)
  slw       r0, r0, r28
  li        r30, 0
  or        r0, r4, r0
  stw       r0, 0x4(r3)
  lwz       r26, -0x7E88(r13)

.loc_0x110:
  addi      r26, r26, 0x1

.loc_0x114:
  lwz       r0, -0x7E88(r13)
  cmplw     r26, r0
  blt+      .loc_0x4C
  b         .loc_0x1C4

.loc_0x124:
  lwz       r0, 0x348(r29)
  li        r4, 0x1
  lwz       r28, 0x33C(r29)
  rlwinm    r0,r0,0,24,31
  lwz       r29, -0x7430(r13)
  mulli     r31, r0, 0x18
  mr        r3, r28
  add       r5, r29, r31
  lfs       f1, 0x4(r5)
  bl        -0x107C4
  add       r4, r29, r31
  mr        r3, r28
  lfs       f1, 0x10(r4)
  li        r4, 0x8
  bl        -0x107D8
  add       r4, r29, r31
  mr        r3, r28
  lfs       f1, 0x8(r4)
  li        r4, 0x2
  bl        -0x107EC
  add       r4, r29, r31
  mr        r3, r28
  lfs       f1, 0xC(r4)
  li        r4, 0x4
  bl        -0x10800
  lwz       r5, -0x7498(r13)
  mr        r3, r28
  li        r4, 0x10
  lbz       r0, 0xD(r5)
  cmplwi    r0, 0x2
  beq-      .loc_0x1A8
  lfs       f1, -0x7450(r2)
  b         .loc_0x1B0

.loc_0x1A8:
  add       r5, r29, r31
  lfs       f1, 0x14(r5)

.loc_0x1B0:
  bl        -0x1082C
  b         .loc_0x1C4

.loc_0x1B8:
  lbz       r5, -0x741C(r13)
  li        r4, 0
  bl        -0xAB50

.loc_0x1C4:
  mr        r3, r30
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACCF8
 * Size:	000104
 */
void JAIBasic::setSeExtParameter(JAISound *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr.       r30, r4
  beq-      .loc_0xEC
  lwz       r3, 0x20(r30)
  bl        0xA8C4
  rlwinm.   r0,r3,0,29,29
  rlwinm    r31,r3,0,24,31
  beq-      .loc_0x74
  lwz       r4, 0x44(r30)
  lis       r0, 0x4330
  mr        r3, r30
  stw       r0, 0x8(r1)
  lbz       r0, 0xC(r4)
  li        r4, 0
  lwz       r12, 0x10(r30)
  li        r5, 0x1
  stw       r0, 0xC(r1)
  lfd       f2, -0x7440(r2)
  lfd       f1, 0x8(r1)
  lfs       f0, -0x7444(r2)
  fsubs     f1, f1, f2
  lwz       r12, 0x1C(r12)
  fdivs     f1, f1, f0
  mtctr     r12
  bctrl     

.loc_0x74:
  rlwinm.   r0,r31,0,28,28
  beq-      .loc_0xC0
  lwz       r4, 0x44(r30)
  lis       r0, 0x4330
  mr        r3, r30
  stw       r0, 0x8(r1)
  lbz       r0, 0xD(r4)
  li        r4, 0
  lwz       r12, 0x10(r30)
  li        r5, 0x1
  stw       r0, 0xC(r1)
  lfd       f2, -0x7440(r2)
  lfd       f1, 0x8(r1)
  lfs       f0, -0x7444(r2)
  fsubs     f1, f1, f2
  lwz       r12, 0x34(r12)
  fdivs     f1, f1, f0
  mtctr     r12
  bctrl     

.loc_0xC0:
  rlwinm.   r0,r31,0,30,30
  beq-      .loc_0xEC
  mr        r3, r30
  lwz       r5, 0x44(r30)
  lwz       r12, 0x10(r30)
  li        r4, 0
  lfs       f1, 0x8(r5)
  li        r5, 0x1
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0xEC:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACDFC
 * Size:	000070
 */
void JAIBasic::makeSequence()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x8(r3)
  cmplwi    r4, 0
  beq-      .loc_0x3C
  li        r3, 0x6A0
  li        r5, 0
  bl        -0x88EDC
  mr.       r0, r3
  beq-      .loc_0x34
  bl        0x6A10
  mr        r0, r3

.loc_0x34:
  mr        r3, r0
  b         .loc_0x60

.loc_0x3C:
  lwz       r4, -0x7548(r13)
  li        r3, 0x6A0
  li        r5, 0
  bl        -0x88F04
  mr.       r0, r3
  beq-      .loc_0x5C
  bl        0x69E8
  mr        r0, r3

.loc_0x5C:
  mr        r3, r0

.loc_0x60:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACE6C
 * Size:	000070
 */
void JAIBasic::makeSe()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x8(r3)
  cmplwi    r4, 0
  beq-      .loc_0x3C
  li        r3, 0x484
  li        r5, 0
  bl        -0x88F4C
  mr.       r0, r3
  beq-      .loc_0x34
  bl        0x6A8C
  mr        r0, r3

.loc_0x34:
  mr        r3, r0
  b         .loc_0x60

.loc_0x3C:
  lwz       r4, -0x7548(r13)
  li        r3, 0x484
  li        r5, 0
  bl        -0x88F74
  mr.       r0, r3
  beq-      .loc_0x5C
  bl        0x6A64
  mr        r0, r3

.loc_0x5C:
  mr        r3, r0

.loc_0x60:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800ACEDC
 * Size:	000070
 */
void JAIBasic::makeStream()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x8(r3)
  cmplwi    r4, 0
  beq-      .loc_0x3C
  li        r3, 0x1D8
  li        r5, 0
  bl        -0x88FBC
  mr.       r0, r3
  beq-      .loc_0x34
  bl        0x6B70
  mr        r0, r3

.loc_0x34:
  mr        r3, r0
  b         .loc_0x60

.loc_0x3C:
  lwz       r4, -0x7548(r13)
  li        r3, 0x1D8
  li        r5, 0
  bl        -0x88FE4
  mr.       r0, r3
  beq-      .loc_0x5C
  bl        0x6B48
  mr        r0, r3

.loc_0x5C:
  mr        r3, r0

.loc_0x60:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIBasic::allocStreamBuffer(void *, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JAIBasic::deallocStreamBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ACF4C
 * Size:	0000DC
 */
void JAIBasic::stopAudio(unsigned long, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lbz       r0, -0x7EA8(r13)
  cmplwi    r0, 0
  bne-      .loc_0xC8
  cmplwi    r31, 0x5
  bge-      .loc_0x2C
  li        r31, 0x5

.loc_0x2C:
  lwz       r3, -0x7498(r13)
  li        r0, 0x1
  lwz       r3, 0x10(r3)
  add       r3, r3, r31
  stb       r4, -0x7490(r13)
  stw       r3, -0x748C(r13)
  stb       r0, -0x7EA8(r13)
  bl        -0x867C
  stfs      f1, -0x7488(r13)
  bl        -0x86B4
  stfs      f1, -0x7484(r13)
  bl        -0x4DAC
  subi      r4, r31, 0x8
  lis       r0, 0x4330
  mullw     r3, r4, r3
  stw       r0, 0x8(r1)
  lfd       f2, -0x7440(r2)
  lfs       f0, -0x7488(r13)
  stw       r3, 0xC(r1)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fdivs     f0, f0, f1
  stfs      f0, -0x747C(r13)
  bl        -0x4DDC
  subi      r4, r31, 0x8
  lis       r0, 0x4330
  mullw     r5, r4, r3
  lis       r3, 0x800B
  stw       r0, 0x10(r1)
  li        r4, 0
  lfd       f2, -0x7440(r2)
  subi      r3, r3, 0x2FA4
  stw       r5, 0x14(r1)
  lfs       f0, -0x7484(r13)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fdivs     f0, f0, f1
  stfs      f0, -0x7480(r13)
  bl        -0x8638

.loc_0xC8:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	800AD028
 * Size:	000034
 */
void JAIBasic::checkAudioStopStatus()
{
/*
.loc_0x0:
  lbz       r0, -0x7EA8(r13)
  cmpwi     r0, 0x3
  beq-      .loc_0x24
  bge-      .loc_0x2C
  cmpwi     r0, 0x1
  bge-      .loc_0x1C
  b         .loc_0x2C

.loc_0x1C:
  li        r3, 0x1
  blr       

.loc_0x24:
  li        r3, 0x2
  blr       

.loc_0x2C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JAIBasic::resumeAudio()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800AD05C
 * Size:	000168
 */
void JAIBasic::stopCallBack(void *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r3, -0x7498(r13)
  lwz       r4, -0x748C(r13)
  lwz       r3, 0x10(r3)
  cmplw     r4, r3
  bne-      .loc_0x44
  lbz       r0, -0x7490(r13)
  li        r3, 0x3
  stb       r3, -0x7EA8(r13)
  cmplwi    r0, 0
  beq-      .loc_0x3C
  bl        -0x7498

.loc_0x3C:
  li        r3, -0x1
  b         .loc_0x154

.loc_0x44:
  subi      r0, r4, 0x4
  cmplw     r0, r3
  bne-      .loc_0x104
  lbz       r0, -0x7EA8(r13)
  cmplwi    r0, 0x1
  bne-      .loc_0x150
  li        r31, 0

.loc_0x60:
  mr        r3, r31
  bl        -0x7DC0
  lwz       r0, 0x0(r3)
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x78
  bl        -0x853C

.loc_0x78:
  addi      r31, r31, 0x1
  cmplwi    r31, 0x40
  blt+      .loc_0x60
  bl        0x7D0
  li        r31, 0
  b         .loc_0xC8

.loc_0x90:
  mr        r3, r31
  bl        0x6738
  lwz       r0, 0x48(r3)
  cmplwi    r0, 0
  beq-      .loc_0xC4
  mr        r3, r31
  bl        0x6724
  lwz       r3, 0x48(r3)
  li        r4, 0
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0xC4:
  addi      r31, r31, 0x1

.loc_0xC8:
  bl        0x9A8
  cmplw     r31, r3
  blt+      .loc_0x90
  lwz       r3, -0x73B8(r13)
  lwz       r3, 0x1C(r3)
  cmplwi    r3, 0
  beq-      .loc_0xF8
  lwz       r12, 0x10(r3)
  li        r4, 0
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0xF8:
  li        r0, 0x2
  stb       r0, -0x7EA8(r13)
  b         .loc_0x150

.loc_0x104:
  lbz       r0, -0x7EA8(r13)
  cmplwi    r0, 0x1
  bne-      .loc_0x150
  bl        -0x8854
  lfs       f2, -0x747C(r13)
  lfs       f0, -0x7450(r2)
  fsubs     f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x12C
  fmr       f1, f0

.loc_0x12C:
  bl        -0x88D0
  bl        -0x88A4
  lfs       f2, -0x7480(r13)
  lfs       f0, -0x7450(r2)
  fsubs     f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x14C
  fmr       f1, f0

.loc_0x14C:
  bl        -0x8914

.loc_0x150:
  li        r3, 0

.loc_0x154:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
