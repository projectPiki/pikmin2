

/*
 * --INFO--
 * Address:	80006220
 * Size:	0000CC
 */
void createObject_PARTICLE_JPA___Q217JStudio_JParticle21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectP17JPAEmitterManagerPCQ26JStage7TSystem(void)
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
  li        r3, 0x1A8
  bl        0x1DC58
  mr.       r31, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  bl        -0xBA0
  mr        r31, r3

.loc_0x48:
  cmplwi    r31, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xAC

.loc_0x58:
  li        r3, 0x38
  bl        0x1DC28
  mr.       r30, r3
  beq-      .loc_0x78
  mr        r4, r28
  mr        r5, r31
  bl        0x8AE0
  mr        r30, r3

.loc_0x78:
  cmplwi    r30, 0
  bne-      .loc_0x88
  li        r30, 0
  b         .loc_0xA8

.loc_0x88:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA8
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r30

.loc_0xAC:
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
 * Address:	800062EC
 * Size:	000060
 */
void JStudio_JParticle::TCreateObject::__dt(void)
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
  lis       r5, 0x804A
  li        r4, 0
  subi      r0, r5, 0x1D28
  stw       r0, 0x0(r30)
  bl        0x699C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0x1DD88

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
 * Address:	8000634C
 * Size:	000078
 */
