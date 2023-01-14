#include "Game/Entities/Damagumo.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/ConditionNotStick.h"
#include "Game/IKSystemBase.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/EnemyBoss.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Damagumo {

/*
 * --INFO--
 * Address:	802A57A4
 * Size:	000024
 */
void DamagumoGroundCallBack::invokeOnGround(int p1, WaterBox* wbox) { m_obj->createOnGroundEffect(p1, wbox); }

/*
 * --INFO--
 * Address:	802A57C8
 * Size:	000024
 */
void DamagumoGroundCallBack::invokeOffGround(int p1, WaterBox* wbox) { m_obj->createOffGroundEffect(p1, wbox); }

/*
 * --INFO--
 * Address:	802A57EC
 * Size:	00016C
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);

	createIKSystem();
	createShadowSystem();
	createEffect();
	createMaterialAnimation();
}

/*
 * --INFO--
 * Address:	802A5958
 * Size:	000034
 */
void Obj::constructor()
{
	EnemyBase::constructor();
	resetBossAppearBGM();
}

/*
 * --INFO--
 * Address:	802A598C
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802A5990
 * Size:	000134
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	hardConstraintOn();

	disableEvent(0, EB_IsPlatformCollsAllowed);
	disableEvent(0, EB_ToLeaveCarcass);

	m_stateTimer    = 0.0f;
	m_stateDuration = 0.0f;
	m_nextState     = DAMAGUMO_NULL;

	m_targetPosition = m_homePosition;
	_2D8             = 0.0f;
	_2DC             = 0;
	m_isSmoking      = false;

	setupIKSystem();
	setupShadowSystem();
	setupCollision();
	setupEffect();
	resetBossAppearBGM();
	shadowMgr->delShadow(this);
	startMaterialAnimation();

	m_fsm->start(this, DAMAGUMO_Stay, nullptr);

	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		m_fsm->transit(this, DAMAGUMO_Land, nullptr);
	} else {
		doAnimationCullingOff();
	}
}

/*
 * --INFO--
 * Address:	802A5AC4
 * Size:	000050
 */
void Obj::doUpdate()
{
	m_fsm->exec(this);
	updatePinchLife();
	updateIKSystem();
}

/*
 * --INFO--
 * Address:	802A5B14
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802A5B48
 * Size:	000098
 */
void Obj::doAnimationCullingOff()
{
	m_curAnim->m_isPlaying = false;
	doAnimationUpdateAnimator();
	doAnimationIKSystem();

	PSMTXCopy(m_objMatrix.m_matrix.mtxView, m_model->m_j3dModel->m_posMtx);
	m_model->m_j3dModel->calc();

	m_collTree->update();

	doAnimationShadowSystem();
	updateMaterialAnimation();
	finishAnimationIKSystem();
}

/*
 * --INFO--
 * Address:	802A5BE0
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802A5BE4
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802A5C04
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	m_fsm = fsm;
	m_fsm->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	802A5C50
 * Size:	00003C
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.m_position                  = m_position;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	param.m_boundingSphere.m_radius   = 0.1f;
	param.m_size                      = 0.1f;
}

/*
 * --INFO--
 * Address:	802A5C8C
 * Size:	000050
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	} else {
		return (u8)(getStateID() == DAMAGUMO_Land);
	}
}

/*
 * --INFO--
 * Address:	802A5CDC
 * Size:	00009C
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && collpart && creature->isPiki() && creature->isStickTo()) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802A5D78
 * Size:	0001AC
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (!isEvent(0, EB_IsBittered)) {
		Creature* creature = event.m_collidingCreature;
		if (creature && event.m_collisionObj && creature->isAlive() && creature->m_bounceTriangle) {
			if (creature->isNavi() || creature->isPiki()) {
				if (isCollisionCheck(event.m_hitPart)) {
					InteractPress press(this, C_PARMS->m_general.m_attackDamage.m_value, nullptr);
					creature->stimulate(press);
				}
			} else if (creature->isTeki() && isCollisionCheck(event.m_hitPart)) {
				InteractAttack attack(this, 500.0f, event.m_collisionObj);
				creature->stimulate(attack);
			}
		}
	}

	setCollEvent(event);
}

/*
 * --INFO--
 * Address:	802A5F24
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
}

/*
 * --INFO--
 * Address:	802A5F58
 * Size:	00005C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, -1000.0f, nullptr);
	if (m_isSmoking) {
		startPinchJointEffect();
	}
}

/*
 * --INFO--
 * Address:	802A5FB4
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802A5FD4
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802A5FF4
 * Size:	000060
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	*position = m_model->getJoint("kosi")->getWorldMatrix()->getBasis(3);
	position->y -= 30.0f;
}

/*
 * --INFO--
 * Address:	802A6054
 * Size:	000014
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	velocity->z = 0.0f;
	velocity->y = 0.0f;
	velocity->x = 0.0f;
}

/*
 * --INFO--
 * Address:	802A6068
 * Size:	000298
 */
