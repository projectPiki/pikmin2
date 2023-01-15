#include "Game/Entities/Damagumo.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/ConditionNotStick.h"
#include "Game/IKSystemBase.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/EnemyBoss.h"
#include "Dolphin/rand.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace Damagumo {

/*
 * --INFO--
 * Address:	802A57A4
 * Size:	000024
 */
void DamagumoGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { m_obj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802A57C8
 * Size:	000024
 */
void DamagumoGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { m_obj->createOffGroundEffect(footIdx, wbox); }

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
	m_shadowScale    = 0.0f;
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

		m_shadowScale -= factor;
		if (m_shadowScale < 0.0f) {
			m_shadowScale = 0.0f;
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
	}

	m_deadHahenC1FX->m_mtx = m_model->getJoint("tama1")->getWorldMatrix();
	m_deadHahenC2FX->m_mtx = m_model->getJoint("tama2")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	802A76F0
 * Size:	0001F0
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = m_jointPositions[footIdx][3];

	if (wbox) {
		effectPos.y = *wbox->getSeaHeightPtr();

		efx::Arg fxArg(effectPos);
		efx::TDamaWalkw waterWalk;

		waterWalk.create(&fxArg);
		PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&m_jointPositions[footIdx][3]);

	} else {
		efx::Arg fxArg(effectPos);
		efx::TDamaWalk walk;

		walk.create(&fxArg);
	}

	if (m_isSmoking) {
		for (int i = 0; i < 3; i++) {
			m_hahenFX[footIdx][i]->create(nullptr);
		}
	}

	PSStartSoundVec(PSSE_EN_SPIDER_WALK, (Vec*)&m_jointPositions[footIdx][3]);
	cameraMgr->startVibration(6, effectPos, 2);
	rumbleMgr->startRumble(14, effectPos, 2);
}

/*
 * --INFO--
 * Address:	802A78E0
 * Size:	000128
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	if (wbox) {
		m_footWFX[footIdx]->create(nullptr);
	} else {
		m_footFX[footIdx]->create(nullptr);
	}

	f32 healthRatio = m_health / C_PARMS->m_general.m_health.m_value;
	if (healthRatio < 0.175f) {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE3, 0);
	} else if (healthRatio < 0.35f) {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE2, 0);
	} else {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE1, 0);
	}
}

/*
 * --INFO--
 * Address:	802A7A08
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
 * Address:	802A7DC0
 * Size:	000250
 */
void Obj::updatePinchLife()
{
	if (!isAlive()) {
		return;
	}

	f32 healthRatio = m_health / C_PARMS->m_general.m_health.m_value;
	if (m_isSmoking) {
		if (healthRatio > 0.35f) {
			m_isSmoking = false;
			finishPinchJointEffect();
		}

	} else if (healthRatio < 0.35f) {
		m_isSmoking = true;
		startPinchJointEffect();

		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_SMOKE, 0);
	}
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
	if (m_shadowScale < 1.0f) {
		m_shadowScale += 2.0f * sys->m_deltaTime;
		if (m_shadowScale > 1.0f) {
			m_shadowScale = 1.0f;
		}
	}
}

} // namespace Damagumo
} // namespace Game
