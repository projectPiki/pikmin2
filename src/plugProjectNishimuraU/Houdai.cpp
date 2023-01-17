#include "Game/Entities/Houdai.h"
#include "Game/SingleGameSection.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Game/ConditionNotStick.h"
#include "efx/TOoota.h"
#include "efx/TEnemyDownWat.h"
#include "efx/TEnemyDownSmoke.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PS.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Houdai {

/*
 * --INFO--
 * Address:	802BFCB0
 * Size:	000024
 */
void HoudaiGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { m_obj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802BFCD4
 * Size:	000024
 */
void HoudaiGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { m_obj->createOffGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802BFCF8
 * Size:	00016C
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);

	createIKSystem();
	createShadowSystem();
	createShotGun();
	createEffect();
}

/*
 * --INFO--
 * Address:	802BFE64
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802BFE68
 * Size:	000144
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	// TODO: Finish
	EnemyBase::onInit(initArg);
	EnemyBase::hardConstraintOn();
	disableEvent(0, EB_IsCullable);
	disableEvent(0, EB_IsPlatformCollsAllowed);
	disableEvent(0, EB_ToLeaveCarcass);
	m_stateTimer        = 0.0f;
	m_stateDuration     = 0.0f;
	m_shotGunBurstTimer = 0.0f;
	m_nextState         = HOUDAI_NULL;
	m_targetPosition    = m_homePosition;
	m_isSmoking         = false;
	setupIKSystem();
	setupShadowSystem();
	setTargetPattern();

	m_shotGunSearchTimer    = 0.0f;
	_2ED                    = 0;
	m_shotGunTargetPosition = m_homePosition;

	setupShotGun();
	setupCollision();
	setupEffect();
	startSteamEffect(false);

	m_isAttackMusicLooping = false;

	resetBossAppearBGM();
	shadowMgr->delShadow(this);

	m_fsm->start(this, HOUDAI_Stay, nullptr);
	doAnimationCullingOff();
}

/*
 * --INFO--
 * Address:	802BFFAC
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishSteamEffect();
	finishChimneyEffect();
	forceFinishShotGun();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802C0000
 * Size:	000088
 */
void Obj::setParameters()
{
	// if we're in Hole of Heroes, change territory radius
	if (gameSystem && gameSystem->m_isInCave && gameSystem->m_mode == GSM_STORY_MODE) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->m_section);
		if (section && section->getCaveID() == 'l_02') {
			C_PARMS->m_general.m_territoryRadius.m_value = C_PROPERPARMS.m_fp20.m_value;
		}
	}

	EnemyBase::setParameters();
}

/*
 * --INFO--
 * Address:	802C0088
 * Size:	0000B4
 */
void Obj::doUpdate()
{
	updateShotGunTimer();
	m_fsm->exec(this);
	updatePinchLife();
	updateIKSystem();
	doUpdateShotGun();

	// if state is not Null, Dead, Stay or Land, make steam sound
	if (isAlive() && getStateID() > HOUDAI_Land) {
		getJAIObject()->startSound(PSSE_EN_HOUDAI_STEAM, 0);
	}
}

/*
 * --INFO--
 * Address:	802C013C
 * Size:	00003C
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	doUpdateCommonShotGun();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802C0178
 * Size:	0000A0
 */
void Obj::doAnimationCullingOff()
{
	setShotGunCallBack();
	m_curAnim->m_isPlaying = false;
	doAnimationUpdateAnimator();
	doAnimationIKSystem();

	PSMTXCopy(m_objMatrix.m_matrix.mtxView, m_model->m_j3dModel->m_posMtx);
	m_model->m_j3dModel->calc();

	m_collTree->update();

	doAnimationShadowSystem();
	finishAnimationIKSystem();
	resetShotGunCallBack();
}