void Obj::getTargetPosition()
{
	if (sqrDistanceXZ(m_position, m_homePosition) < SQUARE(*C_PARMS->m_general.m_territoryRadius())) {
		ConditionNotStickClient condition(this);
		Piki* piki = EnemyFunc::getNearestPikmin(this, C_PARMS->m_general.m_viewAngle.m_value, C_PARMS->m_general.m_sightRadius.m_value,
		                                         nullptr, &condition);
		if (piki) {
			m_targetPosition = piki->getPosition();
		} else if (sqrDistanceXZ(m_position, m_targetPosition) < 625.0f) {
			f32 range    = (C_PARMS->m_general.m_territoryRadius.m_value - C_PARMS->m_general.m_homeRadius.m_value);
			f32 randDist = C_PARMS->m_general.m_homeRadius.m_value + randWeightFloat(range);
			f32 ang2     = JMath::atanTable_.atan2_(m_position.x - m_homePosition.x, m_position.z - m_homePosition.z);
			f32 ang1     = randWeightFloat(PI);

			f32 ang3      = HALF_PI;
			f32 randAngle = ang2 + ang1 + ang3; // dumb fix for regswap

			f32 sinTheta       = pikmin2_sinf(randAngle);
			m_targetPosition.x = randDist * pikmin2_sinf(randAngle) + m_homePosition.x;
			m_targetPosition.y = m_homePosition.y;
			m_targetPosition.z = randDist * pikmin2_cosf(randAngle) + m_homePosition.z;
		}
	} else {
		m_targetPosition = m_homePosition;
	}

	setIKSystemTargetPosition(m_targetPosition);
}

/*
 * --INFO--
 * Address:	802A6300
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	m_ikSystemMgr    = new IKSystemMgr;
	m_ikSystemParms  = new IKSystemParms;
	m_groundCallBack = new DamagumoGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802A640C
 * Size:	000124
 */
void Obj::setupIKSystem()
{
	m_ikSystemMgr->init(this, nullptr);

	char* joints[] = { "rhand1jnt", "rhand2jnt", "rhand3jnt", "lhand1jnt", "lhand2jnt", "lhand3jnt",
		               "rfoot1jnt", "rfoot2jnt", "rfoot3jnt", "lfoot1jnt", "lfoot2jnt", "lfoot3jnt" };

	m_ikSystemMgr->setupJoint(m_model, 0, &joints[0]);
	m_ikSystemMgr->setupJoint(m_model, 1, &joints[3]);
	m_ikSystemMgr->setupJoint(m_model, 2, &joints[6]);
	m_ikSystemMgr->setupJoint(m_model, 3, &joints[9]);
	m_ikSystemMgr->setupCallBack(m_model, "rhand3jnt");

	setIKParameter();
	m_ikSystemMgr->setParameters(m_ikSystemParms);
	m_ikSystemMgr->m_jointGroundCallBack = m_groundCallBack;
}

/*
 * --INFO--
 * Address:	802A6530
 * Size:	000090
 */
