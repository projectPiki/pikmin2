

/*
 * --INFO--
 * Address:	800113C8
 * Size:	0000A8
 */
void JStudio_JStage::TAdaptor_light::__ct( (JStage::TSystem const *, JStage::TLight *))
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
  mr        r31, r5
  subi      r5, r7, 0xD2C
  li        r7, 0xD
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r8, r29
  stw       r0, 0x0(r3)
  addi      r3, r8, 0xC
  li        r0, 0xD
  stw       r3, 0x4(r29)
  stw       r0, 0x8(r29)
  addi      r0, r6, 0x5808
  mr        r4, r0
  li        r6, 0x14
  stw       r5, 0x0(r29)
  li        r5, 0
  bl        0xB040C
  lis       r3, 0x804A
  li        r0, 0
  subi      r4, r3, 0xA78
  mr        r3, r29
  stw       r4, 0x0(r29)
  stw       r30, 0x110(r29)
  stw       r31, 0x114(r29)
  stw       r0, 0x118(r29)
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
 * Address:	80011470
 * Size:	000078
 */
void JStudio_JStage::TAdaptor_light::__dt(void)
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
  beq-      .loc_0x5C
  lis       r5, 0x804A
  li        r4, 0
  subi      r0, r5, 0xA78
  stw       r0, 0x0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0
  bl        -0x2D0C
  extsh.    r0, r31
  ble-      .loc_0x5C
  mr        r3, r30
  bl        0x12BEC

