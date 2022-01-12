#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q210JADUtility6StrPrm
    __vt__Q210JADUtility6StrPrm:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility6StrPrmFv
        .4byte save__Q210JADUtility6StrPrmFR21JSUMemoryOutputStream
        .4byte load__Q210JADUtility6StrPrmFR20JSUMemoryInputStream
    .global "__vt__Q210JADUtility10PrmHio<Pc>"
    "__vt__Q210JADUtility10PrmHio<Pc>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility10PrmHio<Pc>Fv"
        .4byte "save__Q210JADUtility7Prm<Pc>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility7Prm<Pc>FR20JSUMemoryInputStream"
    .global "__vt__Q210JADUtility7Prm<Pc>"
    "__vt__Q210JADUtility7Prm<Pc>":
        .4byte 0
        .4byte 0
        .4byte "__dt__Q210JADUtility7Prm<Pc>Fv"
        .4byte "save__Q210JADUtility7Prm<Pc>FR21JSUMemoryOutputStream"
        .4byte "load__Q210JADUtility7Prm<Pc>FR20JSUMemoryInputStream"
    .global __vt__Q210JADUtility7PrmBase
    __vt__Q210JADUtility7PrmBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility7PrmBaseFv
        .4byte save__Q210JADUtility7PrmBaseFR21JSUMemoryOutputStream
        .4byte load__Q210JADUtility7PrmBaseFR20JSUMemoryInputStream
    .global __vt__Q210JADUtility11DataMgrNode
    __vt__Q210JADUtility11DataMgrNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility11DataMgrNodeFv
        .4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
        .4byte init__Q210JADUtility11DataMgrNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte getPath__Q210JADUtility11DataMgrNodeFv
        .4byte setPath__Q210JADUtility11DataMgrNodeFPc
        .4byte 0
        .4byte 0
        .4byte "@592@28@__dt__Q210JADUtility11DataMgrNodeFv"
        .4byte "@592@28@init__Q210JADUtility11DataMgrNodeFv"
    .global __vt__Q210JADUtility15DataLoadMgrNode
    __vt__Q210JADUtility15DataLoadMgrNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility15DataLoadMgrNodeFv
        .4byte isTempBuffaMode__Q210JADUtility15DataLoadMgrNodeFv
        .4byte init__Q210JADUtility15DataLoadMgrNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "@532@28@__dt__Q210JADUtility15DataLoadMgrNodeFv"
        .4byte "@532@28@init__Q210JADUtility15DataLoadMgrNodeFv"
    .global __vt__Q210JADUtility11DataMgrBase
    __vt__Q210JADUtility11DataMgrBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q210JADUtility11DataMgrBaseFv
        .4byte init__Q210JADUtility11DataMgrBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517090
    lbl_80517090:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800BA7F8
 * Size:	000044
 */
JADUtility::DataMgrBase::DataMgrBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility11DataMgrBase@ha
	li       r0, 0
	addi     r4, r3, __vt__Q210JADUtility11DataMgrBase@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BA83C
 * Size:	000078
 */
JADUtility::DataMgrBase::~DataMgrBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BA898
	lis      r3, __vt__Q210JADUtility11DataMgrBase@ha
	addi     r0, r3, __vt__Q210JADUtility11DataMgrBase@l
	stw      r0, 0(r30)
	lwz      r3, 0x18(r30)
	cmplwi   r3, 0
	beq      lbl_800BA87C
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_800BA87C:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_800BA898
	mr       r3, r30
	bl       __dl__FPv

lbl_800BA898:
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
 * Address:	........
 * Size:	0000D0
 */
JADUtility::DataLoadMgrNode::DataLoadMgrNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA8B4
 * Size:	0000C8
 */
