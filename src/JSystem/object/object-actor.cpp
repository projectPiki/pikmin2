

/*
 * --INFO--
 * Address:	80012198
 * Size:	0000C8
 */
void JStudio_JStage::TAdaptor_actor::__ct((JStage::TSystem const*,
                                           JStage::TActor*))
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
	  subi      r5, r7, 0xC08
	  li        r7, 0xE
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r8, r29
	  stw       r0, 0x0(r3)
	  addi      r3, r8, 0xC
	  li        r0, 0xE
	  stw       r3, 0x4(r29)
	  stw       r0, 0x8(r29)
	  addi      r0, r6, 0x5808
	  mr        r4, r0
	  li        r6, 0x14
	  stw       r5, 0x0(r29)
	  li        r5, 0
	  bl        0xAF63C
	  lis       r3, 0x804A
	  li        r4, 0
	  subi      r3, r3, 0x9BC
	  li        r0, -0x1
	  stw       r3, 0x0(r29)
	  mr        r3, r29
	  stw       r30, 0x124(r29)
	  stw       r31, 0x128(r29)
	  stw       r4, 0x12C(r29)
	  stw       r4, 0x130(r29)
	  stw       r4, 0x134(r29)
	  stw       r4, 0x138(r29)
	  stw       r0, 0x13C(r29)
	  stb       r4, 0x140(r29)
	  stw       r4, 0x144(r29)
	  stw       r0, 0x148(r29)
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
 * Address:	80012260
 * Size:	000078
 */
