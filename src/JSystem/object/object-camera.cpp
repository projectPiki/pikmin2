

/*
 * --INFO--
 * Address:	80013428
 * Size:	0000C4
 */
void JStudio_JStage::TAdaptor_camera::TAdaptor_camera(const JStage::TSystem*,
                                                      JStage::TCamera*)
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
	  subi      r5, r7, 0xCA4
	  li        r7, 0xC
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r8, r29
	  stw       r0, 0x0(r3)
	  addi      r3, r8, 0xC
	  li        r0, 0xC
	  stw       r3, 0x4(r29)
	  stw       r0, 0x8(r29)
	  addi      r0, r6, 0x5808
	  mr        r4, r0
	  li        r6, 0x14
	  stw       r5, 0x0(r29)
	  li        r5, 0
	  bl        0xAE3AC
	  lis       r3, 0x804A
	  li        r4, 0
	  subi      r3, r3, 0x878
	  li        r0, -0x1
	  stw       r3, 0x0(r29)
	  mr        r3, r29
	  stw       r30, 0xFC(r29)
	  stw       r31, 0x100(r29)
	  stw       r4, 0x104(r29)
	  stw       r4, 0x108(r29)
	  stw       r0, 0x10C(r29)
	  stb       r4, 0x110(r29)
	  stw       r4, 0x114(r29)
	  stw       r0, 0x118(r29)
	  stb       r4, 0x11C(r29)
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
 * Address:	800134EC
 * Size:	000078
 */
