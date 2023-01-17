#include "Game/Entities/BigFoot.h"
#include "Game/EnemyFunc.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/IKSystemBase.h"
#include "Game/ConditionNotStick.h"
#include "Game/Entities/TamagoMushi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PS.h"
#include "nans.h"
#include "Dolphin/rand.h"

namespace Game {
namespace BigFoot {

/*
 * --INFO--
 * Address:	802C7EF0
 * Size:	000024
 */
void BigFootGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { m_obj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802C7F14
 * Size:	000024
 */
void BigFootGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { m_obj->createOffGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802C7F38
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
 * Address:	802C80A4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802C80A8
 * Size:	000148
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	EnemyBase::hardConstraintOn();
	disableEvent(0, EB_IsPlatformCollsAllowed);
	disableEvent(0, EB_ToLeaveCarcass);
	m_stateTimer     = 0.0f;
	m_nextState      = BIGFOOT_NULL;
	m_targetPosition = m_homePosition;
	m_shadowScale    = 0.0f;
	_2DC             = false;
	m_isSmoking      = false;
	resetFlickWalkTimeMax();
	m_isEnraged = false;
	setupIKSystem();
	setupShadowSystem();
	setupCollision();
	setupEffect();
	startFurEffect();
	resetBossAppearBGM();
	shadowMgr->delShadow(this);
	startMaterialAnimation();
	m_fsm->start(this, BIGFOOT_Stay, nullptr);
	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		m_fsm->transit(this, BIGFOOT_Land, nullptr); // land immediately if in piklopedia mode
	} else {
		doAnimationCullingOff();
	}
}

/*
 * --INFO--
 * Address:	802C81F0
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishFurEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802C8234
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
 * Address:	802C8284
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802C82B8
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
 * Address:	802C8350
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802C8354
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802C8374
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
 * Address:	802C83C0
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
 * Address:	802C83FC
 * Size:	000050
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	} else {
		return (u8)(getStateID() == 2);
	}
}

/*
 * --INFO--
 * Address:	802C844C
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
 * Address:	802C84E8
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
 * Address:	802C8694
 * Size:	000044
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
	finishFurEffect();
	startStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C86D8
 * Size:	00006C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, -1000.0f, nullptr);
	if (m_isSmoking) {
		startPinchJointEffect();
	}

	startFurEffect();
	finishStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C8744
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802C8764
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802C8784
 * Size:	000060
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	Matrixf* mat = m_model->getJoint("kosi")->getWorldMatrix();
	*position    = mat->getBasis(3);
	position->y -= 100.0f;
}

/*
 * --INFO--
 * Address:	802C87E4
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
 * Address:	802C87F8
 * Size:	00008C
 */
void Obj::resetFlickWalkTimeMax()
{
	f32 travelTime = *C_PROPERPARMS.m_normalTravelTime();
	f32 halfTime   = *C_PROPERPARMS.m_normalTravelTime() * 0.5f;

	m_flickWalkTimeMax = halfTime + randWeightFloat(travelTime);
}

/*
 * --INFO--
 * Address:	802C8884
 * Size:	00008C
 */
void Obj::setFlickWalkTimeMax()
{
	f32 travelTime = *C_PROPERPARMS.m_postShakeTravelTime();
	f32 halfTime   = *C_PROPERPARMS.m_postShakeTravelTime() * 0.5f;

	m_flickWalkTimeMax = halfTime + randWeightFloat(travelTime);
}

/*
 * --INFO--
 * Address:	802C8910
 * Size:	0003F0
 */
void Obj::getTargetPosition()
{
	if (sqrDistanceXZ(m_position, m_homePosition) < SQUARE(*C_PARMS->m_general.m_territoryRadius())) {
		if (m_isEnraged) {
			f32 adjustAngle = (randWeightFloat(2.0f * m_ikSystemParms->_34) - m_ikSystemParms->_34) * DEG2RAD * PI;
			f32 randAngle   = m_faceDir + adjustAngle;
			// different stomping behavior if enraged
			m_targetPosition.x = *C_PROPERPARMS.m_movementOffset() * pikmin2_sinf(randAngle) + m_position.x;
			m_targetPosition.y = m_position.y;
			m_targetPosition.z = *C_PROPERPARMS.m_movementOffset() * pikmin2_cosf(randAngle) + m_position.z;

		} else {
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
				// they're both sin??????? -EpochFlame
				m_targetPosition.x = randDist * pikmin2_sinf(randAngle) + m_homePosition.x;
				m_targetPosition.y = m_homePosition.y;
				m_targetPosition.z = randDist * pikmin2_sinf(randAngle) + m_homePosition.z;
			}
		}
	} else {
		m_targetPosition = m_homePosition;
	}

