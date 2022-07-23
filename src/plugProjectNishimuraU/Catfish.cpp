#include "Game/Entities/Catfish.h"

namespace Game {
namespace Catfish {
/*
 * --INFO--
 * Address:	80277008
 * Size:	000090
 */
// WIP: https://decomp.me/scratch/uZs5i - context needs fixing
Obj::Obj()
    : KochappyBase::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_80277044
	addi     r0, r31, 0x2d8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2d8(r31)
	stw      r0, 0x2dc(r31)
	stw      r0, 0x2e0(r31)

lbl_80277044:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q34Game12KochappyBase3ObjFv
	lis      r3, __vt__Q34Game7Catfish3Obj@ha
	addi     r0, r31, 0x2d8
	addi     r5, r3, __vt__Q34Game7Catfish3Obj@l
	mr       r3, r31
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x308
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80277098
 * Size:	00003C
 */
// https://decomp.me/scratch/pHcyf - matches
void Obj::onInit(Game::CreatureInitArg* arg)
{
	KochappyBase::Obj::onInit(arg);
	m_shadowJoint = m_model->getJoint("kosi");

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q34Game12KochappyBase3ObjFPQ24Game15CreatureInitArg
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051B358@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x2c8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802770D4
 * Size:	0000C0
 */
// https://decomp.me/scratch/ERQ6g - matches
void Game::Catfish::Obj::getShadowParam(Game::ShadowParam& param)
{
	Matrixf* worldMatrix = m_shadowJoint->getWorldMatrix();

	param.m_position
	    = Vector3f(worldMatrix->m_matrix.mtxView[0][3], worldMatrix->m_matrix.mtxView[1][3], worldMatrix->m_matrix.mtxView[2][3]);

	param.m_position.y -= 10.0f;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	param.m_boundingSphere.m_radius   = param.m_position.y - m_position.y;

	if (m_events[1].typeView & ENEMY_EVENT_REFRESH) {
		param.m_boundingSphere.m_radius += 50.0f;
	} else {
		param.m_boundingSphere.m_radius += 15.0f;
	}

	param._1C = 15.0f;

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x2c8(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f2, lbl_8051B360@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051B364@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f0, lbl_8051B368@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f3, 4(r31)
	fsubs    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lfs      f1, 4(r31)
	lfs      f0, 0x190(r30)
	fsubs    f0, f1, f0
	stfs     f0, 0x18(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80277164
	lfs      f1, 0x18(r31)
	lfs      f0, lbl_8051B36C@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)
	b        lbl_80277174

lbl_80277164:
	lfs      f1, 0x18(r31)
	lfs      f0, lbl_8051B370@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r31)

lbl_80277174:
	lfs      f0, lbl_8051B370@sda21(r2)
	stfs     f0, 0x1c(r31)
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
 * Address:	80277194
 * Size:	000028
 */
bool Obj::pressCallBack(Game::Creature*, float damage, CollPart* collPart)
{
	EnemyBase::addDamage(damage, 1.0f);
	return false;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f2, lbl_8051B368@sda21(r2)
	stw      r0, 0x14(r1)
	bl       addDamage__Q24Game9EnemyBaseFff
	lwz      r0, 0x14(r1)
	li       r3, 0
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802771BC
 * Size:	000020
 */
bool Obj::hipdropCallBack(Game::Creature* creature, float a2, CollPart* collPart)
{
	return EnemyBase::hipdropCallBack(creature, a2, collPart);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802771DC
 * Size:	0000A0
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(2);
	m_mouthSlots.setup(0, Creature::m_model, "kamu1");
	m_mouthSlots.setup(1, Creature::m_model, "kamu2");

	for (int i = 0; i < m_mouthSlots.m_count; i++) {
		m_mouthSlots.getSlot(i)->_1C = 20.0f;
	}
}

/*
 * --INFO--
 * Address:	8027727C
 * Size:	000044
 */
void Obj::resetEnemyNonStone()
{
	if (m_events[0].typeView & ENEMY_EVENT_STONE) {
		createDownEffect();
	}

	m_events[0].typeView &= ~(ENEMY_EVENT_STONE | ENEMY_EVENT_REFRESH);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	beq      lbl_802772A0
	bl       createDownEffect__Q34Game7Catfish3ObjFv

lbl_802772A0:
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802772C0
 * Size:	000028
 */
void Obj::createDownEffect()
{
	EnemyBase::createBounceEffect(m_position, 0.5);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051B388@sda21(r2)
	addi     r4, r3, 0x18c
	stw      r0, 0x14(r1)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802772E8
 * Size:	000004
 */
// WEAK - in header
// void Obj::changeMaterial() { }

/*
 * --INFO--
 * Address:	802772EC
 * Size:	000004
 */
// WEAK - in header
// void Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802772F0
 * Size:	000004
 */
// WEAK - in header
// void Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802772F4
 * Size:	000008
 */
// WEAK - in header
// EnemyTypeID::EEnemyTypeID Obj::getEnemyTypeID() { return EnemyTypeID::EEnemyTypeID::EnemyID_Catfish; }

/*
 * --INFO--
 * Address:	802772FC
 * Size:	000010
 */
// WEAK - in header
// void Obj::setEnemyNonStone()
// {
// 	/*
// 	lwz      r0, 0x1e0(r3)
// 	oris     r0, r0, 0x20
// 	stw      r0, 0x1e0(r3)
// 	blr
// 	*/
// }
} // namespace Catfish
} // namespace Game
