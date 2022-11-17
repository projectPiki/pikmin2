#include "Game/Entities/LeafChappy.h"
#include "Game/Footmark.h"
#include "Game/rumble.h"
#include "Game/WalkSmokeEffect.h"
#include "Game/GameSystem.h"
#include "Game/PikiMgr.h"
#include "Game/MapMgr.h"

namespace Game {
namespace LeafChappy {

/*
 * --INFO--
 * Address:	802C5C18
 * Size:	000098
 */
Obj::Obj() { createFootmarks(); }

/*
 * --INFO--
 * Address:	802C5CB0
 * Size:	0000C0
 */
void Obj::doUpdate()
{
	KumaChappy::Obj::doUpdate();
	f32 timer = (m_footmarks->_10 - (int)gameSystem->m_frameTimer);

	if (!(timer > 0.0f)) {
		timer = -timer;
	}

	if (timer > 2.5f) {
		Footmark mark;
		mark.m_position = getPosition();
		m_footmarks->add(mark);
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       doUpdate__Q34Game10KumaChappy3ObjFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	lis      r0, 0x4330
	lwz      r3, 0x2f8(r31)
	lwz      r4, 0x50(r4)
	lwz      r3, 0x10(r3)
	stw      r0, 0x28(r1)
	subf     r0, r4, r3
	lfd      f2, lbl_8051C600@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f0, lbl_8051C5F8@sda21(r2)
	stw      r0, 0x2c(r1)
	lfd      f1, 0x28(r1)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_802C5D08
	b        lbl_802C5D0C

lbl_802C5D08:
	fneg     f1, f1

lbl_802C5D0C:
	lfs      f0, lbl_8051C5FC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802C5D5C
	addi     r3, r1, 0x14
	bl       __ct__Q24Game8FootmarkFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x2f8(r31)
	bl       add__Q24Game9FootmarksFRQ24Game8Footmark

lbl_802C5D5C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C5D70
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802C5D74
 * Size:	0000C4
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Matrixf* worldMatrix = m_model->getJoint("ago")->getWorldMatrix();

	param.m_position
	    = Vector3f(worldMatrix->m_matrix.mtxView[0][3], worldMatrix->m_matrix.mtxView[1][3], worldMatrix->m_matrix.mtxView[2][3]);

	param.m_position.y -= 7.0f;
	f32 heightFloat = m_position.y + 5.0f;
	if (param.m_position.y < heightFloat) {
		param.m_position.y = heightFloat;
	}
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_1)) {
		param.m_boundingSphere.m_radius = 30.0f;
	} else {
		param.m_boundingSphere.m_radius = 50.0f;
	}

	param._1C = 12.5f;
}

/*
 * --INFO--
 * Address:	802C5E38
 * Size:	0000B4
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(3);
	m_mouthSlots.setup(0, Creature::m_model, "kamu1");
	m_mouthSlots.setup(1, Creature::m_model, "kamu2");
	m_mouthSlots.setup(2, Creature::m_model, "kamu3");

	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = 30.0f;
	}
}

/*
 * --INFO--
 * Address:	802C5EEC
 * Size:	000064
 */
void Obj::initWalkSmokeEffect()
{
	m_walkSmokeMgr.alloc(2);
	m_walkSmokeMgr.setup(0, m_model, "asiL", 5.0f);
	m_walkSmokeMgr.setup(1, m_model, "asiR", 5.0f);
}

/*
 * --INFO--
 * Address:	802C5F50
 * Size:	000020
 */
bool Obj::doBecomeCarcass() { EnemyBase::doBecomeCarcass(); }

/*
 * --INFO--
 * Address:	802C5F70
 * Size:	000020
 */
void Obj::doUpdateCarcass() { EnemyBase::doUpdateCarcass(); }

/*
 * --INFO--
 * Address:	802C5F90
 * Size:	000020
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param) { EnemyBase::doGetLifeGaugeParam(param); }

/*
 * --INFO--
 * Address:	802C5FB0
 * Size:	000244
 */
void Obj::birthChildren(EnemyBirthArg& birthArg)
{
	f32 angle          = birthArg.m_faceDir + PI;
	Vector3f motherPos = birthArg.m_position;

	Vector3f vec(pikmin2_sinf(angle), 0.0f, pikmin2_cosf(angle));

	for (int i = 0; i < 10; i++) {
		f32 modifier        = 2.5f * i + 17.5f;
		Vector3f bulbminPos = Vector3f(modifier * vec.x, 0.0f, modifier * vec.z);
		Piki* bulbmin       = pikiMgr->birth();
		PikiInitArg initArg;
		initArg.m_leader = this;

		if (bulbmin) {
			bulbmin->init(&initArg);
			bulbminPos += motherPos;
			bulbminPos.y = mapMgr->getMinY(bulbminPos);
			bulbmin->setPosition(bulbminPos, false);
		}
	}
}

/*
 * --INFO--
 * Address:	802C61F4
 * Size:	00007C
 */
void Obj::startEnemyRumble()
{
	Matrixf* worldMat = m_model->getJoint("ago")->getWorldMatrix();
	Vector3f pos      = Vector3f(worldMat->m_matrix.mtxView[0][3], worldMat->m_matrix.mtxView[1][3], worldMat->m_matrix.mtxView[2][3]);
	pos.y             = m_position.y;
	rumbleMgr->startRumble(8, pos, 2);
	createBounceEffect(pos, 0.4f);
}

/*
 * --INFO--
 * Address:	802C6270
 * Size:	000050
 */
void Obj::createFootmarks()
{
	m_footmarks = new Footmarks();
	m_footmarks->alloc(10);
}

} // namespace LeafChappy
} // namespace Game
