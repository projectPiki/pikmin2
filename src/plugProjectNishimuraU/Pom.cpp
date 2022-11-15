#include "Game/Entities/Pom.h"
#include "Game/gamePlayData.h"

namespace Game {
namespace Pom {

/*
 * --INFO--
 * Address:	802547A4
 * Size:	000138
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802548DC
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802548E0
 * Size:	000114
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	if (isBirthTypeDropGroup()) {
		resetEvent(0, EB_Vulnerable);
		setEvent(0, EB_Flying);
		hardConstraintOff();
	} else {
		setEvent(0, EB_Vulnerable);
		resetEvent(0, EB_Flying);
		hardConstraintOn();
	}

	resetEvent(0, EB_13);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_9);
	resetEvent(0, EB_LifegaugeVisible);
	setEvent(0, EB_BitterImmune);
	setEmotionNone();

	shadowMgr->killShadow(this);
	setPomParms();
	_2C0              = false;
	_2C1              = 0;
	_2C4              = 0;
	_2E4              = 0.0f;
	m_queenColorTimer = 0.0f;

	m_FSM->start(this, 0, nullptr);
}

/*
 * --INFO--
 * Address:	802549F4
 * Size:	000088
 */
void Obj::doUpdate()
{
	m_FSM->exec(this);
	m_mouthSlots.update();
	if (isEvent(0, EB_Flying) && m_curTriangle) {
		if (isEvent(0, EB_HardConstraint)) {
			setEvent(0, EB_Vulnerable);
			resetEvent(0, EB_Flying);
		} else {
			hardConstraintOn();
		}
	}
}

/*
 * --INFO--
 * Address:	80254A7C
 * Size:	000110
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = m_model->m_j3dModel;
	modelData          = j3dModel->m_modelData;
	j3dModel->calcMaterial();

	for (u16 i = 0; i < modelData->m_materialTable.m_count1; i++) {
		J3DMatPacket* packet  = &j3dModel->m_matPackets[i];
		j3dSys.m_matPacket    = packet;
		J3DMaterial* material = modelData->m_materialTable.m_materials1[i];
		material->diff(packet->_2C->_34);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lis      r3, lbl_80484CD8@ha
	lwz      r5, 0x174(r28)
	addi     r4, r3, lbl_80484CD8@l
	lwz      r31, 8(r5)
	lwz      r29, 4(r31)
	lwz      r3, 0x64(r29)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x60(r29)
	rlwinm   r3, r3, 2, 0xe, 0x1d
	lha      r0, 0x2dc(r28)
	addi     r5, r1, 8
	lwzx     r3, r4, r3
	li       r4, 0
	sth      r0, 8(r1)
	lha      r0, 0x2de(r28)
	sth      r0, 0xa(r1)
	lha      r0, 0x2e0(r28)
	sth      r0, 0xc(r1)
	lha      r0, 0x2e2(r28)
	sth      r0, 0xe(r1)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r3, j3dSys@ha
	li       r28, 0
	addi     r30, r3, j3dSys@l
	b        lbl_80254B5C

lbl_80254B24:
	lwz      r4, 0xc0(r31)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r30)
	lwz      r3, 0x60(r29)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_80254B5C:
	lhz      r0, 0x5c(r29)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_80254B24
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
 * Address:	80254B8C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80254B90
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80254BB0
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	m_FSM = fsm;
	m_FSM->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80254BFC
 * Size:	000044
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{

	/*
	lfs      f0, 0x18c(r3)
	lfs      f3, lbl_8051A9AC@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f2, lbl_8051A9A8@sda21(r2)
	lfs      f0, 0x190(r3)
	lfs      f1, lbl_8051A9B0@sda21(r2)
	fadds    f3, f3, f0
	lfs      f0, lbl_8051A9B4@sda21(r2)
	stfs     f3, 4(r4)
	lfs      f3, 0x194(r3)
	stfs     f3, 8(r4)
	stfs     f2, 0xc(r4)
	stfs     f1, 0x10(r4)
	stfs     f2, 0x14(r4)
	stfs     f0, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80254C40
 * Size:	00012C
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	or.      r29, r4, r4
	beq      lbl_80254D4C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254D4C
	cmplwi   r30, 0
	beq      lbl_80254D4C
	lis      r4, 0x736C6F74@ha
	addi     r3, r30, 0x30
	addi     r4, r4, 0x736C6F74@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254D4C
	lbz      r0, 0x2c1(r31)
	cmplwi   r0, 0
	beq      lbl_80254D4C
	lwz      r3, 0x2c4(r31)
	lwz      r0, 0x2c8(r31)
	cmpw     r3, r0
	bge      lbl_80254D4C
	addi     r3, r31, 0x2d0
	li       r4, 0
	bl       getSlot__10MouthSlotsFi
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game14InteractAttack@ha
	addi     r0, r5, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051A9B0@sda21(r2)
	stw      r0, 8(r1)
	addi     r5, r4, __vt__Q24Game14InteractAttack@l
	lis      r4, __vt__Q24Game15InteractSwallow@ha
	li       r0, 0
	stw      r5, 8(r1)
	addi     r5, r4, __vt__Q24Game15InteractSwallow@l
	addi     r4, r1, 8
	stw      r3, 0x14(r1)
	mr       r3, r29
	stw      r31, 0xc(r1)
	stfs     f0, 0x10(r1)
	stw      r5, 8(r1)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254D34
	lwz      r3, 0x2c4(r31)
	addi     r0, r3, 1
	stw      r0, 0x2c4(r31)

lbl_80254D34:
	lfs      f0, lbl_8051A9A8@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2e4(r31)
	bl       createSwingSmokeEffect__Q34Game3Pom3ObjFv
	li       r3, 1
	b        lbl_80254D50

lbl_80254D4C:
	li       r3, 0

lbl_80254D50:
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
 * Address:	80254D6C
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { pressCallBack(creature, damage, collpart); }

/*
 * --INFO--
 * Address:	80254D98
 * Size:	0000A8
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0(r4)
	cmplwi   r3, 0
	beq      lbl_80254E28
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80254E10
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80254E10
	lwz      r3, 0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80254E28

lbl_80254E10:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl

lbl_80254E28:
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
 * Address:	80254E40
 * Size:	00004C
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(1);
	m_mouthSlots.setup(0, m_model, "jnt_center");
}

/*
 * --INFO--
 * Address:	80254E8C
 * Size:	000510
 */
void Obj::setPomParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_80255108
	bge      lbl_80254ED4
	cmpwi    r3, 4
	beq      lbl_80254F98
	bge      lbl_80255050
	cmpwi    r3, 3
	bge      lbl_80254EE4
	b        lbl_8025532C

lbl_80254ED4:
	cmpwi    r3, 8
	beq      lbl_80255278
	bge      lbl_8025532C
	b        lbl_802551C0

lbl_80254EE4:
	li       r4, 0
	stw      r4, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80254F4C
	bge      lbl_80254F0C
	cmpwi    r0, 0
	beq      lbl_80254F1C
	bge      lbl_80254F34
	b        lbl_8025532C

lbl_80254F0C:
	cmpwi    r0, 4
	beq      lbl_80254F7C
	bge      lbl_8025532C
	b        lbl_80254F64

lbl_80254F1C:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F34:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80254F4C:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F64:
	li       r3, 0x1c
	li       r0, 0x34
	sth      r3, 0x2dc(r31)
	sth      r4, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F7C:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254F98:
	li       r0, 1
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80255000
	bge      lbl_80254FC0
	cmpwi    r0, 0
	beq      lbl_80254FD0
	bge      lbl_80254FE8
	b        lbl_8025532C

lbl_80254FC0:
	cmpwi    r0, 4
	beq      lbl_80255034
	bge      lbl_8025532C
	b        lbl_80255018

lbl_80254FD0:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80254FE8:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80255000:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255018:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255034:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255050:
	li       r0, 2
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_802550B8
	bge      lbl_80255078
	cmpwi    r0, 0
	beq      lbl_80255088
	bge      lbl_802550A0
	b        lbl_8025532C

lbl_80255078:
	cmpwi    r0, 4
	beq      lbl_802550EC
	bge      lbl_8025532C
	b        lbl_802550D0

lbl_80255088:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802550A0:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_802550B8:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802550D0:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802550EC:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255108:
	li       r0, 3
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80255170
	bge      lbl_80255130
	cmpwi    r0, 0
	beq      lbl_80255140
	bge      lbl_80255158
	b        lbl_8025532C

lbl_80255130:
	cmpwi    r0, 4
	beq      lbl_802551A4
	bge      lbl_8025532C
	b        lbl_80255188

lbl_80255140:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255158:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80255170:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255188:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802551A4:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802551C0:
	li       r0, 4
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_80255228
	bge      lbl_802551E8
	cmpwi    r0, 0
	beq      lbl_802551F8
	bge      lbl_80255210
	b        lbl_8025532C

lbl_802551E8:
	cmpwi    r0, 4
	beq      lbl_8025525C
	bge      lbl_8025532C
	b        lbl_80255240

lbl_802551F8:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255210:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_80255228:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255240:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_8025525C:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255278:
	li       r0, 1
	stw      r0, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	cmpwi    r0, 2
	beq      lbl_802552E0
	bge      lbl_802552A0
	cmpwi    r0, 0
	beq      lbl_802552B0
	bge      lbl_802552C8
	b        lbl_8025532C

lbl_802552A0:
	cmpwi    r0, 4
	beq      lbl_80255314
	bge      lbl_8025532C
	b        lbl_802552F8

lbl_802552B0:
	li       r3, 0x32
	li       r0, 0xff
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802552C8:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	sth      r0, 0x2de(r31)
	b        lbl_8025532C

lbl_802552E0:
	li       r3, 0xff
	li       r0, 0x14
	sth      r3, 0x2de(r31)
	sth      r3, 0x2dc(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_802552F8:
	li       r0, 0x1c
	li       r3, 0
	sth      r0, 0x2dc(r31)
	li       r0, 0x34
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)
	b        lbl_8025532C

lbl_80255314:
	li       r0, 0xc8
	li       r3, 0xff
	sth      r0, 0x2dc(r31)
	li       r0, 0xdc
	sth      r3, 0x2de(r31)
	sth      r0, 0x2e0(r31)

lbl_8025532C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 8
	beq      lbl_80255368
	lwz      r4, 0xc0(r31)
	li       r3, 1
	li       r0, 0
	lwz      r4, 0x81c(r4)
	stw      r4, 0x2c8(r31)
	stw      r3, 0x2cc(r31)
	sth      r0, 0x2e2(r31)
	b        lbl_80255388

lbl_80255368:
	lwz      r3, 0xc0(r31)
	li       r0, 0xff
	lwz      r3, 0x844(r3)
	stw      r3, 0x2c8(r31)
	lwz      r3, 0xc0(r31)
	lwz      r3, 0x86c(r3)
	stw      r3, 0x2cc(r31)
	sth      r0, 0x2e2(r31)

lbl_80255388:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802553A4
 * Size:	0004AC
 */
void Obj::shotPikmin()
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r28, r3
	addi     r3, r1, 0x10
	lwz      r12, 0(r28)
	mr       r4, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r4, r28
	lfs      f0, lbl_8051A9B8@sda21(r2)
	addi     r3, r1, 0x64
	lfs      f3, 0x10(r1)
	lfs      f1, 0x18(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x3c(r1)
	stfs     f3, 0x38(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x3c(r1)
	lwz      r5, 0x1f4(r28)
	lwz      r0, 0x2cc(r28)
	mullw    r30, r5, r0
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x64
	cmplwi   r0, 0
	stw      r4, 0x28(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x2c(r1)
	stw      r3, 0x30(r1)
	bne      lbl_80255458
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80255678

lbl_80255458:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_802554C4

lbl_80255470:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80255678
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_802554C4:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80255470
	b        lbl_80255678

lbl_802554E4:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802555BC
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802555BC
	lbz      r3, 0x2b8(r31)
	cmpwi    r3, 5
	bge      lbl_8025556C
	bl       dec__Q24Game8BirthMgrFi
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 8
	beq      lbl_8025556C
	lbz      r3, 0x2b8(r31)
	lwz      r0, 0x2d8(r28)
	cmpw     r3, r0
	bne      lbl_8025556C
	lwz      r3, 0x2c4(r28)
	addi     r0, r3, -1
	stw      r0, 0x2c4(r28)

lbl_8025556C:
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractKill@ha
	stw      r0, 0x1c(r1)
	addi     r4, r4, __vt__Q24Game15CreatureKillArg@l
	addi     r5, r3, __vt__Q24Game12InteractKill@l
	addi     r0, r1, 8
	li       r6, 1
	stw      r4, 8(r1)
	mr       r3, r31
	addi     r4, r1, 0x1c
	stw      r6, 0xc(r1)
	stw      r28, 0x20(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802555BC:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_802555E8
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80255678

lbl_802555E8:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_8025565C

lbl_80255608:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80255678
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_8025565C:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80255608

lbl_80255678:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_802554E4
	li       r31, 0
	b        lbl_80255808

lbl_802556A0:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80255804
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x84(r1)
	lfd      f2, lbl_8051A9D8@sda21(r2)
	stw      r0, 0x80(r1)
	lfs      f3, lbl_8051A9BC@sda21(r2)
	lfd      f0, 0x80(r1)
	lfs      f1, lbl_8051A9C0@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f0, lbl_8051A9A8@sda21(r2)
	lfs      f2, lbl_8051A9C4@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f3, f3, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80255728
	lfs      f0, lbl_8051A9C8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8025574C

lbl_80255728:
	lfs      f0, lbl_8051A9CC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8025574C:
	lfs      f0, lbl_8051A9A8@sda21(r2)
	fmuls    f4, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_80255760
	fneg     f3, f3

lbl_80255760:
	lfs      f0, lbl_8051A9CC@sda21(r2)
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	lwz      r9, 0x2d8(r28)
	addi     r5, r3, __vt__Q24Game15CreatureInitArg@l
	fmuls    f0, f3, f0
	li       r0, 0
	lis      r6, sincosTable___5JMath@ha
	lfs      f1, lbl_8051A9D0@sda21(r2)
	lis      r4, __vt__Q24Game11ItemInitArg@ha
	stw      r5, 0x44(r1)
	fctiwz   f2, f0
	addi     r7, r6, sincosTable___5JMath@l
	addi     r6, r4, __vt__Q24Game11ItemInitArg@l
	lis      r3, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f0, lbl_8051A9D4@sda21(r2)
	addi     r5, r3, __vt__Q34Game12ItemPikihead7InitArg@l
	stfd     f2, 0x98(r1)
	mr       r3, r29
	lfs      f3, lbl_8051A9C4@sda21(r2)
	addi     r4, r1, 0x44
	stw      r6, 0x44(r1)
	lwz      r8, 0x9c(r1)
	stw      r5, 0x44(r1)
	rlwinm   r6, r8, 3, 0x12, 0x1c
	add      r6, r7, r6
	stw      r9, 0x48(r1)
	lfs      f2, 4(r6)
	stfs     f1, 0x50(r1)
	fmuls    f2, f3, f2
	stfs     f4, 0x54(r1)
	stfs     f2, 0x4c(r1)
	stb      r0, 0x58(r1)
	stw      r0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r29
	addi     r4, r1, 0x38
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x2d8(r28)
	bl       inc__Q24Game8BirthMgrFi

lbl_80255804:
	addi     r31, r31, 1

lbl_80255808:
	cmpw     r31, r30
	blt      lbl_802556A0
	mr       r3, r28
	bl       createShotEffect__Q34Game3Pom3ObjFv
	mr       r3, r28
	li       r4, 0
	bl       setZukanVisible__Q24Game9EnemyBaseFb
	addi     r3, r1, 0x64
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80255850
 * Size:	00019C
 */
void Obj::changePomColor()
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_RandPom) {
		if (m_queenColorTimer > C_PROPERPARMS.m_fp02.m_value) {
			int limit     = m_curQueenColor + 3; // more than 3 and we loop back
			int nextColor = m_curQueenColor + 1; // first potential next color to try (Blue->Red->Yellow)

			int choosableColors[] = { Blue, Red, Yellow, 0, 0 }; // only set Blue, Red, Yellow as queen options

			for (nextColor; nextColor < limit; nextColor++) {
				int colorIndex = nextColor; // color to try
				if (nextColor > 2) {        // only allow Blue (0), Red (1), Yellow (2)
					colorIndex = nextColor - 3;
				}

				// if color is unlocked, set color of dots, reset timer + return
				// NB: colors for purple and white are here, probably disabled before release
				if (playData->hasMetPikmin(choosableColors[colorIndex])) {
					m_curQueenColor = colorIndex;
					switch (m_curQueenColor) {
					case Blue:
						m_green = 50;
						m_red   = 50;
						m_blue  = 255;
						break;
					case Red:
						m_red   = 255;
						m_blue  = 20;
						m_green = 20;
						break;
					case Yellow:
						m_green = 255;
						m_red   = 255;
						m_blue  = 20;
						break;
					case Purple:
						m_red   = 28;
						m_green = 0;
						m_blue  = 52;
						break;
					case White:
						m_red   = 200;
						m_green = 255;
						m_blue  = 220;
						break;
					}

					m_queenColorTimer = 0.0f;
					return;
				}
			}
		} else {
			m_queenColorTimer += sys->m_deltaTime;
		}
	}
}

/*
 * --INFO--
 * Address:	802559EC
 * Size:	000184
 */
void Obj::createSwingSmokeEffect()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	lwz      r0, 0x280(r3)
	cmplwi   r0, 0
	beq      lbl_80255AE4
	lfs      f2, 0x18c(r3)
	lfs      f1, 0x190(r3)
	lfs      f0, 0x194(r3)
	mr       r3, r0
	lwz      r12, 0(r3)
	stfs     f2, 0x34(r1)
	lwz      r12, 0x14(r12)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	li       r5, 0
	lwz      r8, 0x34(r1)
	lis      r3, __vt__Q23efx5TBase@ha
	stfs     f0, 0x38(r1)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lwz      r6, 0x3c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r7, 0x38(r1)
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r8, 8(r1)
	addi     r11, r4, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051A9E0@sda21(r2)
	lis      r4, __vt__Q23efx8ArgScale@ha
	stw      r7, 0xc(r1)
	addi     r9, r3, __vt__Q23efx8TSimple3@l
	lfs      f3, 8(r1)
	lis      r3, __vt__Q23efx13TEnemyDownWat@ha
	stw      r6, 0x10(r1)
	li       r8, 0x54
	lfs      f2, 0xc(r1)
	li       r7, 0x55
	stw      r0, 0x40(r1)
	li       r6, 0x56
	lfs      f1, 0x10(r1)
	addi     r10, r4, __vt__Q23efx8ArgScale@l
	stw      r11, 0x58(r1)
	addi     r0, r3, __vt__Q23efx13TEnemyDownWat@l
	addi     r3, r1, 0x40
	addi     r4, r1, 0x58
	stw      r9, 0x40(r1)
	stfs     f3, 0x5c(r1)
	stfs     f2, 0x60(r1)
	stfs     f1, 0x64(r1)
	stw      r10, 0x58(r1)
	stfs     f0, 0x68(r1)
	sth      r8, 0x44(r1)
	sth      r7, 0x46(r1)
	sth      r6, 0x48(r1)
	stw      r5, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x40(r1)
	bl       create__Q23efx13TEnemyDownWatFPQ23efx3Arg
	b        lbl_80255B60

lbl_80255AE4:
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f4, 0x194(r3)
	lfs      f2, 0x190(r3)
	addi     r4, r4, __vt__Q23efx5TBase@l
	lfs      f3, 0x18c(r3)
	lis      r3, __vt__Q23efx8TSimple1@ha
	lfs      f0, lbl_8051A9E4@sda21(r2)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	stw      r4, 0x14(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lfs      f1, lbl_8051A9B0@sda21(r2)
	fsubs    f2, f2, f0
	lis      r3, __vt__Q23efx15TEnemyDownSmoke@ha
	addi     r7, r4, __vt__Q23efx3Arg@l
	li       r6, 0x53
	li       r5, 0
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
	lfs      f0, lbl_8051A9E0@sda21(r2)
	stfs     f1, 0x20(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x24
	stw      r7, 0x24(r1)
	stfs     f3, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stfs     f4, 0x30(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x20(r1)
	bl       create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg

lbl_80255B60:
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80255B70
 * Size:	000094
 */
void Obj::createShotEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f0, lbl_8051A9E8@sda21(r2)
	stw      r0, 0x34(r1)
	addi     r4, r4, __vt__Q23efx5TBase@l
	li       r5, 0
	li       r7, 0x101
	lfs      f2, 0x190(r3)
	li       r6, 0x102
	lfs      f1, 0x18c(r3)
	lfs      f3, 0x194(r3)
	lis      r3, __vt__Q23efx8TSimple2@ha
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	fsubs    f2, f2, f0
	stw      r4, 8(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	lis      r3, __vt__Q23efx9TOnyonLay@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx9TOnyonLay@l
	addi     r3, r1, 8
	stw      r4, 0x18(r1)
	addi     r4, r1, 0x18
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f3, 0x24(r1)
	sth      r7, 0xc(r1)
	sth      r6, 0xe(r1)
	stw      r5, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80255C04
 * Size:	000080
 */
void Obj::createPomDeadEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, __vt__Q23efx5TBase@ha
	lis      r5, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x34(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r8, r6, __vt__Q23efx5TBase@l
	stw      r0, 0x14(r1)
	addi     r7, r5, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx8TPonDead@ha
	li       r6, 0x271
	lfs      f0, 0x18c(r3)
	addi     r0, r4, __vt__Q23efx8TPonDead@l
	li       r5, 0
	addi     r4, r1, 0x14
	stfs     f0, 0x18(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x194(r3)
	addi     r3, r1, 8
	stw      r8, 8(r1)
	stw      r7, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace Pom
} // namespace Game
