

/*
 * --INFO--
 * Address:	80008A80
 * Size:	000004
 */
void extrapolateParameter_raw__Q27JStudio13functionvalueFdd(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80008A84
 * Size:	00003C
 */
void extrapolateParameter_repeat__Q27JStudio13functionvalueFdd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stfd      f31, 0x8(r1)
  fmr       f31, f2
  bl        0xC6F34
  lfd       f0, -0x7FC0(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x28
  fadd      f1, f1, f31

.loc_0x28:
  lwz       r0, 0x14(r1)
  lfd       f31, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80008AC0
 * Size:	00002C
 */
void extrapolateParameter_clamp__Q27JStudio13functionvalueFdd(void)
{
/*
.loc_0x0:
  lfd       f0, -0x7FC0(r2)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x18
  fmr       f1, f0
  blr       

.loc_0x18:
  fcmpo     cr0, f2, f1
  cror      2, 0, 0x2
  bnelr-    
  fmr       f1, f2
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void toString_type__Q27JStudio14TFunctionValueFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void toValue_type__Q27JStudio14TFunctionValueFPCc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void toString_progress__Q27JStudio14TFunctionValueFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void toValue_progress__Q27JStudio14TFunctionValueFPCc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void toString_adjust__Q27JStudio14TFunctionValueFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void toValue_adjust__Q27JStudio14TFunctionValueFPCc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void toString_outside__Q27JStudio14TFunctionValueFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void toValue_outside__Q27JStudio14TFunctionValueFPCc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void toString_interpolate__Q27JStudio14TFunctionValueFi(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void toValue_interpolate__Q27JStudio14TFunctionValueFPCc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80008AEC
 * Size:	000048
 */
void toFunction_outside__Q27JStudio14TFunctionValueFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  li        r0, 0
  cmplwi    r3, 0x4
  lis       r4, 0x8047
  stw       r0, 0x8(r1)
  rlwinm    r3,r3,2,0,29
  addi      r0, r4, 0x32F0
  add       r3, r0, r3
  blt-      .loc_0x28
  addi      r3, r1, 0x8

.loc_0x28:
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  bne-      .loc_0x40
  lis       r3, 0x8047
  addi      r3, r3, 0x32F0
  lwz       r3, 0x0(r3)

.loc_0x40:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void __ct__Q27JStudio14TFunctionValueFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80008B34
 * Size:	000048
 */
void __dt__Q27JStudio14TFunctionValueFv(void)
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
  subi      r0, r5, 0x1AD8
  stw       r0, 0x0(r31)
  ble-      .loc_0x30
  bl        0x1B554

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
 * Address:	........
 * Size:	000028
 */
void refer_initialize__Q27JStudio29TFunctionValueAttribute_referFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000238
 */
void refer_isReferring__Q27JStudio29TFunctionValueAttribute_referCFPCQ27JStudio14TFunctionValue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void isEnd__Q27JGadget42TEnumerator<JStudio::TFunctionValue * const *>CFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void __opb__Q27JGadget42TEnumerator<JStudio::TFunctionValue * const *>CFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void refer_get__Q27JStudio32TFunctionValueAttributeSet_constCFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void __ml__Q27JGadget42TEnumerator<JStudio::TFunctionValue * const *>Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void __ct__Q27JGadget84TContainerEnumerator_const<JGadget::TVector_pointer<JStudio::TFunctionValue *>>FRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void getAttributeSet__Q27JStudio14TFunctionValueCFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __ct__Q27JGadget42TEnumerator<JStudio::TFunctionValue * const *>FPCPQ27JStudio14TFunctionValuePCPQ27JStudio14TFunctionValue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void __ct__Q27JStudio32TFunctionValueAttributeSet_constFRCQ27JStudio32TFunctionValueAttributeSet_const(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void begin__Q27JGadget44TVector_pointer<JStudio::TFunctionValue *>CFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void end__Q27JGadget44TVector_pointer<JStudio::TFunctionValue *>CFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void interpolateValue_hermite__Q27JStudio13functionvalueFddddddd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void interpolateValue_BSpline_uniform__Q27JStudio13functionvalueFddddd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void interpolateValue_BSpline_uniform_first1__Q27JStudio13functionvalueFddddd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void interpolateValue_BSpline_uniform_first2__Q27JStudio13functionvalueFddddd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void interpolateValue_BSpline_uniform_last2__Q27JStudio13functionvalueFddddd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void interpolateValue_BSpline_uniform_last1__Q27JStudio13functionvalueFddddd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void interpolateValue_BSpline_nonuniform__Q27JStudio13functionvalueFdPCdPCd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80008B7C
 * Size:	000060
 */
void extrapolateParameter_turn__Q27JStudio13functionvalueFdd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfd       f0, -0x7F88(r2)
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  stfd      f30, 0x10(r1)
  fmr       f30, f2
  fmul      f31, f0, f30
  fmr       f2, f31
  bl        0xC6E2C
  lfd       f0, -0x7FC0(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x38
  fadd      f1, f1, f31

.loc_0x38:
  fcmpo     cr0, f1, f30
  cror      2, 0x1, 0x2
  bne-      .loc_0x48
  fsub      f1, f31, f1

.loc_0x48:
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lfd       f30, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void range_initialize__Q27JStudio29TFunctionValueAttribute_rangeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void range_prepare__Q27JStudio29TFunctionValueAttribute_rangeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80008BDC
 * Size:	000014
 */
void range_set__Q27JStudio29TFunctionValueAttribute_rangeFdd(void)
{
/*
.loc_0x0:
  stfd      f1, 0x0(r3)
  fsub      f0, f2, f1
  stfd      f2, 0x8(r3)
  stfd      f0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000488
 */
void range_getParameter__Q27JStudio29TFunctionValueAttribute_rangeCFddd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __ct__Q27JStudio29TFunctionValueAttribute_rangeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80008BF0
 * Size:	000064
 */
void __ct__Q27JStudio24TFunctionValue_compositeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x24(r1)
  subi      r0, r4, 0x1AD8
  addi      r4, r1, 0x8
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r0, 0x0(r3)
  addi      r3, r31, 0x4
  lbz       r0, -0x78F8(r13)
  stb       r0, 0x8(r1)
  bl        0x1EA54
  lis       r3, 0x804A
  li        r0, 0
  subi      r4, r3, 0x1AF8
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x18(r31)
  stw       r0, 0x20(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void __dt__Q27JStudio29TFunctionValueAttribute_referFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __dt__Q27JGadget44TVector_pointer<JStudio::TFunctionValue *>Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80008C54
 * Size:	000008
 */
void getType__Q27JStudio24TFunctionValue_compositeCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80008C5C
 * Size:	000020
 */
void getAttributeSet__Q27JStudio24TFunctionValue_compositeFv(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  beq-      .loc_0xC
  addi      r4, r4, 0x4

.loc_0xC:
  stw       r4, 0x0(r3)
  li        r0, 0
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80008C7C
 * Size:	00004C
 */
void initialize__Q27JStudio24TFunctionValue_compositeFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r4, 0x8(r3)
  addi      r3, r31, 0x4
  lwz       r5, 0xC(r31)
  bl        0x1F06C
  li        r0, 0
  stw       r0, 0x8(r1)
  stw       r0, 0x18(r31)
  lfd       f0, 0x8(r1)
  stfd      f0, 0x20(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80008CC8
 * Size:	000004
 */
void prepare__Q27JStudio24TFunctionValue_compositeFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80008CCC
 * Size:	000034
 */
void getValue__Q27JStudio24TFunctionValue_compositeFd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  stw       r0, 0x14(r1)
  lwz       r12, 0x18(r3)
  addi      r3, r4, 0x4
  addi      r4, r4, 0x20
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
 * Address:	80008D00
 * Size:	00006C
 */
void composite_raw__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>RCQ37JStudio24TFunctionValue_composite5TDatad(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lwz       r5, 0x4(r3)
  stw       r0, 0x14(r1)
  cmplwi    r5, 0
  lwz       r4, 0x0(r4)
  bne-      .loc_0x24
  li        r0, 0
  b         .loc_0x34

.loc_0x24:
  lwz       r0, 0x8(r3)
  sub       r0, r0, r5
  srawi     r0, r0, 0x2
  addze     r0, r0

.loc_0x34:
  cmplw     r4, r0
  blt-      .loc_0x44
  lfd       f1, -0x7FC0(r2)
  b         .loc_0x5C

.loc_0x44:
  rlwinm    r0,r4,2,0,29
  lwzx      r3, r5, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80008D6C
 * Size:	00016C
 */
void composite_index__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>RCQ37JStudio24TFunctionValue_composite5TDatad(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x38(r1)
  fmr       f31, f1
  stw       r31, 0x34(r1)
  stw       r30, 0x30(r1)
  lwz       r30, 0x4(r3)
  stw       r29, 0x2C(r1)
  mr        r29, r4
  cmplwi    r30, 0
  bne-      .loc_0x38
  li        r31, 0
  b         .loc_0x48

.loc_0x38:
  lwz       r0, 0x8(r3)
  sub       r0, r0, r30
  srawi     r0, r0, 0x2
  addze     r31, r0

.loc_0x48:
  cmpwi     r31, 0x1
  bgt-      .loc_0x58
  lfd       f1, -0x7FC0(r2)
  b         .loc_0x14C

.loc_0x58:
  lwz       r3, 0x0(r30)
  fmr       f1, f31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  bl        0xC65AC
  fctiwz    f0, f1
  lwz       r0, 0x0(r29)
  cmpwi     r0, 0x2
  stfd      f0, 0x18(r1)
  lwz       r3, 0x1C(r1)
  beq-      .loc_0xE4
  bge-      .loc_0x9C
  cmpwi     r0, 0
  beq-      .loc_0x9C
  bge-      .loc_0xC0

.loc_0x9C:
  cmpwi     r3, 0
  bge-      .loc_0xAC
  li        r3, 0
  b         .loc_0x12C

.loc_0xAC:
  subi      r0, r31, 0x1
  cmpw      r3, r0
  blt-      .loc_0x12C
  subi      r3, r31, 0x2
  b         .loc_0x12C

.loc_0xC0:
  subi      r4, r31, 0x1
  bl        0xBD2C8
  stw       r3, 0x10(r1)
  mr.       r3, r4
  stw       r4, 0x14(r1)
  bge-      .loc_0x12C
  add       r3, r31, r3
  subi      r3, r3, 0x1
  b         .loc_0x12C

.loc_0xE4:
  subi      r0, r31, 0x1
  cmpwi     r0, 0x1
  bne-      .loc_0xF8
  li        r3, 0
  b         .loc_0x12C

.loc_0xF8:
  subi      r0, r31, 0x2
  rlwinm    r29,r0,1,0,30
  mr        r4, r29
  bl        0xBD288
  stw       r3, 0x8(r1)
  mr.       r3, r4
  stw       r4, 0xC(r1)
  bge-      .loc_0x11C
  add       r3, r3, r29

.loc_0x11C:
  subi      r0, r31, 0x1
  cmpw      r3, r0
  blt-      .loc_0x12C
  sub       r3, r29, r3

.loc_0x12C:
  addi      r0, r3, 0x1
  fmr       f1, f31
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r30, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x14C:
  lwz       r0, 0x44(r1)
  lfd       f31, 0x38(r1)
  lwz       r31, 0x34(r1)
  lwz       r30, 0x30(r1)
  lwz       r29, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80008ED8
 * Size:	000068
 */
void composite_parameter__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>RCQ37JStudio24TFunctionValue_composite5TDatad(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfd       f0, 0x0(r4)
  stw       r0, 0x14(r1)
  lwz       r4, 0x8(r3)
  fsub      f1, f1, f0
  lwz       r0, 0x4(r3)
  stw       r4, 0xC(r1)
  stw       r0, 0x8(r1)
  b         .loc_0x48

.loc_0x28:
  lwz       r4, 0x8(r1)
  lwz       r3, 0x0(r4)
  addi      r0, r4, 0x4
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x48:
  lwz       r3, 0x8(r1)
  lwz       r0, 0xC(r1)
  cmplw     r3, r0
  bne+      .loc_0x28
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80008F40
 * Size:	000084
 */
void composite_add__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>RCQ37JStudio24TFunctionValue_composite5TDatad(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lwz       r5, 0x8(r3)
  stw       r0, 0x24(r1)
  lwz       r0, 0x4(r3)
  stfd      f31, 0x18(r1)
  lfd       f31, 0x0(r4)
  stfd      f30, 0x10(r1)
  fmr       f30, f1
  stw       r5, 0xC(r1)
  stw       r0, 0x8(r1)
  b         .loc_0x58

.loc_0x30:
  lwz       r4, 0x8(r1)
  fmr       f1, f30
  lwz       r3, 0x0(r4)
  addi      r0, r4, 0x4
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  fadd      f31, f31, f1

.loc_0x58:
  lwz       r3, 0x8(r1)
  lwz       r0, 0xC(r1)
  cmplw     r3, r0
  bne+      .loc_0x30
  lwz       r0, 0x24(r1)
  fmr       f1, f31
  lfd       f31, 0x18(r1)
  lfd       f30, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80008FC4
 * Size:	0000E8
 */
void composite_subtract__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>RCQ37JStudio24TFunctionValue_composite5TDatad(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lwz       r5, 0x4(r3)
  stw       r0, 0x34(r1)
  cmplwi    r5, 0
  stfd      f31, 0x28(r1)
  stfd      f30, 0x20(r1)
  fmr       f30, f1
  stw       r31, 0x1C(r1)
  mr        r31, r4
  bne-      .loc_0x34
  li        r0, 0
  b         .loc_0x44

.loc_0x34:
  lwz       r0, 0x8(r3)
  sub       r0, r0, r5
  srawi     r0, r0, 0x2
  addze     r0, r0

.loc_0x44:
  cmplwi    r0, 0
  bne-      .loc_0x54
  lfd       f1, -0x7FC0(r2)
  b         .loc_0xCC

.loc_0x54:
  lwz       r4, 0x8(r3)
  fmr       f1, f30
  lwz       r3, 0x0(r5)
  addi      r0, r5, 0x4
  stw       r5, 0x8(r1)
  lwz       r12, 0x0(r3)
  stw       r4, 0xC(r1)
  lwz       r12, 0x1C(r12)
  stw       r0, 0x8(r1)
  mtctr     r12
  bctrl     
  fmr       f31, f1
  b         .loc_0xB0

.loc_0x88:
  lwz       r4, 0x8(r1)
  fmr       f1, f30
  lwz       r3, 0x0(r4)
  addi      r0, r4, 0x4
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  fsub      f31, f31, f1

.loc_0xB0:
  lwz       r3, 0x8(r1)
  lwz       r0, 0xC(r1)
  cmplw     r3, r0
  bne+      .loc_0x88
  lfd       f0, 0x0(r31)
  fsub      f31, f31, f0
  fmr       f1, f31

.loc_0xCC:
  lwz       r0, 0x34(r1)
  lfd       f31, 0x28(r1)
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800090AC
 * Size:	000084
 */
void composite_multiply__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>RCQ37JStudio24TFunctionValue_composite5TDatad(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lwz       r5, 0x8(r3)
  stw       r0, 0x24(r1)
  lwz       r0, 0x4(r3)
  stfd      f31, 0x18(r1)
  lfd       f31, 0x0(r4)
  stfd      f30, 0x10(r1)
  fmr       f30, f1
  stw       r5, 0xC(r1)
  stw       r0, 0x8(r1)
  b         .loc_0x58

.loc_0x30:
  lwz       r4, 0x8(r1)
  fmr       f1, f30
  lwz       r3, 0x0(r4)
  addi      r0, r4, 0x4
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  fmul      f31, f31, f1

.loc_0x58:
  lwz       r3, 0x8(r1)
  lwz       r0, 0xC(r1)
  cmplw     r3, r0
  bne+      .loc_0x30
  lwz       r0, 0x24(r1)
  fmr       f1, f31
  lfd       f31, 0x18(r1)
  lfd       f30, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80009130
 * Size:	0000E8
 */
void composite_divide__Q27JStudio24TFunctionValue_compositeFRCQ27JGadget44TVector_pointer<JStudio::TFunctionValue *>RCQ37JStudio24TFunctionValue_composite5TDatad(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lwz       r5, 0x4(r3)
  stw       r0, 0x34(r1)
  cmplwi    r5, 0
  stfd      f31, 0x28(r1)
  stfd      f30, 0x20(r1)
  fmr       f30, f1
  stw       r31, 0x1C(r1)
  mr        r31, r4
  bne-      .loc_0x34
  li        r0, 0
  b         .loc_0x44

.loc_0x34:
  lwz       r0, 0x8(r3)
  sub       r0, r0, r5
  srawi     r0, r0, 0x2
  addze     r0, r0

.loc_0x44:
  cmplwi    r0, 0
  bne-      .loc_0x54
  lfd       f1, -0x7FC0(r2)
  b         .loc_0xCC

.loc_0x54:
  lwz       r4, 0x8(r3)
  fmr       f1, f30
  lwz       r3, 0x0(r5)
  addi      r0, r5, 0x4
  stw       r5, 0x8(r1)
  lwz       r12, 0x0(r3)
  stw       r4, 0xC(r1)
  lwz       r12, 0x1C(r12)
  stw       r0, 0x8(r1)
  mtctr     r12
  bctrl     
  fmr       f31, f1
  b         .loc_0xB0

.loc_0x88:
  lwz       r4, 0x8(r1)
  fmr       f1, f30
  lwz       r3, 0x0(r4)
  addi      r0, r4, 0x4
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  fdiv      f31, f31, f1

.loc_0xB0:
  lwz       r3, 0x8(r1)
  lwz       r0, 0xC(r1)
  cmplw     r3, r0
  bne+      .loc_0x88
  lfd       f0, 0x0(r31)
  fdiv      f31, f31, f0
  fmr       f1, f31

.loc_0xCC:
  lwz       r0, 0x34(r1)
  lfd       f31, 0x28(r1)
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80009218
 * Size:	000028
 */
void __ct__Q27JStudio23TFunctionValue_constantFv(void)
{
/*
.loc_0x0:
  lis       r6, 0x804A
  lis       r5, 0x804A
  subi      r6, r6, 0x1AD8
  lis       r4, 0x8051
  stw       r6, 0x0(r3)
  subi      r0, r5, 0x1B18
  stw       r0, 0x0(r3)
  lfs       f0, 0x48B0(r4)
  stfd      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009240
 * Size:	000008
 */
void getType__Q27JStudio23TFunctionValue_constantCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x2
  blr
*/
}

/*
 * --INFO--
 * Address:	80009248
 * Size:	000014
 */
void getAttributeSet__Q27JStudio23TFunctionValue_constantFv(void)
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
 * Address:	8000925C
 * Size:	000010
 */
void initialize__Q27JStudio23TFunctionValue_constantFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  lfs       f0, 0x48B0(r4)
  stfd      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000926C
 * Size:	000004
 */
void prepare__Q27JStudio23TFunctionValue_constantFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80009270
 * Size:	000008
 */
void getValue__Q27JStudio23TFunctionValue_constantFd(void)
{
/*
.loc_0x0:
  lfd       f1, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009278
 * Size:	000074
 */
void __ct__Q27JStudio25TFunctionValue_transitionFv(void)
{
/*
.loc_0x0:
  lis       r6, 0x804A
  lis       r5, 0x8051
  subi      r0, r6, 0x1AD8
  lis       r4, 0x804A
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x48B0
  li        r5, 0
  subi      r0, r4, 0x1B38
  lfs       f0, 0x0(r6)
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r5, 0x20(r3)
  stb       r5, 0x21(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x28(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x30(r3)
  stw       r5, 0x38(r3)
  stw       r5, 0x3C(r3)
  stw       r5, 0x40(r3)
  stw       r0, 0x0(r3)
  lfs       f0, 0x0(r6)
  stfd      f0, 0x48(r3)
  lfd       f0, 0x48(r3)
  stfd      f0, 0x50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800092EC
 * Size:	000008
 */
void getType__Q27JStudio25TFunctionValue_transitionCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x3
  blr
*/
}

/*
 * --INFO--
 * Address:	800092F4
 * Size:	000030
 */
void getAttributeSet__Q27JStudio25TFunctionValue_transitionFv(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  mr        r5, r4
  beq-      .loc_0x10
  addi      r5, r5, 0x40

.loc_0x10:
  cmplwi    r4, 0
  beq-      .loc_0x1C
  addi      r4, r4, 0x8

.loc_0x1C:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r5, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009324
 * Size:	000048
 */
void initialize__Q27JStudio25TFunctionValue_transitionFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  lfsu      f0, 0x48B0(r4)
  li        r0, 0
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r0, 0x20(r3)
  stb       r0, 0x21(r3)
  stw       r0, 0x38(r3)
  stw       r0, 0x3C(r3)
  stw       r0, 0x40(r3)
  lfs       f0, 0x0(r4)
  stfd      f0, 0x48(r3)
  lfd       f0, 0x48(r3)
  stfd      f0, 0x50(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000936C
 * Size:	0000A8
 */
void prepare__Q27JStudio25TFunctionValue_transitionFv(void)
{
/*
.loc_0x0:
  lbz       r0, 0x20(r3)
  extsb     r0, r0
  cmpwi     r0, 0x2
  beq-      .loc_0x5C
  bge-      .loc_0x24
  cmpwi     r0, 0
  beq-      .loc_0x34
  bge-      .loc_0x48
  b         .loc_0x34

.loc_0x24:
  cmpwi     r0, 0x4
  beq-      .loc_0x84
  bge-      .loc_0x34
  b         .loc_0x70

.loc_0x34:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7FB8(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x48:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x5C:
  lfd       f1, 0x8(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x70:
  lfd       f1, 0x10(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x84:
  lfd       f1, 0x8(r3)
  lfd       f0, 0x10(r3)
  lfd       f2, -0x7F98(r2)
  fadd      f1, f1, f0
  lfd       f0, -0x7F80(r2)
  fmul      f1, f2, f1
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009414
 * Size:	000250
 */
void getValue__Q27JStudio25TFunctionValue_transitionFd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfd       f0, -0x7FC0(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfd       f4, 0x28(r3)
  lfd       f3, 0x30(r3)
  fsub      f2, f1, f4
  lfd       f1, 0x8(r3)
  fmadd     f2, f3, f2, f4
  fsub      f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x84
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0xC(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x60
  addi      r3, r1, 0xC

.loc_0x60:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x74
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x74:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0xDC

.loc_0x84:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xDC
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x8(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0xBC
  addi      r3, r1, 0x8

.loc_0xBC:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0xD0
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0xD0:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0xDC:
  lbz       r0, 0x21(r31)
  lfd       f3, 0x8(r31)
  extsb     r0, r0
  cmpwi     r0, 0x3
  fadd      f1, f1, f3
  beq-      .loc_0x144
  bge-      .loc_0x104
  cmpwi     r0, 0x2
  bge-      .loc_0x128
  b         .loc_0x110

.loc_0x104:
  cmpwi     r0, 0x5
  bge-      .loc_0x110
  b         .loc_0x16C

.loc_0x110:
  fcmpo     cr0, f1, f3
  bge-      .loc_0x120
  lfd       f1, 0x48(r31)
  b         .loc_0x23C

.loc_0x120:
  lfd       f1, 0x50(r31)
  b         .loc_0x23C

.loc_0x128:
  lfd       f0, 0x10(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x13C
  lfd       f1, 0x48(r31)
  b         .loc_0x23C

.loc_0x13C:
  lfd       f1, 0x50(r31)
  b         .loc_0x23C

.loc_0x144:
  lfd       f0, 0x10(r31)
  lfd       f2, -0x7F98(r2)
  fadd      f0, f3, f0
  fmul      f0, f2, f0
  fcmpo     cr0, f1, f0
  bge-      .loc_0x164
  lfd       f1, 0x48(r31)
  b         .loc_0x23C

.loc_0x164:
  lfd       f1, 0x50(r31)
  b         .loc_0x23C

.loc_0x16C:
  fcmpo     cr0, f1, f3
  bge-      .loc_0x17C
  lfd       f1, 0x48(r31)
  b         .loc_0x23C

.loc_0x17C:
  lfd       f0, 0x10(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x194
  lfd       f1, 0x50(r31)
  b         .loc_0x23C

.loc_0x194:
  lwz       r0, 0x40(r31)
  cmpwi     r0, 0x2
  beq-      .loc_0x1E0
  bge-      .loc_0x1B4
  cmpwi     r0, 0
  beq+      .loc_0x144
  bge-      .loc_0x1BC
  b         .loc_0x144

.loc_0x1B4:
  cmpwi     r0, 0x4
  bge+      .loc_0x144

.loc_0x1BC:
  lfd       f4, 0x48(r31)
  fsub      f2, f1, f3
  lfd       f1, 0x50(r31)
  lfd       f0, 0x18(r31)
  fsub      f1, f1, f4
  fmul      f1, f2, f1
  fdiv      f0, f1, f0
  fadd      f1, f4, f0
  b         .loc_0x23C

.loc_0x1E0:
  fsub      f0, f0, f3
  lfd       f6, -0x7FB8(r2)
  fsub      f8, f1, f3
  lfd       f3, -0x7FA8(r2)
  lfd       f2, -0x7FB0(r2)
  fdiv      f5, f6, f0
  lfd       f0, 0x50(r31)
  lfd       f1, 0x48(r31)
  lfd       f4, -0x7FC0(r2)
  fmul      f7, f8, f5
  fmadd     f3, f3, f7, f2
  fmul      f2, f7, f7
  fsub      f5, f7, f6
  fmul      f2, f3, f2
  fmul      f3, f5, f5
  fmul      f0, f2, f0
  fsub      f2, f6, f2
  fmul      f5, f5, f8
  fmul      f3, f8, f3
  fmadd     f0, f2, f1, f0
  fmul      f1, f7, f5
  fmadd     f0, f3, f4, f0
  fmadd     f1, f1, f4, f0

.loc_0x23C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80009664
 * Size:	000078
 */
void __ct__Q27JStudio19TFunctionValue_listFv(void)
{
/*
.loc_0x0:
  lis       r6, 0x804A
  lis       r5, 0x8051
  subi      r0, r6, 0x1AD8
  lis       r4, 0x804A
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x48B0
  li        r5, 0
  subi      r0, r4, 0x1B58
  lfs       f0, 0x0(r6)
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r5, 0x20(r3)
  stb       r5, 0x21(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x28(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x30(r3)
  stw       r5, 0x38(r3)
  stw       r5, 0x3C(r3)
  stw       r5, 0x40(r3)
  stw       r0, 0x0(r3)
  stw       r5, 0x44(r3)
  stw       r5, 0x48(r3)
  lfs       f0, 0x0(r6)
  stfd      f0, 0x50(r3)
  stw       r5, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800096DC
 * Size:	000008
 */
void getType__Q27JStudio19TFunctionValue_listCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4
  blr
*/
}

/*
 * --INFO--
 * Address:	800096E4
 * Size:	000030
 */
void getAttributeSet__Q27JStudio19TFunctionValue_listFv(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  mr        r5, r4
  beq-      .loc_0x10
  addi      r5, r5, 0x40

.loc_0x10:
  cmplwi    r4, 0
  beq-      .loc_0x1C
  addi      r4, r4, 0x8

.loc_0x1C:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r5, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009714
 * Size:	00004C
 */
void initialize__Q27JStudio19TFunctionValue_listFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  lfsu      f0, 0x48B0(r4)
  li        r0, 0
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r0, 0x20(r3)
  stb       r0, 0x21(r3)
  stw       r0, 0x38(r3)
  stw       r0, 0x3C(r3)
  stw       r0, 0x40(r3)
  stw       r0, 0x44(r3)
  stw       r0, 0x48(r3)
  lfs       f0, 0x0(r4)
  stfd      f0, 0x50(r3)
  stw       r0, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009760
 * Size:	000128
 */
void prepare__Q27JStudio19TFunctionValue_listFv(void)
{
/*
.loc_0x0:
  lbz       r0, 0x20(r3)
  extsb     r0, r0
  cmpwi     r0, 0x2
  beq-      .loc_0x5C
  bge-      .loc_0x24
  cmpwi     r0, 0
  beq-      .loc_0x34
  bge-      .loc_0x48
  b         .loc_0x34

.loc_0x24:
  cmpwi     r0, 0x4
  beq-      .loc_0x84
  bge-      .loc_0x34
  b         .loc_0x70

.loc_0x34:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7FB8(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x48:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x5C:
  lfd       f1, 0x8(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x70:
  lfd       f1, 0x10(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x84:
  lfd       f1, 0x8(r3)
  lfd       f0, 0x10(r3)
  lfd       f2, -0x7F98(r2)
  fadd      f1, f1, f0
  lfd       f0, -0x7F80(r2)
  fmul      f1, f2, f1
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)

.loc_0xA4:
  lwz       r0, 0x40(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xF0
  bge-      .loc_0xC4
  cmpwi     r0, 0
  beq-      .loc_0xD0
  bge-      .loc_0xE0
  b         .loc_0xD0

.loc_0xC4:
  cmpwi     r0, 0x4
  bge-      .loc_0xD0
  b         .loc_0x100

.loc_0xD0:
  lis       r4, 0x8001
  subi      r0, r4, 0x6248
  stw       r0, 0x58(r3)
  blr       

.loc_0xE0:
  lis       r4, 0x8001
  subi      r0, r4, 0x6234
  stw       r0, 0x58(r3)
  blr       

.loc_0xF0:
  lis       r4, 0x8001
  subi      r0, r4, 0x6204
  stw       r0, 0x58(r3)
  blr       

.loc_0x100:
  lis       r4, 0x8001
  subi      r0, r4, 0x6188
  stw       r0, 0x58(r3)
  lwz       r0, 0x48(r3)
  cmplwi    r0, 0x2
  bnelr-    
  lis       r4, 0x8001
  subi      r0, r4, 0x6234
  stw       r0, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009888
 * Size:	000530
 */
void getValue__Q27JStudio19TFunctionValue_listFd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stw       r30, 0x58(r1)
  mr        r31, r3
  lis       r0, 0x4330
  lwz       r3, 0x48(r3)
  lfd       f4, 0x28(r31)
  subi      r30, r3, 0x1
  lbz       r3, 0x21(r31)
  stw       r30, 0x4C(r1)
  fsub      f2, f1, f4
  lfd       f3, 0x30(r31)
  extsb     r3, r3
  stw       r0, 0x48(r1)
  cmpwi     r3, 0x2
  lfd       f1, -0x7F78(r2)
  lfd       f0, 0x48(r1)
  fmadd     f3, f3, f2, f4
  fsub      f31, f0, f1
  beq-      .loc_0x228
  bge-      .loc_0x74
  cmpwi     r3, 0
  beq-      .loc_0x84
  bge-      .loc_0x154
  b         .loc_0x84

.loc_0x74:
  cmpwi     r3, 0x4
  beq-      .loc_0x3E0
  bge-      .loc_0x84
  b         .loc_0x300

.loc_0x84:
  lfd       f1, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE4
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x2C(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0xC0
  addi      r3, r1, 0x2C

.loc_0xC0:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0xD4
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0xD4:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x13C

.loc_0xE4:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x13C
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x28(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x11C
  addi      r3, r1, 0x28

.loc_0x11C:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x130
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x130:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x13C:
  lfd       f2, 0x8(r31)
  lfd       f0, 0x50(r31)
  fadd      f1, f1, f2
  fdiv      f0, f1, f0
  stfd      f0, 0x30(r1)
  b         .loc_0x4B4

.loc_0x154:
  lfd       f2, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fadd      f1, f3, f2
  fsub      f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1B8
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x24(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x194
  addi      r3, r1, 0x24

.loc_0x194:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x1A8
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x1A8:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x210

.loc_0x1B8:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x210
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x20(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x1F0
  addi      r3, r1, 0x20

.loc_0x1F0:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x204
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x204:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x210:
  lfd       f2, 0x8(r31)
  lfd       f0, 0x50(r31)
  fadd      f1, f1, f2
  fdiv      f0, f1, f0
  stfd      f0, 0x30(r1)
  b         .loc_0x4B4

.loc_0x228:
  lfd       f0, 0x10(r31)
  lfd       f2, 0x8(r31)
  fadd      f1, f3, f0
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x290
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x1C(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x26C
  addi      r3, r1, 0x1C

.loc_0x26C:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x280
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x280:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x2E8

.loc_0x290:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x2E8
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x18(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x2C8
  addi      r3, r1, 0x18

.loc_0x2C8:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x2DC
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x2DC:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x2E8:
  lfd       f2, 0x8(r31)
  lfd       f0, 0x50(r31)
  fadd      f1, f1, f2
  fdiv      f0, f1, f0
  stfd      f0, 0x30(r1)
  b         .loc_0x4B4

.loc_0x300:
  lfd       f4, 0x8(r31)
  lfd       f0, 0x10(r31)
  lfd       f2, -0x7F98(r2)
  fadd      f1, f4, f0
  lfd       f0, -0x7FC0(r2)
  fmadd     f1, f2, f1, f3
  fsub      f1, f1, f4
  fcmpo     cr0, f1, f0
  bge-      .loc_0x370
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x14(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x34C
  addi      r3, r1, 0x14

.loc_0x34C:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x360
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x360:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x3C8

.loc_0x370:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x3C8
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x10(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x3A8
  addi      r3, r1, 0x10

.loc_0x3A8:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x3BC
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x3BC:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x3C8:
  lfd       f2, 0x8(r31)
  lfd       f0, 0x50(r31)
  fadd      f1, f1, f2
  fdiv      f0, f1, f0
  stfd      f0, 0x30(r1)
  b         .loc_0x4B4

.loc_0x3E0:
  lfd       f1, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x440
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0xC(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x41C
  addi      r3, r1, 0xC

.loc_0x41C:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x430
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x430:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x498

.loc_0x440:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x498
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x8(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x478
  addi      r3, r1, 0x8

.loc_0x478:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x48C
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x48C:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x498:
  lfd       f2, 0x8(r31)
  lfd       f0, 0x18(r31)
  fadd      f1, f1, f2
  fsub      f1, f1, f2
  fmul      f1, f31, f1
  fdiv      f0, f1, f0
  stfd      f0, 0x30(r1)

.loc_0x4B4:
  lfd       f1, 0x30(r1)
  lfd       f0, -0x7FC0(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x4D0
  lwz       r3, 0x44(r31)
  lfs       f1, 0x0(r3)
  b         .loc_0x510

.loc_0x4D0:
  fcmpo     cr0, f1, f31
  cror      2, 0x1, 0x2
  bne-      .loc_0x4EC
  lwz       r3, 0x44(r31)
  rlwinm    r0,r30,2,0,29
  lfsx      f1, r3, r0
  b         .loc_0x510

.loc_0x4EC:
  bl        0xC5614
  stfd      f1, 0x38(r1)
  bl        0xB7DD0
  stw       r3, 0x40(r1)
  mr        r3, r31
  addi      r4, r1, 0x30
  lwz       r12, 0x58(r31)
  mtctr     r12
  bctrl     

.loc_0x510:
  psq_l     f31,0x68(r1),0,0
  lwz       r0, 0x74(r1)
  lfd       f31, 0x60(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80009DB8
 * Size:	000014
 */
void update_INTERPOLATE_NONE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_(void)
{
/*
.loc_0x0:
  lwz       r0, 0x10(r4)
  lwz       r3, 0x44(r3)
  rlwinm    r0,r0,2,0,29
  lfsx      f1, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80009DCC
 * Size:	000030
 */
void update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_(void)
{
/*
.loc_0x0:
  lwz       r0, 0x10(r4)
  lwz       r5, 0x44(r3)
  rlwinm    r0,r0,2,0,29
  lfd       f1, 0x0(r4)
  add       r3, r5, r0
  lfd       f0, 0x8(r4)
  lfsx      f3, r5, r0
  lfs       f2, 0x4(r3)
  fsub      f0, f1, f0
  fsub      f1, f2, f3
  fmadd     f1, f1, f0, f3
  blr
*/
}

/*
 * --INFO--
 * Address:	80009DFC
 * Size:	00007C
 */
void update_INTERPOLATE_PLATEAU___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_(void)
{
/*
.loc_0x0:
  lfd       f4, 0x8(r4)
  lfd       f6, -0x7FB8(r2)
  lfd       f1, 0x0(r4)
  fadd      f0, f6, f4
  lwz       r0, 0x10(r4)
  fsub      f8, f1, f4
  lfd       f3, -0x7FA8(r2)
  lfd       f2, -0x7FB0(r2)
  rlwinm    r0,r0,2,0,29
  fsub      f0, f0, f4
  lwz       r4, 0x44(r3)
  lfd       f4, -0x7FC0(r2)
  add       r3, r4, r0
  lfsx      f1, r4, r0
  fdiv      f5, f6, f0
  lfs       f0, 0x4(r3)
  fmul      f7, f8, f5
  fmadd     f3, f3, f7, f2
  fmul      f2, f7, f7
  fsub      f5, f7, f6
  fmul      f2, f3, f2
  fmul      f3, f5, f5
  fmul      f5, f5, f8
  fmul      f0, f2, f0
  fsub      f2, f6, f2
  fmul      f3, f8, f3
  fmadd     f0, f2, f1, f0
  fmul      f1, f7, f5
  fmadd     f0, f3, f4, f0
  fmadd     f1, f1, f4, f0
  blr
*/
}

/*
 * --INFO--
 * Address:	80009E78
 * Size:	0000B4
 */
void update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_(void)
{
/*
.loc_0x0:
  lwz       r6, 0x10(r4)
  lwz       r7, 0x44(r3)
  rlwinm    r0,r6,2,0,29
  cmplwi    r6, 0
  add       r5, r7, r0
  lfsx      f8, r7, r0
  lfs       f9, 0x4(r5)
  bne-      .loc_0x30
  lfd       f0, -0x7F88(r2)
  lfs       f11, 0x8(r5)
  fmsub     f10, f0, f8, f9
  b         .loc_0x58

.loc_0x30:
  lwz       r3, 0x48(r3)
  subi      r0, r3, 0x2
  cmplw     r6, r0
  bne-      .loc_0x50
  lfd       f0, -0x7F88(r2)
  lfs       f10, -0x4(r5)
  fmsub     f11, f0, f9, f8
  b         .loc_0x58

.loc_0x50:
  lfs       f10, -0x4(r5)
  lfs       f11, 0x8(r5)

.loc_0x58:
  lfd       f2, 0x0(r4)
  lfd       f1, 0x8(r4)
  lfd       f0, -0x7FB8(r2)
  fsub      f12, f2, f1
  lfd       f6, -0x7F98(r2)
  lfd       f4, -0x7FA0(r2)
  lfd       f3, -0x7F90(r2)
  fmul      f5, f12, f12
  fsub      f2, f0, f12
  fmul      f7, f5, f12
  fmul      f1, f2, f2
  fmul      f0, f7, f11
  fmul      f1, f1, f2
  fmsub     f2, f6, f7, f5
  fmadd     f0, f1, f10, f0
  fadd      f5, f12, f5
  fadd      f1, f3, f2
  fmul      f0, f4, f0
  fsub      f2, f5, f7
  fmadd     f0, f1, f8, f0
  fmadd     f1, f6, f2, f4
  fmadd     f1, f1, f9, f0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void update_INTERPOLATE_CONTINUE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void update_INTERPOLATE_AVERAGE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000168
 */
void update_INTERPOLATE_SMOOTH___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80009F2C
 * Size:	000084
 */
void __ct__Q27JStudio29TFunctionValue_list_parameterFv(void)
{
/*
.loc_0x0:
  lis       r6, 0x804A
  lis       r5, 0x8051
  subi      r0, r6, 0x1AD8
  lis       r4, 0x804A
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x48B0
  li        r5, 0
  subi      r0, r4, 0x1B78
  lfs       f0, 0x0(r6)
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r5, 0x20(r3)
  stb       r5, 0x21(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x28(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x30(r3)
  stw       r5, 0x38(r3)
  stw       r5, 0x3C(r3)
  stw       r5, 0x40(r3)
  stw       r0, 0x0(r3)
  stw       r5, 0x44(r3)
  stw       r5, 0x48(r3)
  stw       r5, 0x4C(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x50(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x54(r3)
  stw       r5, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009FB0
 * Size:	000008
 */
void getType__Q27JStudio29TFunctionValue_list_parameterCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x5
  blr
*/
}

/*
 * --INFO--
 * Address:	80009FB8
 * Size:	000030
 */
void getAttributeSet__Q27JStudio29TFunctionValue_list_parameterFv(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  mr        r5, r4
  beq-      .loc_0x10
  addi      r5, r5, 0x40

.loc_0x10:
  cmplwi    r4, 0
  beq-      .loc_0x1C
  addi      r4, r4, 0x8

.loc_0x1C:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r5, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80009FE8
 * Size:	000030
 */
void data_set__Q27JStudio29TFunctionValue_list_parameterFPCfUl(void)
{
/*
.loc_0x0:
  stw       r4, 0x44(r3)
  stw       r5, 0x48(r3)
  lwz       r0, 0x44(r3)
  stw       r0, 0x4C(r3)
  lwz       r0, 0x48(r3)
  lwz       r4, 0x44(r3)
  rlwinm    r0,r0,3,0,28
  add       r0, r4, r0
  stw       r0, 0x50(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x54(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000A018
 * Size:	000058
 */
void initialize__Q27JStudio29TFunctionValue_list_parameterFv(void)
{
/*
.loc_0x0:
  lis       r5, 0x8051
  li        r4, 0
  lfs       f0, 0x48B0(r5)
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r4, 0x20(r3)
  stb       r4, 0x21(r3)
  stw       r4, 0x38(r3)
  stw       r4, 0x3C(r3)
  stw       r4, 0x40(r3)
  stw       r4, 0x44(r3)
  stw       r4, 0x48(r3)
  stw       r4, 0x4C(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x50(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x54(r3)
  stw       r4, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000A070
 * Size:	000128
 */
void prepare__Q27JStudio29TFunctionValue_list_parameterFv(void)
{
/*
.loc_0x0:
  lbz       r0, 0x20(r3)
  extsb     r0, r0
  cmpwi     r0, 0x2
  beq-      .loc_0x5C
  bge-      .loc_0x24
  cmpwi     r0, 0
  beq-      .loc_0x34
  bge-      .loc_0x48
  b         .loc_0x34

.loc_0x24:
  cmpwi     r0, 0x4
  beq-      .loc_0x84
  bge-      .loc_0x34
  b         .loc_0x70

.loc_0x34:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7FB8(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x48:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x5C:
  lfd       f1, 0x8(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x70:
  lfd       f1, 0x10(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  b         .loc_0xA4

.loc_0x84:
  lfd       f1, 0x8(r3)
  lfd       f0, 0x10(r3)
  lfd       f2, -0x7F98(r2)
  fadd      f1, f1, f0
  lfd       f0, -0x7F80(r2)
  fmul      f1, f2, f1
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)

.loc_0xA4:
  lwz       r0, 0x40(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xF0
  bge-      .loc_0xC4
  cmpwi     r0, 0
  beq-      .loc_0xD0
  bge-      .loc_0xE0
  b         .loc_0xD0

.loc_0xC4:
  cmpwi     r0, 0x4
  bge-      .loc_0xD0
  b         .loc_0x100

.loc_0xD0:
  lis       r4, 0x8001
  subi      r0, r4, 0x56A8
  stw       r0, 0x58(r3)
  blr       

.loc_0xE0:
  lis       r4, 0x8001
  subi      r0, r4, 0x569C
  stw       r0, 0x58(r3)
  blr       

.loc_0xF0:
  lis       r4, 0x8001
  subi      r0, r4, 0x566C
  stw       r0, 0x58(r3)
  blr       

.loc_0x100:
  lis       r4, 0x8001
  subi      r0, r4, 0x5600
  stw       r0, 0x58(r3)
  lwz       r0, 0x48(r3)
  cmplwi    r0, 0x2
  bnelr-    
  lis       r4, 0x8001
  subi      r0, r4, 0x569C
  stw       r0, 0x58(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000A198
 * Size:	000538
 */
void getValue__Q27JStudio29TFunctionValue_list_parameterFd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  stw       r0, 0x74(r1)
  stfd      f31, 0x60(r1)
  psq_st    f31,0x68(r1),0,0
  stfd      f30, 0x50(r1)
  psq_st    f30,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  stfd      f1, 0x8(r1)
  mr        r31, r3
  lfd       f2, 0x28(r3)
  lwz       r3, 0x48(r3)
  fsub      f0, f1, f2
  lfd       f1, 0x30(r31)
  lbz       r4, 0x21(r31)
  subi      r0, r3, 0x1
  lwz       r3, 0x44(r31)
  rlwinm    r0,r0,3,0,28
  extsb     r4, r4
  fmadd     f3, f1, f0, f2
  cmpwi     r4, 0x2
  lfs       f31, 0x0(r3)
  lfsx      f30, r3, r0
  beq-      .loc_0x210
  bge-      .loc_0x74
  cmpwi     r4, 0
  beq-      .loc_0x84
  bge-      .loc_0x148
  b         .loc_0x84

.loc_0x74:
  cmpwi     r4, 0x4
  beq-      .loc_0x3B0
  bge-      .loc_0x84
  b         .loc_0x2DC

.loc_0x84:
  lfd       f1, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE4
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x34(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0xC0
  addi      r3, r1, 0x34

.loc_0xC0:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0xD4
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0xD4:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x13C

.loc_0xE4:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x13C
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x30(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x11C
  addi      r3, r1, 0x30

.loc_0x11C:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x130
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x130:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x13C:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x488

.loc_0x148:
  lfd       f2, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fadd      f1, f3, f2
  fsub      f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1AC
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x2C(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x188
  addi      r3, r1, 0x2C

.loc_0x188:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x19C
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x19C:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x204

.loc_0x1AC:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x204
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x28(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x1E4
  addi      r3, r1, 0x28

.loc_0x1E4:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x1F8
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x1F8:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x204:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x488

.loc_0x210:
  lfd       f0, 0x10(r31)
  lfd       f2, 0x8(r31)
  fadd      f1, f3, f0
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x278
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x24(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x254
  addi      r3, r1, 0x24

.loc_0x254:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x268
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x268:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x2D0

.loc_0x278:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x2D0
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x20(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x2B0
  addi      r3, r1, 0x20

.loc_0x2B0:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x2C4
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x2C4:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x2D0:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x488

.loc_0x2DC:
  lfd       f4, 0x8(r31)
  lfd       f0, 0x10(r31)
  lfd       f2, -0x7F98(r2)
  fadd      f1, f4, f0
  lfd       f0, -0x7FC0(r2)
  fmadd     f1, f2, f1, f3
  fsub      f1, f1, f4
  fcmpo     cr0, f1, f0
  bge-      .loc_0x34C
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x1C(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x328
  addi      r3, r1, 0x1C

.loc_0x328:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x33C
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x33C:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x3A4

.loc_0x34C:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x3A4
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x18(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x384
  addi      r3, r1, 0x18

.loc_0x384:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x398
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x398:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x3A4:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x488

.loc_0x3B0:
  lfd       f1, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x410
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x14(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x3EC
  addi      r3, r1, 0x14

.loc_0x3EC:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x400
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x400:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x468

.loc_0x410:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x468
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x10(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x448
  addi      r3, r1, 0x10

.loc_0x448:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x45C
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x45C:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x468:
  lfd       f3, 0x8(r31)
  fsub      f2, f30, f31
  lfd       f0, 0x18(r31)
  fadd      f1, f1, f3
  fsub      f1, f1, f3
  fmul      f1, f1, f2
  fdiv      f0, f1, f0
  fadd      f1, f31, f0

.loc_0x488:
  stfd      f1, 0x8(r1)
  addi      r3, r1, 0x44
  addi      r4, r1, 0x40
  addi      r5, r1, 0x3C
  lwz       r0, 0x54(r31)
  addi      r6, r1, 0x38
  addi      r7, r1, 0x8
  stw       r0, 0x38(r1)
  lwz       r0, 0x50(r31)
  stw       r0, 0x3C(r1)
  lwz       r0, 0x4C(r31)
  stw       r0, 0x40(r1)
  bl        .loc_0x538
  lwz       r0, 0x44(r1)
  stw       r0, 0x54(r31)
  lwz       r3, 0x54(r31)
  lwz       r0, 0x4C(r31)
  cmplw     r3, r0
  bne-      .loc_0x4DC
  lfs       f1, 0x4(r3)
  b         .loc_0x514

.loc_0x4DC:
  lwz       r0, 0x50(r31)
  cmplw     r3, r0
  bne-      .loc_0x500
  lwz       r3, 0x54(r31)
  subi      r0, r3, 0x8
  stw       r0, 0x54(r31)
  lwz       r3, 0x54(r31)
  lfs       f1, 0x4(r3)
  b         .loc_0x514

.loc_0x500:
  lwz       r12, 0x58(r31)
  mr        r3, r31
  lfd       f1, 0x8(r1)
  mtctr     r12
  bctrl     

.loc_0x514:
  psq_l     f31,0x68(r1),0,0
  lfd       f31, 0x60(r1)
  psq_l     f30,0x58(r1),0,0
  lfd       f30, 0x50(r1)
  lwz       r0, 0x74(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr       

.loc_0x538:
*/
}

/*
 * --INFO--
 * Address:	8000A6D0
 * Size:	00005C
 */
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_list_parameter::TIterator_data_, double>(JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_, const double &)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lwz       r8, 0x0(r6)
  stw       r0, 0x34(r1)
  addi      r6, r1, 0x10
  lwz       r9, 0x0(r5)
  addi      r5, r1, 0x14
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r0, 0x0(r4)
  addi      r4, r1, 0x18
  lbz       r10, 0x8(r1)
  stw       r8, 0x10(r1)
  addi      r8, r1, 0xC
  stb       r10, 0xC(r1)
  stw       r9, 0x14(r1)
  stw       r0, 0x18(r1)
  bl        .loc_0x5C
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x5C:
*/
}

/*
 * --INFO--
 * Address:	8000A72C
 * Size:	00022C
 */
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_list_parameter::TIterator_data_, double, std::less<double>>(JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_, const double &, std::less<double>)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lwz       r9, 0x0(r6)
  stw       r0, 0x64(r1)
  lwz       r0, 0x0(r5)
  stw       r31, 0x5C(r1)
  mr        r31, r3
  sub       r0, r0, r9
  cntlzw    r3, r0
  rlwinm.   r0,r3,27,24,31
  rlwinm    r0,r3,27,5,31
  bne-      .loc_0x44
  lfd       f1, 0x0(r7)
  lfs       f0, 0x0(r9)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r0,r0,1,31,31

.loc_0x44:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x13C
  lwz       r4, 0x0(r4)
  lwz       r3, 0x0(r6)
  lbz       r0, 0x0(r8)
  cmplw     r4, r3
  stw       r4, 0x50(r1)
  stw       r3, 0x54(r1)
  stb       r0, 0x14(r1)
  bne-      .loc_0x78
  stw       r3, 0x4C(r1)
  addi      r3, r1, 0x4C
  b         .loc_0x210

.loc_0x78:
  subi      r3, r3, 0x8
  stw       r4, 0x30(r1)
  sub       r0, r3, r4
  lfd       f1, 0x0(r7)
  srawi     r0, r0, 0x2
  stw       r3, 0x54(r1)
  addze     r0, r0
  li        r4, 0x1
  stw       r3, 0x34(r1)
  rlwinm    r5,r0,31,1,31
  stw       r3, 0x3C(r1)

.loc_0xA4:
  lwz       r3, 0x3C(r1)
  lfs       f0, 0x0(r3)
  fcmpo     cr0, f1, f0
  blt-      .loc_0xD0
  cmpwi     r4, 0x1
  bne-      .loc_0xFC
  addi      r0, r3, 0x8
  addi      r3, r1, 0x4C
  stw       r0, 0x3C(r1)
  stw       r0, 0x4C(r1)
  b         .loc_0x210

.loc_0xD0:
  sub.      r5, r5, r4
  stw       r3, 0x54(r1)
  bgt-      .loc_0xE8
  lwz       r0, 0x50(r1)
  stw       r0, 0x3C(r1)
  b         .loc_0xFC

.loc_0xE8:
  rlwinm    r0,r4,3,0,28
  rlwinm    r4,r4,3,0,28
  sub       r0, r3, r0
  stw       r0, 0x3C(r1)
  b         .loc_0xA4

.loc_0xFC:
  lwz       r4, 0x54(r1)
  mr        r6, r7
  lbz       r8, 0x14(r1)
  addi      r3, r1, 0x4C
  addi      r9, r4, 0x8
  lwz       r0, 0x3C(r1)
  stw       r9, 0x54(r1)
  addi      r4, r1, 0x28
  addi      r5, r1, 0x2C
  addi      r7, r1, 0xC
  stb       r8, 0xC(r1)
  stw       r9, 0x2C(r1)
  stw       r0, 0x28(r1)
  bl        0x11B4
  addi      r3, r1, 0x4C
  b         .loc_0x210

.loc_0x13C:
  lwz       r4, 0x0(r6)
  lwz       r3, 0x0(r5)
  lbz       r0, 0x0(r8)
  cmplw     r4, r3
  stw       r4, 0x44(r1)
  stw       r3, 0x48(r1)
  stb       r0, 0x10(r1)
  bne-      .loc_0x168
  stw       r3, 0x40(r1)
  addi      r3, r1, 0x40
  b         .loc_0x210

.loc_0x168:
  sub       r0, r3, r4
  stw       r3, 0x24(r1)
  srawi     r0, r0, 0x2
  lfd       f1, 0x0(r7)
  addze     r0, r0
  stw       r4, 0x20(r1)
  rlwinm    r6,r0,31,1,31
  li        r5, 0x1
  stw       r4, 0x38(r1)

.loc_0x18C:
  lwz       r3, 0x38(r1)
  lfs       f0, 0x0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1B0
  cmpwi     r5, 0x1
  bne-      .loc_0x1DC
  stw       r3, 0x40(r1)
  addi      r3, r1, 0x40
  b         .loc_0x210

.loc_0x1B0:
  sub.      r6, r6, r5
  stw       r3, 0x44(r1)
  bgt-      .loc_0x1C8
  lwz       r0, 0x48(r1)
  stw       r0, 0x38(r1)
  b         .loc_0x1DC

.loc_0x1C8:
  rlwinm    r0,r5,3,0,28
  rlwinm    r5,r5,3,0,28
  add       r0, r3, r0
  stw       r0, 0x38(r1)
  b         .loc_0x18C

.loc_0x1DC:
  lbz       r5, 0x10(r1)
  mr        r6, r7
  lwz       r8, 0x38(r1)
  addi      r3, r1, 0x40
  lwz       r0, 0x44(r1)
  addi      r4, r1, 0x18
  stb       r5, 0x8(r1)
  addi      r5, r1, 0x1C
  addi      r7, r1, 0x8
  stw       r8, 0x1C(r1)
  stw       r0, 0x18(r1)
  bl        0x10DC
  addi      r3, r1, 0x40

.loc_0x210:
  lwz       r0, 0x0(r3)
  stw       r0, 0x0(r31)
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8000A958
 * Size:	00000C
 */
void update_INTERPOLATE_NONE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd(void)
{
/*
.loc_0x0:
  lwz       r3, 0x54(r3)
  lfs       f1, -0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000A964
 * Size:	000030
 */
void update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd(void)
{
/*
.loc_0x0:
  lwz       r3, 0x54(r3)
  lfs       f3, -0x8(r3)
  lfs       f4, -0x4(r3)
  lfs       f2, 0x4(r3)
  fsub      f1, f1, f3
  lfs       f0, 0x0(r3)
  fsub      f2, f2, f4
  fsub      f0, f0, f3
  fmul      f1, f2, f1
  fdiv      f0, f1, f0
  fadd      f1, f4, f0
  blr
*/
}

/*
 * --INFO--
 * Address:	8000A994
 * Size:	00006C
 */
void update_INTERPOLATE_PLATEAU___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd(void)
{
/*
.loc_0x0:
  lwz       r3, 0x54(r3)
  lfd       f6, -0x7FB8(r2)
  lfs       f2, -0x8(r3)
  lfs       f0, 0x0(r3)
  fsub      f8, f1, f2
  lfd       f3, -0x7FA8(r2)
  fsub      f4, f0, f2
  lfd       f2, -0x7FB0(r2)
  lfs       f0, 0x4(r3)
  lfs       f1, -0x4(r3)
  fdiv      f5, f6, f4
  lfd       f4, -0x7FC0(r2)
  fmul      f7, f8, f5
  fmadd     f3, f3, f7, f2
  fmul      f2, f7, f7
  fsub      f5, f7, f6
  fmul      f2, f3, f2
  fmul      f3, f5, f5
  fmul      f0, f2, f0
  fsub      f2, f6, f2
  fmul      f5, f5, f8
  fmul      f3, f8, f3
  fmadd     f0, f2, f1, f0
  fmul      f1, f7, f5
  fmadd     f0, f3, f4, f0
  fmadd     f1, f1, f4, f0
  blr
*/
}

/*
 * --INFO--
 * Address:	8000AA00
 * Size:	000260
 */
void update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stfd      f28, 0x20(r1)
  psq_st    f28,0x28(r1),0,0
  stfd      f27, 0x10(r1)
  psq_st    f27,0x18(r1),0,0
  lwz       r5, 0x54(r3)
  lwz       r4, 0x50(r3)
  lwz       r0, 0x4C(r3)
  sub       r3, r4, r5
  lfs       f4, -0x4(r5)
  srawi     r3, r3, 0x2
  sub       r0, r5, r0
  addze     r3, r3
  lfs       f5, 0x4(r5)
  srawi     r0, r0, 0x2
  lfs       f6, -0x8(r5)
  addze     r0, r0
  lfs       f31, 0x0(r5)
  cmpwi     r0, 0x3
  beq-      .loc_0x13C
  bge-      .loc_0x78
  cmpwi     r0, 0x2
  bge-      .loc_0x84
  b         .loc_0x13C

.loc_0x78:
  cmpwi     r0, 0x5
  bge-      .loc_0x13C
  b         .loc_0xD4

.loc_0x84:
  lfd       f0, -0x7F88(r2)
  cmpwi     r3, 0x3
  lfs       f30, 0x8(r5)
  fmul      f2, f0, f6
  lfs       f8, 0xC(r5)
  fmsub     f7, f0, f4, f5
  fsub      f27, f2, f31
  fsub      f9, f2, f30
  beq-      .loc_0xCC
  bge-      .loc_0xB8
  cmpwi     r3, 0x2
  bge-      .loc_0xC0
  b         .loc_0xCC

.loc_0xB8:
  cmpwi     r3, 0x5
  bge-      .loc_0xCC

.loc_0xC0:
  lfd       f0, -0x7F88(r2)
  fmsub     f10, f0, f30, f31
  b         .loc_0x1A4

.loc_0xCC:
  lfs       f10, 0x10(r5)
  b         .loc_0x1A4

.loc_0xD4:
  lfs       f27, -0x10(r5)
  cmpwi     r3, 0x3
  lfd       f0, -0x7F88(r2)
  lfs       f7, -0xC(r5)
  fmsub     f9, f0, f27, f6
  beq-      .loc_0x12C
  bge-      .loc_0xFC
  cmpwi     r3, 0x2
  bge-      .loc_0x108
  b         .loc_0x12C

.loc_0xFC:
  cmpwi     r3, 0x5
  bge-      .loc_0x12C
  b         .loc_0x11C

.loc_0x108:
  fmul      f2, f0, f31
  fmsub     f8, f0, f5, f4
  fsub      f30, f2, f6
  fsub      f10, f2, f27
  b         .loc_0x1A4

.loc_0x11C:
  lfs       f30, 0x8(r5)
  lfs       f8, 0xC(r5)
  fmsub     f10, f0, f30, f31
  b         .loc_0x1A4

.loc_0x12C:
  lfs       f8, 0xC(r5)
  lfs       f30, 0x8(r5)
  lfs       f10, 0x10(r5)
  b         .loc_0x1A4

.loc_0x13C:
  cmpwi     r3, 0x3
  lfs       f7, -0xC(r5)
  lfs       f27, -0x10(r5)
  lfs       f9, -0x18(r5)
  beq-      .loc_0x198
  bge-      .loc_0x160
  cmpwi     r3, 0x2
  bge-      .loc_0x16C
  b         .loc_0x198

.loc_0x160:
  cmpwi     r3, 0x5
  bge-      .loc_0x198
  b         .loc_0x184

.loc_0x16C:
  lfd       f0, -0x7F88(r2)
  fmul      f2, f0, f31
  fmsub     f8, f0, f5, f4
  fsub      f30, f2, f6
  fsub      f10, f2, f27
  b         .loc_0x1A4

.loc_0x184:
  lfs       f30, 0x8(r5)
  lfd       f0, -0x7F88(r2)
  lfs       f8, 0xC(r5)
  fmsub     f10, f0, f30, f31
  b         .loc_0x1A4

.loc_0x198:
  lfs       f8, 0xC(r5)
  lfs       f30, 0x8(r5)
  lfs       f10, 0x10(r5)

.loc_0x1A4:
  fsub      f3, f31, f6
  lfd       f11, -0x7FB8(r2)
  fsub      f2, f1, f6
  fsub      f0, f31, f1
  fdiv      f12, f11, f3
  fmul      f11, f2, f12
  fsub      f3, f30, f6
  fmul      f12, f0, f12
  fdiv      f29, f11, f3
  fsub      f11, f31, f27
  fsub      f28, f30, f1
  fsub      f3, f1, f27
  fdiv      f13, f12, f11
  fmul      f12, f28, f29
  fsub      f11, f30, f27
  fmul      f30, f0, f13
  fmadd     f13, f3, f13, f12
  fsub      f31, f31, f9
  fmul      f12, f2, f29
  fdiv      f13, f13, f11
  fdiv      f30, f30, f31
  fsub      f11, f10, f6
  fmul      f6, f28, f13
  fdiv      f11, f12, f11
  fsub      f9, f1, f9
  fsub      f10, f10, f1
  fmul      f1, f0, f30
  fmadd     f0, f9, f30, f6
  fmul      f6, f10, f11
  fmul      f0, f0, f4
  fmadd     f3, f3, f13, f6
  fmadd     f0, f1, f7, f0
  fmul      f1, f2, f11
  fmadd     f0, f3, f5, f0
  fmadd     f1, f1, f8, f0
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  psq_l     f28,0x28(r1),0,0
  lfd       f28, 0x20(r1)
  psq_l     f27,0x18(r1),0,0
  lfd       f27, 0x10(r1)
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void update_INTERPOLATE_CONTINUE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void update_INTERPOLATE_AVERAGE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void update_INTERPOLATE_SMOOTH___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8000AC60
 * Size:	000098
 */
void __ct__Q27JStudio22TFunctionValue_hermiteFv(void)
{
/*
.loc_0x0:
  lis       r6, 0x804A
  lis       r5, 0x8051
  subi      r0, r6, 0x1AD8
  lis       r4, 0x804A
  stw       r0, 0x0(r3)
  addi      r6, r5, 0x48B0
  li        r5, 0
  subi      r0, r4, 0x1B98
  lfs       f0, 0x0(r6)
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r5, 0x20(r3)
  stb       r5, 0x21(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x28(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x30(r3)
  stw       r5, 0x38(r3)
  stw       r5, 0x3C(r3)
  stw       r0, 0x0(r3)
  stw       r5, 0x40(r3)
  stw       r5, 0x44(r3)
  stw       r5, 0x48(r3)
  stw       r5, 0x4C(r3)
  lwz       r0, 0x48(r3)
  stw       r0, 0x50(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x54(r3)
  lwz       r0, 0x50(r3)
  stw       r0, 0x58(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x5C(r3)
  lwz       r0, 0x50(r3)
  stw       r0, 0x60(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000ACF8
 * Size:	000008
 */
void getType__Q27JStudio22TFunctionValue_hermiteCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x6
  blr
*/
}

/*
 * --INFO--
 * Address:	8000AD00
 * Size:	000020
 */
void getAttributeSet__Q27JStudio22TFunctionValue_hermiteFv(void)
{
/*
.loc_0x0:
  cmplwi    r4, 0
  beq-      .loc_0xC
  addi      r4, r4, 0x8

.loc_0xC:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000AD20
 * Size:	000050
 */
void data_set__Q27JStudio22TFunctionValue_hermiteFPCfUlUl(void)
{
/*
.loc_0x0:
  stw       r4, 0x40(r3)
  stw       r5, 0x44(r3)
  stw       r6, 0x48(r3)
  lwz       r4, 0x48(r3)
  lwz       r0, 0x40(r3)
  stw       r0, 0x4C(r3)
  stw       r4, 0x50(r3)
  lwz       r5, 0x48(r3)
  lwz       r0, 0x44(r3)
  lwz       r4, 0x40(r3)
  mullw     r0, r0, r5
  rlwinm    r0,r0,2,0,29
  add       r0, r4, r0
  stw       r0, 0x54(r3)
  stw       r5, 0x58(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x5C(r3)
  lwz       r0, 0x50(r3)
  stw       r0, 0x60(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000AD70
 * Size:	00006C
 */
void initialize__Q27JStudio22TFunctionValue_hermiteFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, 0
  lfs       f0, 0x48B0(r4)
  stfd      f0, 0x8(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x10(r3)
  lfd       f0, 0x8(r3)
  stfd      f0, 0x18(r3)
  stb       r0, 0x20(r3)
  stb       r0, 0x21(r3)
  stw       r0, 0x38(r3)
  stw       r0, 0x3C(r3)
  stw       r0, 0x40(r3)
  stw       r0, 0x44(r3)
  stw       r0, 0x48(r3)
  lwz       r4, 0x48(r3)
  stw       r0, 0x4C(r3)
  stw       r4, 0x50(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x54(r3)
  lwz       r0, 0x50(r3)
  stw       r0, 0x58(r3)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x5C(r3)
  lwz       r0, 0x50(r3)
  stw       r0, 0x60(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000ADDC
 * Size:	0000A8
 */
void prepare__Q27JStudio22TFunctionValue_hermiteFv(void)
{
/*
.loc_0x0:
  lbz       r0, 0x20(r3)
  extsb     r0, r0
  cmpwi     r0, 0x2
  beq-      .loc_0x5C
  bge-      .loc_0x24
  cmpwi     r0, 0
  beq-      .loc_0x34
  bge-      .loc_0x48
  b         .loc_0x34

.loc_0x24:
  cmpwi     r0, 0x4
  beq-      .loc_0x84
  bge-      .loc_0x34
  b         .loc_0x70

.loc_0x34:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7FB8(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x48:
  lfd       f1, -0x7FC0(r2)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x5C:
  lfd       f1, 0x8(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x70:
  lfd       f1, 0x10(r3)
  lfd       f0, -0x7F80(r2)
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr       

.loc_0x84:
  lfd       f1, 0x8(r3)
  lfd       f0, 0x10(r3)
  lfd       f2, -0x7F98(r2)
  fadd      f1, f1, f0
  lfd       f0, -0x7F80(r2)
  fmul      f1, f2, f1
  stfd      f1, 0x28(r3)
  stfd      f0, 0x30(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8000AE84
 * Size:	0005D0
 */
void getValue__Q27JStudio22TFunctionValue_hermiteFd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stw       r31, 0x5C(r1)
  stfd      f1, 0x8(r1)
  mr        r31, r3
  lwz       r3, 0x44(r3)
  lwz       r0, 0x48(r31)
  subi      r3, r3, 0x1
  lfd       f2, 0x28(r31)
  mullw     r0, r3, r0
  lbz       r3, 0x21(r31)
  fsub      f0, f1, f2
  lfd       f1, 0x30(r31)
  extsb     r3, r3
  lwz       r4, 0x40(r31)
  rlwinm    r0,r0,2,0,29
  fmadd     f3, f1, f0, f2
  cmpwi     r3, 0x2
  lfs       f31, 0x0(r4)
  lfsx      f30, r4, r0
  beq-      .loc_0x218
  bge-      .loc_0x7C
  cmpwi     r3, 0
  beq-      .loc_0x8C
  bge-      .loc_0x150
  b         .loc_0x8C

.loc_0x7C:
  cmpwi     r3, 0x4
  beq-      .loc_0x3B8
  bge-      .loc_0x8C
  b         .loc_0x2E4

.loc_0x8C:
  lfd       f1, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xEC
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x34(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0xC8
  addi      r3, r1, 0x34

.loc_0xC8:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0xDC
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0xDC:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x144

.loc_0xEC:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x144
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x30(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x124
  addi      r3, r1, 0x30

.loc_0x124:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x138
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x138:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x144:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x490

.loc_0x150:
  lfd       f2, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fadd      f1, f3, f2
  fsub      f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x1B4
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x2C(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x190
  addi      r3, r1, 0x2C

.loc_0x190:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x1A4
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x1A4:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x20C

.loc_0x1B4:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x20C
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x28(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x1EC
  addi      r3, r1, 0x28

.loc_0x1EC:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x200
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x200:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x20C:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x490

.loc_0x218:
  lfd       f0, 0x10(r31)
  lfd       f2, 0x8(r31)
  fadd      f1, f3, f0
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f1, f2
  fcmpo     cr0, f1, f0
  bge-      .loc_0x280
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x24(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x25C
  addi      r3, r1, 0x24

.loc_0x25C:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x270
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x270:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x2D8

.loc_0x280:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x2D8
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x20(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x2B8
  addi      r3, r1, 0x20

.loc_0x2B8:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x2CC
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x2CC:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x2D8:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x490

.loc_0x2E4:
  lfd       f4, 0x8(r31)
  lfd       f0, 0x10(r31)
  lfd       f2, -0x7F98(r2)
  fadd      f1, f4, f0
  lfd       f0, -0x7FC0(r2)
  fmadd     f1, f2, f1, f3
  fsub      f1, f1, f4
  fcmpo     cr0, f1, f0
  bge-      .loc_0x354
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x1C(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x330
  addi      r3, r1, 0x1C

.loc_0x330:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x344
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x344:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x3AC

.loc_0x354:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x3AC
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x18(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x38C
  addi      r3, r1, 0x18

.loc_0x38C:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x3A0
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x3A0:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x3AC:
  lfd       f0, 0x8(r31)
  fadd      f1, f1, f0
  b         .loc_0x490

.loc_0x3B8:
  lfd       f1, 0x8(r31)
  lfd       f0, -0x7FC0(r2)
  fsub      f1, f3, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x418
  lwz       r4, 0x38(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x14(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x3F4
  addi      r3, r1, 0x14

.loc_0x3F4:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x408
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x408:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     
  b         .loc_0x470

.loc_0x418:
  lfd       f0, 0x18(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x470
  lwz       r4, 0x3C(r31)
  li        r0, 0
  lis       r3, 0x8047
  cmplwi    r4, 0x4
  stw       r0, 0x10(r1)
  rlwinm    r4,r4,2,0,29
  addi      r0, r3, 0x32F0
  add       r3, r0, r4
  blt-      .loc_0x450
  addi      r3, r1, 0x10

.loc_0x450:
  lwz       r12, 0x0(r3)
  cmplwi    r12, 0
  bne-      .loc_0x464
  lis       r3, 0x8047
  lwz       r12, 0x32F0(r3)

.loc_0x464:
  lfd       f2, 0x18(r31)
  mtctr     r12
  bctrl     

.loc_0x470:
  lfd       f3, 0x8(r31)
  fsub      f2, f30, f31
  lfd       f0, 0x18(r31)
  fadd      f1, f1, f3
  fsub      f1, f1, f3
  fmul      f1, f1, f2
  fdiv      f0, f1, f0
  fadd      f1, f31, f0

.loc_0x490:
  stfd      f1, 0x8(r1)
  addi      r3, r1, 0x50
  addi      r4, r1, 0x48
  addi      r5, r1, 0x40
  lwz       r8, 0x5C(r31)
  addi      r6, r1, 0x38
  lwz       r0, 0x60(r31)
  addi      r7, r1, 0x8
  stw       r8, 0x38(r1)
  stw       r0, 0x3C(r1)
  lwz       r8, 0x54(r31)
  lwz       r0, 0x58(r31)
  stw       r8, 0x40(r1)
  stw       r0, 0x44(r1)
  lwz       r8, 0x4C(r31)
  lwz       r0, 0x50(r31)
  stw       r8, 0x48(r1)
  stw       r0, 0x4C(r1)
  bl        .loc_0x5D0
  lwz       r0, 0x50(r1)
  stw       r0, 0x5C(r31)
  lwz       r0, 0x54(r1)
  stw       r0, 0x60(r31)
  lwz       r4, 0x5C(r31)
  lwz       r0, 0x4C(r31)
  cmplw     r4, r0
  bne-      .loc_0x504
  lfs       f1, 0x4(r4)
  b         .loc_0x5AC

.loc_0x504:
  lwz       r0, 0x54(r31)
  cmplw     r4, r0
  bne-      .loc_0x530
  lwz       r3, 0x60(r31)
  lwz       r0, 0x5C(r31)
  rlwinm    r3,r3,2,0,29
  sub       r0, r0, r3
  stw       r0, 0x5C(r31)
  lwz       r3, 0x5C(r31)
  lfs       f1, 0x4(r3)
  b         .loc_0x5AC

.loc_0x530:
  lwz       r0, 0x48(r31)
  lfs       f0, 0x0(r4)
  rlwinm    r0,r0,2,0,29
  lfd       f7, -0x7FB8(r2)
  sub       r5, r4, r0
  lfd       f1, 0x8(r1)
  lfs       f5, 0x0(r5)
  add       r3, r5, r0
  lfd       f4, -0x7FA8(r2)
  fsub      f3, f0, f5
  lfd       f2, -0x7FB0(r2)
  fsub      f9, f1, f5
  lfs       f0, 0x4(r4)
  lfs       f1, 0x4(r5)
  fdiv      f6, f7, f3
  lfs       f3, -0x4(r3)
  lfs       f5, 0x8(r4)
  fmul      f8, f9, f6
  fmadd     f4, f4, f8, f2
  fmul      f2, f8, f8
  fsub      f6, f8, f7
  fmul      f2, f4, f2
  fmul      f4, f6, f6
  fmul      f0, f2, f0
  fsub      f2, f7, f2
  fmul      f6, f6, f9
  fmul      f4, f9, f4
  fmadd     f0, f2, f1, f0
  fmul      f1, f8, f6
  fmadd     f0, f4, f3, f0
  fmadd     f1, f1, f5, f0

.loc_0x5AC:
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  lwz       r0, 0x84(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr       

.loc_0x5D0:
*/
}

/*
 * --INFO--
 * Address:	8000B454
 * Size:	000084
 */
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_hermite::TIterator_data_, double>(JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_, const double &)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lwz       r12, 0x4(r6)
  stw       r0, 0x44(r1)
  addi      r8, r1, 0xC
  lwz       r11, 0x0(r5)
  stw       r31, 0x3C(r1)
  lwz       r31, 0x0(r6)
  addi      r6, r1, 0x10
  stw       r30, 0x38(r1)
  lwz       r10, 0x4(r5)
  addi      r5, r1, 0x18
  stw       r29, 0x34(r1)
  mr        r29, r3
  lbz       r30, 0x8(r1)
  lwz       r9, 0x0(r4)
  lwz       r0, 0x4(r4)
  addi      r4, r1, 0x20
  stb       r30, 0xC(r1)
  stw       r31, 0x10(r1)
  stw       r12, 0x14(r1)
  stw       r11, 0x18(r1)
  stw       r10, 0x1C(r1)
  stw       r9, 0x20(r1)
  stw       r0, 0x24(r1)
  bl        .loc_0x84
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr       

.loc_0x84:
*/
}

/*
 * --INFO--
 * Address:	8000B4D8
 * Size:	0002E4
 */
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_hermite::TIterator_data_, double, std::less<double>>(JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_, const double &, std::less<double>)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  lwz       r9, 0x0(r6)
  stw       r0, 0xA4(r1)
  lwz       r0, 0x0(r5)
  stw       r31, 0x9C(r1)
  mr        r31, r3
  sub       r0, r0, r9
  cntlzw    r3, r0
  rlwinm.   r0,r3,27,24,31
  rlwinm    r0,r3,27,5,31
  bne-      .loc_0x44
  lfd       f1, 0x0(r7)
  lfs       f0, 0x0(r9)
  fcmpo     cr0, f1, f0
  mfcr      r0
  rlwinm    r0,r0,1,31,31

.loc_0x44:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x19C
  lwz       r9, 0x0(r4)
  lwz       r3, 0x0(r6)
  lwz       r5, 0x4(r4)
  lwz       r4, 0x4(r6)
  cmplw     r9, r3
  lbz       r0, 0x0(r8)
  stw       r9, 0x88(r1)
  stw       r5, 0x8C(r1)
  stw       r3, 0x90(r1)
  stw       r4, 0x94(r1)
  stb       r0, 0x14(r1)
  bne-      .loc_0x8C
  stw       r3, 0x80(r1)
  addi      r5, r1, 0x80
  stw       r4, 0x84(r1)
  b         .loc_0x2C0

.loc_0x8C:
  rlwinm    r0,r4,2,0,29
  stw       r4, 0x54(r1)
  sub       r3, r3, r0
  lfd       f1, 0x0(r7)
  sub       r0, r3, r9
  stw       r3, 0x90(r1)
  srawi     r0, r0, 0x2
  li        r6, 0x1
  addze     r0, r0
  stw       r3, 0x50(r1)
  divwu     r8, r0, r4
  stw       r9, 0x48(r1)
  stw       r5, 0x4C(r1)
  stw       r3, 0x60(r1)
  stw       r4, 0x64(r1)

.loc_0xC8:
  lwz       r4, 0x60(r1)
  lfs       f0, 0x0(r4)
  fcmpo     cr0, f1, f0
  blt-      .loc_0x104
  cmpwi     r6, 0x1
  bne-      .loc_0x148
  lwz       r3, 0x64(r1)
  addi      r5, r1, 0x80
  lwz       r0, 0x64(r1)
  rlwinm    r3,r3,2,0,29
  add       r3, r4, r3
  stw       r0, 0x84(r1)
  stw       r3, 0x60(r1)
  stw       r3, 0x80(r1)
  b         .loc_0x2C0

.loc_0x104:
  lwz       r0, 0x64(r1)
  sub.      r8, r8, r6
  stw       r4, 0x90(r1)
  stw       r0, 0x94(r1)
  bgt-      .loc_0x12C
  lwz       r3, 0x88(r1)
  lwz       r0, 0x8C(r1)
  stw       r3, 0x60(r1)
  stw       r0, 0x64(r1)
  b         .loc_0x148

.loc_0x12C:
  lwz       r0, 0x64(r1)
  mullw     r0, r0, r6
  rlwinm    r6,r6,3,0,28
  rlwinm    r0,r0,2,0,29
  sub       r0, r4, r0
  stw       r0, 0x60(r1)
  b         .loc_0xC8

.loc_0x148:
  lwz       r11, 0x94(r1)
  mr        r6, r7
  lwz       r4, 0x90(r1)
  addi      r3, r1, 0x80
  rlwinm    r0,r11,2,0,29
  lbz       r9, 0x14(r1)
  add       r10, r4, r0
  lwz       r8, 0x60(r1)
  lwz       r0, 0x64(r1)
  addi      r4, r1, 0x38
  stw       r10, 0x90(r1)
  addi      r5, r1, 0x40
  addi      r7, r1, 0xC
  stb       r9, 0xC(r1)
  stw       r10, 0x40(r1)
  stw       r11, 0x44(r1)
  stw       r8, 0x38(r1)
  stw       r0, 0x3C(r1)
  bl        0x428
  addi      r5, r1, 0x80
  b         .loc_0x2C0

.loc_0x19C:
  lwz       r9, 0x0(r6)
  lwz       r4, 0x0(r5)
  lwz       r6, 0x4(r6)
  lwz       r3, 0x4(r5)
  cmplw     r9, r4
  lbz       r0, 0x0(r8)
  stw       r9, 0x70(r1)
  stw       r6, 0x74(r1)
  stw       r4, 0x78(r1)
  stw       r3, 0x7C(r1)
  stb       r0, 0x10(r1)
  bne-      .loc_0x1DC
  stw       r4, 0x68(r1)
  addi      r5, r1, 0x68
  stw       r3, 0x6C(r1)
  b         .loc_0x2C0

.loc_0x1DC:
  sub       r0, r4, r9
  stw       r4, 0x30(r1)
  srawi     r0, r0, 0x2
  lfd       f1, 0x0(r7)
  addze     r0, r0
  stw       r3, 0x34(r1)
  divwu     r4, r0, r3
  li        r3, 0x1
  stw       r9, 0x28(r1)
  stw       r6, 0x2C(r1)
  stw       r9, 0x58(r1)
  stw       r6, 0x5C(r1)

.loc_0x20C:
  lwz       r6, 0x58(r1)
  lfs       f0, 0x0(r6)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x238
  cmpwi     r3, 0x1
  bne-      .loc_0x27C
  lwz       r0, 0x5C(r1)
  addi      r5, r1, 0x68
  stw       r6, 0x68(r1)
  stw       r0, 0x6C(r1)
  b         .loc_0x2C0

.loc_0x238:
  lwz       r0, 0x5C(r1)
  sub.      r4, r4, r3
  stw       r6, 0x70(r1)
  stw       r0, 0x74(r1)
  bgt-      .loc_0x260
  lwz       r3, 0x78(r1)
  lwz       r0, 0x7C(r1)
  stw       r3, 0x58(r1)
  stw       r0, 0x5C(r1)
  b         .loc_0x27C

.loc_0x260:
  lwz       r0, 0x5C(r1)
  mullw     r0, r0, r3
  rlwinm    r3,r3,3,0,28
  rlwinm    r0,r0,2,0,29
  add       r0, r6, r0
  stw       r0, 0x58(r1)
  b         .loc_0x20C

.loc_0x27C:
  lbz       r11, 0x10(r1)
  mr        r6, r7
  lwz       r10, 0x58(r1)
  addi      r3, r1, 0x68
  lwz       r9, 0x5C(r1)
  addi      r4, r1, 0x18
  lwz       r8, 0x70(r1)
  addi      r5, r1, 0x20
  lwz       r0, 0x74(r1)
  addi      r7, r1, 0x8
  stb       r11, 0x8(r1)
  stw       r10, 0x20(r1)
  stw       r9, 0x24(r1)
  stw       r8, 0x18(r1)
  stw       r0, 0x1C(r1)
  bl        0x300
  addi      r5, r1, 0x68

.loc_0x2C0:
  lwz       r0, 0x0(r5)
  stw       r0, 0x0(r31)
  lwz       r0, 0x4(r5)
  stw       r0, 0x4(r31)
  lwz       r31, 0x9C(r1)
  lwz       r0, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8000B7BC
 * Size:	00005C
 */
void __dt__Q27JStudio22TFunctionValue_hermiteFv(void)
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
  subi      r0, r3, 0x1B98
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1AD8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x188B8

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
 * Address:	8000B818
 * Size:	00005C
 */
void __dt__Q27JStudio29TFunctionValue_list_parameterFv(void)
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
  subi      r0, r3, 0x1B78
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1AD8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x1885C

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
 * Address:	8000B874
 * Size:	00005C
 */
void __dt__Q27JStudio19TFunctionValue_listFv(void)
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
  subi      r0, r3, 0x1B58
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1AD8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x18800

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
 * Address:	8000B8D0
 * Size:	00005C
 */
void __dt__Q27JStudio25TFunctionValue_transitionFv(void)
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
  subi      r0, r3, 0x1B38
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1AD8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x187A4

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
 * Address:	8000B92C
 * Size:	00005C
 */
void __dt__Q27JStudio23TFunctionValue_constantFv(void)
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
  subi      r0, r3, 0x1B18
  stw       r0, 0x0(r31)
  beq-      .loc_0x34
  lis       r3, 0x804A
  subi      r0, r3, 0x1AD8
  stw       r0, 0x0(r31)

.loc_0x34:
  extsh.    r0, r4
  ble-      .loc_0x44
  mr        r3, r31
  bl        0x18748

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
 * Address:	8000B988
 * Size:	000088
 */
void __dt__Q27JStudio24TFunctionValue_compositeFv(void)
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
  beq-      .loc_0x6C
  lis       r3, 0x804A
  addic.    r0, r30, 0x4
  subi      r0, r3, 0x1AF8
  stw       r0, 0x0(r30)
  beq-      .loc_0x48
  addic.    r0, r30, 0x4
  beq-      .loc_0x48
  addi      r3, r30, 0x4
  li        r4, 0
  bl        0x1C1BC

.loc_0x48:
  cmplwi    r30, 0
  beq-      .loc_0x5C
  lis       r3, 0x804A
  subi      r0, r3, 0x1AD8
  stw       r0, 0x0(r30)

.loc_0x5C:
  extsh.    r0, r31
  ble-      .loc_0x6C
  mr        r3, r30
  bl        0x186C4

.loc_0x6C:
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
 * Address:	8000BA10
 * Size:	000080
 */
void std::upper_bound<JStudio::TFunctionValue_list_parameter::TIterator_data_, double, std::less<double>>(JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_, const double &, std::less<double>)
{
/*
.loc_0x0:
  lwz       r0, 0x0(r5)
  stwu      r1, -0x10(r1)
  lwz       r5, 0x0(r4)
  stw       r0, 0xC(r1)
  sub       r0, r0, r5
  lfd       f1, 0x0(r6)
  srawi     r0, r0, 0x2
  stw       r5, 0x8(r1)
  addze     r0, r0
  rlwinm    r6,r0,31,1,31
  b         .loc_0x68

.loc_0x2C:
  rlwinm    r0,r6,1,31,31
  lwz       r5, 0x0(r4)
  add       r0, r0, r6
  srawi     r7, r0, 0x1
  rlwinm    r0,r7,3,0,28
  add       r5, r5, r0
  lfs       f0, 0x0(r5)
  fcmpo     cr0, f1, f0
  blt-      .loc_0x64
  addi      r5, r5, 0x8
  addi      r0, r7, 0x1
  stw       r5, 0x0(r4)
  sub       r6, r6, r0
  b         .loc_0x68

.loc_0x64:
  mr        r6, r7

.loc_0x68:
  cmpwi     r6, 0
  bgt+      .loc_0x2C
  lwz       r0, 0x0(r4)
  stw       r0, 0x0(r3)
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8000BA90
 * Size:	0000B8
 */
void std::upper_bound<JStudio::TFunctionValue_hermite::TIterator_data_, double, std::less<double>>(JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_, const double &, std::less<double>)
{
/*
.loc_0x0:
  lwz       r9, 0x0(r5)
  lwz       r7, 0x0(r4)
  stwu      r1, -0x20(r1)
  lwz       r8, 0x4(r5)
  sub       r0, r9, r7
  srawi     r0, r0, 0x2
  lwz       r5, 0x4(r4)
  addze     r0, r0
  stw       r9, 0x10(r1)
  divwu     r9, r0, r8
  lfd       f1, 0x0(r6)
  stw       r8, 0x14(r1)
  stw       r7, 0x8(r1)
  stw       r5, 0xC(r1)
  b         .loc_0x98

.loc_0x3C:
  rlwinm    r0,r9,1,31,31
  lwz       r7, 0x4(r4)
  add       r0, r0, r9
  lwz       r5, 0x0(r4)
  srawi     r8, r0, 0x1
  stw       r7, 0x1C(r1)
  mullw     r0, r7, r8
  stw       r5, 0x18(r1)
  rlwinm    r0,r0,2,0,29
  add       r6, r5, r0
  lfs       f0, 0x0(r6)
  stw       r6, 0x18(r1)
  fcmpo     cr0, f1, f0
  blt-      .loc_0x94
  rlwinm    r5,r7,2,0,29
  addi      r0, r8, 0x1
  add       r5, r6, r5
  stw       r7, 0x4(r4)
  sub       r9, r9, r0
  stw       r5, 0x18(r1)
  stw       r5, 0x0(r4)
  b         .loc_0x98

.loc_0x94:
  mr        r9, r8

.loc_0x98:
  cmpwi     r9, 0
  bgt+      .loc_0x3C
  lwz       r5, 0x0(r4)
  lwz       r0, 0x4(r4)
  stw       r5, 0x0(r3)
  stw       r0, 0x4(r3)
  addi      r1, r1, 0x20
  blr
*/
}