#include "JStudio/functionvalue.h"
#include "JSystem/JGadget/linklist.h"
#include "JSystem/JGadget/list.h"
#include "std/functional.h"
#include "std/algorithm.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global
   "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"
    "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@":
        .4byte extrapolateParameter_raw__Q27JStudio13functionvalueFdd
        .4byte extrapolateParameter_repeat__Q27JStudio13functionvalueFdd
        .4byte extrapolateParameter_turn__Q27JStudio13functionvalueFdd
        .4byte extrapolateParameter_clamp__Q27JStudio13functionvalueFdd

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q27JStudio22TFunctionValue_hermite
    __vt__Q27JStudio22TFunctionValue_hermite:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio22TFunctionValue_hermiteFv
        .4byte getType__Q27JStudio22TFunctionValue_hermiteCFv
        .4byte getAttributeSet__Q27JStudio22TFunctionValue_hermiteFv
        .4byte initialize__Q27JStudio22TFunctionValue_hermiteFv
        .4byte prepare__Q27JStudio22TFunctionValue_hermiteFv
        .4byte getValue__Q27JStudio22TFunctionValue_hermiteFd
    .global __vt__Q27JStudio29TFunctionValue_list_parameter
    __vt__Q27JStudio29TFunctionValue_list_parameter:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio29TFunctionValue_list_parameterFv
        .4byte getType__Q27JStudio29TFunctionValue_list_parameterCFv
        .4byte getAttributeSet__Q27JStudio29TFunctionValue_list_parameterFv
        .4byte initialize__Q27JStudio29TFunctionValue_list_parameterFv
        .4byte prepare__Q27JStudio29TFunctionValue_list_parameterFv
        .4byte getValue__Q27JStudio29TFunctionValue_list_parameterFd
    .global __vt__Q27JStudio19TFunctionValue_list
    __vt__Q27JStudio19TFunctionValue_list:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio19TFunctionValue_listFv
        .4byte getType__Q27JStudio19TFunctionValue_listCFv
        .4byte getAttributeSet__Q27JStudio19TFunctionValue_listFv
        .4byte initialize__Q27JStudio19TFunctionValue_listFv
        .4byte prepare__Q27JStudio19TFunctionValue_listFv
        .4byte getValue__Q27JStudio19TFunctionValue_listFd
    .global __vt__Q27JStudio25TFunctionValue_transition
    __vt__Q27JStudio25TFunctionValue_transition:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio25TFunctionValue_transitionFv
        .4byte getType__Q27JStudio25TFunctionValue_transitionCFv
        .4byte getAttributeSet__Q27JStudio25TFunctionValue_transitionFv
        .4byte initialize__Q27JStudio25TFunctionValue_transitionFv
        .4byte prepare__Q27JStudio25TFunctionValue_transitionFv
        .4byte getValue__Q27JStudio25TFunctionValue_transitionFd
    .global __vt__Q27JStudio23TFunctionValue_constant
    __vt__Q27JStudio23TFunctionValue_constant:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio23TFunctionValue_constantFv
        .4byte getType__Q27JStudio23TFunctionValue_constantCFv
        .4byte getAttributeSet__Q27JStudio23TFunctionValue_constantFv
        .4byte initialize__Q27JStudio23TFunctionValue_constantFv
        .4byte prepare__Q27JStudio23TFunctionValue_constantFv
        .4byte getValue__Q27JStudio23TFunctionValue_constantFd
    .global __vt__Q27JStudio24TFunctionValue_composite
    __vt__Q27JStudio24TFunctionValue_composite:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JStudio24TFunctionValue_compositeFv
        .4byte getType__Q27JStudio24TFunctionValue_compositeCFv
        .4byte getAttributeSet__Q27JStudio24TFunctionValue_compositeFv
        .4byte initialize__Q27JStudio24TFunctionValue_compositeFv
        .4byte prepare__Q27JStudio24TFunctionValue_compositeFv
        .4byte getValue__Q27JStudio24TFunctionValue_compositeFd
    .global __vt__Q27JStudio14TFunctionValue
    __vt__Q27JStudio14TFunctionValue:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80514D88
    lbl_80514D88:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805163A0
    lbl_805163A0:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_805163A8
    lbl_805163A8:
        .4byte 0x3FF00000
        .4byte 0x00000000
    .global lbl_805163B0
    lbl_805163B0:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_805163B8
    lbl_805163B8:
        .4byte 0xC0000000
        .4byte 0x00000000
    .global lbl_805163C0
    lbl_805163C0:
        .4byte 0x3FC55555
        .4byte 0x55555555
    .global lbl_805163C8
    lbl_805163C8:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_805163D0
    lbl_805163D0:
        .4byte 0x3FE55555
        .4byte 0x55555555
    .global lbl_805163D8
    lbl_805163D8:
        .4byte 0x40000000
        .4byte 0x00000000
    .global lbl_805163E0
    lbl_805163E0:
        .4byte 0xBFF00000
        .4byte 0x00000000
    .global lbl_805163E8
    lbl_805163E8:
        .4byte 0x43300000
        .4byte 0x00000000
*/