void JStudio_JParticle::TCreateObject::create( (JStudio::TObject **, JStudio::stb::data::TParse_TBlock_object const &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r7, 0x0(r5)
  lis       r6, 0x4A50
  stw       r0, 0x14(r1)
  addi      r0, r6, 0x5443
  mr        r6, r3
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r3, 0x4(r7)
  cmpw      r3, r0
  beq-      .loc_0x34
  b         .loc_0x40

.loc_0x34:
  lis       r3, 0x8000
  addi      r12, r3, 0x6220
  b         .loc_0x48

.loc_0x40:
  li        r3, 0
  b         .loc_0x64

.loc_0x48:
  mr        r3, r5
  lwz       r4, 0xC(r6)
  lwz       r5, 0x10(r6)
  mtctr     r12
  bctrl     
  stw       r3, 0x0(r31)
  li        r3, 0x1

.loc_0x64:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800083A4
 * Size:	000044
 */
void JMessage::TControl::__ct(void)
{
/*
.loc_0x0:
  lis       r5, 0x804A
  lis       r4, 0x1
  subi      r0, r5, 0x1BA8
  li        r5, 0
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x1
  stw       r5, 0x4(r3)
  stw       r5, 0x8(r3)
  sth       r0, 0xC(r3)
  sth       r0, 0xE(r3)
  stw       r5, 0x10(r3)
  stw       r5, 0x14(r3)
  stw       r5, 0x18(r3)
  stw       r5, 0x1C(r3)
  stw       r5, 0x20(r3)
  stw       r5, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800083E8
 * Size:	000048
 */
void JMessage::TControl::__dt(void)
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
  subi      r0, r5, 0x1BA8
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        0x1BCA0

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
 * Address:	80008430
 * Size:	000068
 */
void JMessage::TControl::reset(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x1C(r3)
  stw       r0, 0x20(r3)
  stw       r0, 0x24(r3)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x40
  li        r4, 0
  bl        -0x1314

.loc_0x40:
  lwz       r3, 0x8(r31)
  cmplwi    r3, 0
  beq-      .loc_0x54
  li        r4, 0
  bl        -0x1328

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80008498
 * Size:	000088
 */
void JMessage::TControl::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0
  lwz       r0, 0x18(r31)
  cmplwi    r0, 0
  beq-      .loc_0x34
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  beq-      .loc_0x34
  li        r3, 0x1

.loc_0x34:
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x44
  li        r3, 0
  b         .loc_0x74

.loc_0x44:
  lwz       r3, 0x4(r31)
  li        r4, 0
  bl        -0xC60
  stw       r3, 0x1C(r31)
  lwz       r0, 0x1C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x70
  li        r0, 0
  li        r3, 0
  stw       r0, 0x18(r31)
  b         .loc_0x74

.loc_0x70:
  li        r3, 0x1

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
 * Address:	80008520
 * Size:	00015C
 */
void JMessage::TControl::render(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r3, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  lwz       r28, 0x20(r31)
  cmplwi    r28, 0
  beq-      .loc_0x40
  lwz       r0, 0x8(r31)
  cmplwi    r0, 0
  beq-      .loc_0x40
  li        r3, 0x1

.loc_0x40:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x13C
  lwz       r30, 0x8(r31)
  mr        r4, r28
  lwz       r29, 0x14(r31)
  lwz       r0, 0x10(r31)
  mr        r3, r30
  stw       r0, 0x8(r30)
  bl        -0x1428
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  mr        r5, r28
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r31)
  addi      r5, r31, 0x28
  lwz       r0, 0x24(r31)
  addi      r6, r3, 0x14
  stw       r0, 0x10(r3)
  lwz       r0, 0x24(r31)
  rlwinm    r0,r0,2,0,29
  add       r3, r31, r0
  addi      r4, r3, 0x28
  addi      r3, r4, 0x3
  sub       r3, r3, r5
  cmplw     r5, r4
  rlwinm    r3,r3,30,2,31
  bge-      .loc_0x130
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0x118

.loc_0xC4:
  lwz       r0, 0x0(r5)
  stw       r0, 0x0(r6)
  lwz       r0, 0x4(r5)
  stw       r0, 0x4(r6)
  lwz       r0, 0x8(r5)
  stw       r0, 0x8(r6)
  lwz       r0, 0xC(r5)
  stw       r0, 0xC(r6)
  lwz       r0, 0x10(r5)
  stw       r0, 0x10(r6)
  lwz       r0, 0x14(r5)
  stw       r0, 0x14(r6)
  lwz       r0, 0x18(r5)
  stw       r0, 0x18(r6)
  lwz       r0, 0x1C(r5)
  addi      r5, r5, 0x20
  stw       r0, 0x1C(r6)
  addi      r6, r6, 0x20
  bdnz+     .loc_0xC4
  andi.     r3, r3, 0x7
  beq-      .loc_0x130

.loc_0x118:
  mtctr     r3

.loc_0x11C:
  lwz       r0, 0x0(r5)
  addi      r5, r5, 0x4
  stw       r0, 0x0(r6)
  addi      r6, r6, 0x4
  bdnz+     .loc_0x11C

.loc_0x130:
  lwz       r3, 0x8(r31)
  lwz       r4, 0x1C(r31)
  bl        -0x500

.loc_0x13C:
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
 * Address:	8000867C
 * Size:	0000DC
 */
void JMessage::TControl::setMessageCode( (unsigned short, unsigned short))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  mr        r6, r5
  stw       r0, 0x24(r1)
  mr        r0, r4
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r4, 0x4(r3)
  cmplwi    r4, 0
  beq-      .loc_0x38
  b         .loc_0x3C

.loc_0x38:
  lwz       r4, 0x8(r28)

.loc_0x3C:
  mr        r3, r28
  mr        r5, r0
  bl        0x194
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xBC

.loc_0x58:
  lwz       r29, 0x18(r28)
  li        r3, 0
  cmplwi    r29, 0
  beq-      .loc_0x78
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x78
  li        r3, 0x1

.loc_0x78:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB8
  lwz       r31, 0x4(r28)
  mr        r4, r29
  lwz       r30, 0x14(r28)
  lwz       r0, 0x10(r28)
  mr        r3, r31
  stw       r0, 0x8(r31)
  bl        -0x15BC
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  mr        r5, r29
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0xB8:
  li        r3, 0x1

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
 * Address:	80008758
 * Size:	0000FC
 */
void JMessage::TControl::setMessageID( (unsigned long, unsigned long, bool *))
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
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  beq-      .loc_0x30
  b         .loc_0x34

.loc_0x30:
  lwz       r30, 0x8(r28)

.loc_0x34:
  mr        r3, r30
  bl        -0x17AC
  mr        r6, r3
  addis     r0, r6, 0x1
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x54
  li        r3, 0
  b         .loc_0xDC

.loc_0x54:
  rlwinm    r5,r6,16,16,31
  mr        r3, r28
  mr        r4, r30
  rlwinm    r6,r6,0,16,31
  bl        .loc_0xFC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x78
  li        r3, 0
  b         .loc_0xDC

.loc_0x78:
  lwz       r29, 0x18(r28)
  li        r3, 0
  cmplwi    r29, 0
  beq-      .loc_0x98
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  beq-      .loc_0x98
  li        r3, 0x1

.loc_0x98:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD8
  lwz       r31, 0x4(r28)
  mr        r4, r29
  lwz       r30, 0x14(r28)
  lwz       r0, 0x10(r28)
  mr        r3, r31
  stw       r0, 0x8(r31)
  bl        -0x16B8
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  mr        r5, r29
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     

.loc_0xD8:
  li        r3, 0x1

.loc_0xDC:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xFC:
*/
}

/*
 * --INFO--
 * Address:	80008854
 * Size:	0000E8
 */
void JMessage::TControl::setMessageCode_inSequence_( (JMessage::TProcessor const *, unsigned short, unsigned short))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r4
  mr        r3, r28
  mr        r4, r29
  bl        -0x1924
  cmplwi    r3, 0
  bne-      .loc_0x48
  li        r3, 0
  b         .loc_0x74

.loc_0x48:
  lwz       r3, 0xC(r3)
  rlwinm    r4,r30,0,16,31
  lhz       r0, 0x8(r3)
  cmplw     r4, r0
  bge-      .loc_0x70
  lhz       r0, 0xA(r3)
  mullw     r0, r4, r0
  add       r3, r3, r0
  addi      r3, r3, 0x10
  b         .loc_0x74

.loc_0x70:
  li        r3, 0

.loc_0x74:
  stw       r3, 0x14(r31)
  lwz       r0, 0x14(r31)
  cmplwi    r0, 0
  bne-      .loc_0x8C
  li        r3, 0
  b         .loc_0xC8

.loc_0x8C:
  sth       r29, 0xC(r31)
  li        r0, 0
  lwz       r4, 0x8(r28)
  li        r3, 0x1
  sth       r30, 0xE(r31)
  stw       r4, 0x10(r31)
  lwz       r5, 0x10(r31)
  lwz       r4, 0x14(r31)
  lwz       r5, 0x10(r5)
  lwz       r4, 0x0(r4)
  add       r4, r5, r4
  stw       r4, 0x18(r31)
  lwz       r4, 0x18(r31)
  stw       r4, 0x20(r31)
  stw       r0, 0x24(r31)

.loc_0xC8:
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
 * Address:	80014734
 * Size:	000060
 */
void JStudio_JStage::TCreateObject::__dt(void)
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
  lis       r5, 0x804A
  li        r4, 0
  subi      r0, r5, 0x750
  stw       r0, 0x0(r30)
  bl        -0x7AAC
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0xF940

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
 * Address:	80014794
 * Size:	000194
 */
void JStudio_JStage::TCreateObject::create( (JStudio::TObject **, JStudio::stb::data::TParse_TBlock_object const &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr        r31, r5
  lwz       r5, 0x0(r5)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  stw       r0, 0x0(r4)
  lis       r4, 0x4A43
  addi      r0, r4, 0x4D52
  lwz       r4, 0x4(r5)
  cmpw      r4, r0
  beq-      .loc_0xAC
  bge-      .loc_0x70
  lis       r3, 0x4A41
  addi      r0, r3, 0x4354
  cmpw      r4, r0
  beq-      .loc_0x98
  bge-      .loc_0xFC
  addi      r0, r3, 0x424C
  cmpw      r4, r0
  beq-      .loc_0xC0
  b         .loc_0xFC

.loc_0x70:
  lis       r3, 0x4A4C
  addi      r0, r3, 0x4954
  cmpw      r4, r0
  beq-      .loc_0xD4
  bge-      .loc_0xFC
  lis       r3, 0x4A46
  addi      r0, r3, 0x4F47
  cmpw      r4, r0
  beq-      .loc_0xE8
  b         .loc_0xFC

.loc_0x98:
  lis       r3, 0x8001
  li        r6, 0x2
  addi      r0, r3, 0x4928
  mr        r28, r0
  b         .loc_0x104

.loc_0xAC:
  lis       r3, 0x8001
  li        r6, 0x3
  addi      r0, r3, 0x49F4
  mr        r28, r0
  b         .loc_0x104

.loc_0xC0:
  lis       r3, 0x8001
  li        r6, 0x4
  addi      r0, r3, 0x4AC0
  mr        r28, r0
  b         .loc_0x104

.loc_0xD4:
  lis       r3, 0x8001
  li        r6, 0x5
  addi      r0, r3, 0x4B8C
  mr        r28, r0
  b         .loc_0x104

.loc_0xE8:
  lis       r3, 0x8001
  li        r6, 0x6
  addi      r0, r3, 0x4C58
  mr        r28, r0
  b         .loc_0x104

.loc_0xFC:
  li        r3, 0
  b         .loc_0x174

.loc_0x104:
  lwz       r3, 0xC(r29)
  addi      r4, r1, 0x8
  addi      r5, r5, 0xC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x1
  beq-      .loc_0x170
  bge-      .loc_0x138
  cmpwi     r3, 0
  bge-      .loc_0x144
  b         .loc_0x170

.loc_0x138:
  cmpwi     r3, 0x3
  bge-      .loc_0x170
  b         .loc_0x168

.loc_0x144:
  mr        r12, r28
  mr        r3, r31
  lwz       r4, 0x8(r1)
  lwz       r5, 0xC(r29)
  mtctr     r12
  bctrl     
  stw       r3, 0x0(r30)
  li        r3, 0x1
  b         .loc_0x174

.loc_0x168:
  li        r3, 0x1
  b         .loc_0x174

.loc_0x170:
  li        r3, 0

.loc_0x174:
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
 * Address:	80014928
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_actor, JStage::TActor>__Q214JStudio_JStage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
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
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x14C
  bl        0xF550
  mr.       r31, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  bl        -0x27D0
  mr        r31, r3

.loc_0x48:
  cmplwi    r31, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xAC

.loc_0x58:
  li        r3, 0x38
  bl        0xF520
  mr.       r30, r3
  beq-      .loc_0x78
  mr        r4, r28
  mr        r5, r31
  bl        -0x70A0
  mr        r30, r3

.loc_0x78:
  cmplwi    r30, 0
  bne-      .loc_0x88
  li        r30, 0
  b         .loc_0xA8

.loc_0x88:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA8
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r30

.loc_0xAC:
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
 * Address:	800149F4
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_camera, JStage::TCamera>__Q214JStudio_JStage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
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
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x120
  bl        0xF484
  mr.       r31, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  bl        -0x160C
  mr        r31, r3

.loc_0x48:
  cmplwi    r31, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xAC

.loc_0x58:
  li        r3, 0x38
  bl        0xF454
  mr.       r30, r3
  beq-      .loc_0x78
  mr        r4, r28
  mr        r5, r31
  bl        -0x69A4
  mr        r30, r3

.loc_0x78:
  cmplwi    r30, 0
  bne-      .loc_0x88
  li        r30, 0
  b         .loc_0xA8

.loc_0x88:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA8
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r30

.loc_0xAC:
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
 * Address:	80014AC0
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_ambientLight, JStage::TAmbientLight>__Q214JStudio_JStage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
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
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x64
  bl        0xF3B8
  mr.       r31, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  bl        -0x1974
  mr        r31, r3

.loc_0x48:
  cmplwi    r31, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xAC

.loc_0x58:
  li        r3, 0x38
  bl        0xF388
  mr.       r30, r3
  beq-      .loc_0x78
  mr        r4, r28
  mr        r5, r31
  bl        -0x6D00
  mr        r30, r3

.loc_0x78:
  cmplwi    r30, 0
  bne-      .loc_0x88
  li        r30, 0
  b         .loc_0xA8

.loc_0x88:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA8
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r30

.loc_0xAC:
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
 * Address:	80014B8C
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_light, JStage::TLight>__Q214JStudio_JStage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
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
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x11C
  bl        0xF2EC
  mr.       r31, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  bl        -0x3804
  mr        r31, r3

.loc_0x48:
  cmplwi    r31, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xAC

.loc_0x58:
  li        r3, 0x38
  bl        0xF2BC
  mr.       r30, r3
  beq-      .loc_0x78
  mr        r4, r28
  mr        r5, r31
  bl        -0x63F4
  mr        r30, r3

.loc_0x78:
  cmplwi    r30, 0
  bne-      .loc_0x88
  li        r30, 0
  b         .loc_0xA8

.loc_0x88:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA8
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r30

.loc_0xAC:
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
 * Address:	80014C58
 * Size:	0000CC
 */
void createObject_JSG_<JStudio_JStage::TAdaptor_fog, JStage::TFog>__Q214JStudio_JStage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ26JStage7TObjectPCQ26JStage7TSystem(void)
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
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  li        r3, 0x8C
  bl        0xF220
  mr.       r31, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  bl        -0xB64
  mr        r31, r3

.loc_0x48:
  cmplwi    r31, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xAC

.loc_0x58:
  li        r3, 0x38
  bl        0xF1F0
  mr.       r30, r3
  beq-      .loc_0x78
  mr        r4, r28
  mr        r5, r31
  bl        -0x675C
  mr        r30, r3

.loc_0x78:
  cmplwi    r30, 0
  bne-      .loc_0x88
  li        r30, 0
  b         .loc_0xA8

.loc_0x88:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA8
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r30

.loc_0xAC:
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
 * Address:	80014DF8
 * Size:	0000BC
 */
void createObject_MESSAGE_JMS___Q216JStudio_JMessage21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectPQ28JMessage8TControl(void)
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
  li        r3, 0x10
  bl        0xF088
  mr.       r31, r3
  beq-      .loc_0x3C
  mr        r4, r30
  bl        -0x108
  mr        r31, r3

.loc_0x3C:
  cmplwi    r31, 0
  bne-      .loc_0x4C
  li        r3, 0
  b         .loc_0xA0

.loc_0x4C:
  li        r3, 0x38
  bl        0xF05C
  mr.       r30, r3
  beq-      .loc_0x6C
  mr        r4, r29
  mr        r5, r31
  bl        -0x6230
  mr        r30, r3

.loc_0x6C:
  cmplwi    r30, 0
  bne-      .loc_0x7C
  li        r30, 0
  b         .loc_0x9C

.loc_0x7C:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0x9C
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x9C:
  mr        r3, r30

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
 * Address:	........
 * Size:	000060
 */
void JStudio_JMessage::TCreateObject_base::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80014EB4
 * Size:	0000AC
 */
void JStudio_JMessage::TCreateObject_base::create( (JStudio::TObject **, JStudio::stb::data::TParse_TBlock_object const &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r5
  lis       r5, 0x4A4D
  lwz       r6, 0x0(r30)
  stw       r29, 0x14(r1)
  mr        r29, r4
  addi      r0, r5, 0x5347
  lwz       r4, 0x4(r6)
  cmpw      r4, r0
  beq-      .loc_0x3C
  b         .loc_0x4C

.loc_0x3C:
  lis       r4, 0x8001
  addi      r0, r4, 0x4DF8
  mr        r31, r0
  b         .loc_0x54

.loc_0x4C:
  li        r3, 0
  b         .loc_0x90

.loc_0x54:
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr.       r4, r3
  bne-      .loc_0x78
  li        r3, 0
  b         .loc_0x90

.loc_0x78:
  mr        r12, r31
  mr        r3, r30
  mtctr     r12
  bctrl     
  stw       r3, 0x0(r29)
  li        r3, 0x1

.loc_0x90:
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
 * Address:	80014F60
 * Size:	000070
 */
void JStudio_JMessage::TCreateObject::__dt(void)
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
  lis       r4, 0x804A
  subi      r0, r4, 0x718
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804A
  li        r4, 0
  subi      r0, r5, 0x704
  stw       r0, 0x0(r30)
  bl        -0x82E8

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        0xF104

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
 * Address:	80014FD0
 * Size:	000008
 */
void JStudio_JMessage::TCreateObject::find( (JStudio::stb::data::TParse_TBlock_object const &))
{
/*
.loc_0x0:
  lwz       r3, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80015C44
 * Size:	0000CC
 */
void createObject_SOUND_JAI___Q214JStudio_JAudio21@unnamed@control_cpp@FRCQ47JStudio3stb4data20TParse_TBlock_objectP8JAIBasicPCQ26JStage7TSystem(void)
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
  li        r3, 0x108
  bl        0xE234
  mr.       r31, r3
  beq-      .loc_0x48
  mr        r4, r29
  mr        r5, r30
  bl        -0xCAC
  mr        r31, r3

.loc_0x48:
  cmplwi    r31, 0
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0xAC

.loc_0x58:
  li        r3, 0x38
  bl        0xE204
  mr.       r30, r3
  beq-      .loc_0x78
  mr        r4, r28
  mr        r5, r31
  bl        -0x6A38
  mr        r30, r3

.loc_0x78:
  cmplwi    r30, 0
  bne-      .loc_0x88
  li        r30, 0
  b         .loc_0xA8

.loc_0x88:
  lwz       r3, 0x34(r30)
  cmplwi    r3, 0
  beq-      .loc_0xA8
  lwz       r12, 0x0(r3)
  mr        r4, r30
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0xA8:
  mr        r3, r30

.loc_0xAC:
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
 * Address:	80015D10
 * Size:	000060
 */
void JStudio_JAudio::TCreateObject::__dt(void)
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
  lis       r5, 0x804A
  li        r4, 0
  subi      r0, r5, 0x608
  stw       r0, 0x0(r30)
  bl        -0x9088
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0xE364

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
 * Address:	80015D70
 * Size:	000078
 */
void JStudio_JAudio::TCreateObject::create( (JStudio::TObject **, JStudio::stb::data::TParse_TBlock_object const &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r7, 0x0(r5)
  lis       r6, 0x4A53
  stw       r0, 0x14(r1)
  addi      r0, r6, 0x4E44
  mr        r6, r3
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r3, 0x4(r7)
  cmpw      r3, r0
  beq-      .loc_0x34
  b         .loc_0x40

.loc_0x34:
  lis       r3, 0x8001
  addi      r12, r3, 0x5C44
  b         .loc_0x48

.loc_0x40:
  li        r3, 0
  b         .loc_0x64

.loc_0x48:
  mr        r3, r5
  lwz       r4, 0xC(r6)
  lwz       r5, 0x10(r6)
  mtctr     r12
  bctrl     
  stw       r3, 0x0(r31)
  li        r3, 0x1

.loc_0x64:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
