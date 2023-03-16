#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "SysShape/Model.h"
#include "types.h"

namespace Game {

NaviMgr* naviMgr;
SysShape::AnimMgr* NaviMgr::animMgr;

/*
 * --INFO--
 * Address:	8015928C
 * Size:	0000CC
 */
NaviMgr::NaviMgr()
    : _5C(0)
{
	mName      = "naviMgr";
	mNaviParms = new NaviParms;
	clearDeadCount();
	_48 = 0;
	_4C = nullptr;
}

/*
 * --INFO--
 * Address:	8015A7C0
 * Size:	000110
 */
NaviMgr::~NaviMgr()
{
	animMgr = nullptr;
	naviMgr = nullptr;
	// delete _48;
	delete _4C;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8015A8B4
	lis      r3, __vt__Q24Game7NaviMgr@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game7NaviMgr@l
	stw      r3, 0(r30)
	addi     r4, r3, 0x2c
	addi     r3, r3, 0x8c
	stw      r4, 0x1c(r30)
	stw      r3, 0x30(r30)
	stw      r0, animMgr__Q24Game7NaviMgr@sda21(r13)
	stw      r0, naviMgr__4Game@sda21(r13)
	lwz      r3, 0x48(r30)
	cmplwi   r3, 0
	beq      lbl_8015A820
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x48(r30)

lbl_8015A820:
	lwz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_8015A838
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x4c(r30)

lbl_8015A838:
	addi     r3, r30, 0x30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	cmplwi   r30, 0
	beq      lbl_8015A8A4
	lis      r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015A8A4
	lis      r3, "__vt__23ObjectMgr<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__23ObjectMgr<Q24Game4Navi>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015A8A4
	lis      r3, "__vt__23Container<Q24Game4Navi>"@ha
	addi     r0, r3, "__vt__23Container<Q24Game4Navi>"@l
	stw      r0, 0(r30)
	beq      lbl_8015A8A4
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8015A8A4:
	extsh.   r0, r31
	ble      lbl_8015A8B4
	mr       r3, r30
	bl       __dl__FPv

lbl_8015A8B4:
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
 * Size:	000020
 */
unknown NaviMgr::init()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015A8D0
 * Size:	000078
 */
void NaviMgr::createPSMDirectorUpdator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x10
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8015A914
	bl       PSMGetLifeD__Fv
	mr       r4, r3
	mr       r3, r31
	li       r5, 2
	li       r6, 0
	bl
__ct__Q23PSM15DirectorUpdatorFPQ28PSSystem12DirectorBaseUcQ33PSM15DirectorUpdator4Type
	mr       r31, r3

lbl_8015A914:
	stw      r31, 0x4c(r30)
	li       r4, 0
	lwz      r3, 0x4c(r30)
	bl       directOff__Q23PSM15DirectorUpdatorFUc
	lwz      r3, 0x4c(r30)
	li       r4, 1
	bl       directOff__Q23PSM15DirectorUpdatorFUc
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
 * Address:	8015A948
 * Size:	00005C
 */
void NaviMgr::resetMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "resetMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
	lwz      r3, 0x48(r31)
	cmplwi   r3, 0
	beq      lbl_8015A978
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x48(r31)

lbl_8015A978:
	lwz      r3, 0x4c(r31)
	cmplwi   r3, 0
	beq      lbl_8015A990
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x4c(r31)

lbl_8015A990:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015A9A4
 * Size:	000090
 */
void NaviMgr::killAll()
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
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8015AA08

lbl_8015A9D0:
	lwz      r0, 0x28(r28)
	li       r4, 0
	add      r29, r0, r31
	mr       r3, r29
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lwz      r3,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r3, 0
	beq      lbl_8015AA00
	lwz      r4, 0x26c(r29)
	cmplwi   r4, 0
	beq      lbl_8015AA00
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8015AA00:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015AA08:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015A9D0
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
 * Address:	8015AA34
 * Size:	0000F0
 */
void NaviMgr::setupNavi(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r4, 0x2dc(r4)
	bl       createModel__Q24Game7NaviMgrFi
	stw      r3, 0x174(r31)
	li       r3, 0x14
	lwz      r0, 0xc8(r30)
	stw      r0, 0xc0(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015AA88
	lwz      r4, 0xb8(r30)
	li       r5, 0
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8015AA88:
	stw      r0, 0x290(r31)
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015AAB0
	lwz      r4, 0xc4(r30)
	lis      r5, 8
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8015AAB0:
	stw      r0, 0x294(r31)
	lis      r4, 0x100
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	bl       newDifferedDisplayList__8J3DModelFUl
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
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
 * Address:	8015AB24
 * Size:	0000FC
 */
Navi* NaviMgr::birth()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       "birth__27MonoObjectMgr<Q24Game4Navi>Fv"
	or.      r29, r3, r3
	beq      lbl_8015ABB4
	lwz      r3, 0x20(r31)
	addi     r0, r3, -1
	sth      r0, 0x2dc(r29)
	lwz      r0, 0x26c(r29)
	cmplwi   r0, 0
	bne      lbl_8015AB84
	lis      r3, lbl_8047D630@ha
	lis      r5, lbl_8047D63C@ha
	addi     r3, r3, lbl_8047D630@l
	li       r4, 0x15d
	addi     r5, r5, lbl_8047D63C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015AB84:
	lwz      r3, 0x26c(r29)
	lhz      r4, 0x2dc(r29)
	bl       init__Q23PSM4NaviFUs
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015ABB4
	lhz      r0, 0x2dc(r29)
	cmplwi   r0, 1
	bne      lbl_8015ABB4
	lwz      r3, 0x26c(r29)
	bl       setShacho__Q23PSM4NaviFv

lbl_8015ABB4:
	mr       r30, r31
	li       r28, 0
	b        lbl_8015ABF0

lbl_8015ABC0:
	lwz      r3, 0x54(r30)
	lhz      r0, 0x2dc(r29)
	cmpw     r3, r0
	bne      lbl_8015ABE8
	mr       r3, r29
	li       r4, 0
	lwz      r12, 0(r29)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_8015ABE8:
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_8015ABF0:
	lwz      r0, 0x50(r31)
	cmpw     r28, r0
	blt      lbl_8015ABC0
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	8015AC20
 * Size:	00009C
 */
Navi* NaviMgr::getActiveNavi()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	li       r4, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	bne      lbl_8015AC80
	cmplwi   r3, 0
	bne      lbl_8015AC80
	li       r3, 0
	b        lbl_8015ACA8

lbl_8015AC80:
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_8015AC94
	mr       r3, r31
	b        lbl_8015ACA8

lbl_8015AC94:
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	beq      lbl_8015ACA4
	b        lbl_8015ACA8

lbl_8015ACA4:
	li       r3, 0

lbl_8015ACA8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015ACBC
 * Size:	0000BC
 */
void NaviMgr::loadResources()
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	lis      r4, lbl_8047D648@ha
	li       r5, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r6, 0
	li       r7, 0
	stw      r31, 0x43c(r1)
	li       r8, 2
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	stw      r0, 8(r1)
	addi     r0, r4, lbl_8047D648@l
	li       r4, 0
	mr       r3, r0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_8015AD58
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_8015AD38
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_8015AD38:
	lwz      r3, 0xc8(r30)
	addi     r4, r1, 0x10
	lwz      r12, 0xd8(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       __dla__FPv

lbl_8015AD58:
	mr       r3, r30
	bl       load__Q24Game7NaviMgrFv
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015AD78
 * Size:	000050
 */
void NaviParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0xdc
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0x27c
	bl       read__10ParametersFR6Stream
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
 * Address:	8015ADC8
 * Size:	000264
 */
void NaviMgr::load()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8047D088@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8047D088@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r31, 0x5dc
	li       r4, 1
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	mr       r30, r3
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x5f8
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r5, sys@sda21(r13)
	addi     r3, r31, 0x60c
	li       r4, 1
	li       r6, 1
	lwz      r5, 0x38(r5)
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	mr       r29, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x5f8
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r29
	addi     r4, r31, 0x628
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x20000030@ha
	addi     r4, r4, 0x20000030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	li       r4, 0
	mr       r5, r3
	b        lbl_8015AEA0

lbl_8015AE80:
	lwz      r3, 0x80(r5)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	addi     r4, r4, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8015AEA0:
	lhz      r0, 0x7c(r5)
	clrlwi   r3, r4, 0x10
	cmplw    r3, r0
	blt      lbl_8015AE80
	stw      r5, 0xb0(r28)
	lwz      r0, animMgr__Q24Game7NaviMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8015AED8
	mr       r3, r30
	mr       r6, r29
	addi     r4, r31, 0x640
	addi     r7, r2, lbl_80518748@sda21
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, animMgr__Q24Game7NaviMgr@sda21(r13)

lbl_8015AED8:
	mr       r3, r30
	addi     r4, r31, 0x64c
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0xcc(r28)
	mr       r3, r29
	addi     r4, r31, 0x65c
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0xb8(r28)
	mr       r3, r29
	addi     r4, r31, 0x670
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0xc4(r28)
	lis      r4, 4
	lwz      r3, 0xc4(r28)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0xb8(r28)
	li       r4, 0
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	mr       r3, r29
	addi     r4, r31, 0x684
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x60
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	mr       r3, r29
	addi     r4, r31, 0x69c
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x74
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	mr       r3, r29
	addi     r4, r31, 0x6b4
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x88
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	mr       r3, r29
	addi     r4, r31, 0x6cc
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x9c
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
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
 * Address:	8015B02C
 * Size:	000064
 */
SysShape::Model* NaviMgr::createModel(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015B074
	slwi     r0, r31, 2
	li       r5, 0
	add      r4, r30, r0
	li       r6, 2
	lwz      r4, 0xb0(r4)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8015B074:
	mr       r3, r0
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
 * Address:	8015B090
 * Size:	0000D4
 */
void NaviMgr::loadResources_float()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8047D088@ha
	li       r6, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	addi     r30, r5, lbl_8047D088@l
	addi     r3, r30, 0x60c
	lwz      r4, sys@sda21(r13)
	lwz      r5, 0x38(r4)
	li       r4, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015B0F0
	lwz      r12, 0(r3)
	addi     r4, r30, 0x6e4
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_8015B104

lbl_8015B0F0:
	lwz      r12, 0(r3)
	addi     r4, r30, 0x6fc
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8015B104:
	lis      r4, 0x20000030@ha
	addi     r4, r4, 0x20000030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	li       r5, 0
	b        lbl_8015B138

lbl_8015B118:
	lwz      r4, 0x80(r3)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r4, r4, r0
	lwz      r0, 0xc(r4)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r4)

lbl_8015B138:
	lhz      r0, 0x7c(r3)
	clrlwi   r4, r5, 0x10
	cmplw    r4, r0
	blt      lbl_8015B118
	stw      r3, 0xb4(r31)
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
 * Address:	8015B164
 * Size:	00008C
 */
int NaviMgr::getAliveCount()
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
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8015B1C0

lbl_8015B194:
	lwz      r0, 0x28(r28)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B1B8
	addi     r30, r30, 1

lbl_8015B1B8:
	addi     r31, r31, 0x320
	addi     r29, r29, 1

lbl_8015B1C0:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_8015B194
	lwz      r0, 0x24(r1)
	mr       r3, r30
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
 * Address:	........
 * Size:	000090
 */
Navi* NaviMgr::getSurviveNavi()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015B1F0
 * Size:	000018
 */
void NaviMgr::clearDeadCount()
{
	/*
	li       r4, 0
	li       r0, -1
	stw      r4, 0x50(r3)
	stw      r0, 0x54(r3)
	stw      r0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B208
 * Size:	000078
 */
void NaviMgr::informOrimaDead(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	lwz      r6, 0x50(r3)
	mtctr    r6
	cmpwi    r6, 0
	ble      lbl_8015B23C

lbl_8015B228:
	lwz      r0, 0x54(r5)
	cmpw     r0, r4
	beq      lbl_8015B270
	addi     r5, r5, 4
	bdnz     lbl_8015B228

lbl_8015B23C:
	slwi     r0, r6, 2
	add      r5, r3, r0
	stw      r4, 0x54(r5)
	lwz      r5, 0x50(r3)
	addi     r0, r5, 1
	stw      r0, 0x50(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8015B270
	bl       releasePikis__Q24Game4NaviFv

lbl_8015B270:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B280
 * Size:	00004C
 */
Navi* NaviMgr::getDeadOrima(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x50(r3)
	cmpw     r0, r4
	ble      lbl_8015B2B8
	lwz      r12, 0(r3)
	slwi     r0, r4, 2
	add      r4, r3, r0
	lwz      r12, 0x24(r12)
	lwz      r4, 0x54(r4)
	mtctr    r12
	bctrl
	b        lbl_8015B2BC

lbl_8015B2B8:
	li       r3, 0

lbl_8015B2BC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B2CC
 * Size:	0000EC
 */
Navi* NaviMgr::getAliveOrima(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r0, 0x50(r3)
	cmpwi    r0, 2
	bne      lbl_8015B2FC
	li       r3, 0
	b        lbl_8015B3A0

lbl_8015B2FC:
	cmpwi    r0, 1
	bne      lbl_8015B330
	lwz      r0, 0x54(r31)
	cmpwi    r30, 0
	subfic   r4, r0, 1
	bne      lbl_8015B328
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8015B3A0

lbl_8015B328:
	li       r3, 0
	b        lbl_8015B3A0

lbl_8015B330:
	cmpwi    r0, 0
	bne      lbl_8015B39C
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	li       r4, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_8015B380
	mr       r0, r31
	b        lbl_8015B388

lbl_8015B380:
	mr       r0, r3
	mr       r3, r31

lbl_8015B388:
	cmpwi    r30, 0
	bne      lbl_8015B3A0
	mr       r3, r0
	b        lbl_8015B3A0
	b        lbl_8015B3A0

lbl_8015B39C:
	li       r3, 0

lbl_8015B3A0:
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
 * Address:	8015B3B8
 * Size:	0000A8
 */
void NaviMgr::setMovieDraw(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_8015B3F4
	lbz      r0, 0x5c(r28)
	ori      r0, r0, 1
	stb      r0, 0x5c(r28)
	b        lbl_8015B400

lbl_8015B3F4:
	lbz      r0, 0x5c(r28)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x5c(r28)

lbl_8015B400:
	li       r30, 0
	li       r31, 0
	b        lbl_8015B434

lbl_8015B40C:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015B42C
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	bl       set_movie_draw__Q24Game4NaviFb

lbl_8015B42C:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015B434:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015B40C
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
 * Address:	8015B460
 * Size:	0000E0
 */
void NaviMgr::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x5c(r3)
	clrlwi   r31, r0, 0x1f
	b        lbl_8015B514

lbl_8015B494:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015B50C
	cmplwi   r31, 0
	beq      lbl_8015B4CC
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B50C

lbl_8015B4CC:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x244(r3)
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x1cc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015B50C:
	addi     r30, r30, 0x320
	addi     r29, r29, 1

lbl_8015B514:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_8015B494
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
 * Address:	8015B540
 * Size:	000168
 */
void NaviMgr::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r29, 0
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_8015B56C
	li       r29, 1

lbl_8015B56C:
	lbz      r0, 0x5c(r27)
	li       r28, 0
	li       r30, 0
	clrlwi   r31, r0, 0x1f
	b        lbl_8015B688

lbl_8015B580:
	lwz      r3, 0x2c(r27)
	lbzx     r0, r3, r28
	cmplwi   r0, 0
	bne      lbl_8015B680
	cmplwi   r31, 0
	beq      lbl_8015B5D4
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015B5D4
	lwz      r5, 0x28(r27)
	addi     r4, r30, 0xd8
	li       r0, -53
	lbzx     r3, r5, r4
	and      r0, r3, r0
	stbx     r0, r5, r4
	b        lbl_8015B608

lbl_8015B5D4:
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B608
	lwz      r4, 0x28(r27)
	addi     r3, r30, 0xd8
	lbzx     r0, r4, r3
	ori      r0, r0, 0x34
	stbx     r0, r4, r3

lbl_8015B608:
	clrlwi.  r0, r29, 0x18
	beq      lbl_8015B668
	lwz      r0, 0x28(r27)
	add      r5, r0, r30
	lhz      r4, 0x2dc(r5)
	cmpwi    r4, 1
	bne      lbl_8015B644
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x38(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015B644
	lbz      r0, 0xd8(r5)
	rlwinm   r0, r0, 0, 0x1c, 0x1a
	stb      r0, 0xd8(r5)
	b        lbl_8015B668

lbl_8015B644:
	cmpwi    r4, 0
	bne      lbl_8015B668
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x38(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8015B668
	lbz      r0, 0xd8(r5)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0xd8(r5)

lbl_8015B668:
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015B680:
	addi     r30, r30, 0x320
	addi     r28, r28, 1

lbl_8015B688:
	lwz      r0, 0x24(r27)
	cmpw     r28, r0
	blt      lbl_8015B580
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B6A8
 * Size:	000378
 */
void NaviMgr::doSimulation(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	bl       "doSimulation__27MonoObjectMgr<Q24Game4Navi>Ff"
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_8015B6E4
	cmpwi    r0, 3
	bne      lbl_8015B6E8

lbl_8015B6E4:
	li       r3, 1

lbl_8015B6E8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015B6FC
	lwz      r0, 0x4c(r31)
	cmplwi   r0, 0
	beq      lbl_8015B91C

lbl_8015B6FC:
	li       r0, 0
	lis      r3, "__vt__22Iterator<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__22Iterator<Q24Game4Navi>"@l
	stw      r0, 0x14(r1)
	cmplwi   r0, 0
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	stw      r31, 0x10(r1)
	bne      lbl_8015B73C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B8F0

lbl_8015B73C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B7AC

lbl_8015B758:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015B8F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015B7AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B758
	b        lbl_8015B8F0

lbl_8015B7CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B824
	lfs      f1, 0x2a0(r30)
	lfs      f0, lbl_80518674@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8015B824
	lhz      r0, 0x2dc(r30)
	lwz      r3, 0x4c(r31)
	clrlwi   r4, r0, 0x18
	bl       directOn__Q23PSM15DirectorUpdatorFUc
	b        lbl_8015B834

lbl_8015B824:
	lhz      r0, 0x2dc(r30)
	lwz      r3, 0x4c(r31)
	clrlwi   r4, r0, 0x18
	bl       directOff__Q23PSM15DirectorUpdatorFUc

lbl_8015B834:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015B860
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B8F0

lbl_8015B860:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B8D4

lbl_8015B880:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015B8F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015B8D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B880

lbl_8015B8F0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015B7CC
	lwz      r3, 0x4c(r31)
	bl       frameEndWork__Q23PSM15DirectorUpdatorFv
	b        lbl_8015BA04

lbl_8015B91C:
	bl       PSMGetLifeD__Fv
	or.      r29, r3, r3
	beq      lbl_8015BA04
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	mr       r30, r3
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 0
	bne      lbl_8015B978
	cmplwi   r3, 0
	bne      lbl_8015B978
	li       r30, 0
	b        lbl_8015B9A0

lbl_8015B978:
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0
	beq      lbl_8015B988
	b        lbl_8015B9A0

lbl_8015B988:
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	beq      lbl_8015B99C
	mr       r30, r3
	b        lbl_8015B9A0

lbl_8015B99C:
	li       r30, 0

lbl_8015B9A0:
	cmplwi   r30, 0
	beq      lbl_8015B9F0
	mr       r3, r30
	bl       getLifeRatio__Q24Game4NaviFv
	lfs      f0, lbl_80518674@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8015B9D8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8015BA04

lbl_8015B9D8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_8015BA04

lbl_8015B9F0:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8015BA04:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
unknown NaviMgr::draw2d(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015BA20
 * Size:	000004
 */
void NaviMgr::setupSoundViewerAndBas() { }

/*
 * --INFO--
 * Address:	8015BA24
 * Size:	000008
 */
char* NaviMgr::getMgrName()
{
	/*
	addi     r3, r2, lbl_80518750@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BA2C
 * Size:	000008
 */
bool NaviMgr::frozenable() { return false; }

/*
 * --INFO--
 * Address:	8015BB2C
 * Size:	000044
 */
void FakePikiParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0xdc
	bl       read__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8015BB70
 * Size:	000060
 */
Game::Navi* MonoObjectMgr<Game::Navi>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__27MonoObjectMgr<Q24Game4Navi>Fv"
	cmpwi    r3, -1
	beq      lbl_8015BBB8
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x320
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_8015BBBC

lbl_8015BBB8:
	li       r3, 0

lbl_8015BBBC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BBD0
 * Size:	000040
 */
void* MonoObjectMgr<Game::Navi>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_8015BC08

lbl_8015BBE8:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_8015BC00
	mr       r3, r6
	blr

lbl_8015BC00:
	addi     r6, r6, 1
	bdnz     lbl_8015BBE8

lbl_8015BC08:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC10
 * Size:	000030
 */
void* MonoObjectMgr<Game::Navi>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	8015BC40
 * Size:	000008
 */
void* MonoObjectMgr<Game::Navi>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC48
 * Size:	000008
 */
int MonoObjectMgr<Game::Navi>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC50
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doAnimation()
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
	mr       r29, r3
	b        lbl_8015BCA8

lbl_8015BC78:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BCA0
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015BCA0:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BCA8:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BC78
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BCD0
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doEntry()
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
	mr       r29, r3
	b        lbl_8015BD28

lbl_8015BCF8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BD20
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015BD20:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BD28:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BCF8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BD50
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doSetView(int)
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
	b        lbl_8015BDB4

lbl_8015BD80:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BDAC
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_8015BDAC:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BDB4:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015BD80
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
 * Address:	8015BDE0
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doViewCalc()
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
	mr       r29, r3
	b        lbl_8015BE38

lbl_8015BE08:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BE30
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl

lbl_8015BE30:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BE38:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BE08
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BE60
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	li       r30, 0
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_8015BEC4

lbl_8015BE90:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BEBC
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_8015BEBC:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BEC4:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BE90
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BEF0
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doDirectDraw(Graphics&)
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
	b        lbl_8015BF54

lbl_8015BF20:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BF4C
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_8015BF4C:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BF54:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015BF20
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
 * Address:	8015BF80
 * Size:	000018
 */
void MonoObjectMgr<Game::Navi>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BF98
 * Size:	000030
 */
void MonoObjectMgr<Game::Navi>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_8015BFB8

lbl_8015BFAC:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_8015BFB8:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_8015BFAC
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BFC8
 * Size:	00003C
 */
int MonoObjectMgr<Game::Navi>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8015BFFC

lbl_8015BFDC:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_8015BFF4
	mr       r3, r5
	blr

lbl_8015BFF4:
	addi     r5, r5, 1
	bdnz     lbl_8015BFDC

lbl_8015BFFC:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C004
 * Size:	000010
 */
Game::Navi* MonoObjectMgr<Game::Navi>::get(void*)
{
	/*
	mulli    r0, r4, 0x320
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C014
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C05C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C1C8

lbl_8015C05C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C0C8

lbl_8015C074:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C1C8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C0C8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C074
	b        lbl_8015C1C8

lbl_8015C0E8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C138
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C1C8

lbl_8015C138:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C1AC

lbl_8015C158:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C1C8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C1AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C158

lbl_8015C1C8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C0E8
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C1F8
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C240
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C3AC

lbl_8015C240:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C2AC

lbl_8015C258:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C3AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C2AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C258
	b        lbl_8015C3AC

lbl_8015C2CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C31C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C3AC

lbl_8015C31C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C390

lbl_8015C33C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C3AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C390:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C33C

lbl_8015C3AC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C2CC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C3DC
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C42C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C59C

lbl_8015C42C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C498

lbl_8015C444:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C59C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C498:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C444
	b        lbl_8015C59C

lbl_8015C4B8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C50C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C59C

lbl_8015C50C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C580

lbl_8015C52C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C59C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C580:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C52C

lbl_8015C59C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C4B8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C5D0
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C618
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C784

lbl_8015C618:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C684

lbl_8015C630:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C784
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C684:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C630
	b        lbl_8015C784

lbl_8015C6A4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C6F4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C784

lbl_8015C6F4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C768

lbl_8015C714:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C784
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C768:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C714

lbl_8015C784:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C6A4
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C7B4
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C804
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C974

lbl_8015C804:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C870

lbl_8015C81C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C974
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C870:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C81C
	b        lbl_8015C974

lbl_8015C890:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C8E4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C974

lbl_8015C8E4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C958

lbl_8015C904:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015C974
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C958:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C904

lbl_8015C974:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C890
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C9A8
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C9F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CB68

lbl_8015C9F8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CA64

lbl_8015CA10:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015CB68
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015CA64:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015CA10
	b        lbl_8015CB68

lbl_8015CA84:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015CAD8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CB68

lbl_8015CAD8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CB4C

lbl_8015CAF8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015CB68
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015CB4C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015CAF8

lbl_8015CB68:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015CA84
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015CB9C
 * Size:	00002C
 */
void* Container<Game::Navi>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
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
 * Address:	8015CBC8
 * Size:	000008
 */
Game::Navi* Container<Game::Navi>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8015CBD0
 * Size:	000008
 */
int Container<Game::Navi>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	8015CBD8
 * Size:	00009C
 */
MonoObjectMgr<Game::Navi>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__23Container<Q24Game4Navi>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__23Container<Q24Game4Navi>"@l
	lis      r4, "__vt__23ObjectMgr<Q24Game4Navi>"@ha
	lis      r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__23ObjectMgr<Q24Game4Navi>"@l
	addi     r5, r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
