

/*
 * --INFO--
 * Address:	80011DCC
 * Size:	000098
 */
void JStudio_JStage::transform_toGlobalFromLocal(float (*) [4], const JStudio::TControl::TTransform_translation_rotation_scaling &, const JStage::TObject *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r4
  stw       r30, 0x68(r1)
  mr        r30, r3
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x80

.loc_0x2C:
  mr        r3, r5
  mr        r4, r6
  lwz       r12, 0x0(r5)
  addi      r5, r1, 0x38
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0x80

.loc_0x58:
  mr        r6, r31
  addi      r3, r1, 0x8
  addi      r4, r31, 0x18
  addi      r5, r31, 0xC
  bl        -0xE70
  mr        r5, r30
  addi      r3, r1, 0x38
  addi      r4, r1, 0x8
  bl        0xD84BC
  li        r3, 0x1

.loc_0x80:
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80011E64
 * Size:	000098
 */
void JStudio_JStage::transform_toGlobalFromLocal(float (*) [4], const JStudio::TControl::TTransform_position &, const JStage::TObject *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x74(r1)
  stw       r31, 0x6C(r1)
  mr        r31, r4
  stw       r30, 0x68(r1)
  mr        r30, r3
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x80

.loc_0x2C:
  mr        r3, r5
  mr        r4, r6
  lwz       r12, 0x0(r5)
  addi      r5, r1, 0x38
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0x80

.loc_0x58:
  lfs       f1, 0x0(r31)
  addi      r3, r1, 0x8
  lfs       f2, 0x4(r31)
  lfs       f3, 0x8(r31)
  bl        0xD8888
  mr        r5, r30
  addi      r3, r1, 0x38
  addi      r4, r1, 0x8
  bl        0xD8424
  li        r3, 0x1

.loc_0x80:
  lwz       r0, 0x74(r1)
  lwz       r31, 0x6C(r1)
  lwz       r30, 0x68(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80011EFC
 * Size:	0000A4
 */
void JStudio_JStage::transform_toLocalFromGlobal(float (*) [4], const JStudio::TControl::TTransform_translation_rotation_scaling &, const JStage::TObject *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0xA4(r1)
  stw       r31, 0x9C(r1)
  mr        r31, r4
  stw       r30, 0x98(r1)
  mr        r30, r3
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x8C

.loc_0x2C:
  mr        r3, r5
  mr        r4, r6
  lwz       r12, 0x0(r5)
  addi      r5, r1, 0x68
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0x8C

.loc_0x58:
  mr        r6, r31
  addi      r3, r1, 0x38
  addi      r4, r31, 0x18
  addi      r5, r31, 0xC
  bl        -0xFA0
  addi      r3, r1, 0x68
  addi      r4, r1, 0x8
  bl        0xD84AC
  mr        r5, r30
  addi      r3, r1, 0x8
  addi      r4, r1, 0x38
  bl        0xD8380
  li        r3, 0x1

.loc_0x8C:
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x9C(r1)
  lwz       r30, 0x98(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	80011FA0
 * Size:	0000A4
 */
void JStudio_JStage::transform_toLocalFromGlobal(float (*) [4], const JStudio::TControl::TTransform_position &, const JStage::TObject *, unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0xA4(r1)
  stw       r31, 0x9C(r1)
  mr        r31, r4
  stw       r30, 0x98(r1)
  mr        r30, r3
  bne-      .loc_0x2C
  li        r3, 0
  b         .loc_0x8C

.loc_0x2C:
  mr        r3, r5
  mr        r4, r6
  lwz       r12, 0x0(r5)
  addi      r5, r1, 0x68
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  li        r3, 0
  b         .loc_0x8C

.loc_0x58:
  lfs       f1, 0x0(r31)
  addi      r3, r1, 0x38
  lfs       f2, 0x4(r31)
  lfs       f3, 0x8(r31)
  bl        0xD874C
  addi      r3, r1, 0x68
  addi      r4, r1, 0x8
  bl        0xD8408
  mr        r5, r30
  addi      r3, r1, 0x8
  addi      r4, r1, 0x38
  bl        0xD82DC
  li        r3, 0x1

.loc_0x8C:
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x9C(r1)
  lwz       r30, 0x98(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	80012044
 * Size:	000048
 */
void adaptor_data___Q214JStudio_JStage16TAdaptor_object_FPQ26JStage7TObjectPCvUlPCvUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r5, 0
  stw       r0, 0x14(r1)
  bne-      .loc_0x1C
  li        r4, -0x1
  b         .loc_0x20

.loc_0x1C:
  lwz       r4, 0x0(r4)

.loc_0x20:
  lwz       r12, 0x0(r3)
  mr        r5, r6
  mr        r6, r7
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8001208C
 * Size:	00004C
 */
void adaptor_findJSGObject___Q214JStudio_JStage16TAdaptor_object_FPCQ26JStage7TSystemPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r4
  li        r6, 0
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  beq-      .loc_0x38
  li        r3, 0
  b         .loc_0x3C

.loc_0x38:
  lwz       r3, 0x8(r1)

.loc_0x3C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800120D8
 * Size:	00002C
 */
void adaptor_findJSGObjectNode___Q214JStudio_JStage16TAdaptor_object_FPCQ26JStage7TObjectPCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80012104
 * Size:	000094
 */
void adaptor_ENABLE___Q214JStudio_JStage16TAdaptor_object_FPQ26JStage7TObjectQ37JStudio4data15TEOperationDataPCvUl(void)
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
  b         .loc_0x80

.loc_0x20:
  lwz       r0, 0x0(r5)
  cmplwi    r0, 0
  beq-      .loc_0x58
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r31)
  ori       r4, r3, 0x2
  mr        r3, r31
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x80

.loc_0x58:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r31)
  rlwinm    r4,r3,0,31,29
  mr        r3, r31
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x80:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}