	setIKSystemTargetPosition(m_targetPosition);
}

/*
 * --INFO--
 * Address:	802C8D00
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	m_ikSystemMgr    = new IKSystemMgr;
	m_ikSystemParms  = new IKSystemParms;
	m_groundCallBack = new BigFootGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802C8E0C
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
 * Address:	802C8F30
 * Size:	000124
 */
void Obj::setIKParameter()
{
	m_ikSystemParms->_00 = 12;
	m_ikSystemParms->_04 = 10.0f;
	m_ikSystemParms->_08 = 40.0f;
	m_ikSystemParms->_28 = 0.5f;
	m_ikSystemParms->_38 = C_PARMS->m_general.m_rotationalSpeed.m_value;
	m_ikSystemParms->_2C = C_PARMS->m_general.m_moveSpeed.m_value;

	if (m_isEnraged) {
		m_ikSystemParms->_14            = C_PROPERPARMS.m_baseCoefficients.m_value;
		m_ikSystemParms->_18            = C_PROPERPARMS.m_fp12.m_value;
		m_ikSystemParms->_1C            = C_PROPERPARMS.m_fp13.m_value;
		m_ikSystemParms->_20            = C_PROPERPARMS.m_fp15.m_value;
		m_ikSystemParms->_24            = C_PROPERPARMS.m_fp14.m_value;
		m_ikSystemParms->m_heightOffset = C_PROPERPARMS.m_fp16.m_value;
	} else {
		m_ikSystemParms->_14            = C_PROPERPARMS.m_baseCoefficient.m_value;
		m_ikSystemParms->_18            = C_PROPERPARMS.m_raiseSlowdownFactor.m_value;
		m_ikSystemParms->_1C            = C_PROPERPARMS.m_downwardAccelFactor.m_value;
		m_ikSystemParms->_20            = C_PROPERPARMS.m_maxDecelFactor.m_value;
		m_ikSystemParms->_24            = C_PROPERPARMS.m_minDecelFactor.m_value;
		m_ikSystemParms->m_heightOffset = C_PROPERPARMS.m_legSwing.m_value;
	}
}

/*
 * --INFO--
 * Address:	802C9054
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { m_ikSystemMgr->m_targetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802C9074
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
 * Address:	802C90D4
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
 * Address:	802C9134
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { m_ikSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802C9158
 * Size:	000024
 */
void Obj::startProgramedIK() { m_ikSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802C917C
 * Size:	000024
 */
void Obj::startIKMotion() { m_ikSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802C91A0
 * Size:	000024
 */
void Obj::finishIKMotion() { m_ikSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802C91C4
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { m_ikSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C91E8
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return m_ikSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C920C
 * Size:	000024
 */
void Obj::startBlendMotion() { m_ikSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802C9230
 * Size:	000024
 */
void Obj::finishBlendMotion() { m_ikSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802C9254
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return m_ikSystemMgr->m_traceCentrePosition; }

/*
 * --INFO--
 * Address:	802C9274
 * Size:	000024
 */
bool Obj::isCollisionCheck(CollPart* collpart) { return m_ikSystemMgr->isCollisionCheck(collpart); }

/*
 * --INFO--
 * Address:	802C9298
 * Size:	000048
 */
void Obj::createShadowSystem() { m_shadowMgr = new BigFootShadowMgr(this); }

/*
 * --INFO--
 * Address:	802C92E0
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
 * Address:	802C9354
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { m_shadowMgr->update(); }

/*
 * --INFO--
 * Address:	802C9378
 * Size:	000054
 */
void Obj::createMaterialAnimation() { m_matLoopAnimator = new Sys::MatLoopAnimator(); }

/*
 * --INFO--
 * Address:	802C93CC
 * Size:	00003C
 */
void Obj::startMaterialAnimation()
{
	Mgr* mgr = static_cast<Mgr*>(m_mgr);
	m_matLoopAnimator->start((Sys::MatBaseAnimation*)mgr->m_tevRegAnimation); // silly cast
}

/*
 * --INFO--
 * Address:	802C9408
 * Size:	0000F0
 */
void Obj::updateMaterialAnimation()
{
	if (_2DC) {
		f32 maxFrame;
		f32 currFrame = m_matLoopAnimator[0]._08;
		if (m_matLoopAnimator[0].m_animation) {
			maxFrame = m_matLoopAnimator[0].m_animation->getFrameMax();
		} else {
			maxFrame = 0.0f;
		}

		f32 factor = (1.0f) / (maxFrame - 50.0f);

		if (currFrame < maxFrame) {
			m_matLoopAnimator[0].animate(30.0f);
		} else {
			m_matLoopAnimator[0].animate(0.0f);
		}

		m_shadowScale -= factor;
		if (m_shadowScale < 0.0f) {
			m_shadowScale = 0.0f;
		}
	} else {
		m_matLoopAnimator[0].setCurrentFrame((1.0f - m_health / C_PARMS->m_general.m_health.m_value) * 50.0f);
		m_matLoopAnimator[0].animate(0.0f);
	}
}

/*
 * --INFO--
 * Address:	802C94F8
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
 * Address:	802C9588
 * Size:	0000A4
 */
void Obj::createItemAndEnemy()
{
	if (m_pelletDropCode.isNull()) {
		TamagoMushi::Mgr* mititeMgr = static_cast<TamagoMushi::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_TamagoMushi));
		if (mititeMgr) {
			EnemyBirthArg birthArg;
			birthArg.m_faceDir = m_faceDir;
			getThrowupItemPosition(&birthArg.m_position);
			Vector3f velocity = Vector3f(0.0f);
			mititeMgr->createGroupByBigFoot(birthArg, 30, velocity, 100.0f);
		}
	}
}

/*
 * --INFO--
 * Address:	802C962C
 * Size:	0000C8
 */
void Obj::startBossChargeBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(2);
}

/*
 * --INFO--
 * Address:	802C96F4
 * Size:	0000C8
 */
void Obj::startBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(8);
}

/*
 * --INFO--
 * Address:	802C97BC
 * Size:	0000C8
 */
void Obj::finishBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(1);
}

/*
 * --INFO--
 * Address:	802C9884
 * Size:	0000D4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (m_isEnraged) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	802C9958
 * Size:	0000D4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (m_isEnraged) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	802C9A2C
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
 * Address:	802C9B28
 * Size:	0000BC
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);
	soundObj->setAppearFlag(false);
}

/*
 * --INFO--
 * Address:	802C9BE4
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
 * Address:	802C9CA0
 * Size:	0006C8
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]  = new efx::TOdamaFoot;
		m_footWFX[i] = new efx::TDamaFootw;

		for (int j = 0; j < 3; j++) {
			m_hahenFX[i][j]     = new efx::TOdamaHahen;
			m_deadElecAFX[i][j] = new efx::TDamaDeadElecA;
		}

		for (int j = 0; j < 2; j++) {
			m_deadElecBFX[i][j]  = new efx::TDamaDeadElecB;
			m_deadHahenAFX[i][j] = new efx::TOdamaDeadHahenA;
		}

		m_deadHahenBFX[i] = new efx::TOdamaDeadHahenB;
		m_legHairFX[i]    = new efx::TOdamaFur2;
	}

	for (int i = 0; i < 3; i++) {
		m_smokeFX[i] = new efx::TDamaSmoke;
	}

	m_deadHahenC1FX = new efx::TOdamaDeadHahenC1;
	m_deadHahenC2FX = new efx::TOdamaDeadHahenC2;
	m_bodyHairFX    = new efx::TOdamaFur1;
}

/*
 * --INFO--
 * Address:	802CA368
 * Size:	0001E4
 */
void Obj::setupEffect()
{
	char* jointNames[] = { "rhand2jnt", "lhand2jnt", "rfoot2jnt", "lfoot2jnt" };

	for (int i = 0; i < 4; i++) {
		m_footFX[i]->setPosptr(&m_jointPositions[i][3]);
		m_footWFX[i]->m_position = &m_jointPositions[i][3];

		for (int j = 0; j < 3; j++) {
			m_hahenFX[i][j]->setPosPosptrs(&m_jointPositions[i][j], &m_jointPositions[i][j + 1]);
			m_deadElecAFX[i][j]->setPosPosptrs(&m_jointPositions[i][j], &m_jointPositions[i][j + 1]);
		}

		for (int j = 0; j < 2; j++) {
			m_deadElecBFX[i][j]->m_position = &m_jointPositions[i][j + 1];
			m_deadHahenAFX[i][j]->setPosPosptrs(&m_jointPositions[i][j], &m_jointPositions[i][j + 1]);
		}

		m_deadHahenBFX[i]->setPosPosptrs(&m_jointPositions[i][2], &m_jointPositions[i][3]);

		m_legHairFX[i]->m_mtx = m_model->getJoint(jointNames[i])->getWorldMatrix();
	}

	m_deadHahenC1FX->m_mtx = m_model->getJoint("tama1")->getWorldMatrix();
	m_deadHahenC2FX->m_mtx = m_model->getJoint("tama2")->getWorldMatrix();

	m_bodyHairFX->m_mtx = m_model->getJoint("kosi")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	802CA54C
 * Size:	000228
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = m_ikSystemMgr->getCollisionCentre(footIdx);

	if (wbox) {
		effectPos.y = *wbox->getSeaHeightPtr();

		efx::Arg fxArg(effectPos);
		efx::TDamaWalkw waterWalk;

		waterWalk.create(&fxArg);
		PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&m_jointPositions[footIdx][3]);
		if (sound) {
			sound->setPitch(0.8f, 0, 0);
		}

	} else {
		efx::Arg fxArg(effectPos);
		efx::TOdamaWalk walk;

		walk.create(&fxArg);
	}

