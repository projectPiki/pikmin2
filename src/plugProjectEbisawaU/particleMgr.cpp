#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_particleMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495BC8
    lbl_80495BC8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x70617274
        .4byte 0x69636C65
        .4byte 0x4D677200
    .global lbl_80495BE0
    lbl_80495BE0:
        .4byte 0x50617274
        .4byte 0x69636C65
        .4byte 0x4D677200
    .global lbl_80495BEC
    lbl_80495BEC:
        .4byte 0x70617274
        .4byte 0x69636C65
        .4byte 0x4D67722E
        .4byte 0x63707000
    .global lbl_80495BFC
    lbl_80495BFC:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x65666665
        .4byte 0x63742068
        .4byte 0x65617020
        .4byte 0x6E6F7420
        .4byte 0x616C6C6F
        .4byte 0x63617465
        .4byte 0x6420210A
        .4byte 0x00000000
        .4byte 0x50617274
        .4byte 0x69636C65
        .4byte 0x5265736F
        .4byte 0x75726365
        .4byte 0x20282573
        .4byte 0x29206E6F
        .4byte 0x7420666F
        .4byte 0x756E640A
        .4byte 0x00000000
    .global lbl_80495C4C
    lbl_80495C4C:
        .4byte 0x4950325F
        .4byte 0x64756D6D
        .4byte 0x79000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E7688
    lbl_804E7688:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__11ParticleMgr
    __vt__11ParticleMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__11ParticleMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte update__11ParticleMgrFv
        .4byte doAnimation__11ParticleMgrFv
        .4byte doEntry__11ParticleMgrFv
        .4byte doSetView__11ParticleMgrFi
        .4byte doViewCalc__11ParticleMgrFv
        .4byte draw__11ParticleMgrFP8ViewportUc
    .global __vt__19ModelEffectDataRoot
    __vt__19ModelEffectDataRoot:
        .4byte 0
        .4byte 0
        .4byte __dt__19ModelEffectDataRootFv
        .4byte getChildCount__5CNodeFv
        .4byte loadResources__19ModelEffectDataRootFv
        .4byte getID__19ModelEffectDataRootFv
        .4byte onCreate__19ModelEffectDataRootFP20ModelEffectCreateArg
    .global "__vt__26TObjectNode<11ModelEffect>"
    "__vt__26TObjectNode<11ModelEffect>":
        .4byte 0
        .4byte 0
        .4byte "__dt__26TObjectNode<11ModelEffect>Fv"
        .4byte getChildCount__5CNodeFv
    .global "__vt__28NodeObjectMgr<11ModelEffect>"
    "__vt__28NodeObjectMgr<11ModelEffect>":
        .4byte 0
        .4byte 0
        .4byte "__dt__28NodeObjectMgr<11ModelEffect>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__24Container<11ModelEffect>FPv"
        .4byte "getNext__28NodeObjectMgr<11ModelEffect>FPv"
        .4byte "getStart__28NodeObjectMgr<11ModelEffect>Fv"
        .4byte "getEnd__28NodeObjectMgr<11ModelEffect>Fv"
        .4byte "get__28NodeObjectMgr<11ModelEffect>FPv"
        .4byte "getAt__24Container<11ModelEffect>Fi"
        .4byte "getTo__24Container<11ModelEffect>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__24ObjectMgr<11ModelEffect>Fv"
        .4byte "@28@doEntry__24ObjectMgr<11ModelEffect>Fv"
        .4byte "@28@doSetView__24ObjectMgr<11ModelEffect>Fi"
        .4byte "@28@doViewCalc__24ObjectMgr<11ModelEffect>Fv"
        .4byte "@28@doSimulation__24ObjectMgr<11ModelEffect>Ff"
        .4byte "@28@doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__28NodeObjectMgr<11ModelEffect>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__24ObjectMgr<11ModelEffect>Fv"
        .4byte "doEntry__24ObjectMgr<11ModelEffect>Fv"
        .4byte "doSetView__24ObjectMgr<11ModelEffect>Fi"
        .4byte "doViewCalc__24ObjectMgr<11ModelEffect>Fv"
        .4byte "doSimulation__24ObjectMgr<11ModelEffect>Ff"
        .4byte "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
        .4byte "resetMgr__28NodeObjectMgr<11ModelEffect>Fv"
    .global "__vt__24ObjectMgr<11ModelEffect>"
    "__vt__24ObjectMgr<11ModelEffect>":
        .4byte 0
        .4byte 0
        .4byte "__dt__24ObjectMgr<11ModelEffect>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__24Container<11ModelEffect>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__24Container<11ModelEffect>Fi"
        .4byte "getTo__24Container<11ModelEffect>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__24ObjectMgr<11ModelEffect>Fv"
        .4byte "@28@doEntry__24ObjectMgr<11ModelEffect>Fv"
        .4byte "@28@doSetView__24ObjectMgr<11ModelEffect>Fi"
        .4byte "@28@doViewCalc__24ObjectMgr<11ModelEffect>Fv"
        .4byte "@28@doSimulation__24ObjectMgr<11ModelEffect>Ff"
        .4byte "@28@doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__24ObjectMgr<11ModelEffect>Fv"
        .4byte "doEntry__24ObjectMgr<11ModelEffect>Fv"
        .4byte "doSetView__24ObjectMgr<11ModelEffect>Fi"
        .4byte "doViewCalc__24ObjectMgr<11ModelEffect>Fv"
        .4byte "doSimulation__24ObjectMgr<11ModelEffect>Ff"
        .4byte "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
    .global "__vt__24Container<11ModelEffect>"
    "__vt__24Container<11ModelEffect>":
        .4byte 0
        .4byte 0
        .4byte "__dt__24Container<11ModelEffect>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__24Container<11ModelEffect>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__24Container<11ModelEffect>Fi"
        .4byte "getTo__24Container<11ModelEffect>Fv"
    .global "__vt__23Iterator<11ModelEffect>"
    "__vt__23Iterator<11ModelEffect>":
        .4byte 0
        .4byte 0
        .4byte "first__23Iterator<11ModelEffect>Fv"
        .4byte "next__23Iterator<11ModelEffect>Fv"
        .4byte "isDone__23Iterator<11ModelEffect>Fv"
        .4byte "__ml__23Iterator<11ModelEffect>Fv"

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global mClipRadiusS__11ParticleMgr
    mClipRadiusS__11ParticleMgr:
        .float 10.0
    .global mClipRadiusM__11ParticleMgr
    mClipRadiusM__11ParticleMgr:
        .float 30.0
    .global mClipRadiusL__11ParticleMgr
    mClipRadiusL__11ParticleMgr:
        .float 100.0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516090
    lbl_80516090:
        .skip 0x4
    .global lbl_80516094
    lbl_80516094:
        .skip 0x4
    .global particleMgr
    particleMgr:
        .skip 0x4
    .global disableCulling__11ParticleMgr
    disableCulling__11ParticleMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F6F0
    lbl_8051F6F0:
        .float 0.5
    .global lbl_8051F6F4
    lbl_8051F6F4:
        .4byte 0xBF000000
