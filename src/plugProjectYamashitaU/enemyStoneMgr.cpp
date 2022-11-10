#include "types.h"
#include "Game/EnemyStone.h"
#include "JSystem/J3D/J3DSys.h"
#include "System.h"

namespace Game {
namespace EnemyStone {

/*
 * --INFO--
 * Address:	80127C00
 * Size:	000088
 */
Mgr::Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	addi     r3, r31, 8
	stb      r0, 4(r31)
	stb      r0, 5(r31)
	stb      r0, 6(r31)
	stb      r0, 7(r31)
	bl       __ct__5CNodeFv
	addi     r3, r31, 0x20
	bl       __ct__5CNodeFv
	li       r0, 0
	mr       r3, r31
	stb      r0, 4(r31)
	stb      r0, 5(r31)
	stb      r0, 6(r31)
	stb      r0, 7(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x14(r31)
	stw      r0, 0x10(r31)
	stw      r0, 0xc(r31)
	stw      r0, 0x30(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x28(r31)
	stw      r0, 0x24(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127C88
 * Size:	000174
 */
void Mgr::loadResource()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_8047BE58@ha
	li       r5, 0
	stw      r0, 0x64(r1)
	stmw     r25, 0x44(r1)
	mr       r31, r3
	addi     r29, r4, lbl_8047BE58@l
	addi     r4, r29, 0x28
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r3, sys@sda21(r13)
	addi     r4, r29, 0x48
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 8
	bl       __nwa__FUl
	stw      r3, 0(r31)
	addi     r3, r1, 8
	addi     r4, r29, 0x64
	bl       __ct__Q212LoadResource11ArgAramOnlyFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 8
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	lis      r4, j3dDefaultMtx@ha
	lwz      r28, 0x34(r3)
	addi     r30, r4, j3dDefaultMtx@l
	li       r25, 0
	addi     r27, r13, "sStoneMdlName__27@unnamed@enemyStoneMgr_cpp@"@sda21
	li       r26, 0

lbl_80127D00:
	mr       r3, r28
	lwz      r4, 0(r27)
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r5, 0(r31)
	lis      r4, 4
	stwx     r3, r5, r26
	lwz      r3, 0(r31)
	lwzx     r3, r3, r26
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0(r31)
	mr       r5, r30
	li       r4, 0
	lwzx     r3, r3, r26
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	lwz      r3, 0(r31)
	lwzx     r3, r3, r26
	bl       makeSharedDL__12J3DModelDataFv
	addi     r25, r25, 1
	addi     r26, r26, 4
	cmpwi    r25, 2
	addi     r27, r27, 4
	blt      lbl_80127D00
	lwz      r3, sys@sda21(r13)
	addi     r4, r29, 0x48
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r29, 0x84
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x4810
	bl       __nwa__FUl
	lis      r4, __defctor__Q34Game10EnemyStone8DrawInfoFv@ha
	lis      r5, __dt__Q34Game10EnemyStone8DrawInfoFv@ha
	addi     r4, r4, __defctor__Q34Game10EnemyStone8DrawInfoFv@l
	li       r6, 0x48
	addi     r5, r5, __dt__Q34Game10EnemyStone8DrawInfoFv@l
	li       r7, 0x100
	bl       __construct_new_array
	li       r25, 0
	mr       r26, r3

lbl_80127DB4:
	mr       r4, r26
	addi     r3, r31, 8
	bl       add__5CNodeFP5CNode
	addi     r25, r25, 1
	addi     r26, r26, 0x48
	cmplwi   r25, 0x100
	blt      lbl_80127DB4
	lwz      r3, sys@sda21(r13)
	addi     r4, r29, 0x84
	bl       heapStatusEnd__6SystemFPc
	lwz      r3, sys@sda21(r13)
	addi     r4, r29, 0x28
	bl       heapStatusEnd__6SystemFPc
	lmw      r25, 0x44(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127DFC
 * Size:	000024
 */
// void DrawInfo::__defctor()
//{
/*
stwu     r1, -0x10(r1)
mflr     r0
li       r4, 1
stw      r0, 0x14(r1)
bl       __ct__Q34Game10EnemyStone8DrawInfoFb
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
//}

/*
 * --INFO--
 * Address:	80127E20
 * Size:	0000F8
 */
bool Mgr::regist(Obj* stone)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r31, r4
	mr       r30, r3
	li       r26, 1
	lbz      r0, 0x50(r4)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80127F00
	addi     r3, r30, 8
	lwz      r4, 0x18(r31)
	lwz      r12, 8(r30)
	lbz      r29, 0(r4)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	bgt      lbl_80127EFC
	lbz      r0, 0x50(r31)
	li       r25, 0
	li       r27, 0
	ori      r0, r0, 1
	stb      r0, 0x50(r31)
	b        lbl_80127EDC

lbl_80127E84:
	lwz      r29, 0x18(r30)
	lwz      r0, 4(r3)
	cmplwi   r29, 0
	add      r28, r0, r27
	beq      lbl_80127EA0
	mr       r3, r29
	bl       del__5CNodeFv

lbl_80127EA0:
	lwz      r3, 0x4c(r31)
	lwz      r4, 0(r28)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	stw      r3, 0x44(r29)
	mr       r4, r29
	stw      r28, 0x40(r29)
	lwz      r0, 4(r28)
	mulli    r3, r0, 0x18
	addi     r3, r3, 0x1c
	add      r3, r31, r3
	bl       add__5CNodeFP5CNode
	addi     r27, r27, 0x38
	addi     r25, r25, 1

lbl_80127EDC:
	lwz      r3, 0x18(r31)
	lbz      r0, 0(r3)
	cmpw     r25, r0
	blt      lbl_80127E84
	mr       r4, r31
	addi     r3, r30, 0x20
	bl       add__5CNodeFP5CNode
	b        lbl_80127F00

lbl_80127EFC:
	li       r26, 0

lbl_80127F00:
	mr       r3, r26
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127F18
 * Size:	00008C
 */
void Mgr::release(Obj* stone)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	lbz      r3, 0x50(r4)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80127F90
	rlwinm   r0, r3, 0, 0x18, 0x1e
	mr       r31, r27
	stb      r0, 0x50(r27)
	li       r30, 0

lbl_80127F4C:
	lwz      r29, 0x2c(r31)
	b        lbl_80127F70

lbl_80127F54:
	lwz      r28, 4(r29)
	mr       r3, r29
	bl       reset__Q34Game10EnemyStone8DrawInfoFv
	mr       r4, r29
	addi     r3, r26, 8
	bl       add__5CNodeFP5CNode
	mr       r29, r28

lbl_80127F70:
	cmplwi   r29, 0
	bne      lbl_80127F54
	addi     r30, r30, 1
	addi     r31, r31, 0x18
	cmpwi    r30, 2
	blt      lbl_80127F4C
	mr       r3, r27
	bl       del__5CNodeFv

lbl_80127F90:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80127FA4
 * Size:	000164
 */
void Mgr::draw(Viewport* viewport)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	lis      r5, j3dSys@ha
	stw      r0, 0xf4(r1)
	stmw     r23, 0xcc(r1)
	li       r30, 0
	mr       r25, r3
	mr       r26, r4
	mr       r29, r30
	addi     r31, r5, j3dSys@l
	li       r28, 0

lbl_80127FD0:
	lwz      r27, 0x30(r25)
	cmplwi   r27, 0
	beq      lbl_801280E0
	b        lbl_801280D8

lbl_80127FE0:
	lwz      r3, 0x4c(r27)
	lbz      r0, 0xd8(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_801280D4
	addi     r0, r30, 0x2c
	lwzx     r24, r27, r0
	b        lbl_801280CC

lbl_80127FFC:
	lwz      r3, 0(r25)
	li       r0, 0
	lwzx     r5, r29, r3
	lwz      r4, 0x28(r5)
	lwz      r3, 0xa0(r5)
	lwz      r4, 0(r4)
	lwz      r23, 0x58(r4)
	stw      r3, 0x10c(r31)
	lwz      r3, 0xa4(r5)
	stw      r3, 0x110(r31)
	lwz      r3, 0xac(r5)
	stw      r3, 0x114(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	b        lbl_801280C0

lbl_80128034:
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r23)
	bl       loadPreDrawSetting__8J3DShapeCFv
	mr       r3, r24
	addi     r4, r1, 0x98
	li       r5, 1
	bl       makeMatrix__Q34Game10EnemyStone8DrawInfoFP7Matrixfb
	mr       r3, r26
	li       r4, 1
	bl       getMatrix__8ViewportFb
	addi     r4, r1, 0x98
	addi     r5, r1, 0x68
	bl       PSMTXConcat
	addi     r3, r1, 0x68
	addi     r4, r1, 0x38
	bl       PSMTXInverse
	addi     r3, r1, 0x38
	addi     r4, r1, 8
	bl       PSMTXTranspose
	addi     r3, r1, 0x68
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadNrmMtxImm
	lwz      r3, 8(r23)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r23, 4(r23)

lbl_801280C0:
	cmplwi   r23, 0
	bne      lbl_80128034
	lwz      r24, 4(r24)

lbl_801280CC:
	cmplwi   r24, 0
	bne      lbl_80127FFC

lbl_801280D4:
	lwz      r27, 4(r27)

lbl_801280D8:
	cmplwi   r27, 0
	bne      lbl_80127FE0

lbl_801280E0:
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 2
	addi     r30, r30, 0x18
	blt      lbl_80127FD0
	lmw      r23, 0xcc(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}
} // namespace EnemyStone
} // namespace Game