void Obj::setIKParameter()
{
	m_ikSystemParms->_28            = 0.67f;
	m_ikSystemParms->_38            = C_PARMS->m_general.m_rotationalSpeed.m_value;
	m_ikSystemParms->_2C            = C_PARMS->m_general.m_moveSpeed.m_value;
	m_ikSystemParms->_14            = C_PROPERPARMS.m_fp01.m_value;
	m_ikSystemParms->_18            = C_PROPERPARMS.m_fp02.m_value;
	m_ikSystemParms->_1C            = C_PROPERPARMS.m_fp03.m_value;
	m_ikSystemParms->_20            = C_PROPERPARMS.m_fp05.m_value;
	m_ikSystemParms->_24            = C_PROPERPARMS.m_fp04.m_value;
	m_ikSystemParms->m_heightOffset = C_PROPERPARMS.m_fp06.m_value;
}

/*
 * --INFO--
 * Address:	802A65C0
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { m_ikSystemMgr->m_targetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802A65E0
 * Size:	000060
 */
void Obj::updateIKSystem()
{
	m_ikSystemMgr->doUpdate();
	m_position   = Vector3f(m_ikSystemMgr->_38);
	m_faceDir    = m_ikSystemMgr->m_faceDir;
	m_rotation.y = m_faceDir;
}

/*
 * --INFO--
 * Address:	802A6640
 * Size:	000060
 */
void Obj::doAnimationIKSystem()
{
	m_ikSystemMgr->setAnimationCallBack();
	Vector3f translation = Vector3f(m_ikSystemMgr->m_traceCentrePosition);
	m_objMatrix.makeSRT(m_scale, m_rotation, translation);
}

/*
 * --INFO--
 * Address:	802A66A0
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { m_ikSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802A66C4
 * Size:	000024
 */