.loc_0x5C:
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
 * Address:	800114E8
 * Size:	000048
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_prepare( (JStudio::TObject const *))
{
/*
.loc_0x0:
  lis       r4, 0x8050
  addi      r0, r4, 0x6A8C
  mr        r5, r0
  b         .loc_0x38

.loc_0x10:
  mulli     r0, r0, 0x14
  lwz       r4, 0x4(r3)
  cmplwi    r5, 0
  add       r4, r4, r0
  beq-      .loc_0x2C
  mr        r0, r5
  b         .loc_0x30

.loc_0x2C:
  subi      r0, r13, 0x78F0

.loc_0x30:
  stw       r0, 0x10(r4)
  addi      r5, r5, 0xC

.loc_0x38:
  lwz       r0, 0x4(r5)
  cmpwi     r0, -0x1
  bne+      .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80011530
 * Size:	0002AC
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_begin( (JStudio::TObject const *))
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stfd      f30, 0x70(r1)
  psq_st    f30,0x78(r1),0,0
  stfd      f29, 0x60(r1)
  psq_st    f29,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  mr        r30, r3
  mr        r29, r4
  lwz       r31, 0x114(r3)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r31)
  ori       r4, r3, 0x1
  mr        r3, r31
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r30)
  lwz       r29, 0x14(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x4C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8047
  stw       r3, 0xC(r1)
  addi      r4, r4, 0x33D0
  mr        r3, r30
  addi      r5, r1, 0xC
  bl        -0x4260
  lwz       r3, 0x114(r30)
  addi      r4, r1, 0x34
  lwz       r12, 0x0(r3)
  lwz       r12, 0x44(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r30)
  addi      r31, r1, 0x40
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x75(r29)
  cmplwi    r0, 0
  bne-      .loc_0xE0
  addi      r31, r1, 0x34
  b         .loc_0x104

.loc_0xE0:
  addi      r3, r29, 0xC8
  addi      r4, r1, 0x34
  addi      r5, r1, 0x1C
  bl        0xD95BC
  mr        r4, r31
  addi      r3, r29, 0xC8
  addi      r5, r1, 0x28
  bl        0xD9600
  addi      r31, r1, 0x1C

.loc_0x104:
  lis       r3, 0x8047
  mr        r5, r31
  addi      r4, r3, 0x33E0
  mr        r3, r30
  bl        -0x4388
  lfs       f2, 0x14(r31)
  lfs       f1, 0xC(r31)
  fmuls     f3, f2, f2
  lfs       f0, -0x7EE0(r2)
  lfs       f30, 0x10(r31)
  fmadds    f31, f1, f1, f3
  fcmpo     cr0, f31, f0
  ble-      .loc_0x180
  fsqrte    f3, f31
  lfd       f5, -0x7ED8(r2)
  lfd       f4, -0x7ED0(r2)
  fmul      f0, f3, f3
  fmul      f3, f5, f3
  fnmsub    f0, f31, f0, f4
  fmul      f3, f3, f0
  fmul      f0, f3, f3
  fmul      f3, f5, f3
  fnmsub    f0, f31, f0, f4
  fmul      f3, f3, f0
  fmul      f0, f3, f3
  fmul      f3, f5, f3
  fnmsub    f0, f31, f0, f4
  fmul      f0, f3, f0
  fmul      f31, f31, f0
  frsp      f31, f31
  b         .loc_0x204

.loc_0x180:
  lfd       f0, -0x7EC8(r2)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x198
  lis       r3, 0x8051
  lfs       f31, 0x48B0(r3)
  b         .loc_0x204

.loc_0x198:
  stfs      f31, 0x8(r1)
  lis       r0, 0x7F80
  lwz       r4, 0x8(r1)
  rlwinm    r3,r4,0,1,8
  cmpw      r3, r0
  beq-      .loc_0x1C0
  bge-      .loc_0x1F0
  cmpwi     r3, 0
  beq-      .loc_0x1D8
  b         .loc_0x1F0

.loc_0x1C0:
  rlwinm.   r0,r4,0,9,31
  beq-      .loc_0x1D0
  li        r0, 0x1
  b         .loc_0x1F4

.loc_0x1D0:
  li        r0, 0x2
  b         .loc_0x1F4

.loc_0x1D8:
  rlwinm.   r0,r4,0,9,31
  beq-      .loc_0x1E8
  li        r0, 0x5
  b         .loc_0x1F4

.loc_0x1E8:
  li        r0, 0x3
  b         .loc_0x1F4

.loc_0x1F0:
  li        r0, 0x4

.loc_0x1F4:
  cmpwi     r0, 0x1
  bne-      .loc_0x204
  lis       r3, 0x8051
  lfs       f31, 0x48B0(r3)

.loc_0x204:
  bl        0xBE258
  frsp      f29, f1
  fmr       f1, f30
  fmr       f2, f31
  bl        0xBE248
  lis       r3, 0x8001
  lwz       r6, 0x4(r30)
  subi      r7, r3, 0x2F50
  lfs       f2, -0x7EC0(r2)
  stw       r7, 0xD0(r6)
  li        r0, 0
  fmuls     f0, f2, f29
  mr        r3, r31
  stw       r0, 0xCC(r6)
  frsp      f1, f1
  addi      r4, r31, 0xC
  addi      r5, r1, 0x10
  stfs      f0, 0xD4(r6)
  fmuls     f0, f2, f1
  lwz       r6, 0x4(r30)
  stw       r7, 0xE4(r6)
  stw       r0, 0xE0(r6)
  stfs      f0, 0xE8(r6)
  bl        0xD9724
  lis       r4, 0x8047
  mr        r3, r30
  addi      r4, r4, 0x33EC
  addi      r5, r1, 0x10
  bl        -0x44E8
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r0, 0x94(r1)
  lwz       r29, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	800117DC
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_end( (JStudio::TObject const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x114(r3)
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r31)
  rlwinm    r4,r3,0,0,30
  mr        r3, r31
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80011830
 * Size:	0001C8
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_update( (JStudio::TObject const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stfd      f31, 0x80(r1)
  psq_st    f31,0x88(r1),0,0
  stfd      f30, 0x70(r1)
  psq_st    f30,0x78(r1),0,0
  stfd      f29, 0x60(r1)
  psq_st    f29,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  lis       r5, 0x8047
  lwz       r31, 0x14(r4)
  addi      r5, r5, 0x33D0
  mr        r30, r3
  addi      r4, r1, 0xC
  bl        -0x442C
  lwz       r0, 0xC(r1)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  lwz       r3, 0x114(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x50(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8047
  mr        r3, r30
  addi      r5, r4, 0x33E0
  addi      r4, r1, 0x34
  bl        -0x4578
  lwz       r0, 0x118(r30)
  cmpwi     r0, 0x2
  beq-      .loc_0xF8
  bge-      .loc_0x11C
  cmpwi     r0, 0x1
  bge-      .loc_0x94
  b         .loc_0x11C

.loc_0x94:
  lwz       r3, 0x4(r30)
  lfs       f1, -0x7EBC(r2)
  lfs       f0, 0xDC(r3)
  lfs       f31, 0xC8(r3)
  fmuls     f29, f1, f0
  fmr       f1, f29
  bl        0xBD9D8
  frsp      f30, f1
  fmr       f1, f29
  bl        0xBDF34
  lfs       f0, -0x7EBC(r2)
  frsp      f29, f1
  fmuls     f31, f0, f31
  fmr       f1, f31
  bl        0xBDF20
  frsp      f0, f1
  stfs      f29, 0x44(r1)
  fmr       f1, f31
  fmuls     f0, f30, f0
  stfs      f0, 0x40(r1)
  bl        0xBD9A0
  frsp      f0, f1
  fmuls     f0, f30, f0
  stfs      f0, 0x48(r1)
  b         .loc_0x11C

.loc_0xF8:
  lis       r4, 0x8047
  mr        r3, r30
  addi      r5, r4, 0x33EC
  addi      r4, r1, 0x10
  bl        -0x460C
  addi      r3, r1, 0x10
  addi      r4, r1, 0x34
  addi      r5, r1, 0x40
  bl        0xD9590

.loc_0x11C:
  lbz       r0, 0x74(r31)
  cmplwi    r0, 0
  bne-      .loc_0x130
  addi      r31, r1, 0x34
  b         .loc_0x154

.loc_0x130:
  addi      r3, r31, 0x98
  addi      r4, r1, 0x34
  addi      r5, r1, 0x1C
  bl        0xD926C
  addi      r3, r31, 0x98
  addi      r4, r1, 0x40
  addi      r5, r1, 0x28
  bl        0xD92B0
  addi      r31, r1, 0x1C

.loc_0x154:
  lwz       r3, 0x114(r30)
  mr        r4, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r30)
  addi      r4, r31, 0xC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  psq_l     f31,0x88(r1),0,0
  lfd       f31, 0x80(r1)
  psq_l     f30,0x78(r1),0,0
  lfd       f30, 0x70(r1)
  psq_l     f29,0x68(r1),0,0
  lfd       f29, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r0, 0x94(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	800119F8
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_data( (JStudio::TObject const *, void const *, unsigned long, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r5
  mr        r5, r6
  stw       r0, 0x14(r1)
  mr        r6, r7
  mr        r7, r8
  lwz       r3, 0x114(r3)
  bl        0x62C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80011A2C
 * Size:	000078
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_FACULTY( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmpwi     r4, 0x2
  stw       r0, 0x14(r1)
  beq-      .loc_0x18
  b         .loc_0x68

.loc_0x18:
  lwz       r0, 0x0(r5)
  cmpwi     r0, 0x302
  beq-      .loc_0x48
  bge-      .loc_0x34
  cmpwi     r0, 0x301
  bge-      .loc_0x40
  b         .loc_0x68

.loc_0x34:
  cmpwi     r0, 0x304
  bge-      .loc_0x68
  b         .loc_0x50

.loc_0x40:
  li        r4, 0x1
  b         .loc_0x54

.loc_0x48:
  li        r4, 0x2
  b         .loc_0x54

.loc_0x50:
  li        r4, 0x3

.loc_0x54:
  lwz       r3, 0x114(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     

.loc_0x68:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80011AA4
 * Size:	000024
 */
void JStudio_JStage::TAdaptor_light::adaptor_do_ENABLE( (JStudio::data::TEOperationData, void const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x114(r3)
  bl        0x650
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80011AC8
 * Size:	00000C
 */
void JStudio_JStage::TAdaptor_light::TVVOutput_direction_::operator()( const(float, JStudio::TAdaptor *))
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  stw       r0, 0x118(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80011AD4
 * Size:	000060
 */
void JStudio_JStage::TAdaptor_light::TVVOutput_direction_::__dt(void)
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
  subi      r0, r5, 0xA88
  stw       r0, 0x0(r30)
  bl        -0x4A9C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0x125A0

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
 * Address:	80011B34
 * Size:	000298
 */
void __sinit_object-light_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r4, 0x804A
  lis       r3, 0x8050
  stw       r0, 0x64(r1)
  subi      r5, r4, 0xB68
  lis       r4, 0x804A
  li        r6, 0xA
  stw       r31, 0x5C(r1)
  li        r0, 0x1
  subi      r7, r4, 0xA88
  lis       r4, 0x8001
  stwu      r5, 0x6A8C(r3)
  addi      r4, r4, 0x1AD4
  stw       r5, 0x44(r1)
  lis       r5, 0x804F
  subi      r31, r5, 0x260
  stw       r7, 0x44(r1)
  addi      r5, r31, 0
  stw       r6, 0x48(r1)
  stw       r0, 0x4C(r1)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r0, 0x8(r3)
  bl        0xAFB6C
  lis       r4, 0x804A
  addi      r3, r1, 0x44
  subi      r0, r4, 0xA88
  li        r4, 0
  stw       r0, 0x44(r1)
  bl        -0x4B44
  lis       r5, 0x804A
  lis       r3, 0x8050
  subi      r5, r5, 0xB68
  lis       r4, 0x804A
  addi      r3, r3, 0x6A8C
  stw       r5, 0x38(r1)
  subi      r7, r4, 0xA88
  li        r6, 0xB
  stwu      r5, 0xC(r3)
  li        r0, 0x1
  lis       r4, 0x8001
  addi      r5, r31, 0xC
  stw       r7, 0x38(r1)
  addi      r4, r4, 0x1AD4
  stw       r6, 0x3C(r1)
  stw       r0, 0x40(r1)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r0, 0x8(r3)
  bl        0xAFB04
  lis       r4, 0x804A
  addi      r3, r1, 0x38
  subi      r0, r4, 0xA88
  li        r4, 0
  stw       r0, 0x38(r1)
  bl        -0x4BAC
  lis       r5, 0x804A
  lis       r3, 0x8050
  subi      r5, r5, 0xB68
  lis       r4, 0x804A
  addi      r3, r3, 0x6A8C
  stw       r5, 0x2C(r1)
  subi      r7, r4, 0xA88
  li        r6, 0x7
  stwu      r5, 0x18(r3)
  li        r0, 0x2
  lis       r4, 0x8001
  addi      r5, r31, 0x18
  stw       r7, 0x2C(r1)
  addi      r4, r4, 0x1AD4
  stw       r6, 0x30(r1)
  stw       r0, 0x34(r1)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r0, 0x8(r3)
  bl        0xAFA9C
  lis       r4, 0x804A
  addi      r3, r1, 0x2C
  subi      r0, r4, 0xA88
  li        r4, 0
  stw       r0, 0x2C(r1)
  bl        -0x4C14
  lis       r5, 0x804A
  lis       r3, 0x8050
  subi      r5, r5, 0xB68
  lis       r4, 0x804A
  addi      r3, r3, 0x6A8C
  stw       r5, 0x20(r1)
  subi      r7, r4, 0xA88
  li        r6, 0x8
  stwu      r5, 0x24(r3)
  li        r0, 0x2
  lis       r4, 0x8001
  addi      r5, r31, 0x24
  stw       r7, 0x20(r1)
  addi      r4, r4, 0x1AD4
  stw       r6, 0x24(r1)
  stw       r0, 0x28(r1)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r0, 0x8(r3)
  bl        0xAFA34
  lis       r4, 0x804A
  addi      r3, r1, 0x20
  subi      r0, r4, 0xA88
  li        r4, 0
  stw       r0, 0x20(r1)
  bl        -0x4C7C
  lis       r5, 0x804A
  lis       r3, 0x8050
  subi      r5, r5, 0xB68
  lis       r4, 0x804A
  addi      r3, r3, 0x6A8C
  stw       r5, 0x14(r1)
  subi      r7, r4, 0xA88
  li        r6, 0x9
  stwu      r5, 0x30(r3)
  li        r0, 0x2
  lis       r4, 0x8001
  addi      r5, r31, 0x30
  stw       r7, 0x14(r1)
  addi      r4, r4, 0x1AD4
  stw       r6, 0x18(r1)
  stw       r0, 0x1C(r1)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r0, 0x8(r3)
  bl        0xAF9CC
  lis       r4, 0x804A
  addi      r3, r1, 0x14
  subi      r0, r4, 0xA88
  li        r4, 0
  stw       r0, 0x14(r1)
  bl        -0x4CE4
  lis       r5, 0x804A
  lis       r3, 0x8050
  subi      r5, r5, 0xB68
  lis       r4, 0x804A
  addi      r3, r3, 0x6A8C
  stw       r5, 0x8(r1)
  subi      r7, r4, 0xA88
  li        r6, -0x1
  stwu      r5, 0x3C(r3)
  li        r0, 0
  lis       r4, 0x8001
  addi      r5, r31, 0x3C
  stw       r7, 0x8(r1)
  addi      r4, r4, 0x1AD4
  stw       r6, 0xC(r1)
  stw       r0, 0x10(r1)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r0, 0x8(r3)
  bl        0xAF964
  lis       r4, 0x804A
  addi      r3, r1, 0x8
  subi      r0, r4, 0xA88
  li        r4, 0
  stw       r0, 0x8(r1)
  bl        -0x4D4C
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}
