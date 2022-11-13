#include "Game/plantsMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/GameSystem.h"
#include "efx/TWatage.h"
#include "PSM/Navi.h"
#include "nans.h"

namespace Game {

/*
 * --INFO--
 * Address:	803583CC
 * Size:	000050
 */
void Plants::Obj::setParameters()
{
	EnemyBase::setParameters();
	Vector3f pos = m_position;
	pos.y += static_cast<EnemyParmsBase*>(m_parms)->m_general.m_territoryRadius.m_value;
	m_curLodSphere.m_position = pos;
}

/*
 * --INFO--
 * Address:	8035841C
 * Size:	000020
 */
void Plants::Obj::birth(Vector3f& position, f32 faceDir) { EnemyBase::birth(position, faceDir); }

/*
 * --INFO--
 * Address:	8035843C
 * Size:	0001A8
 */
void Plants::Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_Flying);
	resetEvent(0, EB_9);
	setEvent(0, EB_Vulnerable);

	show();
	setEmotionNone();
	resetEvent(0, EB_13);

	setEvent(0, EB_BitterImmune);
	hardConstraintOn();
	_2BC = 0;
	_2BD = 0;
	m_mainMatrix.makeSRT(m_scale, m_rotation, m_position);

	P2ASSERTLINE(83, m_model);

	startMotion(0, nullptr);

	SysShape::Animator* animator                                       = &m_animator->getAnimator();
	SysShape::Model* model                                             = m_model;
	model->m_j3dModel->m_modelData->m_jointTree.m_joints[0]->m_mtxCalc = static_cast<J3DMtxCalcAnmBase*>(animator->getCalc());
	PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
	m_model->m_j3dModel->calc();

	setCollisionFlick(false);

	if (shadowMgr) {
		shadowMgr->killShadow(this);
	}

	m_spawnsSpectralids = false;
	if (m_pelletInfo.m_color == 0 && m_pelletInfo.m_size == 1) {
		m_spawnsSpectralids = true;
	}
}

/*
 * --INFO--
 * Address:	803585E4
 * Size:	0000EC
 */
Plants::Obj::Obj() { m_animator = new ProperAnimator; }

/*
 * --INFO--
 * Address:	803586D0
 * Size:	000048
 */
void Plants::Obj::update()
{
	if (isCullingOff()) {
		doUpdate();
	}
}

/*
 * --INFO--
 * Address:	80358718
 * Size:	00006C
 */
void Plants::Obj::doAnimation()
{
	EnemyBase::doAnimation();
	if (_2BC && m_curAnim->m_isRunning && (u32)m_curAnim->m_type == KEYEVENT_END) {
		_2BC = 0;
		_2BD = 0;
		setZukanVisible(false);
	}
}

/*
 * --INFO--
 * Address:	80358784
 * Size:	00009C
 */
void Plants::Obj::doAnimationCullingOff()
{
	if (_2BC) {
		m_curAnim->m_isRunning = false;
		doAnimationUpdateAnimator();
		if (m_lod.m_flags & AILOD_FLAG_NEED_SHADOW) {
			m_mainMatrix.makeSRT(m_scale, m_rotation, m_position);
			PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
			m_model->m_j3dModel->calc();
		}
	}
}

/*
 * --INFO--
 * Address:	80358820
 * Size:	000020
 */
void Plants::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80358840
 * Size:	000150
 */
void Plants::Obj::collisionCallback(CollEvent& collEvent)
{
	if (m_lod.m_flags & AILOD_FLAG_NEED_SHADOW) {
		setCollEvent(collEvent);
		Creature* creature = collEvent.m_collidingCreature;
		if (creature) {
			Vector3f creaturePos = creature->getPosition();
			if (!(creaturePos.y < m_position.y - 5.0f)) {
				Vector3f velocity = creature->getVelocity();

				if (FABS(velocity.x) > 1.0f || FABS(velocity.z) > 1.0f) {
					if (creature->isNavi() && !_2BD) {
						_2BD = 1;
						touchedSE(static_cast<Navi*>(creature));
					}

					if (!_2BC) {
						startMotion(0, nullptr);
						touched();
						_2BC = 1;
					}
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80358990
 * Size:	000060
 */
bool Plants::Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	if (!_2BC) {
		startMotion(0, nullptr);
		touched();
		_2BC = 1;
	}

	return false;
}

/*
 * --INFO--
 * Address:	803589F0
 * Size:	0000A0
 */
void Plants::Obj::touched()
{
	if (m_spawnsSpectralids) {
		m_spawnsSpectralids   = false;
		ShijimiChou::Mgr* mgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (mgr) {
			EnemyBirthArg birthArg;
			birthArg.m_position   = m_position;
			birthArg.m_position.y = m_position.y + static_cast<EnemyParmsBase*>(m_parms)->m_general.m_lifeMeterHeight.m_value;
			birthArg.m_faceDir    = 0.0f;

			mgr->createGroupByPlants(birthArg, 5);
		}
	}
}

/*
 * --INFO--
 * Address:	80358A90
 * Size:	000040
 */
void Plants::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->m_soundObj->startSound(PSSE_PL_TOUCH_LEAF, 0);
	}
}

/*
 * --INFO--
 * Address:	80358AD0
 * Size:	000040
 */
void HikariKinoko::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->m_soundObj->startSound(PSSE_PL_TOUCH_KINOKO, 0);
	}
}

