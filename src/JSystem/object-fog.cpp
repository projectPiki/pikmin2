

/*
 * --INFO--
 * Address:	80014134
 * Size:	0000A0
 */
void JStudio_JStage::TAdaptor_fog::__ct( (JStage::TSystem const *, JStage::TFog *))
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
  subi      r5, r7, 0xCE4
  li        r7, 0x6
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r8, r29
  stw       r0, 0x0(r3)
  addi      r3, r8, 0xC
  li        r0, 0x6
  stw       r3, 0x4(r29)
  stw       r0, 0x8(r29)
  addi      r0, r6, 0x5808
  mr        r4, r0
  li        r6, 0x14
  stw       r5, 0x0(r29)
  li        r5, 0
  bl        0xAD6A0
  lis       r4, 0x804A
  mr        r3, r29
  subi      r0, r4, 0x7B0
  stw       r0, 0x0(r29)
  stw       r30, 0x84(r29)
  stw       r31, 0x88(r29)
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
 * Address:	800141D4
 * Size:	000078
 */
void JStudio_JStage::TAdaptor_fog::__dt(void)
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
  subi      r0, r5, 0x7B0
  stw       r0, 0x0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  li        r4, 0
  bl        -0x5D0C
  extsh.    r0, r31
  ble-      .loc_0x5C
  mr        r3, r30
  bl        0xFE88

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
 * Address:	8001424C
 * Size:	000048
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_prepare( (JStudio::TObject const *))
{
/*
.loc_0x0:
  lis       r4, 0x8050
  addi      r0, r4, 0x6CD4
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
  addi      r5, r5, 0x20

.loc_0x38:
  lwz       r0, 0x4(r5)
  cmpwi     r0, -0x1
  bne+      .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80014294
 * Size:	0000F4
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_begin( (JStudio::TObject const *))
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
  lwz       r30, 0x88(r3)
  lwz       r12, 0x0(r30)
  mr        r3, r30
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r30)
  ori       r4, r3, 0x1
  mr        r3, r30
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x88(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8047
  stw       r3, 0x8(r1)
  addi      r4, r4, 0x33B4
  mr        r3, r28
  addi      r5, r1, 0x8
  bl        -0x6FA8
  lis       r4, 0x8050
  lis       r3, 0x8001
  addi      r0, r4, 0x6CD4
  li        r31, 0
  mr        r29, r0
  subi      r30, r3, 0x2F50
  b         .loc_0xC8

.loc_0x98:
  lwz       r3, 0x88(r28)
  addi      r12, r29, 0x14
  bl        0xAD7F0
  nop       
  lwz       r0, 0x4(r29)
  addi      r29, r29, 0x20
  lwz       r3, 0x4(r28)
  mulli     r0, r0, 0x14
  add       r3, r3, r0
  stw       r30, 0x8(r3)
  stw       r31, 0x4(r3)
  stfs      f1, 0xC(r3)

.loc_0xC8:
  lwz       r0, 0x4(r29)
  cmpwi     r0, -0x1
  bne+      .loc_0x98
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
 * Address:	80014388
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_end( (JStudio::TObject const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  lwz       r31, 0x88(r3)
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
 * Address:	800143DC
 * Size:	00006C
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_update( (JStudio::TObject const *, unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8047
  stw       r0, 0x24(r1)
  addi      r5, r4, 0x33B4
  addi      r4, r1, 0xC
  stw       r31, 0x1C(r1)
  mr        r31, r3
  bl        -0x6FB8
  lwz       r0, 0xC(r1)
  addi      r4, r1, 0x8
  stw       r0, 0x8(r1)
  lwz       r3, 0x88(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x58(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x88(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80014448
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_fog::adaptor_do_data( (JStudio::TObject const *, void const *, unsigned long, void const *, unsigned long))
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
  lwz       r3, 0x88(r3)
  bl        -0x2424
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8001447C
 * Size:	000228
 */
void __sinit_object-fog_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  lis       r3, 0x804A
  lis       r4, 0x804A
  stw       r0, 0x84(r1)
  lis       r5, 0x804A
  lis       r12, 0x804F
  li        r11, 0x4
  stw       r31, 0x7C(r1)
  subi      r31, r3, 0x7E0
  lis       r3, 0x8050
  stw       r30, 0x78(r1)
  subi      r30, r12, 0x198
  subi      r12, r5, 0x770
  stw       r29, 0x74(r1)
  subi      r29, r4, 0xB68
  lis       r4, 0x8001
  addi      r5, r30, 0
  stwu      r29, 0x6CD4(r3)
  addi      r4, r4, 0x46A4
  lwz       r10, 0x0(r31)
  lwz       r9, 0x4(r31)
  lwz       r8, 0x8(r31)
  lwz       r7, 0xC(r31)
  lwz       r6, 0x10(r31)
  lwz       r0, 0x14(r31)
  stw       r29, 0x48(r1)
  stw       r12, 0x48(r1)
  stw       r11, 0x4C(r1)
  stw       r10, 0x50(r1)
  stw       r9, 0x54(r1)
  stw       r8, 0x58(r1)
  stw       r7, 0x5C(r1)
  stw       r6, 0x60(r1)
  stw       r0, 0x64(r1)
  stw       r12, 0x0(r3)
  stw       r11, 0x4(r3)
  stw       r10, 0x8(r3)
  stw       r9, 0xC(r3)
  stw       r8, 0x10(r3)
  stw       r7, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r0, 0x1C(r3)
  bl        0xAD1D8
  lis       r4, 0x804A
  addi      r3, r1, 0x48
  subi      r0, r4, 0x770
  li        r4, 0
  stw       r0, 0x48(r1)
  bl        -0x74D8
  lis       r4, 0x804A
  lis       r3, 0x8050
  subi      r29, r4, 0xB68
  lwz       r10, 0x18(r31)
  addi      r3, r3, 0x6CD4
  lwz       r9, 0x1C(r31)
  stwu      r29, 0x20(r3)
  li        r11, 0x5
  lwz       r8, 0x20(r31)
  lis       r5, 0x804A
  lwz       r7, 0x24(r31)
  subi      r12, r5, 0x770
  lwz       r6, 0x28(r31)
  lis       r4, 0x8001
  lwz       r0, 0x2C(r31)
  addi      r4, r4, 0x46A4
  stw       r29, 0x28(r1)
  addi      r5, r30, 0xC
  stw       r12, 0x28(r1)
  stw       r11, 0x2C(r1)
  stw       r10, 0x30(r1)
  stw       r9, 0x34(r1)
  stw       r8, 0x38(r1)
  stw       r7, 0x3C(r1)
  stw       r6, 0x40(r1)
  stw       r0, 0x44(r1)
  stw       r12, 0x0(r3)
  stw       r11, 0x4(r3)
  stw       r10, 0x8(r3)
  stw       r9, 0xC(r3)
  stw       r8, 0x10(r3)
  stw       r7, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r0, 0x1C(r3)
  bl        0xAD134
  lis       r4, 0x804A
  addi      r3, r1, 0x28
  subi      r0, r4, 0x770
  li        r4, 0
  stw       r0, 0x28(r1)
  bl        -0x757C
  lis       r4, 0x804A
  lis       r3, 0x804A
  subi      r11, r4, 0xB68
  li        r9, -0x1
  stw       r11, 0x8(r1)
  subi      r10, r3, 0x770
  lis       r4, 0x8048
  lis       r3, 0x8050
  stw       r10, 0x8(r1)
  subi      r8, r4, 0x60F0
  lis       r4, 0x8001
  lwz       r7, 0x0(r8)
  stw       r9, 0xC(r1)
  addi      r3, r3, 0x6CD4
  addi      r4, r4, 0x46A4
  addi      r5, r30, 0x18
  lwz       r6, 0x4(r8)
  stw       r7, 0x10(r1)
  stw       r6, 0x14(r1)
  lwz       r0, 0x8(r8)
  stwu      r11, 0x40(r3)
  stw       r0, 0x18(r1)
  stw       r7, 0x1C(r1)
  stw       r6, 0x20(r1)
  stw       r0, 0x24(r1)
  stw       r10, 0x0(r3)
  stw       r9, 0x4(r3)
  stw       r7, 0x8(r3)
  stw       r6, 0xC(r3)
  stw       r0, 0x10(r3)
  stw       r7, 0x14(r3)
  stw       r6, 0x18(r3)
  stw       r0, 0x1C(r3)
  bl        0xAD094
  lis       r4, 0x804A
  addi      r3, r1, 0x8
  subi      r0, r4, 0x770
  li        r4, 0
  stw       r0, 0x8(r1)
  bl        -0x761C
  lwz       r0, 0x84(r1)
  lwz       r31, 0x7C(r1)
  lwz       r30, 0x78(r1)
  lwz       r29, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	800146A4
 * Size:	000060
 */
void __dt__Q214JStudio_JStage77TVariableValueOutput_object_<JStudio_JStage::TAdaptor_fog, JStage::TFog>Fv(void)
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
  subi      r0, r5, 0x770
  stw       r0, 0x0(r30)
  bl        -0x766C
  extsh.    r0, r31
  ble-      .loc_0x44
  mr        r3, r30
  bl        0xF9D0

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
 * Address:	80014704
 * Size:	000030
 */
void __cl__Q214JStudio_JStage77TVariableValueOutput_object_<JStudio_JStage::TAdaptor_fog, JStage::TFog>CFfPQ27JStudio8TAdaptor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  stw       r0, 0x14(r1)
  addi      r12, r5, 0x8
  lwz       r3, 0x88(r4)
  bl        0xAD408
  nop       
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