/*
 * --INFO--
 * Address:	802C0218
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	802C021C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802C023C
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
 * Address:	802C0288
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
 * Address:	802C02C4
 * Size:	0000B4
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && collpart && creature->isPiki() && creature->isStickTo()) {
		if (getStateID() == HOUDAI_Land) {
			damage *= 0.25f;
		}
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802C0378
 * Size:	000054
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
	finishSteamEffect();
	finishChimneyEffect();
	m_shotGunMgr->startStoneStateEffectOff();
	startStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C03CC
 * Size:	000078
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, -1000.0f, nullptr);
	if (m_isSmoking) {
		startPinchJointEffect();
	}

	startSteamEffect(true);
	m_shotGunMgr->finishStoneStateEffectOn();
	finishStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C0444
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802C0464
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802C0484
 * Size:	000050
 */
void Obj::getThrowupItemPosition(Vector3f* position) { *position = m_model->getJoint("kosi")->getWorldMatrix()->getBasis(3); }

/*
 * --INFO--
 * Address:	802C04D4
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
 * Address:	802C04E8
 * Size:	0000C8
 */
void Obj::setTargetPattern()
{
	// by default, target nearest navi or piki
	m_targetNearest = true;

	// if we're in Hole of Heroes, change target pattern to target party pikmin specifically (25% chance)
	if (gameSystem && gameSystem->m_isInCave && gameSystem->m_mode == GSM_STORY_MODE) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->m_section);
		if (section && section->getCaveID() == 'l_02') {
			// if below 0.5f, target nearest navi's nearest piki (i.e. party)
			// if between 0.5f and 2.0f, target nearest anything
			m_targetNearest = (int)(2.0f * ((f32)rand() / RAND_MAX)) != 0; // this needs to be not-inlined for float order reasons
		}
	}
}

/*
 * --INFO--
 * Address:	802C05B0
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
 * Address:	802C0848
 * Size:	000234
 */
void Obj::setShotGunTargetPosition()
{
	ConditionNotStickClient condition(this);
	Creature* target;
	if (m_targetNearest) { // target nearest navi or piki
		target = EnemyFunc::getNearestPikminOrNavi(this, 180.0f, C_PARMS->m_general.m_searchDistance.m_value, nullptr, nullptr, &condition);

	} else { // target nearest navi's nearest piki (i.e. party)
		target = EnemyFunc::getNearestNavi(this, 180.0f, C_PARMS->m_general.m_searchDistance.m_value, nullptr, nullptr);
		if (target) {
			target = EnemyFunc::getNearestPikmin(target, 180.0f, C_PARMS->m_general.m_searchDistance.m_value, nullptr, &condition);
		}
	}

	if (target) {
		m_shotGunTargetPosition = target->getPosition();
	} else if (m_shotGunBurstTimer > 1.0f) {
		m_shotGunBurstTimer = 0.0f;
		f32 randAngle       = randWeightFloat(TAU);
		f32 randDist        = randWeightFloat(C_PARMS->m_general.m_searchDistance.m_value);

		m_shotGunTargetPosition
		    = Vector3f(randDist * pikmin2_sinf(randAngle) + m_position.x, m_position.y, randDist * pikmin2_cosf(randAngle) + m_position.z);
	}

	setShotGunTarget(m_shotGunTargetPosition);
}

/*
 * --INFO--
 * Address:	802C0A7C
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	m_ikSystemMgr    = new IKSystemMgr;
	m_ikSystemParms  = new IKSystemParms;
	m_groundCallBack = new HoudaiGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802C0B88
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
 * Address:	802C0CAC
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
 * Address:	802C0D3C
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetpos) { m_ikSystemMgr->m_targetPosition = targetpos; }

/*
 * --INFO--
 * Address:	802C0D5C
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
 * Address:	802C0DBC
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
 * Address:	802C0E1C
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { m_ikSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802C0E40
 * Size:	000024
 */