*/

/*
 * --INFO--
 * Address:	803BAF70
 * Size:	000044
 */
void ParticleMgr::globalInstance()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, particleMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803BAFA4
	li       r3, 0xac
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803BAFA0
	bl       __ct__11ParticleMgrFv
	mr       r0, r3

lbl_803BAFA0:
	stw      r0, particleMgr@sda21(r13)

lbl_803BAFA4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BAFB4
 * Size:	000048
 */
void ParticleMgr::deleteInstance()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, particleMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803BAFEC
	beq      lbl_803BAFE4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803BAFE4:
	li       r0, 0
	stw      r0, particleMgr@sda21(r13)

lbl_803BAFEC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BAFFC
 * Size:	000114
 */
ParticleMgr::ParticleMgr()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	bl       __ct__5CNodeFv
	lis      r3, __vt__11ParticleMgr@ha
	addi     r30, r31, 0x1c
	addi     r0, r3, __vt__11ParticleMgr@l
	stw      r0, 0(r31)
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__24Container<11ModelEffect>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__24Container<11ModelEffect>"@l
	lis      r4, "__vt__24ObjectMgr<11ModelEffect>"@ha
	lis      r3, "__vt__28NodeObjectMgr<11ModelEffect>"@ha
	stw      r0, 0(r30)
	li       r0, 0
	addi     r6, r4, "__vt__24ObjectMgr<11ModelEffect>"@l
	addi     r4, r3, "__vt__28NodeObjectMgr<11ModelEffect>"@l
	stb      r0, 0x18(r30)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	addi     r29, r30, 0x20
	addi     r5, r6, 0x2c
	stw      r0, 0x1c(r30)
	addi     r0, r4, 0x2c
	mr       r3, r29
	stw      r6, 0(r30)
	stw      r5, 0x1c(r30)
	stw      r4, 0(r30)
	stw      r0, 0x1c(r30)
	bl       __ct__5CNodeFv
	lis      r3, "__vt__26TObjectNode<11ModelEffect>"@ha
	addi     r30, r31, 0x60
	addi     r0, r3, "__vt__26TObjectNode<11ModelEffect>"@l
	stw      r0, 0(r29)
	mr       r3, r30
	bl       __ct__5CNodeFv
	lis      r3, __vt__15ModelEffectData@ha
	lis      r4, __vt__19ModelEffectDataRoot@ha
	addi     r0, r3, __vt__15ModelEffectData@l
	lis      r3, lbl_80495BE0@ha
	stw      r0, 0(r30)
	addi     r0, r4, __vt__19ModelEffectDataRoot@l
	addi     r5, r3, lbl_80495BE0@l
	li       r4, 0
	stw      r0, 0(r30)
	li       r0, 0xc8
	mr       r3, r31
	stw      r5, 0x14(r31)
	stw      r4, 0xa0(r31)
	stw      r4, 0x98(r31)
	stw      r4, 0x9c(r31)
	stw      r4, 0x80(r31)
	stw      r0, 0xa8(r31)
	stw      r4, 0x18(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB110
 * Size:	000070
 */
ModelEffectDataRoot::~ModelEffectDataRoot()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803BB164
	lis      r4, __vt__19ModelEffectDataRoot@ha
	addi     r0, r4, __vt__19ModelEffectDataRoot@l
	stw      r0, 0(r30)
	beq      lbl_803BB154
	lis      r5, __vt__15ModelEffectData@ha
	li       r4, 0
	addi     r0, r5, __vt__15ModelEffectData@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_803BB154:
	extsh.   r0, r31
	ble      lbl_803BB164
	mr       r3, r30
	bl       __dl__FPv

lbl_803BB164:
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
 * Address:	803BB180
 * Size:	0000C8
 */
void NodeObjectMgr<ModelEffect>::~NodeObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803BB22C
	lis      r3, "__vt__28NodeObjectMgr<11ModelEffect>"@ha
	addic.   r0, r30, 0x20
	addi     r3, r3, "__vt__28NodeObjectMgr<11ModelEffect>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_803BB1D4
	lis      r4, "__vt__26TObjectNode<11ModelEffect>"@ha
	addi     r3, r30, 0x20
	addi     r0, r4, "__vt__26TObjectNode<11ModelEffect>"@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_803BB1D4:
	cmplwi   r30, 0
	beq      lbl_803BB21C
	lis      r3, "__vt__24ObjectMgr<11ModelEffect>"@ha
	addi     r3, r3, "__vt__24ObjectMgr<11ModelEffect>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_803BB21C
	lis      r3, "__vt__24Container<11ModelEffect>"@ha
	addi     r0, r3, "__vt__24Container<11ModelEffect>"@l
	stw      r0, 0(r30)
	beq      lbl_803BB21C
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_803BB21C:
	extsh.   r0, r31
	ble      lbl_803BB22C
	mr       r3, r30
	bl       __dl__FPv

lbl_803BB22C:
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
 * Address:	803BB248
 * Size:	000060
 */
void TObjectNode<ModelEffect>::~TObjectNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803BB28C
	lis      r5, "__vt__26TObjectNode<11ModelEffect>"@ha
	li       r4, 0
	addi     r0, r5, "__vt__26TObjectNode<11ModelEffect>"@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_803BB28C
	mr       r3, r30
	bl       __dl__FPv

lbl_803BB28C:
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
 * Address:	803BB2A8
 * Size:	000088
 */
void ObjectMgr<ModelEffect>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803BB314
	lis      r4, "__vt__24ObjectMgr<11ModelEffect>"@ha
	addi     r4, r4, "__vt__24ObjectMgr<11ModelEffect>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_803BB304
	lis      r4, "__vt__24Container<11ModelEffect>"@ha
	addi     r0, r4, "__vt__24Container<11ModelEffect>"@l
	stw      r0, 0(r30)
	beq      lbl_803BB304
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_803BB304:
	extsh.   r0, r31
	ble      lbl_803BB314
	mr       r3, r30
	bl       __dl__FPv

lbl_803BB314:
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
 * Address:	803BB330
 * Size:	000070
 */
void Container<ModelEffect>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803BB384
	lis      r4, "__vt__24Container<11ModelEffect>"@ha
	addi     r0, r4, "__vt__24Container<11ModelEffect>"@l
	stw      r0, 0(r30)
	beq      lbl_803BB374
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_803BB374:
	extsh.   r0, r31
	ble      lbl_803BB384
	mr       r3, r30
	bl       __dl__FPv

lbl_803BB384:
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
 * Address:	803BB3A0
 * Size:	00012C
 */
ParticleMgr::~ParticleMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_803BB4B0
	lis      r4, __vt__11ParticleMgr@ha
	li       r3, 0
	addi     r4, r4, __vt__11ParticleMgr@l
	addic.   r0, r30, 0x60
	stw      r4, 0(r30)
	stw      r3, 0x18(r30)
	stw      r3, 0xa0(r30)
	beq      lbl_803BB40C
	lis      r3, __vt__19ModelEffectDataRoot@ha
	addic.   r0, r30, 0x60
	addi     r0, r3, __vt__19ModelEffectDataRoot@l
	stw      r0, 0x60(r30)
	beq      lbl_803BB40C
	lis      r4, __vt__15ModelEffectData@ha
	addi     r3, r30, 0x60
	addi     r0, r4, __vt__15ModelEffectData@l
	li       r4, 0
	stw      r0, 0x60(r30)
	bl       __dt__5CNodeFv

lbl_803BB40C:
	addic.   r0, r30, 0x1c
	beq      lbl_803BB494
	lis      r4, "__vt__28NodeObjectMgr<11ModelEffect>"@ha
	addic.   r3, r30, 0x3c
	addi     r4, r4, "__vt__28NodeObjectMgr<11ModelEffect>"@l
	stw      r4, 0x1c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x38(r30)
	beq      lbl_803BB444
	lis      r4, "__vt__26TObjectNode<11ModelEffect>"@ha
	addi     r0, r4, "__vt__26TObjectNode<11ModelEffect>"@l
	stw      r0, 0x3c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_803BB444:
	addic.   r0, r30, 0x1c
	beq      lbl_803BB494
	lis      r3, "__vt__24ObjectMgr<11ModelEffect>"@ha
	addic.   r0, r30, 0x1c
	addi     r3, r3, "__vt__24ObjectMgr<11ModelEffect>"@l
	stw      r3, 0x1c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x38(r30)
	beq      lbl_803BB494
	lis      r3, "__vt__24Container<11ModelEffect>"@ha
	addic.   r0, r30, 0x1c
	addi     r0, r3, "__vt__24Container<11ModelEffect>"@l
	stw      r0, 0x1c(r30)
	beq      lbl_803BB494
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x1c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x1c(r30)
	bl       __dt__5CNodeFv

lbl_803BB494:
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_803BB4B0
	mr       r3, r30
	bl       __dl__FPv

lbl_803BB4B0:
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
 * Address:	803BB4CC
 * Size:	000070
 */
void ParticleMgr::createHeap(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xa0(r3)
	cmplwi   r0, 0
	beq      lbl_803BB510
	lis      r3, lbl_80495BEC@ha
	lis      r5, lbl_80495BFC@ha
	addi     r3, r3, lbl_80495BEC@l
	li       r4, 0xca
	addi     r5, r5, lbl_80495BFC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803BB510:
	lwz      r4, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r3, r31
	li       r5, 1
	bl       create__12JKRSolidHeapFUlP7JKRHeapb
	stw      r3, 0xa0(r30)
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
 * Address:	803BB53C
 * Size:	00014C
 */
void ParticleMgr::createMgr(char*, unsigned long, unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r31, r3
	lis      r3, lbl_80495BC8@ha
	mr       r25, r4
	mr       r26, r5
	mr       r27, r6
	addi     r30, r3, lbl_80495BC8@l
	lwz      r0, 0xa0(r31)
	cmplwi   r0, 0
	bne      lbl_803BB584
	addi     r3, r30, 0x24
	addi     r5, r30, 0x40
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803BB584:
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xc
	lwz      r5, 0xa0(r31)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r29, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0xa0(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r0, 0
	mr       r3, r25
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 1
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r28, r3, r3
	bne      lbl_803BB5EC
	mr       r6, r25
	addi     r3, r30, 0x24
	addi     r5, r30, 0x60
	li       r4, 0xdf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803BB5EC:
	mr       r3, r29
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r4, 0xa0(r31)
	li       r3, 0x14
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_803BB61C
	lwz      r5, 0xa0(r31)
	mr       r4, r28
	bl       __ct__18JPAResourceManagerFPCvP7JKRHeap
	mr       r0, r3

lbl_803BB61C:
	stw      r0, 0x9c(r31)
	li       r3, 0x30
	li       r5, 0
	lwz      r4, 0xa0(r31)
	bl       __nw__FUlP7JKRHeapi
	or.      r0, r3, r3
	beq      lbl_803BB654
	lwz      r6, 0xa0(r31)
	mr       r4, r26
	mr       r5, r27
	li       r7, 9
	li       r8, 8
	bl       __ct__17JPAEmitterManagerFUlUlP7JKRHeapUcUc
	mr       r0, r3

lbl_803BB654:
	stw      r0, 0x98(r31)
	li       r5, 0
	lwz      r3, 0x98(r31)
	lwz      r4, 0x9c(r31)
	bl       entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0xc
	bl       heapStatusEnd__6SystemFPc
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB688
 * Size:	000020
 */
void ParticleMgr::Instance_TPkEffectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       globalInstance__Q23efx12TPkEffectMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB6A8
 * Size:	000020
 */
void ParticleMgr::deleteInstance_TPkEffectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       deleteInstance__Q23efx12TPkEffectMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void ParticleMgr::destroyHeap()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BB6C8
 * Size:	00002C
 */
void ParticleMgr::beginEntryModelEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0xa4(r3)
	lwz      r3, 0xa0(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB6F4
 * Size:	000024
 */
void ParticleMgr::endEntryModelEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0xa4(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB718
 * Size:	000024
 */
void ParticleMgr::start()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, pkEffectMgr@sda21(r13)
	bl       startMgr__Q23efx12TPkEffectMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB73C
 * Size:	000058
 */
void ParticleMgr::reset()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, pkEffectMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803BB764
	mr       r3, r0
	bl       exitMgr__Q23efx12TPkEffectMgrFv

lbl_803BB764:
	addi     r3, r31, 0x1c
	lwz      r12, 0x1c(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
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
 * Address:	803BB794
 * Size:	000024
 */
void ParticleMgr::killAll()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x98(r3)
	bl       forceDeleteAllEmitter__17JPAEmitterManagerFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB7B8
 * Size:	00002C
 */
void ParticleMgr::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x98(r3)
	bl       calc__17JPAEmitterManagerFv
	lwz      r3, pkEffectMgr@sda21(r13)
	bl       resetContextS__Q23efx12TPkEffectMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB7E4
 * Size:	00002C
 */
void ParticleMgr::setXfb(const ResTIMG*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_80495C4C@ha
	stw      r0, 0x14(r1)
	addi     r5, r5, lbl_80495C4C@l
	lwz      r3, 0x9c(r3)
	bl       swapTexture__18JPAResourceManagerFPC7ResTIMGPCc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB810
 * Size:	0000A4
 */
void ParticleMgr::draw(Viewport*, unsigned char)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	lwz      r6, 0x44(r4)
	mr       r30, r3
	mr       r3, r4
	mr       r31, r5
	lfs      f30, 0x2c(r6)
	li       r4, 1
	lfs      f31, 0x28(r6)
	bl       getMatrix__8ViewportFb
	addi     r4, r1, 8
	bl       PSMTXCopy
	lfs      f3, lbl_8051F6F0@sda21(r2)
	fmr      f1, f31
	fmr      f2, f30
	lfs      f4, lbl_8051F6F4@sda21(r2)
	fmr      f5, f3
	addi     r3, r1, 0x38
	fmr      f6, f3
	bl       C_MTXLightPerspective
	lwz      r3, 0x98(r30)
	mr       r5, r31
	addi     r4, r1, 8
	bl       draw__17JPAEmitterManagerFPC11JPADrawInfoUc
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BB8B4
 * Size:	0000C8
 */
void ParticleMgr::create(unsigned short, Vector3f&, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x9c(r3)
	bl       getResUserWork__18JPAResourceManagerCFUs
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_803BB8F8
	li       r6, 0
	b        lbl_803BB90C

lbl_803BB8F8:
	clrlwi.  r0, r3, 0x1f
	beq      lbl_803BB908
	li       r6, 1
	b        lbl_803BB90C

lbl_803BB908:
	li       r6, 2

lbl_803BB90C:
	clrlwi.  r0, r6, 0x18
	bne      lbl_803BB928
	lwz      r0, 0x94(r28)
	cmpwi    r0, 2
	blt      lbl_803BB928
	li       r3, 0
	b        lbl_803BB95C

lbl_803BB928:
	lwz      r3, 0x98(r28)
	mr       r4, r30
	mr       r5, r29
	mr       r7, r31
	li       r8, 0
	li       r9, 0
	bl
"createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack"
	mr       r0, r3
	mr       r3, r28
	mr       r31, r0
	mr       r4, r31
	bl       setGlobalColor__11ParticleMgrFP14JPABaseEmitter
	mr       r3, r31

lbl_803BB95C:
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
 * Address:	803BB97C
 * Size:	00005C
 */
void ParticleMgr::createDemo(unsigned short, Vector3f&, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r8, 0
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  mr        r4, r5
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r5, r0
	  lwz       r3, 0x98(r3)
	  bl        -0x32B0EC
	  mr        r0, r3
	  mr        r3, r31
	  mr        r31, r0
	  mr        r4, r31
	  bl        .loc_0x5C
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x5C:
	*/
}

/*
 * --INFO--
 * Address:	803BB9D8
 * Size:	0000A8
 */
void ParticleMgr::setGlobalColor(JPABaseEmitter*)
{
	/*
	cmplwi   r4, 0
	beqlr
	lwz      r5, 0xe8(r4)
	lwz      r7, 0x18(r3)
	lwz      r3, 0x2c(r5)
	cmplwi   r7, 0
	lwz      r3, 0(r3)
	lwz      r0, 0xc(r3)
	beqlr
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beqlr
	lwz      r5, 0x50(r7)
	lbz      r0, 0x30(r7)
	lbz      r3, 0x34(r5)
	lbz      r6, 0x31(r7)
	add      r0, r3, r0
	lbz      r3, 0x32(r7)
	slwi     r7, r0, 1
	lbz      r0, 0x35(r5)
	cmpwi    r7, 0xff
	lbz      r5, 0x36(r5)
	ble      lbl_803BBA34
	li       r7, 0xff

lbl_803BBA34:
	add      r0, r0, r6
	clrlwi   r6, r7, 0x18
	slwi     r7, r0, 1
	cmpwi    r7, 0xff
	ble      lbl_803BBA4C
	li       r7, 0xff

lbl_803BBA4C:
	add      r0, r5, r3
	clrlwi   r3, r7, 0x18
	slwi     r0, r0, 1
	cmpwi    r0, 0xff
	ble      lbl_803BBA64
	li       r0, 0xff

lbl_803BBA64:
	stb      r6, 0xb8(r4)
	stb      r3, 0xb9(r4)
	stb      r0, 0xba(r4)
	stb      r6, 0xbc(r4)
	stb      r3, 0xbd(r4)
	stb      r0, 0xbe(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBA80
 * Size:	00002C
 */
void ParticleMgr::forceKill(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	beq      lbl_803BBA9C
	lwz      r3, 0x98(r3)
	bl       forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter

lbl_803BBA9C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBAAC
 * Size:	00002C
 */
void ParticleMgr::fade(JPABaseEmitter*)
{
	/*
	cmplwi   r4, 0
	beqlr
	lwz      r3, 0xf4(r4)
	li       r0, 1
	ori      r3, r3, 1
	stw      r3, 0xf4(r4)
	stw      r0, 0x24(r4)
	lwz      r0, 0xf4(r4)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0xf4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBAD8
 * Size:	000028
 */
void ParticleMgr::setDemoResourceManager(JPAResourceManager*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 7
	stw      r0, 0x14(r1)
	lwz      r3, 0x98(r3)
	bl       entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBB00
 * Size:	000028
 */
void ParticleMgr::clearDemoResourceManager()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 7
	stw      r0, 0x14(r1)
	lwz      r3, 0x98(r3)
	bl       clearResourceManager__17JPAEmitterManagerFUc
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBB28
 * Size:	0000A8
 */
void ParticleMgr::setViewport(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	lwz      r31, 0x264(r4)
	cmpwi    r31, 0
	blt      lbl_803BBB5C
	cmpwi    r31, 4
	bge      lbl_803BBB5C
	li       r0, 1

lbl_803BBB5C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_803BBB80
	lis      r3, lbl_80495BEC@ha
	lis      r5, lbl_80495BFC@ha
	addi     r3, r3, lbl_80495BEC@l
	li       r4, 0x1f8
	addi     r5, r5, lbl_80495BFC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803BBB80:
	stw      r31, 0x80(r27)
	mr       r30, r27
	li       r29, 0
	b        lbl_803BBBA8

lbl_803BBB90:
	mr       r3, r28
	mr       r4, r29
	bl       getViewport__8GraphicsFi
	stw      r3, 0x84(r30)
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_803BBBA8:
	cmpw     r29, r31
	blt      lbl_803BBB90
	mr       r3, r28
	bl       getNumActiveViewports__8GraphicsFv
	stw      r3, 0x94(r27)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void ParticleMgr::cull(Sys::Sphere&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BBBD0
 * Size:	000114
 */
void ParticleMgr::cullByResFlg(Vector3f&, unsigned short)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	mr       r28, r4
	lbz      r0, disableCulling__11ParticleMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803BBBFC
	li       r3, 0
	b        lbl_803BBCD0

lbl_803BBBFC:
	lwz      r3, 0x9c(r27)
	mr       r4, r5
	bl       getResUserWork__18JPAResourceManagerCFUs
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_803BBC28
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_803BBC20
	lfs      f1, mClipRadiusL__11ParticleMgr@sda21(r13)
	b        lbl_803BBC40

lbl_803BBC20:
	lfs      f1, mClipRadiusM__11ParticleMgr@sda21(r13)
	b        lbl_803BBC40

lbl_803BBC28:
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_803BBC38
	lfs      f1, mClipRadiusS__11ParticleMgr@sda21(r13)
	b        lbl_803BBC40

lbl_803BBC38:
	li       r3, 0
	b        lbl_803BBCD0

lbl_803BBC40:
	lfs      f0, 0(r28)
	lbz      r0, disableCulling__11ParticleMgr@sda21(r13)
	stfs     f0, 8(r1)
	cmplwi   r0, 0
	lfs      f0, 4(r28)
	stfs     f0, 0xc(r1)
	lfs      f0, 8(r28)
	stfs     f0, 0x10(r1)
	stfs     f1, 0x14(r1)
	beq      lbl_803BBC70
	li       r3, 0
	b        lbl_803BBCD0

lbl_803BBC70:
	li       r30, 0
	mr       r28, r27
	mr       r31, r30
	b        lbl_803BBCB8

lbl_803BBC80:
	lwz      r3, 0x84(r28)
	lwz      r29, 0x44(r3)
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BBCB0
	mr       r3, r29
	addi     r4, r1, 8
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BBCB0
	li       r30, 1
	b        lbl_803BBCC4

lbl_803BBCB0:
	addi     r28, r28, 4
	addi     r31, r31, 1

lbl_803BBCB8:
	lwz      r0, 0x80(r27)
	cmpw     r31, r0
	blt      lbl_803BBC80

lbl_803BBCC4:
	clrlwi   r0, r30, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_803BBCD0:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBCE4
 * Size:	000178
 */
void ParticleMgr::cullByResFlg(JPABaseEmitter*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r26, 0x28(r1)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, disableCulling__11ParticleMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803BBD10
	li       r3, 0
	b        lbl_803BBE48

lbl_803BBD10:
	lwz      r3, 0xe8(r31)
	lwz      r3, 0x2c(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0xc(r3)
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_803BBD40
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_803BBD38
	lfs      f3, mClipRadiusL__11ParticleMgr@sda21(r13)
	b        lbl_803BBD58

lbl_803BBD38:
	lfs      f3, mClipRadiusM__11ParticleMgr@sda21(r13)
	b        lbl_803BBD58

lbl_803BBD40:
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_803BBD50
	lfs      f3, mClipRadiusS__11ParticleMgr@sda21(r13)
	b        lbl_803BBD58

lbl_803BBD50:
	li       r3, 0
	b        lbl_803BBE48

lbl_803BBD58:
	lbz      r0, disableCulling__11ParticleMgr@sda21(r13)
	lfs      f2, 0xa4(r31)
	lfs      f1, 0xa8(r31)
	cmplwi   r0, 0
	lfs      f0, 0xac(r31)
	stfs     f2, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f3, 0x14(r1)
	beq      lbl_803BBD94
	li       r0, 0
	b        lbl_803BBDF4

lbl_803BBD94:
	li       r28, 0
	mr       r26, r30
	mr       r29, r28
	b        lbl_803BBDDC

lbl_803BBDA4:
	lwz      r3, 0x84(r26)
	lwz      r27, 0x44(r3)
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BBDD4
	mr       r3, r27
	addi     r4, r1, 8
	bl       isVisible__9CullPlaneFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BBDD4
	li       r28, 1
	b        lbl_803BBDE8

lbl_803BBDD4:
	addi     r26, r26, 4
	addi     r29, r29, 1

lbl_803BBDDC:
	lwz      r0, 0x80(r30)
	cmpw     r29, r0
	blt      lbl_803BBDA4

lbl_803BBDE8:
	clrlwi   r0, r28, 0x18
	cntlzw   r0, r0
	srwi     r0, r0, 5

lbl_803BBDF4:
	clrlwi   r0, r0, 0x18
	cntlzw   r3, r0
	rlwinm.  r0, r3, 0x1b, 0x18, 0x1f
	srwi     r3, r3, 5
	beq      lbl_803BBE24
	lwz      r0, 0xf4(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stw      r0, 0xf4(r31)
	lwz      r0, 0xf4(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0xf4(r31)
	b        lbl_803BBE3C

lbl_803BBE24:
	lwz      r0, 0xf4(r31)
	ori      r0, r0, 4
	stw      r0, 0xf4(r31)
	lwz      r0, 0xf4(r31)
	ori      r0, r0, 1
	stw      r0, 0xf4(r31)

lbl_803BBE3C:
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_803BBE48:
	lmw      r26, 0x28(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void ParticleMgr::cullCylinder(Sys::Cylinder&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ParticleMgr::draw2d()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BBE5C
 * Size:	000004
 */
void ModelEffectDataRoot::loadResources() { }

/*
 * --INFO--
 * Address:	803BBE60
 * Size:	000010
 */
void ModelEffectDataRoot::getID()
{
	/*
	lis      r4, 0x524F4F54@ha
	li       r3, 0
	addi     r4, r4, 0x524F4F54@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBE70
 * Size:	000008
 */
u32 ModelEffectDataRoot::onCreate(ModelEffectCreateArg*) { return 0x0; }

/*
 * --INFO--
 * Address:	803BBE78
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::get(void*)
{
	/*
	lwz      r3, 0x18(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBE80
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::getNext(void*)
{
	/*
	lwz      r3, 4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBE88
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::getStart()
{
	/*
	lwz      r3, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBE90
 * Size:	000008
 */
u32 NodeObjectMgr<ModelEffect>::getEnd() { return 0x0; }

/*
 * --INFO--
 * Address:	803BBE98
 * Size:	000018
 */
void NodeObjectMgr<ModelEffect>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x30(r3)
	stw      r0, 0x2c(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BBEB0
 * Size:	00002C
 */
void Container<ModelEffect>::getObject(void*)
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
 * Address:	803BBEDC
 * Size:	000008
 */
u32 Container<ModelEffect>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	803BBEE4
 * Size:	000008
 */
u32 Container<ModelEffect>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	803BBEEC
 * Size:	0001F4
 */
void ObjectMgr<ModelEffect>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__23Iterator<11ModelEffect>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__23Iterator<11ModelEffect>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_803BBF3C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC0AC

lbl_803BBF3C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BBFA8

lbl_803BBF54:
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
	bne      lbl_803BC0AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BBFA8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BBF54
	b        lbl_803BC0AC

lbl_803BBFC8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_803BC01C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC0AC

lbl_803BC01C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC090

lbl_803BC03C:
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
	bne      lbl_803BC0AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC090:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC03C

lbl_803BC0AC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_803BBFC8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BC0E0
 * Size:	00004C
 */
void Iterator<ModelEffect>::isDone()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	subf     r0, r0, r3
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BC12C
 * Size:	0001F4
 */
void ObjectMgr<ModelEffect>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<11ModelEffect>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<11ModelEffect>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_803BC17C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC2EC

lbl_803BC17C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC1E8

lbl_803BC194:
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
	bne      lbl_803BC2EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC1E8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC194
	b        lbl_803BC2EC

lbl_803BC208:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_803BC25C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC2EC

lbl_803BC25C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC2D0

lbl_803BC27C:
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
	bne      lbl_803BC2EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC2D0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC27C

lbl_803BC2EC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_803BC208
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BC320
 * Size:	0001E4
 */
void ObjectMgr<ModelEffect>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<11ModelEffect>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<11ModelEffect>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_803BC368
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC4D4

lbl_803BC368:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC3D4

lbl_803BC380:
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
	bne      lbl_803BC4D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC3D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC380
	b        lbl_803BC4D4

lbl_803BC3F4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_803BC444
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC4D4

lbl_803BC444:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC4B8

lbl_803BC464:
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
	bne      lbl_803BC4D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC4B8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC464

lbl_803BC4D4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_803BC3F4
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BC504
 * Size:	0001F4
 */
void ObjectMgr<ModelEffect>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__23Iterator<11ModelEffect>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__23Iterator<11ModelEffect>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_803BC554
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC6C4

lbl_803BC554:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC5C0

lbl_803BC56C:
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
	bne      lbl_803BC6C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC5C0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC56C
	b        lbl_803BC6C4

lbl_803BC5E0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_803BC634
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC6C4

lbl_803BC634:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC6A8

lbl_803BC654:
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
	bne      lbl_803BC6C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC6A8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC654

lbl_803BC6C4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_803BC5E0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BC6F8
 * Size:	0001E4
 */
void ObjectMgr<ModelEffect>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<11ModelEffect>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<11ModelEffect>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_803BC740
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC8AC

lbl_803BC740:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC7AC

lbl_803BC758:
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
	bne      lbl_803BC8AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC7AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC758
	b        lbl_803BC8AC

lbl_803BC7CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_803BC81C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC8AC

lbl_803BC81C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC890

lbl_803BC83C:
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
	bne      lbl_803BC8AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC890:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC83C

lbl_803BC8AC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_803BC7CC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BC8DC
 * Size:	0001E4
 */
void ObjectMgr<ModelEffect>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<11ModelEffect>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<11ModelEffect>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_803BC924
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BCA90

lbl_803BC924:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BC990

lbl_803BC93C:
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
	bne      lbl_803BCA90
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BC990:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BC93C
	b        lbl_803BCA90

lbl_803BC9B0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_803BCA00
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BCA90

lbl_803BCA00:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_803BCA74

lbl_803BCA20:
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
	bne      lbl_803BCA90
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_803BCA74:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BCA20

lbl_803BCA90:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_803BC9B0
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BCAC0
 * Size:	000038
 */
void Iterator<ModelEffect>::operator*()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r4, 4(r4)
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
 * Address:	803BCAF8
 * Size:	0000E4
 */
void Iterator<ModelEffect>::next()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803BCB38
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_803BCBC8

lbl_803BCB38:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_803BCBAC

lbl_803BCB58:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803BCBC8
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_803BCBAC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BCB58

lbl_803BCBC8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BCBDC
 * Size:	0000DC
 */
void Iterator<ModelEffect>::first()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmplwi   r0, 0
	bne      lbl_803BCC18
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_803BCCA4

lbl_803BCC18:
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)
	b        lbl_803BCC88

lbl_803BCC34:
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803BCCA4
	lwz      r3, 8(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 4(r31)

lbl_803BCC88:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803BCC34

lbl_803BCCA4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BCCB8
 * Size:	000028
 */
void __sinit_particleMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804E7688@ha
	stw      r0, lbl_80516090@sda21(r13)
	stfsu    f0, lbl_804E7688@l(r3)
	stfs     f0, lbl_80516094@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803BCCE0
 * Size:	000008
 */
void NodeObjectMgr<ModelEffect>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__28NodeObjectMgr<11ModelEffect>Fv"
	*/
}

/*
 * --INFO--
 * Address:	803BCCE8
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__24ObjectMgr<11ModelEffect>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	803BCCF0
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__24ObjectMgr<11ModelEffect>Ff"
	*/
}

/*
 * --INFO--
 * Address:	803BCCF8
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__24ObjectMgr<11ModelEffect>Fv"
	*/
}

/*
 * --INFO--
 * Address:	803BCD00
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__24ObjectMgr<11ModelEffect>Fi"
	*/
}

/*
 * --INFO--
 * Address:	803BCD08
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__24ObjectMgr<11ModelEffect>Fv"
	*/
}

/*
 * --INFO--
 * Address:	803BCD10
 * Size:	000008
 */
void ObjectMgr<ModelEffect>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__24ObjectMgr<11ModelEffect>Fv"
	*/
}