void JStudio_JStage::TAdaptor_actor::__dt(void)
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
	  subi      r0, r5, 0x9BC
	  stw       r0, 0x0(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x4A0C
	  extsh.    r0, r31
	  ble-      .loc_0x5C
	  mr        r3, r30
	  bl        0x11DFC

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
 * Address:	800122D8
 * Size:	00008C
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_prepare(
    (JStudio::TObject const*))
{
	/*
	.loc_0x0:
	  lis       r4, 0x8050
	  addi      r0, r4, 0x6AD4
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
	  lis       r4, 0x8050
	  addi      r0, r4, 0x6BA4
	  mr        r5, r0
	  b         .loc_0x7C

	.loc_0x54:
	  mulli     r0, r0, 0x14
	  lwz       r4, 0x4(r3)
	  cmplwi    r5, 0
	  add       r4, r4, r0
	  beq-      .loc_0x70
	  mr        r0, r5
	  b         .loc_0x74

	.loc_0x70:
	  subi      r0, r13, 0x78F0

	.loc_0x74:
	  stw       r0, 0x10(r4)
	  addi      r5, r5, 0x30

	.loc_0x7C:
	  lwz       r0, 0x4(r5)
	  cmpwi     r0, -0x1
	  bne+      .loc_0x54
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012364
 * Size:	000130
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_begin((JStudio::TObject const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lwz       r29, 0x128(r3)
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r29)
	  ori       r4, r3, 0x1
	  mr        r3, r29
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r28)
	  mr        r3, r31
	  bl        0x6AC
	  lis       r4, 0x8050
	  lis       r3, 0x8001
	  addi      r0, r4, 0x6AD4
	  li        r29, 0
	  mr        r28, r0
	  subi      r30, r3, 0x2F50
	  b         .loc_0xAC

	.loc_0x7C:
	  lwz       r3, 0x128(r31)
	  addi      r12, r28, 0x14
	  bl        0xAF73C
	  nop
	  lwz       r0, 0x4(r28)
	  addi      r28, r28, 0x20
	  lwz       r3, 0x4(r31)
	  mulli     r0, r0, 0x14
	  add       r3, r3, r0
	  stw       r30, 0x8(r3)
	  stw       r29, 0x4(r3)
	  stfs      f1, 0xC(r3)

	.loc_0xAC:
	  lwz       r0, 0x4(r28)
	  cmpwi     r0, -0x1
	  bne+      .loc_0x7C
	  lis       r4, 0x8050
	  lis       r3, 0x8001
	  addi      r0, r4, 0x6BA4
	  li        r30, 0
	  mr        r28, r0
	  subi      r29, r3, 0x2F50
	  b         .loc_0x104

	.loc_0xD4:
	  lwz       r3, 0x128(r31)
	  addi      r12, r28, 0x18
	  bl        0xAF6E4
	  nop
	  lwz       r0, 0x4(r28)
	  addi      r28, r28, 0x30
	  lwz       r3, 0x4(r31)
	  mulli     r0, r0, 0x14
	  add       r3, r3, r0
	  stw       r29, 0x8(r3)
	  stw       r30, 0x4(r3)
	  stfs      f1, 0xC(r3)

	.loc_0x104:
	  lwz       r0, 0x4(r28)
	  cmpwi     r0, -0x1
	  bne+      .loc_0xD4
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
 * Address:	80012494
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_end((JStudio::TObject const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, 0x128(r3)
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
 * Address:	800124E8
 * Size:	000044
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_update((JStudio::TObject const*,
                                                        unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r4, 0x14(r4)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x3F4
	  lwz       r3, 0x128(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
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
 * Address:	8001252C
 * Size:	000034
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_data(
    (JStudio::TObject const*, void const*, unsigned long, void const*,
     unsigned long))
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
	  lwz       r3, 0x128(r3)
	  bl        -0x508
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012560
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_SHAPE(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  mr        r11, r5
	  stw       r0, 0x24(r1)
	  subi      r10, r7, 0xA50
	  mr        r7, r6
	  mr        r5, r4
	  lwz       r9, 0x0(r10)
	  mr        r6, r11
	  lwz       r8, 0x4(r10)
	  addi      r4, r1, 0x8
	  lwz       r0, 0x8(r10)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x318
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800125B4
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_ANIMATION(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  mr        r11, r5
	  stw       r0, 0x24(r1)
	  subi      r10, r7, 0xA44
	  mr        r7, r6
	  mr        r5, r4
	  lwz       r9, 0x0(r10)
	  mr        r6, r11
	  lwz       r8, 0x4(r10)
	  addi      r4, r1, 0x8
	  lwz       r0, 0x8(r10)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x2C4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012608
 * Size:	000014
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_ANIMATION_MODE(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bnelr-
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x12C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001261C
 * Size:	000054
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  mr        r11, r5
	  stw       r0, 0x24(r1)
	  subi      r10, r7, 0xA38
	  mr        r7, r6
	  mr        r5, r4
	  lwz       r9, 0x0(r10)
	  mr        r6, r11
	  lwz       r8, 0x4(r10)
	  addi      r4, r1, 0x8
	  lwz       r0, 0x8(r10)
	  stw       r9, 0x8(r1)
	  stw       r8, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x25C
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012670
 * Size:	000014
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_TEXTURE_ANIMATION_MODE(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bnelr-
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x130(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012684
 * Size:	000044
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_PARENT(
    (JStudio::data::TEOperationData, void const*, unsigned long))
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
	  lwz       r3, 0x124(r31)
	  mr        r4, r5
	  bl        -0x620
	  stw       r3, 0x138(r31)

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
 * Address:	800126C8
 * Size:	00005C
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_PARENT_NODE(
    (JStudio::data::TEOperationData, void const*, unsigned long))
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
	  lwz       r3, 0x138(r31)
	  mr        r4, r5
	  bl        -0x624
	  stw       r3, 0x13C(r31)
	  b         .loc_0x48

	.loc_0x40:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x13C(r31)

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
 * Address:	80012724
 * Size:	000088
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_PARENT_ENABLE(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x78

	.loc_0x18:
	  lwz       r5, 0x0(r5)
	  lbz       r0, 0x140(r3)
	  neg       r4, r5
	  or        r4, r4, r5
	  rlwinm    r4,r4,1,31,31
	  cmplw     r0, r4
	  beq-      .loc_0x78
	  stb       r4, 0x140(r3)
	  lwz       r0, 0x134(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x4C
	  bge-      .loc_0x78
	  b         .loc_0x78

	.loc_0x4C:
	  cmplwi    r4, 0
	  li        r4, 0
	  li        r5, -0x1
	  beq-      .loc_0x64
	  lwz       r4, 0x138(r3)
	  lwz       r5, 0x13C(r3)

	.loc_0x64:
	  lwz       r3, 0x128(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800127AC
 * Size:	000014
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_PARENT_FUNCTION(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  bnelr-
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x134(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800127C0
 * Size:	000044
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_RELATION(
    (JStudio::data::TEOperationData, void const*, unsigned long))
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
	  lwz       r3, 0x124(r31)
	  mr        r4, r5
	  bl        -0x75C
	  stw       r3, 0x144(r31)

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
 * Address:	80012804
 * Size:	00005C
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_RELATION_NODE(
    (JStudio::data::TEOperationData, void const*, unsigned long))
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
	  lwz       r3, 0x138(r31)
	  mr        r4, r5
	  bl        -0x760
	  stw       r3, 0x148(r31)
	  b         .loc_0x48

	.loc_0x40:
	  lwz       r0, 0x0(r5)
	  stw       r0, 0x148(r31)

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
 * Address:	80012860
 * Size:	000058
 */
void JStudio_JStage::TAdaptor_actor::adaptor_do_RELATION_ENABLE(
    (JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x1C
	  b         .loc_0x48

	.loc_0x1C:
	  lwz       r3, 0x128(r6)
	  lwz       r4, 0x0(r5)
	  lwz       r12, 0x0(r3)
	  neg       r0, r4
	  lwz       r5, 0x144(r6)
	  lwz       r12, 0x30(r12)
	  or        r0, r0, r4
	  rlwinm    r4,r0,1,31,31
	  lwz       r6, 0x148(r6)
	  mtctr     r12
	  bctrl

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800128B8
 * Size:	00003C
 */
void JStudio_JStage::TAdaptor_actor::setJSG_ID_(
    (void(JStage::TActor::)(void const*, void*, unsigned long),
     JStudio::data::TEOperationData, void const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0x19
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x18
	  b         .loc_0x2C

	.loc_0x18:
	  lwz       r3, 0x128(r3)
	  mr        r12, r4
	  lwz       r4, 0x0(r6)
	  bl        0xAF248
	  nop

	.loc_0x2C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800128F4
 * Size:	000178
 */
void JStudio_JStage::TAdaptor_actor::setJSG_SRT_((JStudio::TControl const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x94(r1)
	  addi      r5, r5, 0x3350
	  stw       r31, 0x8C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x5C
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  bl        -0x55F0
	  lis       r3, 0x8047
	  addi      r4, r1, 0x68
	  addi      r5, r3, 0x335C
	  mr        r3, r30
	  bl        -0x5604
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r5, r4, 0x3368
	  addi      r4, r1, 0x74
	  bl        -0x5618
	  lbz       r0, 0x140(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lbz       r0, 0x74(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  addi      r0, r1, 0x5C
	  b         .loc_0xA8

	.loc_0x74:
	  addi      r3, r31, 0x98
	  addi      r4, r1, 0x5C
	  addi      r5, r1, 0x38
	  bl        0xD8264
	  lfs       f1, 0x6C(r1)
	  addi      r0, r1, 0x38
	  lfs       f0, 0x90(r31)
	  lfs       f2, 0x68(r1)
	  fadds     f1, f1, f0
	  lfs       f0, 0x70(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)

	.loc_0xA8:
	  mr        r31, r0
	  b         .loc_0x118

	.loc_0xB0:
	  lwz       r0, 0x134(r30)
	  addi      r31, r1, 0x5C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x118
	  bge-      .loc_0x118
	  cmpwi     r0, 0
	  bge-      .loc_0xD0
	  b         .loc_0x118

	.loc_0xD0:
	  lwz       r5, 0x138(r30)
	  mr        r4, r31
	  lwz       r6, 0x13C(r30)
	  addi      r3, r1, 0x8
	  bl        -0xC08
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xF4
	  li        r0, 0
	  b         .loc_0x10C

	.loc_0xF4:
	  addi      r3, r1, 0x50
	  addi      r4, r1, 0x44
	  addi      r5, r1, 0x38
	  addi      r6, r1, 0x8
	  bl        -0x1884
	  li        r0, 0x1

	.loc_0x10C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x160
	  addi      r31, r1, 0x38

	.loc_0x118:
	  lwz       r3, 0x128(r30)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x128(r30)
	  addi      r4, r31, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x128(r30)
	  addi      r4, r31, 0x18
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012A6C
 * Size:	00017C
 */
void JStudio_JStage::TAdaptor_actor::getJSG_SRT_((JStudio::TControl const*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stw       r31, 0x8C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x5C
	  stw       r30, 0x88(r1)
	  mr        r30, r3
	  lwz       r3, 0x128(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x128(r30)
	  addi      r4, r1, 0x68
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x128(r30)
	  addi      r4, r1, 0x74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x140(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  lbz       r0, 0x75(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  addi      r0, r1, 0x5C
	  b         .loc_0xB8

	.loc_0x84:
	  addi      r3, r31, 0xC8
	  addi      r4, r1, 0x5C
	  addi      r5, r1, 0x38
	  bl        0xD80DC
	  lfs       f1, 0x6C(r1)
	  addi      r0, r1, 0x38
	  lfs       f0, 0x94(r31)
	  lfs       f2, 0x68(r1)
	  fadds     f1, f1, f0
	  lfs       f0, 0x70(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)

	.loc_0xB8:
	  mr        r31, r0
	  b         .loc_0x128

	.loc_0xC0:
	  lwz       r0, 0x134(r30)
	  addi      r31, r1, 0x5C
	  cmpwi     r0, 0x1
	  beq-      .loc_0x128
	  bge-      .loc_0x128
	  cmpwi     r0, 0
	  bge-      .loc_0xE0
	  b         .loc_0x128

	.loc_0xE0:
	  lwz       r5, 0x138(r30)
	  mr        r4, r31
	  lwz       r6, 0x13C(r30)
	  addi      r3, r1, 0x8
	  bl        -0xC60
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x104
	  li        r0, 0
	  b         .loc_0x11C

	.loc_0x104:
	  addi      r3, r1, 0x50
	  addi      r4, r1, 0x44
	  addi      r5, r1, 0x38
	  addi      r6, r1, 0x8
	  bl        -0x1A0C
	  li        r0, 0x1

	.loc_0x11C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x164
	  addi      r31, r1, 0x38

	.loc_0x128:
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r4, r4, 0x3350
	  mr        r5, r31
	  bl        -0x58E8
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r4, r4, 0x335C
	  addi      r5, r31, 0xC
	  bl        -0x58FC
	  lis       r4, 0x8047
	  mr        r3, r30
	  addi      r4, r4, 0x3368
	  addi      r5, r31, 0x18
	  bl        -0x5910

	.loc_0x164:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012BE8
 * Size:	0000E4
 */
void JStudio_JStage::TAdaptor_actor::TVVOutput_ANIMATION_FRAME_::operator()(
    const(float, JStudio::TAdaptor*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r31, 0x128(r4)
	  lwz       r0, 0x8(r3)
	  fmr       f30, f1
	  mr        r3, r31
	  addi      r12, r28, 0x24
	  add       r4, r4, r0
	  lwz       r30, -0x1(r4)
	  rlwinm    r29,r30,0,24,31
	  bl        0xAEEEC
	  nop
	  rlwinm    r0,r30,24,24,31
	  fmr       f31, f1
	  cmpwi     r0, 0x1
	  beq-      .loc_0x70
	  bge-      .loc_0x74
	  b         .loc_0x74

	.loc_0x70:
	  fsubs     f30, f31, f30

	.loc_0x74:
	  lfs       f0, -0x7EB8(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xA0
	  mr        r3, r29
	  bl        -0xA180
	  fmr       f1, f30
	  mr        r12, r3
	  fmr       f2, f31
	  mtctr     r12
	  bctrl
	  frsp      f30, f1

	.loc_0xA0:
	  fmr       f1, f30
	  mr        r3, r31
	  addi      r12, r28, 0xC
	  bl        0xAEE90
	  nop
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80012CCC
 * Size:	000060
 */
void JStudio_JStage::TAdaptor_actor::TVVOutput_ANIMATION_FRAME_::__dt(void)
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
	  subi      r0, r5, 0x9CC
	  stw       r0, 0x0(r30)
	  bl        -0x5C94
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0x113A8

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
 * Address:	80012D2C
 * Size:	0003D0
 */
void __sinit_object - actor_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  stw       r0, 0x114(r1)
	  lis       r5, 0x804A
	  lis       r12, 0x804F
	  li        r11, 0x1
	  stmw      r25, 0xF4(r1)
	  subi      r31, r3, 0xA50
	  subi      r25, r4, 0xB68
	  lis       r3, 0x8050
	  subi      r30, r12, 0x218
	  subi      r12, r5, 0x91C
	  lis       r4, 0x8001
	  addi      r4, r4, 0x30FC
	  addi      r5, r30, 0
	  stwu      r25, 0x6AD4(r3)
	  lwz       r10, 0x24(r31)
	  lwz       r9, 0x28(r31)
	  lwz       r8, 0x2C(r31)
	  lwz       r7, 0x30(r31)
	  lwz       r6, 0x34(r31)
	  lwz       r0, 0x38(r31)
	  stw       r25, 0x34(r1)
	  stw       r12, 0x34(r1)
	  stw       r11, 0x38(r1)
	  stw       r10, 0x3C(r1)
	  stw       r9, 0x40(r1)
	  stw       r8, 0x44(r1)
	  stw       r7, 0x48(r1)
	  stw       r6, 0x4C(r1)
	  stw       r0, 0x50(r1)
	  stw       r12, 0x0(r3)
	  stw       r11, 0x4(r3)
	  stw       r10, 0x8(r3)
	  stw       r9, 0xC(r3)
	  stw       r8, 0x10(r3)
	  stw       r7, 0x14(r3)
	  stw       r6, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  bl        0xAE930
	  lis       r4, 0x804A
	  addi      r3, r1, 0x34
	  subi      r0, r4, 0x91C
	  li        r4, 0
	  stw       r0, 0x34(r1)
	  bl        -0x5D80
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  subi      r11, r4, 0xB68
	  li        r9, -0x1
	  stw       r11, 0x14(r1)
	  subi      r10, r3, 0x91C
	  lis       r4, 0x8048
	  lis       r3, 0x8050
	  stw       r10, 0x14(r1)
	  subi      r8, r4, 0x60F0
	  lis       r4, 0x8001
	  lwz       r7, 0x0(r8)
	  stw       r9, 0x18(r1)
	  addi      r3, r3, 0x6AD4
	  addi      r4, r4, 0x30FC
	  addi      r5, r30, 0xC
	  lwz       r6, 0x4(r8)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  lwz       r0, 0x8(r8)
	  stwu      r11, 0x20(r3)
	  stw       r0, 0x24(r1)
	  stw       r7, 0x28(r1)
	  stw       r6, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r10, 0x0(r3)
	  stw       r9, 0x4(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r7, 0x14(r3)
	  stw       r6, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  bl        0xAE890
	  lis       r4, 0x804A
	  addi      r3, r1, 0x14
	  subi      r0, r4, 0x91C
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  bl        -0x5E20
	  lis       r4, 0x804A
	  lwz       r25, 0x3C(r31)
	  subi      r29, r4, 0xB68
	  lis       r3, 0x8050
	  lwz       r12, 0x40(r31)
	  li        r27, 0
	  stwu      r29, 0x6BA4(r3)
	  li        r26, 0x12D
	  lwz       r11, 0x44(r31)
	  addi      r28, r31, 0x84
	  lwz       r10, 0x48(r31)
	  lis       r4, 0x8001
	  lwz       r9, 0x4C(r31)
	  addi      r4, r4, 0x2CCC
	  lwz       r8, 0x50(r31)
	  addi      r5, r30, 0x18
	  lwz       r7, 0x54(r31)
	  lwz       r6, 0x58(r31)
	  lwz       r0, 0x5C(r31)
	  stw       r29, 0xB4(r1)
	  stw       r28, 0xB4(r1)
	  stw       r27, 0xB8(r1)
	  stw       r26, 0xBC(r1)
	  stw       r25, 0xC0(r1)
	  stw       r12, 0xC4(r1)
	  stw       r11, 0xC8(r1)
	  stw       r10, 0xCC(r1)
	  stw       r9, 0xD0(r1)
	  stw       r8, 0xD4(r1)
	  stw       r7, 0xD8(r1)
	  stw       r6, 0xDC(r1)
	  stw       r0, 0xE0(r1)
	  stw       r28, 0x0(r3)
	  stw       r27, 0x4(r3)
	  stw       r26, 0x8(r3)
	  stw       r25, 0xC(r3)
	  stw       r12, 0x10(r3)
	  stw       r11, 0x14(r3)
	  stw       r10, 0x18(r3)
	  stw       r9, 0x1C(r3)
	  stw       r8, 0x20(r3)
	  stw       r7, 0x24(r3)
	  stw       r6, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  bl        0xAE7C4
	  mr        r0, r28
	  addi      r3, r1, 0xB4
	  stw       r0, 0xB4(r1)
	  li        r4, 0
	  bl        -0x5EE8
	  lis       r4, 0x804A
	  lis       r3, 0x8050
	  subi      r25, r4, 0xB68
	  lwz       r29, 0x60(r31)
	  addi      r3, r3, 0x6BA4
	  lwz       r12, 0x64(r31)
	  stwu      r25, 0x30(r3)
	  li        r27, 0x2
	  lwz       r11, 0x68(r31)
	  li        r28, 0x131
	  lwz       r10, 0x6C(r31)
	  addi      r26, r31, 0x84
	  lwz       r9, 0x70(r31)
	  lis       r4, 0x8001
	  lwz       r8, 0x74(r31)
	  addi      r4, r4, 0x2CCC
	  lwz       r7, 0x78(r31)
	  addi      r5, r30, 0x24
	  lwz       r6, 0x7C(r31)
	  lwz       r0, 0x80(r31)
	  stw       r25, 0x84(r1)
	  stw       r26, 0x84(r1)
	  stw       r27, 0x88(r1)
	  stw       r28, 0x8C(r1)
	  stw       r29, 0x90(r1)
	  stw       r12, 0x94(r1)
	  stw       r11, 0x98(r1)
	  stw       r10, 0x9C(r1)
	  stw       r9, 0xA0(r1)
	  stw       r8, 0xA4(r1)
	  stw       r7, 0xA8(r1)
	  stw       r6, 0xAC(r1)
	  stw       r0, 0xB0(r1)
	  stw       r26, 0x0(r3)
	  stw       r27, 0x4(r3)
	  stw       r28, 0x8(r3)
	  stw       r29, 0xC(r3)
	  stw       r12, 0x10(r3)
	  stw       r11, 0x14(r3)
	  stw       r10, 0x18(r3)
	  stw       r9, 0x1C(r3)
	  stw       r8, 0x20(r3)
	  stw       r7, 0x24(r3)
	  stw       r6, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  bl        0xAE6F8
	  mr        r0, r26
	  addi      r3, r1, 0x84
	  stw       r0, 0x84(r1)
	  li        r4, 0
	  bl        -0x5FB4
	  lis       r3, 0x804A
	  li        r10, -0x1
	  subi      r12, r3, 0xB68
	  li        r9, 0
	  stw       r12, 0x54(r1)
	  mr        r11, r26
	  lis       r4, 0x8048
	  lis       r3, 0x8050
	  stw       r11, 0x54(r1)
	  subi      r8, r4, 0x60F0
	  lwz       r7, 0x0(r8)
	  lis       r4, 0x8001
	  stw       r10, 0x58(r1)
	  addi      r3, r3, 0x6BA4
	  addi      r5, r30, 0x30
	  addi      r4, r4, 0x2CCC
	  stw       r9, 0x5C(r1)
	  lwz       r6, 0x4(r8)
	  stw       r7, 0x8(r1)
	  stw       r7, 0x60(r1)
	  stw       r6, 0x64(r1)
	  lwz       r0, 0x8(r8)
	  stw       r6, 0xC(r1)
	  stwu      r12, 0x60(r3)
	  stw       r0, 0x68(r1)
	  stw       r0, 0x10(r1)
	  stw       r7, 0x6C(r1)
	  stw       r6, 0x70(r1)
	  stw       r0, 0x74(r1)
	  stw       r7, 0x78(r1)
	  stw       r6, 0x7C(r1)
	  stw       r0, 0x80(r1)
	  stw       r11, 0x0(r3)
	  stw       r10, 0x4(r3)
	  stw       r9, 0x8(r3)
	  stw       r7, 0xC(r3)
	  stw       r6, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r7, 0x18(r3)
	  stw       r6, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r7, 0x24(r3)
	  stw       r6, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  bl        0xAE630
	  mr        r0, r26
	  addi      r3, r1, 0x54
	  stw       r0, 0x54(r1)
	  li        r4, 0
	  bl        -0x607C
	  lmw       r25, 0xF4(r1)
	  lwz       r0, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800130FC
 * Size:	000060
 */
void __dt__Q214JStudio_JStage81TVariableValueOutput_object_<
    JStudio_JStage::TAdaptor_actor, JStage::TActor>
Fv(void)
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
	  subi      r0, r5, 0x91C
	  stw       r0, 0x0(r30)
	  bl        -0x60C4
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        0x10F78

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
 * Address:	8001315C
 * Size:	000030
 */
void __cl__Q214JStudio_JStage81TVariableValueOutput_object_<
    JStudio_JStage::TAdaptor_actor, JStage::TActor>
CFfPQ27JStudio8TAdaptor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x128(r4)
	  bl        0xAE9B0
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