void JStudio_JStage::TAdaptor_camera::~TAdaptor_camera()
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
	  subi      r0, r5, 0x878
	  stw       r0, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x54D0
	  extsh.    r0, r31
	  ble-      .loc_0x5C
	  mr        r3, r30
	  bl        0x10B70

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
 * Address:	80013564
 * Size:	000048
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_prepare(
    const JStudio::TObject*)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8050
	  addi      r0, r4, 0x6C34
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
 * Address:	800135AC
 * Size:	0000E8
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_begin(const JStudio::TObject*)
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
	  mr        r28, r3
	  lwz       r30, 0x100(r3)
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
	  lwz       r30, 0x14(r29)
	  mr        r3, r28
	  mr        r4, r30
	  bl        0x45C
	  mr        r3, r28
	  mr        r4, r30
	  bl        0x638
	  lis       r4, 0x8050
	  lis       r3, 0x8001
	  addi      r0, r4, 0x6C34
	  li        r31, 0
	  mr        r29, r0
	  subi      r30, r3, 0x2F50
	  b         .loc_0xBC

	.loc_0x8C:
	  lwz       r3, 0x100(r28)
	  addi      r12, r29, 0x14
	  bl        0xAE4E4
	  nop
	  lwz       r0, 0x4(r29)
	  addi      r29, r29, 0x20
	  lwz       r3, 0x4(r28)
	  mulli     r0, r0, 0x14
	  add       r3, r3, r0
	  stw       r30, 0x8(r3)
	  stw       r31, 0x4(r3)
	  stfs      f1, 0xC(r3)

	.loc_0xBC:
	  lwz       r0, 0x4(r29)
	  cmpwi     r0, -0x1
	  bne+      .loc_0x8C
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
 * Address:	80013694
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_end(const JStudio::TObject*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x100(r3)
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
 * Address:	800136E8
 * Size:	00005C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_update(const JStudio::TObject*,
                                                        unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x14(r4)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r4, r31
	  bl        0x264
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x45C
	  lwz       r3, 0x100(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	80013744
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_data(const JStudio::TObject*,
                                                      const void*,
                                                      unsigned long,
                                                      const void*,
                                                      unsigned long)
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
	  lwz       r3, 0x100(r3)
	  bl        -0x1720
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013778
 * Size:	000044
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT(
    JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x18
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x20
	  b         .loc_0x30

	.loc_0x20:
	  lwz       r3, 0xFC(r31)
	  mr        r4, r5
	  bl        -0x1714
	  stw       r3, 0x108(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800137BC
 * Size:	00005C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_NODE(
    JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x19
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x40
	  bge-      .loc_0x48
	  cmpwi     r4, 0x18
	  bge-      .loc_0x2C
	  b         .loc_0x48

	.loc_0x2C:
	  lwz       r3, 0x108(r31)
	  mr        r4, r5
	  bl        -0x1718
	  stw       r3, 0x10C(r31)
	  b         .loc_0x48

	.loc_0x40:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x10C(r31)

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
 * Address:	80013818
 * Size:	000080
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_ENABLE(
    JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x70

	.loc_0x18:
	  lwz       r4, 0x0(r5)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x110(r3)
	  lwz       r0, 0x104(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x40
	  bge-      .loc_0x70
	  b         .loc_0x70

	.loc_0x40:
	  lbz       r0, 0x110(r3)
	  li        r4, 0
	  li        r5, -0x1
	  cmplwi    r0, 0
	  beq-      .loc_0x5C
	  lwz       r4, 0x108(r3)
	  lwz       r5, 0x10C(r3)

	.loc_0x5C:
	  lwz       r3, 0x100(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013898
 * Size:	000014
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_FUNCTION(
    JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bnelr-
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x104(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800138AC
 * Size:	000044
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT(
    JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x18
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x20
	  b         .loc_0x30

	.loc_0x20:
	  lwz       r3, 0xFC(r31)
	  mr        r4, r5
	  bl        -0x1848
	  stw       r3, 0x114(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800138F0
 * Size:	00005C
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_NODE(
    JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x19
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  beq-      .loc_0x40
	  bge-      .loc_0x48
	  cmpwi     r4, 0x18
	  bge-      .loc_0x2C
	  b         .loc_0x48

	.loc_0x2C:
	  lwz       r3, 0x114(r31)
	  mr        r4, r5
	  bl        -0x184C
	  stw       r3, 0x118(r31)
	  b         .loc_0x48

	.loc_0x40:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x118(r31)

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
 * Address:	8001394C
 * Size:	000020
 */
void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE(
    JStudio::data::TEOperationData, const void*, unsigned long)
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bnelr-
	  lwz       r4, 0x0(r5)
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x11C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001396C
 * Size:	0000FC
 */
void JStudio_JStage::TAdaptor_camera::setJSG_position_(const JStudio::TControl*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x64(r1)
	  addi      r5, r5, 0x3390
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  bl        -0x6668
	  lbz       r0, 0x110(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lbz       r0, 0x74(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r0, r1, 0x14
	  b         .loc_0x60

	.loc_0x4C:
	  addi      r3, r31, 0x98
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD7214
	  addi      r0, r1, 0x8

	.loc_0x60:
	  mr        r4, r0
	  b         .loc_0xD0

	.loc_0x68:
	  lwz       r0, 0x104(r30)
	  addi      r4, r1, 0x14
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD0
	  bge-      .loc_0xD0
	  cmpwi     r0, 0
	  bge-      .loc_0x88
	  b         .loc_0xD0

	.loc_0x88:
	  lwz       r5, 0x108(r30)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x10C(r30)
	  bl        -0x1B9C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA8
	  li        r0, 0
	  b         .loc_0xC4

	.loc_0xA8:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xC4:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xE4
	  addi      r4, r1, 0x8

	.loc_0xD0:
	  lwz       r3, 0x100(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE4:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013A68
 * Size:	000108
 */
void JStudio_JStage::TAdaptor_camera::getJSG_position_(const JStudio::TControl*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lwz       r3, 0x100(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x110(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  lbz       r0, 0x75(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  addi      r0, r1, 0x14
	  b         .loc_0x68

	.loc_0x54:
	  addi      r3, r31, 0xC8
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD7110
	  addi      r0, r1, 0x8

	.loc_0x68:
	  mr        r4, r0
	  b         .loc_0xD8

	.loc_0x70:
	  lwz       r0, 0x104(r30)
	  addi      r4, r1, 0x14
	  cmpwi     r0, 0x1
	  beq-      .loc_0xD8
	  bge-      .loc_0xD8
	  cmpwi     r0, 0
	  bge-      .loc_0x90
	  b         .loc_0xD8

	.loc_0x90:
	  lwz       r5, 0x108(r30)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x10C(r30)
	  bl        -0x1B64
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB0
	  li        r0, 0
	  b         .loc_0xCC

	.loc_0xB0:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xCC:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xF0
	  addi      r4, r1, 0x8

	.loc_0xD8:
	  lis       r5, 0x8047
	  mr        r3, r30
	  addi      r0, r5, 0x3390
	  mr        r5, r4
	  mr        r4, r0
	  bl        -0x6898

	.loc_0xF0:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013B70
 * Size:	0000E0
 */
void JStudio_JStage::TAdaptor_camera::setJSG_targetPosition_(
    const JStudio::TControl*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x64(r1)
	  addi      r5, r5, 0x339C
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  bl        -0x686C
	  lbz       r0, 0x11C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lbz       r0, 0x74(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  addi      r0, r1, 0x14
	  b         .loc_0x60

	.loc_0x4C:
	  addi      r3, r31, 0x98
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD7010
	  addi      r0, r1, 0x8

	.loc_0x60:
	  mr        r4, r0
	  b         .loc_0xB4

	.loc_0x68:
	  lwz       r5, 0x114(r30)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x118(r30)
	  addi      r4, r1, 0x14
	  bl        -0x1D84
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x8C
	  li        r0, 0
	  b         .loc_0xA8

	.loc_0x8C:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xA8:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xC8
	  addi      r4, r1, 0x8

	.loc_0xB4:
	  lwz       r3, 0x100(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013C50
 * Size:	0000E4
 */
void JStudio_JStage::TAdaptor_camera::getJSG_targetPosition_(
    const JStudio::TControl*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x14
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  lwz       r3, 0x100(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x84(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x11C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  lbz       r0, 0x75(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  addi      r0, r1, 0x14
	  b         .loc_0x68

	.loc_0x54:
	  addi      r3, r31, 0xC8
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        0xD6F28
	  addi      r0, r1, 0x8

	.loc_0x68:
	  mr        r5, r0
	  b         .loc_0xBC

	.loc_0x70:
	  lwz       r5, 0x114(r30)
	  addi      r3, r1, 0x20
	  lwz       r6, 0x118(r30)
	  addi      r4, r1, 0x14
	  bl        -0x1D30
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  li        r0, 0
	  b         .loc_0xB0

	.loc_0x94:
	  lfs       f2, 0x2C(r1)
	  li        r0, 0x1
	  lfs       f1, 0x3C(r1)
	  lfs       f0, 0x4C(r1)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xB0:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xCC
	  addi      r5, r1, 0x8

	.loc_0xBC:
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r4, r4, 0x339C
	  bl        -0x6A5C

	.loc_0xCC:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80013D34
 * Size:	000370
 */
void __sinit_object - camera_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  stw       r0, 0xC4(r1)
	  lis       r5, 0x804A
	  lis       r12, 0x804F
	  li        r11, 0x7
	  stw       r31, 0xBC(r1)
	  subi      r31, r3, 0x8D8
	  lis       r3, 0x8050
	  stw       r30, 0xB8(r1)
	  subi      r30, r12, 0x1D8
	  subi      r12, r5, 0x800
	  stw       r29, 0xB4(r1)
	  subi      r29, r4, 0xB68
	  lis       r4, 0x8001
	  addi      r5, r30, 0
	  stwu      r29, 0x6C34(r3)
	  addi      r4, r4, 0x40A4
	  lwz       r10, 0x0(r31)
	  lwz       r9, 0x4(r31)
	  lwz       r8, 0x8(r31)
	  lwz       r7, 0xC(r31)
	  lwz       r6, 0x10(r31)
	  lwz       r0, 0x14(r31)
	  stw       r29, 0x88(r1)
	  stw       r12, 0x88(r1)
	  stw       r11, 0x8C(r1)
	  stw       r10, 0x90(r1)
	  stw       r9, 0x94(r1)
	  stw       r8, 0x98(r1)
	  stw       r7, 0x9C(r1)
	  stw       r6, 0xA0(r1)
	  stw       r0, 0xA4(r1)
	  stw       r12, 0x0(r3)
	  stw       r11, 0x4(r3)
	  stw       r10, 0x8(r3)
	  stw       r9, 0xC(r3)
	  stw       r8, 0x10(r3)
	  stw       r7, 0x14(r3)
	  stw       r6, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  bl        0xAD920
	  lis       r4, 0x804A
	  addi      r3, r1, 0x88
	  subi      r0, r4, 0x800
	  li        r4, 0
	  stw       r0, 0x88(r1)
	  bl        -0x6D90
	  lis       r4, 0x804A
	  lis       r3, 0x8050
	  subi      r29, r4, 0xB68
	  lwz       r10, 0x18(r31)
	  addi      r3, r3, 0x6C34
	  lwz       r9, 0x1C(r31)
	  stwu      r29, 0x20(r3)
	  li        r11, 0x6
	  lwz       r8, 0x20(r31)
	  lis       r5, 0x804A
	  lwz       r7, 0x24(r31)
	  subi      r12, r5, 0x800
	  lwz       r6, 0x28(r31)
	  lis       r4, 0x8001
	  lwz       r0, 0x2C(r31)
	  addi      r4, r4, 0x40A4
	  stw       r29, 0x68(r1)
	  addi      r5, r30, 0xC
	  stw       r12, 0x68(r1)
	  stw       r11, 0x6C(r1)
	  stw       r10, 0x70(r1)
	  stw       r9, 0x74(r1)
	  stw       r8, 0x78(r1)
	  stw       r7, 0x7C(r1)
	  stw       r6, 0x80(r1)
	  stw       r0, 0x84(r1)
	  stw       r12, 0x0(r3)
	  stw       r11, 0x4(r3)
	  stw       r10, 0x8(r3)
	  stw       r9, 0xC(r3)
	  stw       r8, 0x10(r3)
	  stw       r7, 0x14(r3)
	  stw       r6, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  bl        0xAD87C
	  lis       r4, 0x804A
	  addi      r3, r1, 0x68
	  subi      r0, r4, 0x800
	  li        r4, 0
	  stw       r0, 0x68(r1)
	  bl        -0x6E34
	  lis       r4, 0x804A
	  lis       r3, 0x8050
	  subi      r29, r4, 0xB68
	  lwz       r10, 0x30(r31)
	  addi      r3, r3, 0x6C34
	  lwz       r9, 0x34(r31)
	  stwu      r29, 0x40(r3)
	  li        r11, 0x8
	  lwz       r8, 0x38(r31)
	  lis       r5, 0x804A
	  lwz       r7, 0x3C(r31)
	  subi      r12, r5, 0x800
	  lwz       r6, 0x40(r31)
	  lis       r4, 0x8001
	  lwz       r0, 0x44(r31)
	  addi      r4, r4, 0x40A4
	  stw       r29, 0x48(r1)
	  addi      r5, r30, 0x18
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
	  bl        0xAD7D8
	  lis       r4, 0x804A
	  addi      r3, r1, 0x48
	  subi      r0, r4, 0x800
	  li        r4, 0
	  stw       r0, 0x48(r1)
	  bl        -0x6ED8
	  lis       r4, 0x804A
	  lis       r3, 0x8050
	  subi      r29, r4, 0xB68
	  lwz       r10, 0x48(r31)
	  addi      r3, r3, 0x6C34
	  lwz       r9, 0x4C(r31)
	  stwu      r29, 0x60(r3)
	  li        r11, 0x9
	  lwz       r8, 0x50(r31)
	  lis       r5, 0x804A
	  lwz       r7, 0x54(r31)
	  subi      r12, r5, 0x800
	  lwz       r6, 0x58(r31)
	  lis       r4, 0x8001
	  lwz       r0, 0x5C(r31)
	  addi      r4, r4, 0x40A4
	  stw       r29, 0x28(r1)
	  addi      r5, r30, 0x24
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
	  bl        0xAD734
	  lis       r4, 0x804A
	  addi      r3, r1, 0x28
	  subi      r0, r4, 0x800
	  li        r4, 0
	  stw       r0, 0x28(r1)
	  bl        -0x6F7C
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  subi      r11, r4, 0xB68
	  li        r9, -0x1
	  stw       r11, 0x8(r1)
	  subi      r10, r3, 0x800
	  lis       r4, 0x8048
	  lis       r3, 0x8050
	  stw       r10, 0x8(r1)
	  subi      r8, r4, 0x60F0
	  lis       r4, 0x8001
	  lwz       r7, 0x0(r8)
	  stw       r9, 0xC(r1)
	  addi      r3, r3, 0x6C34
	  addi      r4, r4, 0x40A4
	  addi      r5, r30, 0x30
	  lwz       r6, 0x4(r8)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x14(r1)
	  lwz       r0, 0x8(r8)
	  stwu      r11, 0x80(r3)
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
	  bl        0xAD694
	  lis       r4, 0x804A
	  addi      r3, r1, 0x8
	  subi      r0, r4, 0x800
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x701C
	  lwz       r0, 0xC4(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r29, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800140A4
 * Size:	000060
 */
void JStudio_JStage::TVariableValueOutput_object_<
    JStudio_JStage::TAdaptor_camera,
    JStage::TCamera>::~TVariableValueOutput_object_()
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
	  subi      r0, r5, 0x800
	  stw       r0, 0x0(r30)
	  bl        -0x706C
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0xFFD0

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
 * Address:	80014104
 * Size:	000030
 */
void JStudio_JStage::TVariableValueOutput_object_<
    JStudio_JStage::TAdaptor_camera,
    JStage::TCamera>::operator()(float, JStudio::TAdaptor*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x100(r4)
	  bl        0xADA08
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