void Obj::startProgramedIK() { m_ikSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802C0E64
 * Size:	000024
 */
void Obj::startIKMotion() { m_ikSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802C0E88
 * Size:	000024
 */
void Obj::finishIKMotion() { m_ikSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802C0EAC
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { m_ikSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C0ED0
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return m_ikSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C0EF4
 * Size:	000024
 */
void Obj::startBlendMotion() { m_ikSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802C0F18
 * Size:	000024
 */
void Obj::finishBlendMotion() { m_ikSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802C0F3C
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return m_ikSystemMgr->m_traceCentrePosition; }

/*
 * --INFO--
 * Address:	802C0F5C
 * Size:	000048
 */
void Obj::createShadowSystem() { m_shadowMgr = new HoudaiShadowMgr(this); }

/*
 * --INFO--
 * Address:	802C0FA4
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
 * Address:	802C1018
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { m_shadowMgr->update(); }

/*
 * --INFO--
 * Address:	802C103C
 * Size:	000078
 */
void Obj::setShotGunEmitKeepTimerOn()
{
	f32 duration         = C_PROPERPARMS.m_fp10.m_value - C_PROPERPARMS.m_fp11.m_value;
	m_shotGunSearchTimer = randWeightFloat(duration);
}

/*
 * --INFO--
 * Address:	802C10B4
 * Size:	000078
 */
void Obj::setShotGunEmitKeepTimerOff()
{
	f32 duration         = C_PROPERPARMS.m_fp12.m_value - C_PROPERPARMS.m_fp13.m_value;
	m_shotGunSearchTimer = randWeightFloat(duration);
}

/*
 * --INFO--
 * Address:	802C112C
 * Size:	000030
 */
void Obj::updateShotGunTimer()
{
	if (isEvent(0, EB_IsTakingDamage)) {
		m_shotGunBurstTimer = 0.0f;
	} else {
		m_shotGunBurstTimer += sys->m_deltaTime;
	}
}

/*
 * --INFO--
 * Address:	802C115C
 * Size:	00001C
 */
bool Obj::isTransitShotGunState() { return (m_shotGunBurstTimer > C_PARMS->m_general.m_searchHeight.m_value); }

/*
 * --INFO--
 * Address:	802C1178
 * Size:	000048
 */
void Obj::createShotGun() { m_shotGunMgr = new HoudaiShotGunMgr(this); }

/*
 * --INFO--
 * Address:	802C11C0
 * Size:	000024
 */
void Obj::setupShotGun() { m_shotGunMgr->setupShotGun(); }

/*
 * --INFO--
 * Address:	802C11E4
 * Size:	000024
 */
void Obj::setShotGunTarget(Vector3f& target) { m_shotGunMgr->setShotGunTarget(target); }

/*
 * --INFO--
 * Address:	802C1208
 * Size:	000024
 */
void Obj::resetShotGunCallBack() { m_shotGunMgr->resetCallBack(); }

/*
 * --INFO--
 * Address:	802C122C
 * Size:	000024
 */
void Obj::setShotGunCallBack() { m_shotGunMgr->setCallBack(); }

/*
 * --INFO--
 * Address:	802C1250
 * Size:	000024
 */
void Obj::doUpdateShotGun() { m_shotGunMgr->doUpdate(); }

/*
 * --INFO--
 * Address:	802C1274
 * Size:	000024
 */
void Obj::doUpdateCommonShotGun() { m_shotGunMgr->doUpdateCommon(); }

/*
 * --INFO--
 * Address:	802C1298
 * Size:	000024
 */
void Obj::startShotGunRotation() { m_shotGunMgr->startRotation(); }

/*
 * --INFO--
 * Address:	802C12BC
 * Size:	000024
 */
void Obj::finishShotGunRotation() { m_shotGunMgr->finishRotation(); }

/*
 * --INFO--
 * Address:	802C12E0
 * Size:	000024
 */
bool Obj::isShotGunRotation() { return m_shotGunMgr->isShotGunRotation(); }

/*
 * --INFO--
 * Address:	802C1304
 * Size:	000024
 */
bool Obj::isShotGunLockOn() { return m_shotGunMgr->isShotGunLockOn(); }

/*
 * --INFO--
 * Address:	802C1328
 * Size:	000024
 */
bool Obj::isFinishShotGun() { return m_shotGunMgr->isFinishShotGun(); }

/*
 * --INFO--
 * Address:	802C134C
 * Size:	00005C
 */
void Obj::emitShotGun()
{
	m_shotGunMgr->emitShotGun();
	getJAIObject()->startSound(PSSE_EN_HOUDAI_SHOT, 0);
}

/*
 * --INFO--
 * Address:	802C13A8
 * Size:	000024
 */
void Obj::forceFinishShotGun() { return m_shotGunMgr->forceFinishShotGun(); }

/*
 * --INFO--
 * Address:	802C13CC
 * Size:	000038
 */
void Obj::setupCollision()
{
	CollPart* collpart = m_collTree->getCollPart('rht1');
	if (collpart) {
		collpart->makeTubeTree();
	}
}

/*
 * --INFO--
 * Address:	802C1404
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
 * Address:	802C14CC
 * Size:	0000DC
 */
void Obj::startBossAttackLoopBGM()
{
	if (!m_isAttackMusicLooping) {
		m_isAttackMusicLooping   = true;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	802C15A8
 * Size:	0000D8
 */
void Obj::finishBossAttackLoopBGM()
{
	if (m_isAttackMusicLooping) {
		m_isAttackMusicLooping   = false;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	802C1680
 * Size:	0000D4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (m_isAttackMusicLooping) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	802C1754
 * Size:	0000D4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (m_isAttackMusicLooping) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	802C1828
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
 * Address:	802C18F0
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
 * Address:	802C19EC
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
 * Address:	802C1AA8
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
 * Address:	802C1B64
 * Size:	0005CC
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		m_appearHahenFootFX[i] = new efx::THdamaOnHahen2;
	}

	for (int i = 0; i < 3; i++) {
		m_deadElecAFX[i] = new efx::TDamaDeadElecA;
		m_steamFX[i]     = new efx::THdamaSteam;
		m_chimneyFX[i]   = new efx::THdamaSteamSt;
		m_hahenFX[i]     = new efx::THdamaHahen;
	}

	for (int i = 0; i < 2; i++) {
		m_smokeFX[i] = new efx::TDamaSmoke;
	}

	m_appearHahenFX = new efx::THdamaOnHahen1;
	m_onSteam1FX    = new efx::THdamaOnSteam1;
	m_steamBodyFX   = new efx::THdamaSteamBd;
	m_deadBombFX    = new efx::THdamaDeadbomb;
	m_deadSteamFX   = new efx::THdamaDeadSteam;
}

/*
 * --INFO--
 * Address:	802C2130
 * Size:	0001A8
 */
void Obj::setupEffect()
{
	for (int i = 0; i < 4; i++) {
		m_appearHahenFootFX[i]->setPosPosptrs(&m_jointPositions[i][1], &m_jointPositions[i][2]);
	}

	for (int i = 0; i < 3; i++) {
		m_deadElecAFX[i]->setPosPosptrs(&m_jointPositions[0][i], &m_jointPositions[0][i + 1]);
	}

	m_hahenFX[0]->setPosPosptrs(&m_jointPositions[2][1], &m_jointPositions[2][2]);
	m_hahenFX[1]->setPosPosptrs(&m_jointPositions[1][1], &m_jointPositions[1][2]);
	m_hahenFX[2]->setPosPosptrs(&m_jointPositions[3][1], &m_jointPositions[3][2]);

	m_smokeFX[0]->m_position = &m_jointPositions[0][1];
	m_smokeFX[1]->m_position = &m_jointPositions[0][2];

	SysShape::Joint* joint = m_model->getJoint("kosi");
	m_appearHahenFX->m_mtx = joint->getWorldMatrix();
	m_onSteam1FX->m_mtx    = joint->getWorldMatrix();
	m_steamBodyFX->m_mtx   = joint->getWorldMatrix();
	m_deadBombFX->setMtxptr(joint->getWorldMatrix()->m_matrix.mtxView);
	m_deadSteamFX->setMtxptr(joint->getWorldMatrix()->m_matrix.mtxView);

	char* jointNames[] = { "ef_01_loc", "ef_02_loc", "ef_03_loc" };

	for (int i = 0; i < 3; i++) {
		joint                 = m_model->getJoint(jointNames[i]);
		m_steamFX[i]->m_mtx   = joint->getWorldMatrix();
		m_chimneyFX[i]->m_mtx = joint->getWorldMatrix();
	}
}

/*
 * --INFO--
 * Address:	802C22D8
 * Size:	000384
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = m_jointPositions[footIdx][3];

	if (footIdx == 0) {
		if (wbox) {
			effectPos.y = *wbox->getSeaHeightPtr();

			efx::Arg fxArg(effectPos);
			efx::TDamaWalkw waterWalk;

			waterWalk.create(&fxArg);
			PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_L, (Vec*)&m_jointPositions[footIdx][3]);
			if (sound) {
				sound->setPitch(0.8f, 0, 0);
			}

		} else {
			efx::Arg fxArg(effectPos);
			efx::TOootaWalk walk;

			walk.create(&fxArg);
		}

		PSStartSoundVec(PSSE_EN_HOUDAI_METALFOOT, (Vec*)&m_jointPositions[footIdx][3]);

	} else {
		if (wbox) {
			effectPos.y = *wbox->getSeaHeightPtr();

			efx::ArgScale fxArg(effectPos, 0.3f);
			efx::TEnemyDownWat waterWalk;

			waterWalk.create(&fxArg);

			PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_M, (Vec*)&m_jointPositions[footIdx][3]);
			if (sound) {
				sound->setPitch(1.2f, 0, 0);
			}

		} else {
			efx::Arg fxArg(effectPos);
			efx::TEnemyDownSmoke walk;
			walk.m_scale = 0.3f;

			walk.create(&fxArg);
		}

		if (m_isSmoking) {
			int jointIdx = 0;
			if (footIdx == 2) {
				jointIdx = 0;
			} else if (footIdx == 1) {
				jointIdx = 1;
			} else if (footIdx == 3) {
				jointIdx = 2;
			}

			m_hahenFX[jointIdx]->create(nullptr);
		}

		PSStartSoundVec(PSSE_EN_HOUDAI_BAREFOOT, (Vec*)&m_jointPositions[footIdx][3]);
	}
}

/*
 * --INFO--
 * Address:	802C265C
 * Size:	000168
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	f32 healthRatio = m_health / C_PARMS->m_general.m_health.m_value;
	if (footIdx == 0) {
		if (healthRatio < 0.175f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_M3, 0);
		} else if (healthRatio < 0.35f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_M2, 0);
		} else {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_M1, 0);
		}
	} else {
		if (healthRatio < 0.175f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_B3, 0);
		} else if (healthRatio < 0.35f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_B2, 0);
		} else {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_B1, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	802C27C4
 * Size:	00005C
 */
void Obj::startPinchJointEffect()
{
	for (int i = 0; i < 2; i++) {
		m_smokeFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C2820
 * Size:	000058
 */
void Obj::finishPinchJointEffect()
{
	for (int i = 0; i < 2; i++) {
		m_smokeFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802C2878
 * Size:	000194
 */
void Obj::createHoudaiDeadEffect()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < 3; j++) {
			efx::Arg fxArg(m_jointPositions[i][j]);
			efx::TDamaDeadBomb deadBombFX;
			deadBombFX.create(&fxArg);
		}
	}

	for (int i = 0; i < 3; i++) {
		m_deadElecAFX[i]->create(nullptr);
	}

	m_deadSteamFX->create(nullptr);

	efx::Arg steamArg(this);
	efx::THdamaDeadSteamT steamFX;
	steamFX.create(&steamArg);

	finishPinchJointEffect();
}

/*
 * --INFO--
 * Address:	802C2A0C
 * Size:	000120
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
 * Address:	802C2B2C
 * Size:	0000F0
 */
void Obj::createAppearEffect()
{
	efx::Arg fxArg(this);
	efx::THdamaOnSmoke smokeFX;
	smokeFX.create(&fxArg);

	m_onSteam1FX->create(nullptr);

	efx::THdamaOnSteam2 steamFX;
	steamFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802C2C1C
 * Size:	000034
 */
void Obj::createAppearHahenEffect() { m_appearHahenFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802C2C50
 * Size:	00003C
 */
void Obj::createAppearFootEffect(int footIdx) { m_appearHahenFootFX[footIdx]->create(nullptr); }

/*
 * --INFO--
 * Address:	802C2C8C
 * Size:	00007C
 */
void Obj::startSteamEffect(bool doBodySteam)
{
	if (doBodySteam) {
		m_steamBodyFX->create(nullptr);
	}

	for (int i = 0; i < 3; i++) {
		m_steamFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C2D08
 * Size:	00006C
 */
void Obj::finishSteamEffect()
{
	m_steamBodyFX->fade();

	for (int i = 0; i < 3; i++) {
		m_steamFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802C2D74
 * Size:	00005C
 */
void Obj::startChimneyEffect()
{
	for (int i = 0; i < 3; i++) {
		m_chimneyFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C2DD0
 * Size:	000058
 */
void Obj::finishChimneyEffect()
{
	for (int i = 0; i < 3; i++) {
		m_chimneyFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802C2E28
 * Size:	000090
 */
void Obj::createShotGunOpenEffect()
{
	Vector3f effectPos = m_model->getJoint("kosi")->getWorldMatrix()->getBasis(3);

	efx::Arg fxArg(effectPos);
	efx::THdamaOpen openFX;
	openFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802C2EB8
 * Size:	000258
 */
void Obj::createDeadBombEffect()
{
	m_deadBombFX->create(nullptr);

	for (int i = 0; i < 4; i++) {
		if (i == 0) { // metal leg
			for (int j = 0; j < 3; j++) {
				efx::ArgPosPos fxArg(m_jointPositions[i][j], m_jointPositions[i][j + 1]);
				efx::THdamaDeadHahen2 deadFX;
				deadFX.create(&fxArg);
			}

		} else { // bare legs
			for (int j = 0; j < 3; j++) {
				efx::ArgPosPos fxArg(m_jointPositions[i][j], m_jointPositions[i][j + 1]);
				efx::THdamaDeadHahen1 deadFX;
				deadFX.create(&fxArg);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802C3110
 * Size:	00017C
 */
void Obj::effectDrawOn()
{
	for (int i = 0; i < 2; i++) {
		m_smokeFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 3; i++) {
		m_hahenFX[i]->endDemoDrawOn();
		m_deadElecAFX[i]->endDemoDrawOn();
	}

	m_appearHahenFX->endDemoDrawOn();

	for (int i = 0; i < 4; i++) {
		m_appearHahenFootFX[i]->endDemoDrawOn();
	}

	m_onSteam1FX->endDemoDrawOn();
	m_steamBodyFX->endDemoDrawOn();

	for (int i = 0; i < 3; i++) {
		m_steamFX[i]->endDemoDrawOn();
		m_chimneyFX[i]->endDemoDrawOn();
	}

	m_deadBombFX->endDemoDrawOn();
	m_deadSteamFX->endDemoDrawOn();

	m_shotGunMgr->effectDrawOn();
}

/*
 * --INFO--
 * Address:	802C328C
 * Size:	00017C
 */
void Obj::effectDrawOff()
{
	for (int i = 0; i < 2; i++) {
		m_smokeFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 3; i++) {
		m_hahenFX[i]->startDemoDrawOff();
		m_deadElecAFX[i]->startDemoDrawOff();
	}

	m_appearHahenFX->startDemoDrawOff();

	for (int i = 0; i < 4; i++) {
		m_appearHahenFootFX[i]->startDemoDrawOff();
	}

	m_onSteam1FX->startDemoDrawOff();
	m_steamBodyFX->startDemoDrawOff();

	for (int i = 0; i < 3; i++) {
		m_steamFX[i]->startDemoDrawOff();
		m_chimneyFX[i]->startDemoDrawOff();
	}

	m_deadBombFX->startDemoDrawOff();
	m_deadSteamFX->startDemoDrawOff();

	m_shotGunMgr->effectDrawOff();
}

} // namespace Houdai
} // namespace Game