	if (m_isSmoking) {
		for (int i = 0; i < 3; i++) {
			m_hahenFX[footIdx][i]->create(nullptr);
		}
	}

	PSStartSoundVec(PSSE_EN_BIGFOOT_WALK, (Vec*)&m_jointPositions[footIdx][3]);
	cameraMgr->startVibration(6, effectPos, 2);
	rumbleMgr->startRumble(14, effectPos, 2);
}

/*
 * --INFO--
 * Address:	802CA774
 * Size:	000164
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	if (wbox) {
		m_footWFX[footIdx]->create(nullptr);
	} else {
		m_footFX[footIdx]->create(nullptr);
	}

	if (m_isEnraged) {
		getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE_FAST, 0);

	} else {
		f32 healthRatio = m_health / C_PARMS->m_general.m_health.m_value;
		if (healthRatio < 0.175f) {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE3, 0);
		} else if (healthRatio < 0.35f) {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE2, 0);
		} else {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE1, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	802CA8D8
 * Size:	0001A0
 */
void Obj::startPinchJointEffect()
{
	int randJoint[3];

	for (int i = 0; i < 3; i++) {
		randJoint[i] = (int)(2.0f * randFloat()) + 1;
	}

	int randFoot[4];
	for (int i = 0; i < 4; i++) {
		randFoot[i] = i;
	}

	for (int i = 0; i < 4; i++) {
		int randIdx       = (int)(4.0f * randFloat());
		int curFoot       = randFoot[i];
		randFoot[i]       = randFoot[randIdx];
		randFoot[randIdx] = curFoot;
	}

	for (int i = 0; i < 3; i++) {
		m_smokeFX[i]->m_position = &m_jointPositions[randFoot[i]][randJoint[i]];
		m_smokeFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802CAA78
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
 * Address:	802CAAD0
 * Size:	0001C0
 */
void Obj::startDeadEffect()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < 3; j++) {
			efx::Arg fxArg(m_jointPositions[i][j]);
			efx::TDamaDeadBomb deadBombFX;
			deadBombFX.create(&fxArg);
		}

		for (int j = 0; j < 3; j++) {
			m_deadElecAFX[i][j]->create(nullptr);
		}

		for (int j = 0; j < 2; j++) {
			m_deadElecBFX[i][j]->create(nullptr);
			m_deadHahenAFX[i][j]->create(nullptr);
		}

		m_deadHahenBFX[i]->create(nullptr);
	}

	m_deadHahenC1FX->create(nullptr);
	m_deadHahenC2FX->create(nullptr);

	finishPinchJointEffect();
}

