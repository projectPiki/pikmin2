#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26JStage7TObject
    __vt__Q26JStage7TObject:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte JSGGetName__Q26JStage7TObjectCFv
        .4byte JSGUpdate__Q26JStage7TObjectFv
        .4byte JSGGetFlag__Q26JStage7TObjectCFv
        .4byte JSGSetFlag__Q26JStage7TObjectFUl
        .4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
        .4byte JSGSetData__Q26JStage7TObjectFUlPCvUl
        .4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
        .4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
        .4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
        .4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
        .4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C78
    lbl_80516C78:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800988D4
 * Size:	000048
 */
JStage::TObject::~TObject(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80098904
	lis      r5, __vt__Q26JStage7TObject@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__Q26JStage7TObject@l
	stw      r0, 0(r31)
	ble      lbl_80098904
	bl       __dl__FPv

lbl_80098904:
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
 * Address:	8009891C
 * Size:	000008
 */
u32 JStage::TObject::JSGGetName() const { return 0x0; }

/*
 * --INFO--
 * Address:	80098924
 * Size:	000004
 */
void JStage::TObject::JSGUpdate(void) { }

/*
 * --INFO--
 * Address:	80098928
 * Size:	000008
 */
u32 JStage::TObject::JSGGetFlag() const { return 0x0; }

/*
 * --INFO--
 * Address:	80098930
 * Size:	000004
 */
void JStage::TObject::JSGSetFlag(unsigned long) { }

/*
 * --INFO--
 * Address:	80098934
 * Size:	000008
 */
u32 JStage::TObject::JSGGetData(const(unsigned long, void*, unsigned long))
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	8009893C
 * Size:	000004
 */
void JStage::TObject::JSGSetData(unsigned long, void const*, unsigned long) { }

/*
 * --INFO--
 * Address:	80098940
 * Size:	000004
 */
void JStage::TObject::JSGGetParent(const(JStage::TObject**, unsigned long*)) { }

/*
 * --INFO--
 * Address:	80098944
 * Size:	000004
 */
void JStage::TObject::JSGSetParent(JStage::TObject*, unsigned long) { }

/*
 * --INFO--
 * Address:	80098948
 * Size:	000004
 */
void JStage::TObject::JSGSetRelation(bool, JStage::TObject*, unsigned long) { }

/*
 * --INFO--
 * Address:	8009894C
 * Size:	000008
 */
s32 JStage::TObject::JSGFindNodeID(const(char const*)) { return -0x1; }

/*
 * --INFO--
 * Address:	80098954
 * Size:	00003C
 */
void JStage::TObject::JSGGetNodeTransformation(const(unsigned long,
                                                     float (*)[4]))
{
	/*
	.loc_0x0:
	  lfs       f0, -0x76E8(r2)
	  li        r3, 0
	  stfs      f0, 0x0(r5)
	  stfs      f0, 0x4(r5)
	  stfs      f0, 0x8(r5)
	  stfs      f0, 0xC(r5)
	  stfs      f0, 0x10(r5)
	  stfs      f0, 0x14(r5)
	  stfs      f0, 0x18(r5)
	  stfs      f0, 0x1C(r5)
	  stfs      f0, 0x20(r5)
	  stfs      f0, 0x24(r5)
	  stfs      f0, 0x28(r5)
	  stfs      f0, 0x2C(r5)
	  blr
	*/
}