/*
 * --INFO--
 * Address:	80358B10
 * Size:	000048
 */
void Watage::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80358B58
 * Size:	000104
 */
void Watage::Obj::touched()
{
	Plants::Obj::touched();

	efx::TWatage watageEFX;
	efx::Arg arg(m_position);

	watageEFX.create(&arg);
}

/*
 * --INFO--
 * Address:	80358C5C
 * Size:	000048
 */
void Nekojarashi::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80358CA4
 * Size:	000040
 */
void DiodeRed::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->m_soundObj->startSound(PSSE_PL_TOUCH_DIODE, 0);
	}
}

/*
 * --INFO--
 * Address:	80358CE4
 * Size:	000048
 */
void DiodeRed::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80358D2C
 * Size:	000040
 */
void DiodeGreen::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->m_soundObj->startSound(PSSE_PL_TOUCH_DIODE, 0);
	}
}

/*
 * --INFO--
 * Address:	80358D6C
 * Size:	000048
 */
void DiodeGreen::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/*
 * --INFO--
 * Address:	80358FA4
 * Size:	000114
 */
void Nekojarashi::Obj::getLODCylinder(Sys::Cylinder& cylinder)
{
	Vector3f pos = m_position;
	Vector3f vec1, vec2;

	f32 x = -(50.0f * pikmin2_sinf(m_faceDir) - pos.x);
	f32 z = -(50.0f * pikmin2_cosf(m_faceDir) - pos.z);
	vec2  = Vector3f(x, pos.y, z);

	vec1 = vec2;
	vec1.y += static_cast<EnemyParmsBase*>(m_parms)->m_general.m_privateRadius.m_value;
	cylinder.set(vec1, vec2, static_cast<EnemyParmsBase*>(m_parms)->m_general.m_homeRadius.m_value);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_8051E558@sda21(r2)
	mr       r7, r4
	stw      r0, 0x44(r1)
	lfs      f2, lbl_8051E55C@sda21(r2)
	lfs      f6, 0x1fc(r3)
	lfs      f3, 0x18c(r3)
	fcmpo    cr0, f6, f0
	lfs      f4, 0x190(r3)
	lfs      f5, 0x194(r3)
	bge      lbl_80359000
	lfs      f0, lbl_8051E560@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_80359024

lbl_80359000:
	lfs      f0, lbl_8051E564@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_80359024:
	lfs      f0, lbl_8051E558@sda21(r2)
	fnmsubs  f3, f2, f1, f3
	fcmpo    cr0, f6, f0
	bge      lbl_80359038
	fneg     f6, f6

lbl_80359038:
	lfs      f0, lbl_8051E564@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r6, r4, sincosTable___5JMath@l
	lfs      f2, lbl_8051E55C@sda21(r2)
	fmuls    f0, f6, f0
	stfs     f3, 8(r1)
	frsp     f1, f4
	addi     r4, r1, 0x14
	stfs     f4, 0xc(r1)
	addi     r5, r1, 8
	fctiwz   f0, f0
	stfs     f3, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r6, r6, r0
	lfs      f0, 4(r6)
	fnmsubs  f5, f2, f0, f5
	stfs     f5, 0x10(r1)
	stfs     f5, 0x1c(r1)
	lwz      r6, 0xc0(r3)
	mr       r3, r7
	lfs      f0, 0x3ac(r6)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r1)
	lfs      f1, 0x384(r6)
	bl       "set__Q23Sys8CylinderFRC10Vector3<f>RC10Vector3<f>f"
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace Game
