#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26JStage7TSystem
    __vt__Q26JStage7TSystem:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte JSGFGetType__Q26JStage7TSystemCFv
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
        .4byte
   JSGFindObject__Q26JStage7TSystemCFPPQ26JStage7TObjectPCcQ26JStage8TEObject
        .4byte JSGCreateObject__Q26JStage7TSystemFPCcQ26JStage8TEObjectUl
        .4byte JSGDestroyObject__Q26JStage7TSystemFPQ26JStage7TObject
        .4byte JSGGetSystemData__Q26JStage7TSystemFUl
        .4byte JSGSetSystemData__Q26JStage7TSystemFUlUl
*/

/*
 * --INFO--
 * Address:	8009876C
 * Size:	000060
 */
JStage::TSystem::~TSystem(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800987B0
	lis      r5, __vt__Q26JStage7TSystem@ha
	li       r4, 0
	addi     r0, r5, __vt__Q26JStage7TSystem@l
	stw      r0, 0(r30)
	bl       __dt__Q26JStage7TObjectFv
	extsh.   r0, r31
	ble      lbl_800987B0
	mr       r3, r30
	bl       __dl__FPv

lbl_800987B0:
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
 * Address:	800987CC
 * Size:	000008
 */
u32 JStage::TSystem::JSGFGetType() const { return 0x1; }

/*
 * --INFO--
 * Address:	800987D4
 * Size:	000008
 */
u32 JStage::TSystem::JSGFindObject(const(JStage::TObject**, char const*,
                                         JStage::TEObject))
{
	return 0x1;
}

/*
 * --INFO--
 * Address:	800987DC
 * Size:	000008
 */
u32 JStage::TSystem::JSGCreateObject(char const*, JStage::TEObject,
                                     unsigned long)
{
	return 0x0;
}

/*
 * --INFO--
 * Address:	800987E4
 * Size:	000004
 */
void JStage::TSystem::JSGDestroyObject(JStage::TObject*) { }

/*
 * --INFO--
 * Address:	800987E8
 * Size:	000008
 */
u32 JStage::TSystem::JSGGetSystemData(unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	800987F0
 * Size:	000004
 */
void JStage::TSystem::JSGSetSystemData(unsigned long, unsigned long) { }