void Obj::startProgramedIK() { m_ikSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802A66E8
 * Size:	000024
 */
void Obj::startIKMotion() { m_ikSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802A670C
 * Size:	000024
 */
void Obj::finishIKMotion() { m_ikSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802A6730
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { m_ikSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802A6754
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return m_ikSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802A6778
 * Size:	000024
 */
void Obj::startBlendMotion() { m_ikSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802A679C
 * Size:	000024
 */
void Obj::finishBlendMotion() { m_ikSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802A67C0
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return m_ikSystemMgr->m_traceCentrePosition; }

/*
 * --INFO--
 * Address:	802A67E0
 * Size:	000024
 */
bool Obj::isCollisionCheck(CollPart* collpart) { return m_ikSystemMgr->isCollisionCheck(collpart); }

/*
 * --INFO--
 * Address:	802A6804
 * Size:	000048
 */
void Obj::createShadowSystem() { m_shadowMgr = new DamagumoShadowMgr(this); }

/*
 * --INFO--
 * Address:	802A684C
 * Size:	000074
 */
void Obj::setupShadowSystem()
{
	m_shadowMgr->init();
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m_shadowMgr->setJointPosPtr(i, j, &m_jointPositions[i][j]);
		}
	}
}

/*
 * --INFO--
 * Address:	802A68C0
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { m_shadowMgr->update(); }

/*
 * --INFO--
 * Address:	802A68E4
 * Size:	00004C
 */
void Obj::createMaterialAnimation() { m_matLoopAnimator = new Sys::MatLoopAnimator[2]; }

/*
 * --INFO--
 * Address:	802A6930
 * Size:	000060
 */
void Obj::startMaterialAnimation()
{
	m_matLoopAnimator[0].start(static_cast<Mgr*>(m_mgr)->m_texAnimation);
	m_matLoopAnimator[1].start(static_cast<Mgr*>(m_mgr)->m_tevRegAnimation);
}

/*
 * --INFO--
 * Address:	802A6990
 * Size:	00013C
 */
void Obj::updateMaterialAnimation()
{
	if (_2DC) {
		f32 maxFrame;
		f32 currFrame = m_matLoopAnimator[1]._08;
		if (m_matLoopAnimator[1].m_animation) {
			maxFrame = m_matLoopAnimator[1].m_animation->getFrameMax();
		} else {
			maxFrame = 0.0f;
		}
		f32 factor = (1.0f) / (maxFrame - 50.0f);

		m_matLoopAnimator[0].animate(0.0f);

		if (currFrame < maxFrame) {
			m_matLoopAnimator[1].animate(30.0f);
		} else {
			m_matLoopAnimator[1].animate(0.0f);
		}

		_2D8 -= factor;
		if (_2D8 < 0.0f) {
			_2D8 = 0.0f;
		}
	} else {
		m_matLoopAnimator[0].animate(30.0f);
		m_matLoopAnimator[1].setCurrentFrame((1.0f - m_health / C_PARMS->m_general.m_health.m_value) * 50.0f);
		m_matLoopAnimator[1].animate(0.0f);
	}
}

/*
 * --INFO--
 * Address:	802A6ACC
 * Size:	000090
 */
void Obj::setupCollision()
{
	u32 labels[] = { 'lft1', 'lht1', 'rft1', 'rht1' };
	for (int i = 0; i < 4; i++) {
		CollPart* collpart = m_collTree->getCollPart(labels[i]);
		if (collpart) {
			collpart->makeTubeTree();
		}
	}
}

/*
 * --INFO--
 * Address:	802A6B5C
 * Size:	00008C
 */
void Obj::createItemAndEnemy()
{
	if (m_pelletDropCode.isNull()) {
		ShijimiChou::Mgr* specMgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (specMgr) {
			EnemyBirthArg birthArg;
			birthArg.m_faceDir = m_faceDir;
			getThrowupItemPosition(&birthArg.m_position);
			specMgr->createGroupByBigFoot(birthArg, 25);
		}
	}
}

/*
 * --INFO--
 * Address:	802A6BE8
 * Size:	0000C8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(4);
}

/*
 * --INFO--
 * Address:	802A6CB0
 * Size:	0000FC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);

	if (m_stuckPikminCount) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/*
 * --INFO--
 * Address:	802A6DAC
 * Size:	0000C4
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);
	soundObj->setAppearFlag(false);
	soundObj->_FF = 1;
}

/*
 * --INFO--
 * Address:	802A6E70
 * Size:	0000BC
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);
	soundObj->setAppearFlag(true);
}

/*
 * --INFO--
 * Address:	802A6F2C
 * Size:	0005BC
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]  = new efx::TDamaFoot;
		m_footWFX[i] = new efx::TDamaFootw;

		for (int j = 0; j < 3; j++) {
			m_hahenFX[i][j]     = new efx::TDamaHahen;
			m_deadElecAFX[i][j] = new efx::TDamaDeadElecA;
		}

		for (int j = 0; j < 2; j++) {
			m_deadElecBFX[i][j]  = new efx::TDamaDeadElecB;
			m_deadHahenAFX[i][j] = new efx::TDamaDeadHahenA;
		}

		m_deadHahenBFX[i] = new efx::TDamaDeadHahenB;
	}

	for (int i = 0; i < 3; i++) {
		m_smokeFX[i] = new efx::TDamaSmoke;
	}

	m_deadHahenC1FX = new efx::TDamaDeadHahenC1;
	m_deadHahenC2FX = new efx::TDamaDeadHahenC2;
}

/*
 * --INFO--
 * Address:	802A756C
 * Size:	000184
 */
void Obj::setupEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	li       r27, 0
	mr       r31, r26
	mr       r30, r26
	mr       r29, r26
	mr       r28, r26

lbl_802A7594:
	lwz      r3, 0x3b0(r30)
	addi     r4, r31, 0x314
	bl       "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
	lwz      r3, 0x3c0(r30)
	addi     r8, r31, 0x314
	li       r6, 1
	li       r0, 1
	stw      r8, 0x10(r3)
	mulli    r4, r6, 0xc
	addi     r7, r31, 0x2f0
	lwz      r9, 0x3dc(r29)
	addi     r27, r27, 1
	mulli    r5, r0, 0xc
	li       r6, 2
	addi     r10, r4, 0x2f0
	stw      r7, 0x10(r9)
	mr       r3, r7
	add      r10, r31, r10
	stw      r10, 0x14(r9)
	mulli    r4, r6, 0xc
	addi     r11, r5, 0x2f0
	lwz      r9, 0x40c(r29)
	li       r0, 2
	mulli    r5, r0, 0xc
	li       r6, 3
	stw      r7, 0x10(r9)
	addi     r7, r31, 0x2fc
	add      r11, r31, r11
	stw      r10, 0x14(r9)
	addi     r10, r4, 0x2f0
	addi     r0, r31, 0x308
	lwz      r9, 0x3e0(r29)
	add      r10, r31, r10
	mulli    r4, r6, 0xc
	cmpwi    r27, 4
	stw      r7, 0x10(r9)
	stw      r10, 0x14(r9)
	lwz      r9, 0x410(r29)
	stw      r7, 0x10(r9)
	addi     r7, r31, 0x308
	stw      r10, 0x14(r9)
	addi     r10, r4, 0x2f0
	add      r10, r31, r10
	lwz      r9, 0x3e4(r29)
	stw      r7, 0x10(r9)
	stw      r10, 0x14(r9)
	lwz      r9, 0x414(r29)
	addi     r29, r29, 0xc
	stw      r7, 0x10(r9)
	stw      r10, 0x14(r9)
	lwz      r4, 0x43c(r28)
	stw      r11, 0x10(r4)
	lwz      r4, 0x45c(r28)
	stw      r3, 0x10(r4)
	addi     r3, r31, 0x2fc
	stw      r11, 0x14(r4)
	addi     r11, r5, 0x2f0
	add      r11, r31, r11
	addi     r31, r31, 0x30
	lwz      r4, 0x440(r28)
	stw      r11, 0x10(r4)
	lwz      r4, 0x460(r28)
	addi     r28, r28, 8
	stw      r3, 0x10(r4)
	stw      r11, 0x14(r4)
	lwz      r3, 0x47c(r30)
	addi     r30, r30, 4
	stw      r0, 0x10(r3)
	stw      r8, 0x14(r3)
	blt      lbl_802A7594
	lwz      r3, 0x174(r26)
	addi     r4, r2, lbl_8051BF48@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x48c(r26)
	addi     r4, r2, lbl_8051BF50@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r26)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x490(r26)
	stw      r3, 0x10(r4)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A76F0
 * Size:	0001F0
 */
void Obj::createOnGroundEffect(int p1, WaterBox* wbox)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r4
	mulli    r31, r30, 0x30
	stw      r29, 0x64(r1)
	mr       r29, r3
	stw      r28, 0x60(r1)
	add      r3, r29, r31
	lfs      f2, 0x314(r3)
	stfs     f2, 0x38(r1)
	lfs      f1, 0x318(r3)
	stfs     f1, 0x3c(r1)
	lfs      f0, 0x31c(r3)
	stfs     f0, 0x40(r1)
	beq      lbl_802A77E4
	mr       r3, r5
	lwz      r12, 0(r5)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx10TDamaWalkw@ha
	li       r8, 0x28
	addi     r9, r4, __vt__Q23efx3Arg@l
	li       r7, 0x29
	li       r6, 0x2a
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q23efx10TDamaWalkw@l
	addi     r3, r1, 0x44
	stfs     f2, 0x3c(r1)
	addi     r4, r1, 0x28
	stw      r9, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	sth      r8, 0x48(r1)
	sth      r7, 0x4a(r1)
	sth      r6, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r5, 0x58(r1)
	stw      r0, 0x44(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	addi     r4, r31, 0x314
	li       r3, 0x3849
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802A7848

lbl_802A77E4:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9TDamaWalk@ha
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx9TDamaWalk@l
	li       r7, 0x2b
	li       r6, 0x2c
	stw      r4, 0x18(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x18
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	sth      r7, 0xc(r1)
	sth      r6, 0xe(r1)
	stw      r5, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg

lbl_802A7848:
	lbz      r0, 0x2dd(r29)
	cmplwi   r0, 0
	beq      lbl_802A7888
	mulli    r0, r30, 0xc
	li       r28, 0
	add      r30, r29, r0

lbl_802A7860:
	lwz      r3, 0x3dc(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 3
	blt      lbl_802A7860

lbl_802A7888:
	addi     r4, r31, 0x314
	li       r3, 0x5837
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec
	lwz      r3, cameraMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 6
	li       r6, 2
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A78E0
 * Size:	000128
 */
void Obj::createOffGroundEffect(int p1, WaterBox* wbox)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_802A7920
	slwi     r0, r4, 2
	li       r4, 0
	add      r3, r31, r0
	lwz      r3, 0x3c0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802A7940

lbl_802A7920:
	slwi     r0, r4, 2
	li       r4, 0
	add      r3, r31, r0
	lwz      r3, 0x3b0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802A7940:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x200(r31)
	lfs      f1, 0x104(r3)
	lfs      f0, lbl_8051BF58@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802A798C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5847
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802A79F4

lbl_802A798C:
	lfs      f0, lbl_8051BF5C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802A79C8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5846
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802A79F4

lbl_802A79C8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5845
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802A79F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A7A08
 * Size:	0001A0
 */
void Obj::startPinchJointEffect()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	addi     r30, r1, 0x18
	lfd      f31, lbl_8051BF10@sda21(r2)
	lfs      f30, lbl_8051BEF8@sda21(r2)
	mr       r29, r3
	lfs      f29, lbl_8051BF60@sda21(r2)
	mr       r31, r30
	li       r27, 0
	lis      r28, 0x4330

lbl_802A7A50:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x2c(r1)
	cmpwi    r27, 3
	stw      r28, 0x28(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f30
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r3, 0x34(r1)
	addi     r0, r3, 1
	stw      r0, 0(r31)
	addi     r31, r31, 4
	blt      lbl_802A7A50
	li       r5, 0
	li       r4, 1
	li       r3, 2
	li       r0, 3
	addi     r31, r1, 8
	stw      r5, 8(r1)
	lfd      f29, lbl_8051BF10@sda21(r2)
	mr       r27, r31
	stw      r4, 0xc(r1)
	li       r26, 0
	lfs      f30, lbl_8051BEF8@sda21(r2)
	lis      r28, 0x4330
	stw      r3, 0x10(r1)
	lfs      f31, lbl_8051BF64@sda21(r2)
	stw      r0, 0x14(r1)

lbl_802A7AD0:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r26, r26, 1
	stw      r0, 0x34(r1)
	cmpwi    r26, 4
	lwz      r4, 0(r27)
	stw      r28, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r31, r3
	stw      r0, 0(r27)
	addi     r27, r27, 4
	stwx     r4, r31, r3
	blt      lbl_802A7AD0
	mr       r27, r29
	li       r26, 0

lbl_802A7B28:
	lwz      r3, 0(r31)
	li       r4, 0
	lwz      r0, 0(r30)
	mulli    r5, r3, 0x30
	lwz      r3, 0x3d0(r27)
	mulli    r0, r0, 0xc
	add      r5, r5, r0
	addi     r0, r5, 0x2f0
	add      r0, r29, r0
	stw      r0, 0x10(r3)
	lwz      r3, 0x3d0(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r26, r26, 1
	addi     r31, r31, 4
	cmpwi    r26, 3
	addi     r27, r27, 4
	addi     r30, r30, 4
	blt      lbl_802A7B28
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A7BA8
 * Size:	000058
 */
void Obj::finishPinchJointEffect()
{
	for (int i = 0; i < 3; i++) {
		m_smokeFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802A7C00
 * Size:	0001C0
 */
void Obj::startDeadEffect()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	stw      r0, 0x64(r1)
	lis      r4, __vt__Q23efx8TSimple1@ha
	stmw     r18, 0x28(r1)
	mr       r27, r3
	lis      r3, __vt__Q23efx13TDamaDeadBomb@ha
	addi     r21, r6, __vt__Q23efx3Arg@l
	mr       r31, r27
	mr       r30, r27
	mr       r29, r27
	mr       r28, r27
	addi     r22, r5, __vt__Q23efx5TBase@l
	addi     r23, r4, __vt__Q23efx8TSimple1@l
	addi     r26, r3, __vt__Q23efx13TDamaDeadBomb@l
	li       r19, 0

lbl_802A7C48:
	addi     r20, r31, 0xc
	li       r18, 1
	li       r24, 0x1c
	li       r25, 0

lbl_802A7C58:
	stw      r21, 0x14(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	lfs      f0, 0x2f0(r20)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x2f4(r20)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x2f8(r20)
	stw      r22, 8(r1)
	stw      r23, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r24, 0xc(r1)
	stw      r25, 0x10(r1)
	stw      r26, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	addi     r18, r18, 1
	addi     r20, r20, 0xc
	cmpwi    r18, 3
	blt      lbl_802A7C58
	li       r18, 0
	mr       r20, r30

lbl_802A7CAC:
	lwz      r3, 0x40c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1
	addi     r20, r20, 4
	cmpwi    r18, 3
	blt      lbl_802A7CAC
	li       r18, 0
	mr       r20, r29

lbl_802A7CDC:
	lwz      r3, 0x43c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x45c(r20)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r18, r18, 1
	addi     r20, r20, 4
	cmpwi    r18, 2
	blt      lbl_802A7CDC
	lwz      r3, 0x47c(r28)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r19, r19, 1
	addi     r30, r30, 0xc
	cmpwi    r19, 4
	addi     r29, r29, 8
	addi     r28, r28, 4
	addi     r31, r31, 0x30
	blt      lbl_802A7C48
	lwz      r3, 0x48c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x490(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r21, 0
	mr       r20, r27

lbl_802A7D88:
	lwz      r3, 0x3d0(r20)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r21, r21, 1
	addi     r20, r20, 4
	cmpwi    r21, 3
	blt      lbl_802A7D88
	lmw      r18, 0x28(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A7DC0
 * Size:	000250
 * Needs fixing.
 */
void Obj::updatePinchLife()
{
	if (!isAlive()) {
		return;
	}

	f32 healthRatio = m_health / C_PARMS->m_general.m_health.m_value;
	if (m_isSmoking) {
		if (healthRatio > 0.35f) {
			for (int i = 0; i < 3; i++) {
				m_smokeFX[i]->fade();
			}

			m_isSmoking = false;
		}
	} else if (healthRatio < 0.35f) {
		f32 values[3];

		for (int i = 0; i < 3; i++) {
			values[i] = randWeightFloat(2.0f);
		}

		for (int i = 0; i < 3; i++) {
			*m_smokeFX[i]->m_position = m_jointPositions[i][3] * values[i];
		}

		m_isSmoking = true;
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_SMOKE, 0);
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A7FE4
	lwz      r3, 0xc0(r29)
	lbz      r0, 0x2dd(r29)
	lfs      f1, 0x200(r29)
	lfs      f0, 0x104(r3)
	cmplwi   r0, 0
	fdivs    f1, f1, f0
	beq      lbl_802A7E60
	lfs      f0, lbl_8051BF5C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802A7FE4
	li       r28, 0
	mr       r27, r29
	stb      r28, 0x2dd(r29)

lbl_802A7E38:
	lwz      r3, 0x3d0(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r27, r27, 4
	cmpwi    r28, 3
	blt      lbl_802A7E38
	b        lbl_802A7FE4

lbl_802A7E60:
	lfs      f0, lbl_8051BF5C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802A7FE4
	li       r0, 1
	addi     r30, r1, 8
	stb      r0, 0x2dd(r29)
	mr       r31, r30
	lfd      f31, lbl_8051BF10@sda21(r2)
	li       r27, 0
	lfs      f30, lbl_8051BEF8@sda21(r2)
	lis      r28, 0x4330
	lfs      f29, lbl_8051BF60@sda21(r2)

lbl_802A7E90:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x2c(r1)
	cmpwi    r27, 3
	stw      r28, 0x28(r1)
	lfd      f0, 0x28(r1)
	fsubs    f0, f0, f31
	fdivs    f0, f0, f30
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r3, 0x34(r1)
	addi     r0, r3, 1
	stw      r0, 0(r31)
	addi     r31, r31, 4
	blt      lbl_802A7E90
	li       r27, 0
	li       r4, 1
	li       r3, 2
	li       r0, 3
	addi     r31, r1, 0x14
	stw      r27, 0x14(r1)
	lfd      f29, lbl_8051BF10@sda21(r2)
	mr       r26, r31
	stw      r4, 0x18(r1)
	lis      r28, 0x4330
	lfs      f30, lbl_8051BEF8@sda21(r2)
	stw      r3, 0x1c(r1)
	lfs      f31, lbl_8051BF64@sda21(r2)
	stw      r0, 0x20(r1)

lbl_802A7F0C:
	bl       rand
	xoris    r0, r3, 0x8000
	addi     r27, r27, 1
	stw      r0, 0x34(r1)
	cmpwi    r27, 4
	lwz      r4, 0(r26)
	stw      r28, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f29
	fdivs    f0, f0, f30
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	slwi     r3, r0, 2
	lwzx     r0, r31, r3
	stw      r0, 0(r26)
	addi     r26, r26, 4
	stwx     r4, r31, r3
	blt      lbl_802A7F0C
	mr       r26, r29
	li       r28, 0

lbl_802A7F64:
	lwz      r3, 0(r31)
	li       r4, 0
	lwz      r0, 0(r30)
	mulli    r5, r3, 0x30
	lwz      r3, 0x3d0(r26)
	mulli    r0, r0, 0xc
	add      r5, r5, r0
	addi     r0, r5, 0x2f0
	add      r0, r29, r0
	stw      r0, 0x10(r3)
	lwz      r3, 0x3d0(r26)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1
	addi     r31, r31, 4
	cmpwi    r28, 3
	addi     r26, r26, 4
	addi     r30, r30, 4
	blt      lbl_802A7F64
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5844
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802A7FE4:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802A8010
 * Size:	000198
 */
void Obj::effectDrawOn()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]->endDemoDrawOn();
		m_footWFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 3; i++) {
		m_smokeFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			m_hahenFX[i][j]->endDemoDrawOn();
			m_deadElecAFX[i][j]->endDemoDrawOn();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			m_deadElecBFX[i][j]->endDemoDrawOn();
			m_deadHahenAFX[i][j]->endDemoDrawOn();
		}
	}

	for (int i = 0; i < 4; i++) {
		m_deadHahenBFX[i]->endDemoDrawOn();
	}

	m_deadHahenC1FX->endDemoDrawOn();
	m_deadHahenC2FX->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	802A81A8
 * Size:	000198
 */
void Obj::effectDrawOff()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]->startDemoDrawOff();
		m_footWFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 3; i++) {
		m_smokeFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			m_hahenFX[i][j]->startDemoDrawOff();
			m_deadElecAFX[i][j]->startDemoDrawOff();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			m_deadElecBFX[i][j]->startDemoDrawOff();
			m_deadHahenAFX[i][j]->startDemoDrawOff();
		}
	}

	for (int i = 0; i < 4; i++) {
		m_deadHahenBFX[i]->startDemoDrawOff();
	}

	m_deadHahenC1FX->startDemoDrawOff();
	m_deadHahenC2FX->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	802A8340
 * Size:	000038
 */
void Obj::addShadowScale()
{
	if (_2D8 < 1.0f) {
		_2D8 += 2.0f * sys->m_deltaTime;
		if (_2D8 > 1.0f) {
			_2D8 = 1.0f;
		}
	}
}

} // namespace Damagumo

/*
 * --INFO--
 * Address:	802A88F4
 * Size:	000088
 */
bool ConditionNotStickClient::satisfy(Piki* piki)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A8960
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802A8960
	lwz      r3, 0xf4(r31)
	lwz      r0, 4(r30)
	cmplw    r3, r0
	beq      lbl_802A8960
	li       r3, 1
	b        lbl_802A8964

lbl_802A8960:
	li       r3, 0

lbl_802A8964:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
