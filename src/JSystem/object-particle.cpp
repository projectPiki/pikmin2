

/*
 * --INFO--
 * Address:	800056C0
 * Size:	0000E8
 */
void JStudio_JParticle::TAdaptor_particle::__ct( (JPAEmitterManager *, JStage::TSystem const *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r6, 0x804A
  lis       r7, 0x804A
  stw       r0, 0x24(r1)
  subi      r0, r6, 0xB98
  lis       r6, 0x8000
  stw       r31, 0x1C(r1)
  mr        r31, r3
  mr        r8, r31
  stw       r30, 0x18(r1)
  mr        r30, r5
  subi      r5, r7, 0x1D68
  li        r7, 0x12
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r0, 0x0(r3)
  addi      r3, r8, 0xC
  li        r0, 0x12
  stw       r3, 0x4(r31)
  stw       r0, 0x8(r31)
  addi      r0, r6, 0x5808
  mr        r4, r0
  li        r6, 0x14
  stw       r5, 0x0(r31)
  li        r5, 0
  bl        0xBC114
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r0, r3, 0x1DC4
  lis       r3, 0x804A
  stw       r0, 0x0(r31)
  li        r6, 0
  subi      r5, r4, 0x1D84
  subi      r4, r3, 0x1DE0
  stw       r29, 0x174(r31)
  li        r0, -0x1
  mr        r3, r31
  stw       r6, 0x178(r31)
  stw       r5, 0x17C(r31)
  stw       r4, 0x17C(r31)
  stw       r31, 0x180(r31)
  stw       r6, 0x184(r31)
  stw       r0, 0x188(r31)
  stw       r6, 0x18C(r31)
  stw       r6, 0x190(r31)
  stw       r6, 0x194(r31)
  stw       r30, 0x198(r31)
  stw       r6, 0x19C(r31)
  stw       r0, 0x1A0(r31)
  stb       r6, 0x1A4(r31)
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
 * Address:	800057A8
 * Size:	000060
 */
void JStudio_JParticle::TAdaptor_particle::TJPACallback_::__dt(void)
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
  subi      r0, r5, 0x1DE0
  stw       r0, 0x0(r30)
  bl        0x8A4C4
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0x1E8CC

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
 * Address:	80005808
 * Size:	000018
 */
void JStudio::TVariableValue::__ct(void)
{
/*
.loc_0x0:
  li        r4, 0
  subi      r0, r13, 0x78F0
  stw       r4, 0x4(r3)
  stw       r4, 0x8(r3)
  stw       r0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80005820
 * Size:	000098
 */
void JStudio_JParticle::TAdaptor_particle::__dt(void)
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
  beq-      .loc_0x7C
  lis       r3, 0x804A
  subi      r0, r3, 0x1DC4
  stw       r0, 0x0(r30)
  lwz       r4, 0x178(r30)
  cmplwi    r4, 0
  beq-      .loc_0x40
  lwz       r3, 0x174(r30)
  bl        0x8B4A4

.loc_0x40:
  addic.    r0, r30, 0x17C
  beq-      .loc_0x60
  lis       r4, 0x804A
  addi      r3, r30, 0x17C
  subi      r0, r4, 0x1DE0
  li        r4, 0
  stw       r0, 0x17C(r30)
  bl        0x8A420

.loc_0x60:
  mr        r3, r30
  li        r4, 0
  bl        0x948C
  extsh.    r0, r31
  ble-      .loc_0x7C
  mr        r3, r30
  bl        0x1E81C

.loc_0x7C:
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
 * Address:	800058B8
 * Size:	000144
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_prepare( (JStudio::TObject const *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stmw      r22, 0x8(r1)
  mr        r30, r3
  mr        r31, r4
  lbz       r0, -0x7900(r13)
  extsb.    r0, r0
  bne-      .loc_0x11C
  lis       r3, 0x8051
  lis       r4, 0x804F
  lfs       f3, 0x48B0(r3)
  subi      r23, r4, 0x3E0
  lfs       f0, -0x7FF8(r2)
  li        r24, 0x1
  lfs       f2, -0x8000(r2)
  li        r22, 0
  lfs       f1, -0x7FFC(r2)
  li        r25, 0x2
  li        r26, 0x3
  li        r27, 0x4
  li        r28, 0x5
  li        r29, 0x6
  li        r12, 0x7
  li        r11, 0x8
  li        r10, 0x9
  li        r9, 0xA
  li        r8, 0xB
  li        r7, 0xC
  li        r6, 0xD
  li        r5, 0xE
  li        r4, 0xF
  li        r3, 0x10
  li        r0, -0x1
  stw       r22, 0x0(r23)
  stfs      f2, 0x4(r23)
  stw       r24, 0x8(r23)
  stfs      f2, 0xC(r23)
  stw       r25, 0x10(r23)
  stfs      f2, 0x14(r23)
  stw       r26, 0x18(r23)
  stfs      f2, 0x1C(r23)
  stw       r27, 0x20(r23)
  stfs      f2, 0x24(r23)
  stw       r28, 0x28(r23)
  stfs      f2, 0x2C(r23)
  stw       r29, 0x30(r23)
  stfs      f1, 0x34(r23)
  stw       r12, 0x38(r23)
  stfs      f1, 0x3C(r23)
  stw       r11, 0x40(r23)
  stfs      f1, 0x44(r23)
  stw       r10, 0x48(r23)
  stfs      f0, 0x4C(r23)
  stw       r9, 0x50(r23)
  stfs      f0, 0x54(r23)
  stw       r8, 0x58(r23)
  stfs      f0, 0x5C(r23)
  stw       r7, 0x60(r23)
  stfs      f0, 0x64(r23)
  stw       r6, 0x68(r23)
  stfs      f0, 0x6C(r23)
  stw       r5, 0x70(r23)
  stfs      f0, 0x74(r23)
  stw       r4, 0x78(r23)
  stfs      f0, 0x7C(r23)
  stw       r3, 0x80(r23)
  stfs      f0, 0x84(r23)
  stw       r0, 0x88(r23)
  stfs      f3, 0x8C(r23)
  stb       r24, -0x7900(r13)

.loc_0x11C:
  lis       r4, 0x804F
  mr        r3, r30
  subi      r4, r4, 0x3E0
  bl        0x7898
  stw       r31, 0x184(r30)
  lmw       r22, 0x8(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800059FC
 * Size:	000004
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_end( (JStudio::TObject const *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80005A00
 * Size:	0000B0
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_update( (JStudio::TObject const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x190(r3)
  cmplwi    r3, 0
  beq-      .loc_0x9C
  lwz       r0, 0x194(r31)
  cmplw     r0, r3
  bge-      .loc_0x9C
  add       r0, r0, r5
  stw       r0, 0x194(r31)
  lwz       r3, 0x194(r31)
  lwz       r0, 0x190(r31)
  cmplw     r3, r0
  blt-      .loc_0x9C
  lwz       r0, 0x18C(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x90
  bge-      .loc_0x60
  cmpwi     r0, 0x1
  bge-      .loc_0x6C
  b         .loc_0x90

.loc_0x60:
  cmpwi     r0, 0x4
  bge-      .loc_0x90
  b         .loc_0x78

.loc_0x6C:
  li        r0, 0x2
  stw       r0, 0x18C(r31)
  b         .loc_0x90

.loc_0x78:
  lwz       r3, 0x174(r31)
  lwz       r4, 0x178(r31)
  bl        0x8B280
  li        r0, 0
  stw       r0, 0x178(r31)
  stw       r0, 0x18C(r31)

.loc_0x90:
  li        r0, 0
  stw       r0, 0x190(r31)
  stw       r0, 0x194(r31)

.loc_0x9C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80005AB0
 * Size:	000030
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_BEGIN( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x1
  stw       r0, 0x14(r1)
  beq-      .loc_0x18
  b         .loc_0x20

.loc_0x18:
  li        r4, 0
  bl        0x548

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80005AE0
 * Size:	000048
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_BEGIN_FADE_IN( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x2
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x20
  b         .loc_0x34

.loc_0x20:
  lfs       f1, 0x0(r5)
  bl        0xBC048
  mr        r4, r3
  mr        r3, r31
  bl        0x504

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
 * Address:	80005B28
 * Size:	00002C
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_END( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  cmpwi     r4, 0x1
  bnelr-    
  lwz       r4, 0x178(r3)
  cmplwi    r4, 0
  beqlr-    
  lwz       r3, 0xF4(r4)
  li        r0, 0x1
  ori       r3, r3, 0x1
  stw       r3, 0xF4(r4)
  stw       r0, 0x24(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80005B54
 * Size:	000048
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_END_FADE_OUT( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x2
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x20
  b         .loc_0x34

.loc_0x20:
  lfs       f1, 0x0(r5)
  bl        0xBBFD4
  mr        r4, r3
  mr        r3, r31
  bl        0x574

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
 * Address:	80005B9C
 * Size:	000014
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARTICLE( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  cmpwi     r4, 0x19
  bnelr-    
  lwz       r0, 0x0(r5)
  stw       r0, 0x188(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80005BB0
 * Size:	000068
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  cmpwi     r4, 0x18
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  beq-      .loc_0x20
  b         .loc_0x54

.loc_0x20:
  li        r0, 0
  addi      r4, r1, 0x8
  stw       r0, 0x19C(r31)
  li        r6, 0
  lwz       r3, 0x198(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x54
  lwz       r0, 0x8(r1)
  stw       r0, 0x19C(r31)

.loc_0x54:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80005C18
 * Size:	000080
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT_NODE( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x19
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x64
  bge-      .loc_0x6C
  cmpwi     r4, 0x18
  bge-      .loc_0x2C
  b         .loc_0x6C

.loc_0x2C:
  lwz       r3, 0x19C(r31)
  cmplwi    r3, 0
  beq-      .loc_0x6C
  lwz       r12, 0x0(r3)
  mr        r4, r5
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x1A0(r31)
  lwz       r3, 0x1A0(r31)
  addis     r0, r3, 0x1
  cmplwi    r0, 0xFFFF
  bne-      .loc_0x6C
  b         .loc_0x6C

.loc_0x64:
  lwz       r0, 0x0(r5)
  stw       r0, 0x1A0(r31)

.loc_0x6C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80005C98
 * Size:	000020
 */
void JStudio_JParticle::TAdaptor_particle::adaptor_do_PARENT_ENABLE( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  cmpwi     r4, 0x2
  bnelr-    
  lwz       r4, 0x0(r5)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x1A4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JStudio_JParticle::TAdaptor_particle::toString_state_( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80005CB8
 * Size:	00035C
 */
void JStudio_JParticle::TAdaptor_particle::TJPACallback_::execute( (JPABaseEmitter *))
{
/*
.loc_0x0:
  stwu      r1, -0xC0(r1)
  mflr      r0
  stw       r0, 0xC4(r1)
  stfd      f31, 0xB0(r1)
  psq_st    f31,0xB8(r1),0,0
  stw       r31, 0xAC(r1)
  stw       r30, 0xA8(r1)
  stw       r29, 0xA4(r1)
  stw       r28, 0xA0(r1)
  lwz       r0, 0xF4(r4)
  mr        r31, r4
  mr        r30, r3
  li        r4, 0
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0x50
  lwz       r3, 0xD0(r31)
  lwz       r0, 0xDC(r31)
  add.      r0, r3, r0
  bne-      .loc_0x50
  li        r4, 0x1

.loc_0x50:
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x90
  lwz       r3, 0x4(r30)
  mr        r4, r31
  lwz       r3, 0x174(r3)
  bl        0x8AFE4
  lwz       r3, 0x4(r30)
  li        r0, 0
  stw       r0, 0x178(r3)
  lwz       r3, 0x4(r30)
  stw       r0, 0x18C(r3)
  lwz       r3, 0x4(r30)
  stw       r0, 0x190(r3)
  lwz       r3, 0x4(r30)
  stw       r0, 0x194(r3)
  b         .loc_0x334

.loc_0x90:
  lwz       r5, 0x4(r30)
  lis       r4, 0x4330
  stw       r4, 0x88(r1)
  lwz       r0, 0x190(r5)
  lwz       r3, 0x194(r5)
  stw       r0, 0x8C(r1)
  lwz       r0, 0x18C(r5)
  stw       r3, 0x94(r1)
  lfd       f2, -0x7FD0(r2)
  cmpwi     r0, 0x2
  stw       r4, 0x90(r1)
  lfd       f1, 0x88(r1)
  lfd       f0, 0x90(r1)
  fsub      f1, f1, f2
  lfd       f31, -0x7FF0(r2)
  fsub      f0, f0, f2
  beq-      .loc_0x100
  bge-      .loc_0xE4
  cmpwi     r0, 0x1
  bge-      .loc_0xF0
  b         .loc_0x100

.loc_0xE4:
  cmpwi     r0, 0x4
  bge-      .loc_0x100
  b         .loc_0xF8

.loc_0xF0:
  fdiv      f31, f0, f1
  b         .loc_0x100

.loc_0xF8:
  fsub      f0, f1, f0
  fdiv      f31, f0, f1

.loc_0x100:
  lwz       r4, 0x8(r30)
  lis       r3, 0x8047
  addi      r5, r3, 0x33F8
  stw       r31, 0xC(r1)
  lwz       r28, 0x14(r4)
  addi      r4, r1, 0x64
  lwz       r3, 0x4(r30)
  bl        0x7558
  lis       r3, 0x8047
  addi      r4, r1, 0x70
  addi      r5, r3, 0x3404
  lwz       r3, 0x4(r30)
  bl        0x7544
  lis       r4, 0x8047
  lwz       r3, 0x4(r30)
  addi      r5, r4, 0x3410
  addi      r4, r1, 0x7C
  bl        0x7530
  lwz       r4, 0x4(r30)
  lbz       r0, 0x1A4(r4)
  cmplwi    r0, 0
  bne-      .loc_0x234
  lbz       r0, 0x74(r28)
  cmplwi    r0, 0
  bne-      .loc_0x16C
  addi      r29, r1, 0x64
  b         .loc_0x1A0

.loc_0x16C:
  addi      r3, r28, 0x98
  addi      r4, r1, 0x64
  addi      r5, r1, 0x40
  bl        0xE4DA8
  lfs       f0, 0x70(r1)
  addi      r29, r1, 0x40
  lfs       f2, 0x74(r1)
  stfs      f0, 0x4C(r1)
  lfs       f0, 0x78(r1)
  lfs       f1, 0x90(r28)
  fadds     f1, f2, f1
  stfs      f0, 0x54(r1)
  stfs      f1, 0x50(r1)

.loc_0x1A0:
  lfs       f1, 0x4(r29)
  addi      r6, r31, 0x68
  lfs       f2, 0x8(r29)
  lfs       f0, 0x0(r29)
  lfd       f3, -0x7FE0(r2)
  stfs      f0, 0xA4(r31)
  lfd       f4, -0x7FE8(r2)
  stfs      f1, 0xA8(r31)
  stfs      f2, 0xAC(r31)
  lfs       f2, 0xC(r29)
  lfs       f1, 0x10(r29)
  lfs       f0, 0x14(r29)
  fdiv      f2, f2, f3
  fdiv      f1, f1, f3
  fdiv      f0, f0, f3
  fmul      f2, f4, f2
  fmul      f1, f4, f1
  fmul      f0, f4, f0
  fctiwz    f2, f2
  fctiwz    f1, f1
  fctiwz    f0, f0
  stfd      f2, 0x90(r1)
  stfd      f1, 0x88(r1)
  lwz       r3, 0x94(r1)
  stfd      f0, 0x98(r1)
  lwz       r4, 0x8C(r1)
  lwz       r5, 0x9C(r1)
  bl        0x8DD94
  lfs       f0, 0x18(r29)
  lfs       f1, 0x1C(r29)
  lfs       f2, 0x20(r29)
  stfs      f0, 0x98(r31)
  stfs      f1, 0x9C(r31)
  stfs      f2, 0xA0(r31)
  stfs      f0, 0xB0(r31)
  stfs      f1, 0xB4(r31)
  b         .loc_0x28C

.loc_0x234:
  lwz       r5, 0x19C(r4)
  addi      r3, r1, 0x10
  lwz       r6, 0x1A0(r4)
  addi      r4, r1, 0x64
  bl        0xBED0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x268
  mr.       r3, r31
  beq-      .loc_0x334
  lwz       r0, 0xF4(r3)
  ori       r0, r0, 0x4
  stw       r0, 0xF4(r3)
  b         .loc_0x334

.loc_0x268:
  addi      r3, r1, 0x10
  addi      r4, r31, 0x68
  addi      r5, r31, 0x98
  addi      r6, r31, 0xA4
  bl        0x8DE14
  lfs       f1, 0x9C(r31)
  lfs       f0, 0x98(r31)
  stfs      f0, 0xB0(r31)
  stfs      f1, 0xB4(r31)

.loc_0x28C:
  lis       r4, 0x8047
  lwz       r3, 0x4(r30)
  addi      r5, r4, 0x3428
  addi      r4, r1, 0x8
  bl        0x74F0
  lbz       r5, 0xA(r1)
  lis       r0, 0x4330
  lbz       r4, 0x9(r1)
  li        r6, 0xFF
  lbz       r3, 0x8(r1)
  stw       r0, 0x98(r1)
  lfd       f2, -0x7FD0(r2)
  stb       r3, 0xB8(r31)
  lfd       f0, -0x7FD8(r2)
  stb       r4, 0xB9(r31)
  stb       r5, 0xBA(r31)
  lbz       r0, 0xB(r1)
  stw       r0, 0x9C(r1)
  lfd       f1, 0x98(r1)
  fsub      f1, f1, f2
  fmul      f31, f31, f1
  fcmpo     cr0, f31, f0
  bge-      .loc_0x2F4
  fctiwz    f0, f31
  stfd      f0, 0x90(r1)
  lwz       r6, 0x94(r1)

.loc_0x2F4:
  stb       r6, 0xBB(r31)
  lis       r3, 0x8047
  addi      r5, r3, 0x3444
  addi      r4, r1, 0x8
  lwz       r3, 0x4(r30)
  bl        0x7484
  lbz       r5, 0xA(r1)
  li        r3, 0
  lbz       r4, 0x9(r1)
  lbz       r0, 0x8(r1)
  stw       r3, 0xC(r1)
  stb       r0, 0xBC(r31)
  stb       r4, 0xBD(r31)
  stb       r5, 0xBE(r31)
  b         .loc_0x334
  stw       r0, 0xF4(r3)

.loc_0x334:
  psq_l     f31,0xB8(r1),0,0
  lwz       r0, 0xC4(r1)
  lfd       f31, 0xB0(r1)
  lwz       r31, 0xAC(r1)
  lwz       r30, 0xA8(r1)
  lwz       r29, 0xA4(r1)
  lwz       r28, 0xA0(r1)
  mtlr      r0
  addi      r1, r1, 0xC0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void __dt__Q317JStudio_JParticle29@unnamed@object_particle_cpp@29TJPAEmitter_stopDrawParticle_Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80006014
 * Size:	0000E4
 */
void JStudio_JParticle::TAdaptor_particle::beginParticle_fadeIn_( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r4, 0x178(r3)
  cmplwi    r4, 0
  beq-      .loc_0x30
  lwz       r3, 0x174(r30)
  bl        0x8ACC0

.loc_0x30:
  lis       r3, 0x8047
  addi      r4, r1, 0x14
  addi      r6, r3, 0x32E0
  addi      r8, r30, 0x17C
  lwz       r5, 0x0(r6)
  li        r9, 0
  lwz       r3, 0x4(r6)
  lwz       r0, 0x8(r6)
  stw       r5, 0x8(r1)
  stw       r3, 0xC(r1)
  lfs       f2, 0x8(r1)
  stw       r0, 0x10(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r0, 0x188(r30)
  lwz       r3, 0x174(r30)
  rlwinm    r6,r0,8,24,31
  rlwinm    r5,r0,0,16,31
  rlwinm    r7,r0,16,24,31
  bl        0x8A820
  stw       r3, 0x178(r30)
  lwz       r4, 0x178(r30)
  cmplwi    r4, 0
  beq-      .loc_0xCC
  lwz       r3, 0xF4(r4)
  cmplwi    r31, 0
  li        r0, 0x1
  ori       r3, r3, 0x40
  stw       r3, 0xF4(r4)
  stw       r0, 0x18C(r30)
  bne-      .loc_0xC0
  li        r0, 0x2
  stw       r0, 0x18C(r30)

.loc_0xC0:
  stw       r31, 0x190(r30)
  li        r0, 0
  stw       r0, 0x194(r30)

.loc_0xCC:
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
 * Address:	800060F8
 * Size:	000118
 */
void JStudio_JParticle::TAdaptor_particle::endParticle_fadeOut_( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r4, 0x178(r3)
  cmplwi    r4, 0
  beq-      .loc_0x100
  cmplwi    r31, 0
  bne-      .loc_0x50
  lwz       r3, 0x174(r30)
  bl        0x8ABD4
  li        r0, 0
  stw       r0, 0x178(r30)
  stw       r0, 0x18C(r30)
  stw       r0, 0x190(r30)
  stw       r0, 0x194(r30)
  b         .loc_0x100

.loc_0x50:
  lwz       r4, 0x18C(r30)
  li        r0, 0x3
  stw       r0, 0x18C(r30)
  lwz       r3, 0x194(r30)
  cmplwi    r3, 0
  bne-      .loc_0x70
  stw       r31, 0x190(r30)
  b         .loc_0x100

.loc_0x70:
  cmpwi     r4, 0x2
  li        r5, 0
  beq-      .loc_0xA8
  bge-      .loc_0x8C
  cmpwi     r4, 0x1
  bge-      .loc_0x98
  b         .loc_0xA8

.loc_0x8C:
  cmpwi     r4, 0x4
  bge-      .loc_0xA8
  b         .loc_0xA0

.loc_0x98:
  mr        r5, r3
  b         .loc_0xA8

.loc_0xA0:
  lwz       r0, 0x190(r30)
  sub       r5, r0, r3

.loc_0xA8:
  lwz       r0, 0x190(r30)
  lis       r3, 0x4330
  stw       r31, 0xC(r1)
  lfd       f3, -0x7FD0(r2)
  stw       r3, 0x8(r1)
  lfd       f0, 0x8(r1)
  stw       r0, 0x14(r1)
  fsub      f2, f0, f3
  stw       r3, 0x10(r1)
  lfd       f0, 0x10(r1)
  stw       r5, 0x1C(r1)
  fsub      f1, f0, f3
  stw       r3, 0x18(r1)
  lfd       f0, 0x18(r1)
  fmul      f1, f2, f1
  fsub      f0, f0, f3
  fdiv      f1, f1, f0
  bl        0xBB968
  stw       r3, 0x190(r30)
  lwz       r0, 0x190(r30)
  sub       r0, r0, r31
  stw       r0, 0x194(r30)

.loc_0x100:
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
 * Address:	80006210
 * Size:	000004
 */
void JPAEmitterCallBack::executeAfter(JPABaseEmitter *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80006214
 * Size:	000004
 */
void JPAEmitterCallBack::draw(JPABaseEmitter *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80006218
 * Size:	000004
 */
void JPAEmitterCallBack::drawAfter(JPABaseEmitter *)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8000621C
 * Size:	000004
 */
void JPAEmitterCallBack::execute(JPABaseEmitter *)
{
/*
.loc_0x0:
  blr
*/
}
