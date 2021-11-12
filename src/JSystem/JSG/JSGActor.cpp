#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26JStage6TActor
    __vt__Q26JStage6TActor:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte JSGFGetType__Q26JStage6TActorCFv
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
        .4byte JSGGetTranslation__Q26JStage6TActorCFP3Vec
        .4byte JSGSetTranslation__Q26JStage6TActorFRC3Vec
        .4byte JSGGetScaling__Q26JStage6TActorCFP3Vec
        .4byte JSGSetScaling__Q26JStage6TActorFRC3Vec
        .4byte JSGGetRotation__Q26JStage6TActorCFP3Vec
        .4byte JSGSetRotation__Q26JStage6TActorFRC3Vec
        .4byte JSGGetShape__Q26JStage6TActorCFv
        .4byte JSGSetShape__Q26JStage6TActorFUl
        .4byte JSGGetAnimation__Q26JStage6TActorCFv
        .4byte JSGSetAnimation__Q26JStage6TActorFUl
        .4byte JSGGetAnimationFrame__Q26JStage6TActorCFv
        .4byte JSGSetAnimationFrame__Q26JStage6TActorFf
        .4byte JSGGetAnimationFrameMax__Q26JStage6TActorCFv
        .4byte JSGGetAnimationTransition__Q26JStage6TActorCFv
        .4byte JSGSetAnimationTransition__Q26JStage6TActorFf
        .4byte JSGGetTextureAnimation__Q26JStage6TActorCFv
        .4byte JSGSetTextureAnimation__Q26JStage6TActorFUl
        .4byte JSGGetTextureAnimationFrame__Q26JStage6TActorCFv
        .4byte JSGSetTextureAnimationFrame__Q26JStage6TActorFf
        .4byte JSGGetTextureAnimationFrameMax__Q26JStage6TActorCFv
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C80
    lbl_80516C80:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80098990
 * Size:	000060
 */
JStage::TActor::~TActor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800989D4
	lis      r5, __vt__Q26JStage6TActor@ha
	li       r4, 0
	addi     r0, r5, __vt__Q26JStage6TActor@l
	stw      r0, 0(r30)
	bl       __dt__Q26JStage7TObjectFv
	extsh.   r0, r31
	ble      lbl_800989D4
	mr       r3, r30
	bl       __dl__FPv

lbl_800989D4:
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
 * Address:	800989F0
 * Size:	000008
 */
u32 JStage::TActor::JSGFGetType() const { return 0x2; }

/*
 * --INFO--
 * Address:	800989F8
 * Size:	000004
 */
void JStage::TActor::JSGGetTranslation(const(Vec*)) { }

/*
 * --INFO--
 * Address:	800989FC
 * Size:	000004
 */
void JStage::TActor::JSGSetTranslation(Vec const&) { }

/*
 * --INFO--
 * Address:	80098A00
 * Size:	000004
 */
void JStage::TActor::JSGGetScaling(const(Vec*)) { }

/*
 * --INFO--
 * Address:	80098A04
 * Size:	000004
 */
void JStage::TActor::JSGSetScaling(Vec const&) { }

/*
 * --INFO--
 * Address:	80098A08
 * Size:	000004
 */
void JStage::TActor::JSGGetRotation(const(Vec*)) { }

/*
 * --INFO--
 * Address:	80098A0C
 * Size:	000004
 */
void JStage::TActor::JSGSetRotation(Vec const&) { }

/*
 * --INFO--
 * Address:	80098A10
 * Size:	000008
 */
s32 JStage::TActor::JSGGetShape() const { return -0x1; }

/*
 * --INFO--
 * Address:	80098A18
 * Size:	000004
 */
void JStage::TActor::JSGSetShape(unsigned long) { }

/*
 * --INFO--
 * Address:	80098A1C
 * Size:	000008
 */
s32 JStage::TActor::JSGGetAnimation() const { return -0x1; }

/*
 * --INFO--
 * Address:	80098A24
 * Size:	000004
 */
void JStage::TActor::JSGSetAnimation(unsigned long) { }

/*
 * --INFO--
 * Address:	80098A28
 * Size:	000008
 */
void JStage::TActor::JSGGetAnimationFrame() const
{
	/*
	lfs      f1, lbl_80516C80@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098A30
 * Size:	000004
 */
void JStage::TActor::JSGSetAnimationFrame(float) { }

/*
 * --INFO--
 * Address:	80098A34
 * Size:	000008
 */
void JStage::TActor::JSGGetAnimationFrameMax() const
{
	/*
	lfs      f1, lbl_80516C80@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098A3C
 * Size:	000008
 */
void JStage::TActor::JSGGetAnimationTransition() const
{
	/*
	lfs      f1, lbl_80516C80@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098A44
 * Size:	000004
 */
void JStage::TActor::JSGSetAnimationTransition(float) { }

/*
 * --INFO--
 * Address:	80098A48
 * Size:	000008
 */
s32 JStage::TActor::JSGGetTextureAnimation() const { return -0x1; }

/*
 * --INFO--
 * Address:	80098A50
 * Size:	000004
 */
void JStage::TActor::JSGSetTextureAnimation(unsigned long) { }

/*
 * --INFO--
 * Address:	80098A54
 * Size:	000008
 */
void JStage::TActor::JSGGetTextureAnimationFrame() const
{
	/*
	lfs      f1, lbl_80516C80@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098A5C
 * Size:	000004
 */
void JStage::TActor::JSGSetTextureAnimationFrame(float) { }

/*
 * --INFO--
 * Address:	80098A60
 * Size:	000008
 */
void JStage::TActor::JSGGetTextureAnimationFrameMax() const
{
	/*
	lfs      f1, lbl_80516C80@sda21(r2)
	blr
	*/
}