/*
 * --INFO--
 * Address:	802CAC90
 * Size:	000254
 */
void Obj::updatePinchLife()
{
	if (!isAlive()) {
		return;
	}

	f32 healthRatio = m_health / C_PARMS->m_general.m_health.m_value;
	if (m_isSmoking) {
		if (healthRatio > 0.35f) {
			finishPinchJointEffect();
			m_isSmoking = false;
		}

	} else if (healthRatio < 0.35f) {
		startPinchJointEffect();
		m_isSmoking = true;
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_SMOKE, 0);
	}
}

/*
 * --INFO--
 * Address:	802CAEE4
 * Size:	000074
 */
void Obj::startFurEffect()
{
	m_bodyHairFX->create(nullptr);
	for (int i = 0; i < 4; i++) {
		m_legHairFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802CAF58
 * Size:	00006C
 */
void Obj::finishFurEffect()
{
	m_bodyHairFX->fade();
	for (int i = 0; i < 4; i++) {
		m_legHairFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802CAFC4
 * Size:	000068
 */
void Obj::updateDeadFurEffect()
{
	m_bodyHairFX->setGlobalScale(m_shadowScale);
	for (int i = 0; i < 4; i++) {
		m_legHairFX[i]->setGlobalScale(m_shadowScale);
	}
}

/*
 * --INFO--
 * Address:	802CB02C
 * Size:	0001D8
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

	m_bodyHairFX->endDemoDrawOn();
	for (int i = 0; i < 4; i++) {
		m_legHairFX[i]->endDemoDrawOn();
	}
}

/*
 * --INFO--
 * Address:	802CB204
 * Size:	0001D8
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

	m_bodyHairFX->startDemoDrawOff();
	for (int i = 0; i < 4; i++) {
		m_legHairFX[i]->startDemoDrawOff();
	}
}

/*
 * --INFO--
 * Address:	802CB3DC
 * Size:	000038
 */
void Obj::addShadowScale()
{
	if (m_shadowScale < 1.0f) {
		m_shadowScale += 2.0f * sys->m_deltaTime;
		if (m_shadowScale > 1.0f) {
			m_shadowScale = 1.0f;
		}
	}
}
} // namespace BigFoot
} // namespace Game