namespace JStudio {

/*
 * --INFO--
 * Address:	80008A80
 * Size:	000004
 */
void functionvalue::extrapolateParameter_raw(double, double) { }

/*
 * --INFO--
 * Address:	80008A84
 * Size:	00003C
 */
void functionvalue::extrapolateParameter_repeat(double, double)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stfd     f31, 8(r1)
	fmr      f31, f2
	bl       fmod
	lfd      f0, lbl_805163A0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80008AAC
	fadd     f1, f1, f31

lbl_80008AAC:
	lwz      r0, 0x14(r1)
	lfd      f31, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008AC0
 * Size:	00002C
 */
void functionvalue::extrapolateParameter_clamp(double, double)
{
	/*
	lfd      f0, lbl_805163A0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80008AD8
	fmr      f1, f0
	blr

lbl_80008AD8:
	fcmpo    cr0, f2, f1
	cror     2, 0, 2
	bnelr
	fmr      f1, f2
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008AEC
 * Size:	000048
 */
void TFunctionValue::toFunction_outside(int)
{
	/*
	stwu     r1, -0x10(r1)
	li       r0, 0
	cmplwi   r3, 4
	lis      r4,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha stw r0,
8(r1) slwi     r3, r3, 2 addi     r0, r4,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r3 blt      lbl_80008B14 addi     r3, r1, 8

lbl_80008B14:
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	bne      lbl_80008B2C
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha addi
r3, r3, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l
	lwz      r3, 0(r3)

lbl_80008B2C:
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008B34
 * Size:	000048
 */
TFunctionValue::~TFunctionValue()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80008B64
	lis      r5, __vt__Q27JStudio14TFunctionValue@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__Q27JStudio14TFunctionValue@l
	stw      r0, 0(r31)
	ble      lbl_80008B64
	bl       __dl__FPv

lbl_80008B64:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008B7C
 * Size:	000060
 */
void functionvalue::extrapolateParameter_turn(double, double)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfd      f0, lbl_805163D8@sda21(r2)
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	stfd     f30, 0x10(r1)
	fmr      f30, f2
	fmul     f31, f0, f30
	fmr      f2, f31
	bl       fmod
	lfd      f0, lbl_805163A0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80008BB4
	fadd     f1, f1, f31

lbl_80008BB4:
	fcmpo    cr0, f1, f30
	cror     2, 1, 2
	bne      lbl_80008BC4
	fsub     f1, f31, f1

lbl_80008BC4:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lfd      f30, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008BDC
 * Size:	000014
 */
void TFunctionValueAttribute_range::range_set(double, double)
{
	/*
	stfd     f1, 0(r3)
	fsub     f0, f2, f1
	stfd     f2, 8(r3)
	stfd     f0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008BF0
 * Size:	000064
 */
TFunctionValue_composite::TFunctionValue_composite()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, __vt__Q27JStudio14TFunctionValue@ha
	stw      r0, 0x24(r1)
	addi     r0, r4, __vt__Q27JStudio14TFunctionValue@l
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	addi     r3, r31, 4
	lbz      r0, lbl_80514D88@sda21(r13)
	stb      r0, 8(r1)
	bl "__ct__Q27JGadget20TVector_pointer_voidFRCQ27JGadget14TAllocator<Pv>" lis
	r3, __vt__Q27JStudio24TFunctionValue_composite@ha li       r0, 0 addi r4,
	r3, __vt__Q27JStudio24TFunctionValue_composite@l mr       r3, r31 stw r4,
	0(r31) stw      r0, 0x18(r31) stw      r0, 0x20(r31) lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008C54
 * Size:	000008
 */
int TFunctionValue_composite::getType() const { return 0x1; }

/*
 * --INFO--
 * Address:	80008C5C
 * Size:	000020
 */
void TFunctionValue_composite::getAttributeSet()
{
	/*
	cmplwi   r4, 0
	beq      lbl_80008C68
	addi     r4, r4, 4

lbl_80008C68:
	stw      r4, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008C7C
 * Size:	00004C
 */
void TFunctionValue_composite::initialize()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, 8(r3)
	addi     r3, r31, 4
	lwz      r5, 0xc(r31)
	bl       erase__Q27JGadget20TVector_pointer_voidFPPvPPv
	li       r0, 0
	stw      r0, 8(r1)
	stw      r0, 0x18(r31)
	lfd      f0, 8(r1)
	stfd     f0, 0x20(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008CC8
 * Size:	000004
 */
void TFunctionValue_composite::prepare() { }

/*
 * --INFO--
 * Address:	80008CCC
 * Size:	000034
 */
void TFunctionValue_composite::getValue(double)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r12, 0x18(r3)
	addi     r3, r4, 4
	addi     r4, r4, 0x20
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80008D00
 * Size:	00006C
 */
void TFunctionValue_composite::composite_raw(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&,
                                             const JStudio::TFunctionValue_composite::TData&, double)
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
void TFunctionValue_composite::composite_index(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&,
                                               const JStudio::TFunctionValue_composite::TData&, double)
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
void TFunctionValue_composite::composite_parameter(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&,
                                                   const JStudio::TFunctionValue_composite::TData&, double)
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
void TFunctionValue_composite::composite_add(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&,
                                             const JStudio::TFunctionValue_composite::TData&, double)
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
void TFunctionValue_composite::composite_subtract(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&,
                                                  const JStudio::TFunctionValue_composite::TData&, double)
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
void TFunctionValue_composite::composite_multiply(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&,
                                                  const JStudio::TFunctionValue_composite::TData&, double)
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
void TFunctionValue_composite::composite_divide(const JGadget::TVector_pointer<JStudio::TFunctionValue*>&,
                                                const JStudio::TFunctionValue_composite::TData&, double)
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
TFunctionValue_constant::TFunctionValue_constant()
{
	/*
	lis      r6, __vt__Q27JStudio14TFunctionValue@ha
	lis      r5, __vt__Q27JStudio23TFunctionValue_constant@ha
	addi     r6, r6, __vt__Q27JStudio14TFunctionValue@l
	lis      r4, __float_nan@ha
	stw      r6, 0(r3)
	addi     r0, r5, __vt__Q27JStudio23TFunctionValue_constant@l
	stw      r0, 0(r3)
	lfs      f0, __float_nan@l(r4)
	stfd     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009240
 * Size:	000008
 */
int TFunctionValue_constant::getType() const { return 0x2; }

/*
 * --INFO--
 * Address:	80009248
 * Size:	000014
 */
void TFunctionValue_constant::getAttributeSet()
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000925C
 * Size:	000010
 */
void TFunctionValue_constant::initialize()
{
	/*
	lis      r4, __float_nan@ha
	lfs      f0, __float_nan@l(r4)
	stfd     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000926C
 * Size:	000004
 */
void TFunctionValue_constant::prepare() { }

/*
 * --INFO--
 * Address:	80009270
 * Size:	000008
 */
void TFunctionValue_constant::getValue(double)
{
	/*
	lfd      f1, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009278
 * Size:	000074
 */
TFunctionValue_transition::TFunctionValue_transition()
{
	/*
	lis      r6, __vt__Q27JStudio14TFunctionValue@ha
	lis      r5, __float_nan@ha
	addi     r0, r6, __vt__Q27JStudio14TFunctionValue@l
	lis      r4, __vt__Q27JStudio25TFunctionValue_transition@ha
	stw      r0, 0(r3)
	addi     r6, r5, __float_nan@l
	li       r5, 0
	addi     r0, r4, __vt__Q27JStudio25TFunctionValue_transition@l
	lfs      f0, 0(r6)
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r5, 0x20(r3)
	stb      r5, 0x21(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x28(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x30(r3)
	stw      r5, 0x38(r3)
	stw      r5, 0x3c(r3)
	stw      r5, 0x40(r3)
	stw      r0, 0(r3)
	lfs      f0, 0(r6)
	stfd     f0, 0x48(r3)
	lfd      f0, 0x48(r3)
	stfd     f0, 0x50(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800092EC
 * Size:	000008
 */
int TFunctionValue_transition::getType() const { return 0x3; }

/*
 * --INFO--
 * Address:	800092F4
 * Size:	000030
 */
void TFunctionValue_transition::getAttributeSet()
{
	/*
	cmplwi   r4, 0
	mr       r5, r4
	beq      lbl_80009304
	addi     r5, r5, 0x40

lbl_80009304:
	cmplwi   r4, 0
	beq      lbl_80009310
	addi     r4, r4, 8

lbl_80009310:
	li       r0, 0
	stw      r0, 0(r3)
	stw      r4, 4(r3)
	stw      r5, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009324
 * Size:	000048
 */
void TFunctionValue_transition::initialize()
{
	/*
	lis      r4, __float_nan@ha
	lfsu     f0, __float_nan@l(r4)
	li       r0, 0
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r0, 0x21(r3)
	stw      r0, 0x38(r3)
	stw      r0, 0x3c(r3)
	stw      r0, 0x40(r3)
	lfs      f0, 0(r4)
	stfd     f0, 0x48(r3)
	lfd      f0, 0x48(r3)
	stfd     f0, 0x50(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000936C
 * Size:	0000A8
 */
void TFunctionValue_transition::prepare()
{
	/*
	lbz      r0, 0x20(r3)
	extsb    r0, r0
	cmpwi    r0, 2
	beq      lbl_800093C8
	bge      lbl_80009390
	cmpwi    r0, 0
	beq      lbl_800093A0
	bge      lbl_800093B4
	b        lbl_800093A0

lbl_80009390:
	cmpwi    r0, 4
	beq      lbl_800093F0
	bge      lbl_800093A0
	b        lbl_800093DC

lbl_800093A0:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163A8@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_800093B4:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_800093C8:
	lfd      f1, 8(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_800093DC:
	lfd      f1, 0x10(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_800093F0:
	lfd      f1, 8(r3)
	lfd      f0, 0x10(r3)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f1, f0
	lfd      f0, lbl_805163E0@sda21(r2)
	fmul     f1, f2, f1
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009414
 * Size:	000250
 */
void TFunctionValue_transition::getValue(double)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfd      f0, lbl_805163A0@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfd      f4, 0x28(r3)
	lfd      f3, 0x30(r3)
	fsub     f2, f1, f4
	lfd      f1, 8(r3)
	fmadd    f2, f3, f2, f4
	fsub     f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80009498
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0xc(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009474 addi     r3, r1, 0xc

lbl_80009474:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009488
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009488:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_800094F0

lbl_80009498:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_800094F0
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 8(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_800094D0 addi     r3, r1, 8

lbl_800094D0:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_800094E4
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_800094E4:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_800094F0:
	lbz      r0, 0x21(r31)
	lfd      f3, 8(r31)
	extsb    r0, r0
	cmpwi    r0, 3
	fadd     f1, f1, f3
	beq      lbl_80009558
	bge      lbl_80009518
	cmpwi    r0, 2
	bge      lbl_8000953C
	b        lbl_80009524

lbl_80009518:
	cmpwi    r0, 5
	bge      lbl_80009524
	b        lbl_80009580

lbl_80009524:
	fcmpo    cr0, f1, f3
	bge      lbl_80009534
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009534:
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_8000953C:
	lfd      f0, 0x10(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80009550
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009550:
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_80009558:
	lfd      f0, 0x10(r31)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f0, f3, f0
	fmul     f0, f2, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80009578
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009578:
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_80009580:
	fcmpo    cr0, f1, f3
	bge      lbl_80009590
	lfd      f1, 0x48(r31)
	b        lbl_80009650

lbl_80009590:
	lfd      f0, 0x10(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_800095A8
	lfd      f1, 0x50(r31)
	b        lbl_80009650

lbl_800095A8:
	lwz      r0, 0x40(r31)
	cmpwi    r0, 2
	beq      lbl_800095F4
	bge      lbl_800095C8
	cmpwi    r0, 0
	beq      lbl_80009558
	bge      lbl_800095D0
	b        lbl_80009558

lbl_800095C8:
	cmpwi    r0, 4
	bge      lbl_80009558

lbl_800095D0:
	lfd      f4, 0x48(r31)
	fsub     f2, f1, f3
	lfd      f1, 0x50(r31)
	lfd      f0, 0x18(r31)
	fsub     f1, f1, f4
	fmul     f1, f2, f1
	fdiv     f0, f1, f0
	fadd     f1, f4, f0
	b        lbl_80009650

lbl_800095F4:
	fsub     f0, f0, f3
	lfd      f6, lbl_805163A8@sda21(r2)
	fsub     f8, f1, f3
	lfd      f3, lbl_805163B8@sda21(r2)
	lfd      f2, lbl_805163B0@sda21(r2)
	fdiv     f5, f6, f0
	lfd      f0, 0x50(r31)
	lfd      f1, 0x48(r31)
	lfd      f4, lbl_805163A0@sda21(r2)
	fmul     f7, f8, f5
	fmadd    f3, f3, f7, f2
	fmul     f2, f7, f7
	fsub     f5, f7, f6
	fmul     f2, f3, f2
	fmul     f3, f5, f5
	fmul     f0, f2, f0
	fsub     f2, f6, f2
	fmul     f5, f5, f8
	fmul     f3, f8, f3
	fmadd    f0, f2, f1, f0
	fmul     f1, f7, f5
	fmadd    f0, f3, f4, f0
	fmadd    f1, f1, f4, f0

lbl_80009650:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009664
 * Size:	000078
 */
TFunctionValue_list::TFunctionValue_list()
{
	/*
	lis      r6, __vt__Q27JStudio14TFunctionValue@ha
	lis      r5, __float_nan@ha
	addi     r0, r6, __vt__Q27JStudio14TFunctionValue@l
	lis      r4, __vt__Q27JStudio19TFunctionValue_list@ha
	stw      r0, 0(r3)
	addi     r6, r5, __float_nan@l
	li       r5, 0
	addi     r0, r4, __vt__Q27JStudio19TFunctionValue_list@l
	lfs      f0, 0(r6)
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r5, 0x20(r3)
	stb      r5, 0x21(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x28(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x30(r3)
	stw      r5, 0x38(r3)
	stw      r5, 0x3c(r3)
	stw      r5, 0x40(r3)
	stw      r0, 0(r3)
	stw      r5, 0x44(r3)
	stw      r5, 0x48(r3)
	lfs      f0, 0(r6)
	stfd     f0, 0x50(r3)
	stw      r5, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800096DC
 * Size:	000008
 */
int TFunctionValue_list::getType() const { return 0x4; }

/*
 * --INFO--
 * Address:	800096E4
 * Size:	000030
 */
void TFunctionValue_list::getAttributeSet()
{
	/*
	cmplwi   r4, 0
	mr       r5, r4
	beq      lbl_800096F4
	addi     r5, r5, 0x40

lbl_800096F4:
	cmplwi   r4, 0
	beq      lbl_80009700
	addi     r4, r4, 8

lbl_80009700:
	li       r0, 0
	stw      r0, 0(r3)
	stw      r4, 4(r3)
	stw      r5, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009714
 * Size:	00004C
 */
void TFunctionValue_list::initialize()
{
	/*
	lis      r4, __float_nan@ha
	lfsu     f0, __float_nan@l(r4)
	li       r0, 0
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r0, 0x21(r3)
	stw      r0, 0x38(r3)
	stw      r0, 0x3c(r3)
	stw      r0, 0x40(r3)
	stw      r0, 0x44(r3)
	stw      r0, 0x48(r3)
	lfs      f0, 0(r4)
	stfd     f0, 0x50(r3)
	stw      r0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009760
 * Size:	000128
 */
void TFunctionValue_list::prepare()
{
	/*
	lbz      r0, 0x20(r3)
	extsb    r0, r0
	cmpwi    r0, 2
	beq      lbl_800097BC
	bge      lbl_80009784
	cmpwi    r0, 0
	beq      lbl_80009794
	bge      lbl_800097A8
	b        lbl_80009794

lbl_80009784:
	cmpwi    r0, 4
	beq      lbl_800097E4
	bge      lbl_80009794
	b        lbl_800097D0

lbl_80009794:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163A8@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_80009804

lbl_800097A8:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_80009804

lbl_800097BC:
	lfd      f1, 8(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_80009804

lbl_800097D0:
	lfd      f1, 0x10(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_80009804

lbl_800097E4:
	lfd      f1, 8(r3)
	lfd      f0, 0x10(r3)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f1, f0
	lfd      f0, lbl_805163E0@sda21(r2)
	fmul     f1, f2, f1
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)

lbl_80009804:
	lwz      r0, 0x40(r3)
	cmpwi    r0, 2
	beq      lbl_80009850
	bge      lbl_80009824
	cmpwi    r0, 0
	beq      lbl_80009830
	bge      lbl_80009840
	b        lbl_80009830

lbl_80009824:
	cmpwi    r0, 4
	bge      lbl_80009830
	b        lbl_80009860

lbl_80009830:
	lis      r4,
update_INTERPOLATE_NONE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
	addi     r0, r4,
update_INTERPOLATE_NONE___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
	stw      r0, 0x58(r3)
	blr

lbl_80009840:
	lis      r4,
update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
	addi     r0, r4,
update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
	stw      r0, 0x58(r3)
	blr

lbl_80009850:
	lis      r4,
update_INTERPOLATE_PLATEAU___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
	addi     r0, r4,
update_INTERPOLATE_PLATEAU___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
	stw      r0, 0x58(r3)
	blr

lbl_80009860:
	lis      r4,
update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
	addi     r0, r4,
update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
	stw      r0, 0x58(r3)
	lwz      r0, 0x48(r3)
	cmplwi   r0, 2
	bnelr
	lis      r4,
update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@ha
	addi     r0, r4,
update_INTERPOLATE_LINEAR___Q27JStudio19TFunctionValue_listFRCQ27JStudio19TFunctionValue_listRCQ37JStudio19TFunctionValue_list11TIndexData_@l
	stw      r0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009888
 * Size:	000530
 */
void TFunctionValue_list::getValue(double)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r31, r3
	lis      r0, 0x4330
	lwz      r3, 0x48(r3)
	lfd      f4, 0x28(r31)
	addi     r30, r3, -1
	lbz      r3, 0x21(r31)
	stw      r30, 0x4c(r1)
	fsub     f2, f1, f4
	lfd      f3, 0x30(r31)
	extsb    r3, r3
	stw      r0, 0x48(r1)
	cmpwi    r3, 2
	lfd      f1, lbl_805163E8@sda21(r2)
	lfd      f0, 0x48(r1)
	fmadd    f3, f3, f2, f4
	fsub     f31, f0, f1
	beq      lbl_80009AB0
	bge      lbl_800098FC
	cmpwi    r3, 0
	beq      lbl_8000990C
	bge      lbl_800099DC
	b        lbl_8000990C

lbl_800098FC:
	cmpwi    r3, 4
	beq      lbl_80009C68
	bge      lbl_8000990C
	b        lbl_80009B88

lbl_8000990C:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8000996C
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x2c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009948 addi     r3, r1, 0x2c

lbl_80009948:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000995C
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000995C:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_800099C4

lbl_8000996C:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_800099C4
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x28(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_800099A4 addi     r3, r1, 0x28

lbl_800099A4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_800099B8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_800099B8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_800099C4:
	lfd      f2, 8(r31)
	lfd      f0, 0x50(r31)
	fadd     f1, f1, f2
	fdiv     f0, f1, f0
	stfd     f0, 0x30(r1)
	b        lbl_80009D3C

lbl_800099DC:
	lfd      f2, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fadd     f1, f3, f2
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_80009A40
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x24(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009A1C addi     r3, r1, 0x24

lbl_80009A1C:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009A30
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009A30:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_80009A98

lbl_80009A40:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80009A98
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x20(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009A78 addi     r3, r1, 0x20

lbl_80009A78:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009A8C
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009A8C:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_80009A98:
	lfd      f2, 8(r31)
	lfd      f0, 0x50(r31)
	fadd     f1, f1, f2
	fdiv     f0, f1, f0
	stfd     f0, 0x30(r1)
	b        lbl_80009D3C

lbl_80009AB0:
	lfd      f0, 0x10(r31)
	lfd      f2, 8(r31)
	fadd     f1, f3, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_80009B18
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x1c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009AF4 addi     r3, r1, 0x1c

lbl_80009AF4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009B08
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009B08:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_80009B70

lbl_80009B18:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80009B70
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x18(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009B50 addi     r3, r1, 0x18

lbl_80009B50:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009B64
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009B64:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_80009B70:
	lfd      f2, 8(r31)
	lfd      f0, 0x50(r31)
	fadd     f1, f1, f2
	fdiv     f0, f1, f0
	stfd     f0, 0x30(r1)
	b        lbl_80009D3C

lbl_80009B88:
	lfd      f4, 8(r31)
	lfd      f0, 0x10(r31)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f4, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fmadd    f1, f2, f1, f3
	fsub     f1, f1, f4
	fcmpo    cr0, f1, f0
	bge      lbl_80009BF8
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x14(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009BD4 addi     r3, r1, 0x14

lbl_80009BD4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009BE8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009BE8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_80009C50

lbl_80009BF8:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80009C50
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x10(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009C30 addi     r3, r1, 0x10

lbl_80009C30:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009C44
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009C44:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_80009C50:
	lfd      f2, 8(r31)
	lfd      f0, 0x50(r31)
	fadd     f1, f1, f2
	fdiv     f0, f1, f0
	stfd     f0, 0x30(r1)
	b        lbl_80009D3C

lbl_80009C68:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80009CC8
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0xc(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009CA4 addi     r3, r1, 0xc

lbl_80009CA4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009CB8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009CB8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_80009D20

lbl_80009CC8:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80009D20
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 8(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_80009D00 addi     r3, r1, 8

lbl_80009D00:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_80009D14
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_80009D14:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_80009D20:
	lfd      f2, 8(r31)
	lfd      f0, 0x18(r31)
	fadd     f1, f1, f2
	fsub     f1, f1, f2
	fmul     f1, f31, f1
	fdiv     f0, f1, f0
	stfd     f0, 0x30(r1)

lbl_80009D3C:
	lfd      f1, 0x30(r1)
	lfd      f0, lbl_805163A0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80009D58
	lwz      r3, 0x44(r31)
	lfs      f1, 0(r3)
	b        lbl_80009D98

lbl_80009D58:
	fcmpo    cr0, f1, f31
	cror     2, 1, 2
	bne      lbl_80009D74
	lwz      r3, 0x44(r31)
	slwi     r0, r30, 2
	lfsx     f1, r3, r0
	b        lbl_80009D98

lbl_80009D74:
	bl       floor
	stfd     f1, 0x38(r1)
	bl       __cvt_fp2unsigned
	stw      r3, 0x40(r1)
	mr       r3, r31
	addi     r4, r1, 0x30
	lwz      r12, 0x58(r31)
	mtctr    r12
	bctrl

lbl_80009D98:
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009DB8
 * Size:	000014
 */
void TFunctionValue_list::update_INTERPOLATE_NONE_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&)
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
void TFunctionValue_list::update_INTERPOLATE_LINEAR_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&)
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
void TFunctionValue_list::update_INTERPOLATE_PLATEAU_(const JStudio::TFunctionValue_list&, const JStudio::TFunctionValue_list::TIndexData_&)
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
void TFunctionValue_list::update_INTERPOLATE_BSPLINE_dataMore3_(const JStudio::TFunctionValue_list&,
                                                                const JStudio::TFunctionValue_list::TIndexData_&)
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
 * Address:	80009F2C
 * Size:	000084
 */
TFunctionValue_list_parameter::TFunctionValue_list_parameter()
{
	/*
	lis      r6, __vt__Q27JStudio14TFunctionValue@ha
	lis      r5, __float_nan@ha
	addi     r0, r6, __vt__Q27JStudio14TFunctionValue@l
	lis      r4, __vt__Q27JStudio29TFunctionValue_list_parameter@ha
	stw      r0, 0(r3)
	addi     r6, r5, __float_nan@l
	li       r5, 0
	addi     r0, r4, __vt__Q27JStudio29TFunctionValue_list_parameter@l
	lfs      f0, 0(r6)
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r5, 0x20(r3)
	stb      r5, 0x21(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x28(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x30(r3)
	stw      r5, 0x38(r3)
	stw      r5, 0x3c(r3)
	stw      r5, 0x40(r3)
	stw      r0, 0(r3)
	stw      r5, 0x44(r3)
	stw      r5, 0x48(r3)
	stw      r5, 0x4c(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x50(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x54(r3)
	stw      r5, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009FB0
 * Size:	000008
 */
int TFunctionValue_list_parameter::getType() const { return 0x5; }

/*
 * --INFO--
 * Address:	80009FB8
 * Size:	000030
 */
void TFunctionValue_list_parameter::getAttributeSet()
{
	/*
	cmplwi   r4, 0
	mr       r5, r4
	beq      lbl_80009FC8
	addi     r5, r5, 0x40

lbl_80009FC8:
	cmplwi   r4, 0
	beq      lbl_80009FD4
	addi     r4, r4, 8

lbl_80009FD4:
	li       r0, 0
	stw      r0, 0(r3)
	stw      r4, 4(r3)
	stw      r5, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80009FE8
 * Size:	000030
 */
void TFunctionValue_list_parameter::data_set(const float*, unsigned long)
{
	/*
	stw      r4, 0x44(r3)
	stw      r5, 0x48(r3)
	lwz      r0, 0x44(r3)
	stw      r0, 0x4c(r3)
	lwz      r0, 0x48(r3)
	lwz      r4, 0x44(r3)
	slwi     r0, r0, 3
	add      r0, r4, r0
	stw      r0, 0x50(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x54(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000A018
 * Size:	000058
 */
void TFunctionValue_list_parameter::initialize()
{
	/*
	lis      r5, __float_nan@ha
	li       r4, 0
	lfs      f0, __float_nan@l(r5)
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r4, 0x20(r3)
	stb      r4, 0x21(r3)
	stw      r4, 0x38(r3)
	stw      r4, 0x3c(r3)
	stw      r4, 0x40(r3)
	stw      r4, 0x44(r3)
	stw      r4, 0x48(r3)
	stw      r4, 0x4c(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x50(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x54(r3)
	stw      r4, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000A070
 * Size:	000128
 */
void TFunctionValue_list_parameter::prepare()
{
	/*
	lbz      r0, 0x20(r3)
	extsb    r0, r0
	cmpwi    r0, 2
	beq      lbl_8000A0CC
	bge      lbl_8000A094
	cmpwi    r0, 0
	beq      lbl_8000A0A4
	bge      lbl_8000A0B8
	b        lbl_8000A0A4

lbl_8000A094:
	cmpwi    r0, 4
	beq      lbl_8000A0F4
	bge      lbl_8000A0A4
	b        lbl_8000A0E0

lbl_8000A0A4:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163A8@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_8000A114

lbl_8000A0B8:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_8000A114

lbl_8000A0CC:
	lfd      f1, 8(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_8000A114

lbl_8000A0E0:
	lfd      f1, 0x10(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	b        lbl_8000A114

lbl_8000A0F4:
	lfd      f1, 8(r3)
	lfd      f0, 0x10(r3)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f1, f0
	lfd      f0, lbl_805163E0@sda21(r2)
	fmul     f1, f2, f1
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)

lbl_8000A114:
	lwz      r0, 0x40(r3)
	cmpwi    r0, 2
	beq      lbl_8000A160
	bge      lbl_8000A134
	cmpwi    r0, 0
	beq      lbl_8000A140
	bge      lbl_8000A150
	b        lbl_8000A140

lbl_8000A134:
	cmpwi    r0, 4
	bge      lbl_8000A140
	b        lbl_8000A170

lbl_8000A140:
	lis      r4,
update_INTERPOLATE_NONE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
	addi     r0, r4,
update_INTERPOLATE_NONE___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
	stw      r0, 0x58(r3)
	blr

lbl_8000A150:
	lis      r4,
update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
	addi     r0, r4,
update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
	stw      r0, 0x58(r3)
	blr

lbl_8000A160:
	lis      r4,
update_INTERPOLATE_PLATEAU___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
	addi     r0, r4,
update_INTERPOLATE_PLATEAU___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
	stw      r0, 0x58(r3)
	blr

lbl_8000A170:
	lis      r4,
update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
	addi     r0, r4,
update_INTERPOLATE_BSPLINE_dataMore3___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
	stw      r0, 0x58(r3)
	lwz      r0, 0x48(r3)
	cmplwi   r0, 2
	bnelr
	lis      r4,
update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@ha
	addi     r0, r4,
update_INTERPOLATE_LINEAR___Q27JStudio29TFunctionValue_list_parameterFRCQ27JStudio29TFunctionValue_list_parameterd@l
	stw      r0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000A198
 * Size:	000538
 */
void TFunctionValue_list_parameter::getValue(double)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stfd     f1, 8(r1)
	mr       r31, r3
	lfd      f2, 0x28(r3)
	lwz      r3, 0x48(r3)
	fsub     f0, f1, f2
	lfd      f1, 0x30(r31)
	lbz      r4, 0x21(r31)
	addi     r0, r3, -1
	lwz      r3, 0x44(r31)
	slwi     r0, r0, 3
	extsb    r4, r4
	fmadd    f3, f1, f0, f2
	cmpwi    r4, 2
	lfs      f31, 0(r3)
	lfsx     f30, r3, r0
	beq      lbl_8000A3A8
	bge      lbl_8000A20C
	cmpwi    r4, 0
	beq      lbl_8000A21C
	bge      lbl_8000A2E0
	b        lbl_8000A21C

lbl_8000A20C:
	cmpwi    r4, 4
	beq      lbl_8000A548
	bge      lbl_8000A21C
	b        lbl_8000A474

lbl_8000A21C:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8000A27C
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x34(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A258 addi     r3, r1, 0x34

lbl_8000A258:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A26C
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A26C:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000A2D4

lbl_8000A27C:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000A2D4
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x30(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A2B4 addi     r3, r1, 0x30

lbl_8000A2B4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A2C8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A2C8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000A2D4:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000A620

lbl_8000A2E0:
	lfd      f2, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fadd     f1, f3, f2
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8000A344
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x2c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A320 addi     r3, r1, 0x2c

lbl_8000A320:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A334
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A334:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000A39C

lbl_8000A344:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000A39C
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x28(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A37C addi     r3, r1, 0x28

lbl_8000A37C:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A390
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A390:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000A39C:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000A620

lbl_8000A3A8:
	lfd      f0, 0x10(r31)
	lfd      f2, 8(r31)
	fadd     f1, f3, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8000A410
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x24(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A3EC addi     r3, r1, 0x24

lbl_8000A3EC:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A400
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A400:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000A468

lbl_8000A410:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000A468
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x20(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A448 addi     r3, r1, 0x20

lbl_8000A448:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A45C
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A45C:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000A468:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000A620

lbl_8000A474:
	lfd      f4, 8(r31)
	lfd      f0, 0x10(r31)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f4, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fmadd    f1, f2, f1, f3
	fsub     f1, f1, f4
	fcmpo    cr0, f1, f0
	bge      lbl_8000A4E4
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x1c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A4C0 addi     r3, r1, 0x1c

lbl_8000A4C0:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A4D4
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A4D4:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000A53C

lbl_8000A4E4:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000A53C
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x18(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A51C addi     r3, r1, 0x18

lbl_8000A51C:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A530
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A530:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000A53C:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000A620

lbl_8000A548:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8000A5A8
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x14(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A584 addi     r3, r1, 0x14

lbl_8000A584:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A598
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A598:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000A600

lbl_8000A5A8:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000A600
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x10(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000A5E0 addi     r3, r1, 0x10

lbl_8000A5E0:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000A5F4
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000A5F4:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000A600:
	lfd      f3, 8(r31)
	fsub     f2, f30, f31
	lfd      f0, 0x18(r31)
	fadd     f1, f1, f3
	fsub     f1, f1, f3
	fmul     f1, f1, f2
	fdiv     f0, f1, f0
	fadd     f1, f31, f0

lbl_8000A620:
	stfd     f1, 8(r1)
	addi     r3, r1, 0x44
	addi     r4, r1, 0x40
	addi     r5, r1, 0x3c
	lwz      r0, 0x54(r31)
	addi     r6, r1, 0x38
	addi     r7, r1, 8
	stw      r0, 0x38(r1)
	lwz      r0, 0x50(r31)
	stw      r0, 0x3c(r1)
	lwz      r0, 0x4c(r31)
	stw      r0, 0x40(r1)
	bl
"findUpperBound_binary_current<Q37JStudio29TFunctionValue_list_parameter15TIterator_data_,d>__7JGadgetFQ37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_Q37JStudio29TFunctionValue_list_parameter15TIterator_data_RCd"
	lwz      r0, 0x44(r1)
	stw      r0, 0x54(r31)
	lwz      r3, 0x54(r31)
	lwz      r0, 0x4c(r31)
	cmplw    r3, r0
	bne      lbl_8000A674
	lfs      f1, 4(r3)
	b        lbl_8000A6AC

lbl_8000A674:
	lwz      r0, 0x50(r31)
	cmplw    r3, r0
	bne      lbl_8000A698
	lwz      r3, 0x54(r31)
	addi     r0, r3, -8
	stw      r0, 0x54(r31)
	lwz      r3, 0x54(r31)
	lfs      f1, 4(r3)
	b        lbl_8000A6AC

lbl_8000A698:
	lwz      r12, 0x58(r31)
	mr       r3, r31
	lfd      f1, 8(r1)
	mtctr    r12
	bctrl

lbl_8000A6AC:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}
} // namespace JStudio

/*
 * --INFO--
 * Address:	8000A6D0
 * Size:	00005C
 */
template <>
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_list_parameter::TIterator_data_, double>(
    JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_,
    JStudio::TFunctionValue_list_parameter::TIterator_data_, const double&)
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
template <>
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_list_parameter::TIterator_data_, double, std::less<double>>(
    JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_,
    JStudio::TFunctionValue_list_parameter::TIterator_data_, const double&, std::less<double>)
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
void JStudio::TFunctionValue_list_parameter::update_INTERPOLATE_NONE_(const JStudio::TFunctionValue_list_parameter&, double)
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
void JStudio::TFunctionValue_list_parameter::update_INTERPOLATE_LINEAR_(const JStudio::TFunctionValue_list_parameter&, double)
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
void JStudio::TFunctionValue_list_parameter::update_INTERPOLATE_PLATEAU_(const JStudio::TFunctionValue_list_parameter&, double)
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
void JStudio::TFunctionValue_list_parameter::update_INTERPOLATE_BSPLINE_dataMore3_(const JStudio::TFunctionValue_list_parameter&, double)
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
 * Address:	8000AC60
 * Size:	000098
 */
JStudio::TFunctionValue_hermite::TFunctionValue_hermite()
{
	/*
	lis      r6, __vt__Q27JStudio14TFunctionValue@ha
	lis      r5, __float_nan@ha
	addi     r0, r6, __vt__Q27JStudio14TFunctionValue@l
	lis      r4, __vt__Q27JStudio22TFunctionValue_hermite@ha
	stw      r0, 0(r3)
	addi     r6, r5, __float_nan@l
	li       r5, 0
	addi     r0, r4, __vt__Q27JStudio22TFunctionValue_hermite@l
	lfs      f0, 0(r6)
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r5, 0x20(r3)
	stb      r5, 0x21(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x28(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x30(r3)
	stw      r5, 0x38(r3)
	stw      r5, 0x3c(r3)
	stw      r0, 0(r3)
	stw      r5, 0x40(r3)
	stw      r5, 0x44(r3)
	stw      r5, 0x48(r3)
	stw      r5, 0x4c(r3)
	lwz      r0, 0x48(r3)
	stw      r0, 0x50(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x54(r3)
	lwz      r0, 0x50(r3)
	stw      r0, 0x58(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x5c(r3)
	lwz      r0, 0x50(r3)
	stw      r0, 0x60(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000ACF8
 * Size:	000008
 */
int JStudio::TFunctionValue_hermite::getType() const { return 0x6; }

/*
 * --INFO--
 * Address:	8000AD00
 * Size:	000020
 */
void JStudio::TFunctionValue_hermite::getAttributeSet()
{
	/*
	cmplwi   r4, 0
	beq      lbl_8000AD0C
	addi     r4, r4, 8

lbl_8000AD0C:
	li       r0, 0
	stw      r0, 0(r3)
	stw      r4, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000AD20
 * Size:	000050
 */
void JStudio::TFunctionValue_hermite::data_set(const float*, unsigned long, unsigned long)
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
void JStudio::TFunctionValue_hermite::initialize()
{
	/*
	lis      r4, __float_nan@ha
	li       r0, 0
	lfs      f0, __float_nan@l(r4)
	stfd     f0, 8(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x10(r3)
	lfd      f0, 8(r3)
	stfd     f0, 0x18(r3)
	stb      r0, 0x20(r3)
	stb      r0, 0x21(r3)
	stw      r0, 0x38(r3)
	stw      r0, 0x3c(r3)
	stw      r0, 0x40(r3)
	stw      r0, 0x44(r3)
	stw      r0, 0x48(r3)
	lwz      r4, 0x48(r3)
	stw      r0, 0x4c(r3)
	stw      r4, 0x50(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x54(r3)
	lwz      r0, 0x50(r3)
	stw      r0, 0x58(r3)
	lwz      r0, 0x4c(r3)
	stw      r0, 0x5c(r3)
	lwz      r0, 0x50(r3)
	stw      r0, 0x60(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000ADDC
 * Size:	0000A8
 */
void JStudio::TFunctionValue_hermite::prepare()
{
	/*
	lbz      r0, 0x20(r3)
	extsb    r0, r0
	cmpwi    r0, 2
	beq      lbl_8000AE38
	bge      lbl_8000AE00
	cmpwi    r0, 0
	beq      lbl_8000AE10
	bge      lbl_8000AE24
	b        lbl_8000AE10

lbl_8000AE00:
	cmpwi    r0, 4
	beq      lbl_8000AE60
	bge      lbl_8000AE10
	b        lbl_8000AE4C

lbl_8000AE10:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163A8@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_8000AE24:
	lfd      f1, lbl_805163A0@sda21(r2)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_8000AE38:
	lfd      f1, 8(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_8000AE4C:
	lfd      f1, 0x10(r3)
	lfd      f0, lbl_805163E0@sda21(r2)
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr

lbl_8000AE60:
	lfd      f1, 8(r3)
	lfd      f0, 0x10(r3)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f1, f0
	lfd      f0, lbl_805163E0@sda21(r2)
	fmul     f1, f2, f1
	stfd     f1, 0x28(r3)
	stfd     f0, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000AE84
 * Size:	0005D0
 */
void JStudio::TFunctionValue_hermite::getValue(double)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stfd     f1, 8(r1)
	mr       r31, r3
	lwz      r3, 0x44(r3)
	lwz      r0, 0x48(r31)
	addi     r3, r3, -1
	lfd      f2, 0x28(r31)
	mullw    r0, r3, r0
	lbz      r3, 0x21(r31)
	fsub     f0, f1, f2
	lfd      f1, 0x30(r31)
	extsb    r3, r3
	lwz      r4, 0x40(r31)
	slwi     r0, r0, 2
	fmadd    f3, f1, f0, f2
	cmpwi    r3, 2
	lfs      f31, 0(r4)
	lfsx     f30, r4, r0
	beq      lbl_8000B09C
	bge      lbl_8000AF00
	cmpwi    r3, 0
	beq      lbl_8000AF10
	bge      lbl_8000AFD4
	b        lbl_8000AF10

lbl_8000AF00:
	cmpwi    r3, 4
	beq      lbl_8000B23C
	bge      lbl_8000AF10
	b        lbl_8000B168

lbl_8000AF10:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8000AF70
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x34(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000AF4C addi     r3, r1, 0x34

lbl_8000AF4C:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000AF60
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000AF60:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000AFC8

lbl_8000AF70:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000AFC8
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x30(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000AFA8 addi     r3, r1, 0x30

lbl_8000AFA8:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000AFBC
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000AFBC:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000AFC8:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000AFD4:
	lfd      f2, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fadd     f1, f3, f2
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8000B038
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x2c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B014 addi     r3, r1, 0x2c

lbl_8000B014:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B028
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B028:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B090

lbl_8000B038:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B090
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x28(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B070 addi     r3, r1, 0x28

lbl_8000B070:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B084
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B084:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B090:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000B09C:
	lfd      f0, 0x10(r31)
	lfd      f2, 8(r31)
	fadd     f1, f3, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8000B104
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x24(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B0E0 addi     r3, r1, 0x24

lbl_8000B0E0:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B0F4
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B0F4:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B15C

lbl_8000B104:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B15C
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x20(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B13C addi     r3, r1, 0x20

lbl_8000B13C:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B150
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B150:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B15C:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000B168:
	lfd      f4, 8(r31)
	lfd      f0, 0x10(r31)
	lfd      f2, lbl_805163C8@sda21(r2)
	fadd     f1, f4, f0
	lfd      f0, lbl_805163A0@sda21(r2)
	fmadd    f1, f2, f1, f3
	fsub     f1, f1, f4
	fcmpo    cr0, f1, f0
	bge      lbl_8000B1D8
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x1c(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B1B4 addi     r3, r1, 0x1c

lbl_8000B1B4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B1C8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B1C8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B230

lbl_8000B1D8:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B230
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x18(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B210 addi     r3, r1, 0x18

lbl_8000B210:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B224
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B224:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B230:
	lfd      f0, 8(r31)
	fadd     f1, f1, f0
	b        lbl_8000B314

lbl_8000B23C:
	lfd      f1, 8(r31)
	lfd      f0, lbl_805163A0@sda21(r2)
	fsub     f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8000B29C
	lwz      r4, 0x38(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x14(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B278 addi     r3, r1, 0x14

lbl_8000B278:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B28C
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B28C:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl
	b        lbl_8000B2F4

lbl_8000B29C:
	lfd      f0, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8000B2F4
	lwz      r4, 0x3c(r31)
	li       r0, 0
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha cmplwi
r4, 4 stw      r0, 0x10(r1) slwi     r4, r4, 2 addi     r0, r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l add r3,
r0, r4 blt      lbl_8000B2D4 addi     r3, r1, 0x10

lbl_8000B2D4:
	lwz      r12, 0(r3)
	cmplwi   r12, 0
	bne      lbl_8000B2E8
	lis      r3,
"gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@ha lwz
r12, "gapfnExtrapolateParameter___Q27JStudio27@unnamed@functionvalue_cpp@"@l(r3)

lbl_8000B2E8:
	lfd      f2, 0x18(r31)
	mtctr    r12
	bctrl

lbl_8000B2F4:
	lfd      f3, 8(r31)
	fsub     f2, f30, f31
	lfd      f0, 0x18(r31)
	fadd     f1, f1, f3
	fsub     f1, f1, f3
	fmul     f1, f1, f2
	fdiv     f0, f1, f0
	fadd     f1, f31, f0

lbl_8000B314:
	stfd     f1, 8(r1)
	addi     r3, r1, 0x50
	addi     r4, r1, 0x48
	addi     r5, r1, 0x40
	lwz      r8, 0x5c(r31)
	addi     r6, r1, 0x38
	lwz      r0, 0x60(r31)
	addi     r7, r1, 8
	stw      r8, 0x38(r1)
	stw      r0, 0x3c(r1)
	lwz      r8, 0x54(r31)
	lwz      r0, 0x58(r31)
	stw      r8, 0x40(r1)
	stw      r0, 0x44(r1)
	lwz      r8, 0x4c(r31)
	lwz      r0, 0x50(r31)
	stw      r8, 0x48(r1)
	stw      r0, 0x4c(r1)
	bl
"findUpperBound_binary_current<Q37JStudio22TFunctionValue_hermite15TIterator_data_,d>__7JGadgetFQ37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_Q37JStudio22TFunctionValue_hermite15TIterator_data_RCd"
	lwz      r0, 0x50(r1)
	stw      r0, 0x5c(r31)
	lwz      r0, 0x54(r1)
	stw      r0, 0x60(r31)
	lwz      r4, 0x5c(r31)
	lwz      r0, 0x4c(r31)
	cmplw    r4, r0
	bne      lbl_8000B388
	lfs      f1, 4(r4)
	b        lbl_8000B430

lbl_8000B388:
	lwz      r0, 0x54(r31)
	cmplw    r4, r0
	bne      lbl_8000B3B4
	lwz      r3, 0x60(r31)
	lwz      r0, 0x5c(r31)
	slwi     r3, r3, 2
	subf     r0, r3, r0
	stw      r0, 0x5c(r31)
	lwz      r3, 0x5c(r31)
	lfs      f1, 4(r3)
	b        lbl_8000B430

lbl_8000B3B4:
	lwz      r0, 0x48(r31)
	lfs      f0, 0(r4)
	slwi     r0, r0, 2
	lfd      f7, lbl_805163A8@sda21(r2)
	subf     r5, r0, r4
	lfd      f1, 8(r1)
	lfs      f5, 0(r5)
	add      r3, r5, r0
	lfd      f4, lbl_805163B8@sda21(r2)
	fsub     f3, f0, f5
	lfd      f2, lbl_805163B0@sda21(r2)
	fsub     f9, f1, f5
	lfs      f0, 4(r4)
	lfs      f1, 4(r5)
	fdiv     f6, f7, f3
	lfs      f3, -4(r3)
	lfs      f5, 8(r4)
	fmul     f8, f9, f6
	fmadd    f4, f4, f8, f2
	fmul     f2, f8, f8
	fsub     f6, f8, f7
	fmul     f2, f4, f2
	fmul     f4, f6, f6
	fmul     f0, f2, f0
	fsub     f2, f7, f2
	fmul     f6, f6, f9
	fmul     f4, f9, f4
	fmadd    f0, f2, f1, f0
	fmul     f1, f8, f6
	fmadd    f0, f4, f3, f0
	fmadd    f1, f1, f5, f0

lbl_8000B430:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000B454
 * Size:	000084
 */
template <>
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_hermite::TIterator_data_, double>(
    JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_,
    JStudio::TFunctionValue_hermite::TIterator_data_, const double&)
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
template <>
void JGadget::findUpperBound_binary_current<JStudio::TFunctionValue_hermite::TIterator_data_, double, std::less<double>>(
    JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_,
    JStudio::TFunctionValue_hermite::TIterator_data_, const double&, std::less<double>)
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
JStudio::TFunctionValue_hermite::~TFunctionValue_hermite()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8000B800
	lis      r3, __vt__Q27JStudio22TFunctionValue_hermite@ha
	addi     r0, r3, __vt__Q27JStudio22TFunctionValue_hermite@l
	stw      r0, 0(r31)
	beq      lbl_8000B7F0
	lis      r3, __vt__Q27JStudio14TFunctionValue@ha
	addi     r0, r3, __vt__Q27JStudio14TFunctionValue@l
	stw      r0, 0(r31)

lbl_8000B7F0:
	extsh.   r0, r4
	ble      lbl_8000B800
	mr       r3, r31
	bl       __dl__FPv

lbl_8000B800:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000B818
 * Size:	00005C
 */
JStudio::TFunctionValue_list_parameter::~TFunctionValue_list_parameter()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8000B85C
	lis      r3, __vt__Q27JStudio29TFunctionValue_list_parameter@ha
	addi     r0, r3, __vt__Q27JStudio29TFunctionValue_list_parameter@l
	stw      r0, 0(r31)
	beq      lbl_8000B84C
	lis      r3, __vt__Q27JStudio14TFunctionValue@ha
	addi     r0, r3, __vt__Q27JStudio14TFunctionValue@l
	stw      r0, 0(r31)

lbl_8000B84C:
	extsh.   r0, r4
	ble      lbl_8000B85C
	mr       r3, r31
	bl       __dl__FPv

lbl_8000B85C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000B874
 * Size:	00005C
 */
JStudio::TFunctionValue_list::~TFunctionValue_list()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8000B8B8
	lis      r3, __vt__Q27JStudio19TFunctionValue_list@ha
	addi     r0, r3, __vt__Q27JStudio19TFunctionValue_list@l
	stw      r0, 0(r31)
	beq      lbl_8000B8A8
	lis      r3, __vt__Q27JStudio14TFunctionValue@ha
	addi     r0, r3, __vt__Q27JStudio14TFunctionValue@l
	stw      r0, 0(r31)

lbl_8000B8A8:
	extsh.   r0, r4
	ble      lbl_8000B8B8
	mr       r3, r31
	bl       __dl__FPv

lbl_8000B8B8:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000B8D0
 * Size:	00005C
 */
JStudio::TFunctionValue_transition::~TFunctionValue_transition()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8000B914
	lis      r3, __vt__Q27JStudio25TFunctionValue_transition@ha
	addi     r0, r3, __vt__Q27JStudio25TFunctionValue_transition@l
	stw      r0, 0(r31)
	beq      lbl_8000B904
	lis      r3, __vt__Q27JStudio14TFunctionValue@ha
	addi     r0, r3, __vt__Q27JStudio14TFunctionValue@l
	stw      r0, 0(r31)

lbl_8000B904:
	extsh.   r0, r4
	ble      lbl_8000B914
	mr       r3, r31
	bl       __dl__FPv

lbl_8000B914:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000B92C
 * Size:	00005C
 */
JStudio::TFunctionValue_constant::~TFunctionValue_constant()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8000B970
	lis      r3, __vt__Q27JStudio23TFunctionValue_constant@ha
	addi     r0, r3, __vt__Q27JStudio23TFunctionValue_constant@l
	stw      r0, 0(r31)
	beq      lbl_8000B960
	lis      r3, __vt__Q27JStudio14TFunctionValue@ha
	addi     r0, r3, __vt__Q27JStudio14TFunctionValue@l
	stw      r0, 0(r31)

lbl_8000B960:
	extsh.   r0, r4
	ble      lbl_8000B970
	mr       r3, r31
	bl       __dl__FPv

lbl_8000B970:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000B988
 * Size:	000088
 */
JStudio::TFunctionValue_composite::~TFunctionValue_composite()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8000B9F4
	lis      r3, __vt__Q27JStudio24TFunctionValue_composite@ha
	addic.   r0, r30, 4
	addi     r0, r3, __vt__Q27JStudio24TFunctionValue_composite@l
	stw      r0, 0(r30)
	beq      lbl_8000B9D0
	addic.   r0, r30, 4
	beq      lbl_8000B9D0
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__Q27JGadget20TVector_pointer_voidFv

lbl_8000B9D0:
	cmplwi   r30, 0
	beq      lbl_8000B9E4
	lis      r3, __vt__Q27JStudio14TFunctionValue@ha
	addi     r0, r3, __vt__Q27JStudio14TFunctionValue@l
	stw      r0, 0(r30)

lbl_8000B9E4:
	extsh.   r0, r31
	ble      lbl_8000B9F4
	mr       r3, r30
	bl       __dl__FPv

lbl_8000B9F4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8000BA10
 * Size:	000080
 */
template <>
JStudio::TFunctionValue_list_parameter::TIterator_data_
std::upper_bound<JStudio::TFunctionValue_list_parameter::TIterator_data_, double, std::less<double>>(
    JStudio::TFunctionValue_list_parameter::TIterator_data_, JStudio::TFunctionValue_list_parameter::TIterator_data_, const double&,
    std::less<double>)
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
template <>
JStudio::TFunctionValue_hermite::TIterator_data_
std::upper_bound<JStudio::TFunctionValue_hermite::TIterator_data_, double, std::less<double>>(
    JStudio::TFunctionValue_hermite::TIterator_data_, JStudio::TFunctionValue_hermite::TIterator_data_, const double&, std::less<double>)
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