JADUtility::DataLoadMgrNode::~DataLoadMgrNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BA960
	lis      r3, __vt__Q210JADUtility15DataLoadMgrNode@ha
	addi     r0, r30, 0x214
	addi     r3, r3, __vt__Q210JADUtility15DataLoadMgrNode@l
	stw      r3, 4(r30)
	addi     r4, r3, 0x24
	lwz      r3, 0(r30)
	stw      r4, 0(r3)
	lwz      r3, 0(r30)
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r0, 8(r30)
	cmpwi    r0, 3
	bne      lbl_800BA914
	lwz      r3, 0(r30)
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_800BA914:
	extsh.   r0, r31
	beq      lbl_800BA950
	addic.   r0, r30, 0x214
	beq      lbl_800BA950
	lis      r3, __vt__Q210JADUtility11DataMgrBase@ha
	addi     r0, r3, __vt__Q210JADUtility11DataMgrBase@l
	stw      r0, 0x214(r30)
	lwz      r3, 0x22c(r30)
	cmplwi   r3, 0
	beq      lbl_800BA944
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_800BA944:
	addi     r3, r30, 0x214
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_800BA950:
	extsh.   r0, r31
	ble      lbl_800BA960
	mr       r3, r30
	bl       __dl__FPv

lbl_800BA960:
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
 * Address:	........
 * Size:	000050
 */
void JADUtility::DataLoadMgrNode::setLoadPath(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000230
 */
void JADUtility::DataLoadMgrNode::load(JADUtility::DataLoadMgrNode::ObjStatus, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA97C
 * Size:	000008
 */
u32 JADUtility::DataLoadMgrNode::isTempBuffaMode(void) { return 0x0; }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void JADUtility::DataLoadMgrNode::initInstanceExt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BA984
 * Size:	0000F0
 */
void JADUtility::DataLoadMgrNode::initInstanceExt(void*, long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r12, 4(r3)
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_800BA9E0
	mr       r3, r28
	lwz      r12, 4(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_800BA9E0:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 4(r28)
	mr       r5, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r28
	lwz      r12, 4(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_800BAA24
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv

lbl_800BAA24:
	clrlwi.  r0, r31, 0x18
	bne      lbl_800BAA44
	li       r0, 0
	li       r3, 0
	stw      r0, 8(r28)
	lwz      r4, 0(r28)
	stw      r0, 0x18(r4)
	b        lbl_800BAA54

lbl_800BAA44:
	mr       r3, r28
	mr       r4, r29
	bl       setFlagsAsExternal__Q210JADUtility15DataLoadMgrNodeFPv
	li       r3, 1

lbl_800BAA54:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BAA74
 * Size:	000014
 */
void JADUtility::DataLoadMgrNode::setFlagsAsExternal(void*)
{
	/*
	lwz      r5, 0(r3)
	li       r0, 3
	stw      r4, 0x18(r5)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JADUtility::DataLoadMgrNode::loadDvd(unsigned long*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BAA88
 * Size:	00015C
 */
JADUtility::DataMgrNode::DataMgrNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_800BAACC
	addi     r3, r31, 0x250
	stw      r3, 0(r31)
	mr       r30, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility11DataMgrBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility11DataMgrBase@l
	stw      r3, 0(r30)
	stw      r0, 0x18(r30)

lbl_800BAACC:
	lis      r3, __vt__Q210JADUtility15DataLoadMgrNode@ha
	addi     r4, r31, 0x214
	addi     r3, r3, __vt__Q210JADUtility15DataLoadMgrNode@l
	li       r0, 0
	stw      r3, 4(r31)
	addi     r6, r3, 0x24
	mr       r30, r31
	addi     r3, r2, lbl_80517090@sda21
	lwz      r5, 0(r31)
	stw      r6, 0(r5)
	lwz      r5, 0(r31)
	subf     r4, r5, r4
	stw      r4, 0x1c(r5)
	stw      r0, 8(r31)
	stw      r0, 0x20c(r31)
	stw      r0, 0x210(r31)
	bl       strlen
	cmplwi   r3, 0xff
	bgt      lbl_800BAB24
	addi     r3, r31, 0xc
	addi     r4, r2, lbl_80517090@sda21
	bl       strcpy

lbl_800BAB24:
	addi     r3, r2, lbl_80517090@sda21
	bl       strlen
	cmplwi   r3, 0xff
	bgt      lbl_800BAB40
	addi     r3, r30, 0x10c
	addi     r4, r2, lbl_80517090@sda21
	bl       strcpy

lbl_800BAB40:
	lis      r3, __vt__Q210JADUtility11DataMgrNode@ha
	addi     r0, r31, 0x250
	addi     r3, r3, __vt__Q210JADUtility11DataMgrNode@l
	addi     r30, r31, 0x214
	stw      r3, 4(r31)
	addi     r5, r3, 0x2c
	mr       r3, r30
	lwz      r4, 0(r31)
	stw      r5, 0(r4)
	lwz      r4, 0(r31)
	subf     r0, r4, r0
	stw      r0, 0x1c(r4)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	li       r0, 0
	addi     r3, r3, __vt__Q210JADUtility7PrmBase@l
	mr       r4, r30
	stw      r3, 0(r30)
	addi     r3, r30, 0x1c
	stb      r0, 0x18(r30)
	bl       __ct__10JSUPtrLinkFPv
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	lis      r4, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	lis      r3, __vt__Q210JADUtility6StrPrm@ha
	stw      r0, 0(r30)
	addi     r5, r4, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	addi     r4, r3, __vt__Q210JADUtility6StrPrm@l
	li       r0, 0
	stw      r5, 0(r30)
	mr       r3, r31
	stw      r4, 0(r30)
	stw      r0, 0x30(r30)
	stw      r0, 0x34(r30)
	stw      r0, 0x38(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BABE4
 * Size:	0000A8
 */
JADUtility::StrPrm::~StrPrm(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BAC70
	lis      r3, __vt__Q210JADUtility6StrPrm@ha
	addi     r0, r3, __vt__Q210JADUtility6StrPrm@l
	stw      r0, 0(r30)
	beq      lbl_800BAC60
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	stw      r0, 0(r30)
	beq      lbl_800BAC60
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0(r30)
	beq      lbl_800BAC60
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_800BAC54
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800BAC54:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_800BAC60:
	extsh.   r0, r31
	ble      lbl_800BAC70
	mr       r3, r30
	bl       __dl__FPv

lbl_800BAC70:
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
 * Address:	800BAC8C
 * Size:	000098
 */
void __dt__Q210JADUtility10PrmHio<char*> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BAD08
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	stw      r0, 0(r30)
	beq      lbl_800BACF8
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0(r30)
	beq      lbl_800BACF8
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_800BACEC
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800BACEC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_800BACF8:
	extsh.   r0, r31
	ble      lbl_800BAD08
	mr       r3, r30
	bl       __dl__FPv

lbl_800BAD08:
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
 * Address:	800BAD24
 * Size:	000088
 */
void __dt__Q210JADUtility7Prm<char*> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BAD90
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0(r30)
	beq      lbl_800BAD80
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_800BAD74
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800BAD74:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_800BAD80:
	extsh.   r0, r31
	ble      lbl_800BAD90
	mr       r3, r30
	bl       __dl__FPv

lbl_800BAD90:
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
 * Address:	800BADAC
 * Size:	000078
 */
JADUtility::PrmBase::~PrmBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BAE08
	lis      r3, __vt__Q210JADUtility7PrmBase@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0(r30)
	beq      lbl_800BADEC
	addi     r3, r30, 0x1c
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800BADEC:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_800BAE08
	mr       r3, r30
	bl       __dl__FPv

lbl_800BAE08:
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
 * Address:	........
 * Size:	000054
 */
void JSULink<JADUtility::PrmBase>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
JADUtility::DataLoadMgrVirNode::DataLoadMgrVirNode(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
JADUtility::DataMgrVirNode::DataMgrVirNode(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
JADUtility::DataMgrVirNode::~DataMgrVirNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JADUtility::DataMgrVirNode::getPath(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JADUtility::DataMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JADUtility::DataLoadMgrVirNode::getPath(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void JADUtility::DataLoadMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BAE24
 * Size:	0000A0
 */
void JADUtility::StrPrm::save(JSUMemoryOutputStream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r5, 0x30(r3)
	cmpwi    r5, 0
	ble      lbl_800BAE64
	lwz      r4, 0x2c(r28)
	mr       r3, r29
	bl       write__15JSUOutputStreamFPCvl
	b        lbl_800BAE70

lbl_800BAE64:
	lwz      r4, 0x2c(r28)
	mr       r3, r29
	bl       write__15JSUOutputStreamFPCc

lbl_800BAE70:
	li       r30, 0
	mr       r31, r30
	b        lbl_800BAE94

lbl_800BAE7C:
	stb      r31, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 1
	bl       write__15JSUOutputStreamFPCvl
	addi     r30, r30, 1

lbl_800BAE94:
	lbz      r0, 0x18(r28)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_800BAE7C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BAEC4
 * Size:	0000A0
 */
void JADUtility::StrPrm::load(JSUMemoryInputStream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, 0x30(r3)
	cmpwi    r5, 0
	ble      lbl_800BAEFC
	lwz      r4, 0x2c(r30)
	mr       r3, r31
	bl       read__14JSUInputStreamFPvl
	b        lbl_800BAF08

lbl_800BAEFC:
	lwz      r4, 0x2c(r30)
	mr       r3, r31
	bl       read__14JSUInputStreamFPc

lbl_800BAF08:
	lbz      r4, 0x18(r30)
	cmplwi   r4, 0
	beq      lbl_800BAF28
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_800BAF28:
	lwz      r12, 0x34(r30)
	cmplwi   r12, 0
	beq      lbl_800BAF4C
	lwz      r4, 0x38(r30)
	cmplwi   r4, 0
	beq      lbl_800BAF4C
	mr       r3, r30
	mtctr    r12
	bctrl

lbl_800BAF4C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BAF64
 * Size:	000078
 */
void JADUtility::PrmBase::save(JSUMemoryOutputStream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_800BAFAC

lbl_800BAF94:
	stb      r31, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 1
	bl       write__15JSUOutputStreamFPCvl
	addi     r30, r30, 1

lbl_800BAFAC:
	lbz      r0, 0x18(r28)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_800BAF94
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BAFDC
 * Size:	000164
 */
JADUtility::DataMgrNode::~DataMgrNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800BB124
	lis      r4, __vt__Q210JADUtility11DataMgrNode@ha
	addi     r3, r30, 0x250
	addi     r4, r4, __vt__Q210JADUtility11DataMgrNode@l
	addic.   r0, r30, 0x214
	stw      r4, 4(r30)
	addi     r0, r4, 0x2c
	lwz      r4, 0(r30)
	stw      r0, 0(r4)
	lwz      r4, 0(r30)
	subf     r0, r4, r3
	stw      r0, 0x1c(r4)
	beq      lbl_800BB090
	lis      r3, __vt__Q210JADUtility6StrPrm@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, __vt__Q210JADUtility6StrPrm@l
	stw      r0, 0x214(r30)
	beq      lbl_800BB090
	lis      r3, "__vt__Q210JADUtility10PrmHio<Pc>"@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, "__vt__Q210JADUtility10PrmHio<Pc>"@l
	stw      r0, 0x214(r30)
	beq      lbl_800BB090
	lis      r3, "__vt__Q210JADUtility7Prm<Pc>"@ha
	addic.   r0, r30, 0x214
	addi     r0, r3, "__vt__Q210JADUtility7Prm<Pc>"@l
	stw      r0, 0x214(r30)
	beq      lbl_800BB090
	lis      r4, __vt__Q210JADUtility7PrmBase@ha
	addic.   r3, r30, 0x230
	addi     r0, r4, __vt__Q210JADUtility7PrmBase@l
	stw      r0, 0x214(r30)
	beq      lbl_800BB084
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_800BB084:
	addi     r3, r30, 0x214
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_800BB090:
	cmplwi   r30, 0
	beq      lbl_800BB0D8
	lis      r3, __vt__Q210JADUtility15DataLoadMgrNode@ha
	addi     r0, r30, 0x214
	addi     r3, r3, __vt__Q210JADUtility15DataLoadMgrNode@l
	stw      r3, 4(r30)
	addi     r4, r3, 0x24
	lwz      r3, 0(r30)
	stw      r4, 0(r3)
	lwz      r3, 0(r30)
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r0, 8(r30)
	cmpwi    r0, 3
	bne      lbl_800BB0D8
	lwz      r3, 0(r30)
	li       r0, 0
	stw      r0, 0x18(r3)

lbl_800BB0D8:
	extsh.   r0, r31
	beq      lbl_800BB114
	addic.   r0, r30, 0x250
	beq      lbl_800BB114
	lis      r3, __vt__Q210JADUtility11DataMgrBase@ha
	addi     r0, r3, __vt__Q210JADUtility11DataMgrBase@l
	stw      r0, 0x250(r30)
	lwz      r3, 0x268(r30)
	cmplwi   r3, 0
	beq      lbl_800BB108
	li       r4, 0
	bl       free__7JKRHeapFPvP7JKRHeap

lbl_800BB108:
	addi     r3, r30, 0x250
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_800BB114:
	extsh.   r0, r31
	ble      lbl_800BB124
	mr       r3, r30
	bl       __dl__FPv

lbl_800BB124:
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
 * Address:	800BB140
 * Size:	000008
 */
void JADUtility::DataMgrNode::getPath(void)
{
	/*
	addi     r3, r3, 0xc
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BB148
 * Size:	000050
 */
void JADUtility::DataMgrNode::setPath(char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	bl       strlen
	cmplwi   r3, 0xff
	bgt      lbl_800BB180
	mr       r4, r31
	addi     r3, r30, 0xc
	bl       strcpy

lbl_800BB180:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BB198
 * Size:	000044
 */
void JADUtility::DataMgrNode::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r0, 8(r3)
	lwz      r31, 0(r3)
	lwz      r3, 0x18(r31)
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x18(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BB1DC
 * Size:	000044
 */
void JADUtility::DataLoadMgrNode::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r0, 8(r3)
	lwz      r31, 0(r3)
	lwz      r3, 0x18(r31)
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x18(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BB220
 * Size:	00003C
 */
void JADUtility::DataMgrBase::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	bl       free__7JKRHeapFPvP7JKRHeap
	li       r0, 0
	stw      r0, 0x18(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BB25C
 * Size:	000084
 */
void save__Q210JADUtility7Prm<char*> FR21JSUMemoryOutputStream(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r4, 0x2c(r3)
	mr       r3, r29
	bl       write__15JSUOutputStreamFPCc
	li       r30, 0
	mr       r31, r30
	b        lbl_800BB2B0

lbl_800BB298:
	stb      r31, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 1
	bl       write__15JSUOutputStreamFPCvl
	addi     r30, r30, 1

lbl_800BB2B0:
	lbz      r0, 0x18(r28)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_800BB298
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BB2E0
 * Size:	000060
 */
void load__Q210JADUtility7Prm<char*> FR20JSUMemoryInputStream(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x2c(r3)
	mr       r3, r31
	bl       read__14JSUInputStreamFPc
	lbz      r4, 0x18(r30)
	cmplwi   r4, 0
	beq      lbl_800BB328
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_800BB328:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800BB340
 * Size:	000014
 */
void @532 @28 @JADUtility::DataLoadMgrNode::init(void)
{
	/*
	li       r11, 0x1c
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -532
	b        init__Q210JADUtility15DataLoadMgrNodeFv
	*/
}

/*
 * --INFO--
 * Address:	800BB354
 * Size:	000014
 */
@532 @28 @JADUtility::DataLoadMgrNode::~DataLoadMgrNode(void)
{
	/*
	li       r11, 0x1c
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -532
	b        __dt__Q210JADUtility15DataLoadMgrNodeFv
	*/
}

/*
 * --INFO--
 * Address:	800BB368
 * Size:	000014
 */
void @592 @28 @JADUtility::DataMgrNode::init(void)
{
	/*
	li       r11, 0x1c
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -592
	b        init__Q210JADUtility11DataMgrNodeFv
	*/
}

/*
 * --INFO--
 * Address:	800BB37C
 * Size:	000014
 */
@592 @28 @JADUtility::DataMgrNode::~DataMgrNode(void)
{
	/*
	li       r11, 0x1c
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -592
	b        __dt__Q210JADUtility11DataMgrNodeFv
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void @532 @28 @JADUtility::DataLoadMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
@532 @28 @JADUtility::DataLoadMgrVirNode::~DataLoadMgrVirNode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void @532 @28 @JADUtility::DataMgrVirNode::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
@532 @28 @JADUtility::DataMgrVirNode::~DataMgrVirNode(void)
{
	// UNUSED FUNCTION
}
