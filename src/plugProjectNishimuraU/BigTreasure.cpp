#include "Game/Entities/BigTreasure.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/ConditionNotStick.h"
#include "Game/IKSystemBase.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/Navi.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/Stickers.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PS.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace BigTreasure {

static const int unusedBigTreasureArray[] = { 0, 0, 0 };
static const char bigTreasureName[]       = "246-BigTreasure";

/*
 * --INFO--
 * Address:	802DBBB4
 * Size:	000024
 */
void BigTreasureGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { m_obj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802DBBD8
 * Size:	000024
 */
void BigTreasureGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { m_obj->createOffGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802DBBFC
 * Size:	00013C
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);

	createIKSystem();
	createShadowSystem();
	createAttack();
	createEffect();
}

/*
 * --INFO--
 * Address:	802DBD38
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802DBD3C
 * Size:	000160
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	enableEvent(0, EB_IsFlying);

	hardConstraintOn();

	disableEvent(0, EB_IsCullable);
	disableEvent(0, EB_IsPlatformCollsAllowed);
	disableEvent(0, EB_ToLeaveCarcass);

	m_stateTimer = 0.0f;

	resetAttackLimitTimer();

	m_nextState      = BIGTREASURE_NULL;
	m_targetPosition = m_homePosition;
	m_shadowScale    = 1.0f;

	setupIKSystem();
	setupShadowSystem();
	setupAttack();
	setupCollision();
	setupTreasure();
	resetMaterialColor();
	setupEffect();
	resetBossAppearBGM();
	shadowMgr->delShadow(this);

	m_fsm->start(this, BIGTREASURE_Stay, nullptr);

	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		m_fsm->transit(this, BIGTREASURE_Land, nullptr);
	} else {
		doAnimationCullingOff();
	}

	startShineParticleEffect();
}

/*
 * --INFO--
 * Address:	802DBE9C
 * Size:	00004C
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishShineParticleEffect();
	releaseItemLoozy();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802DBEE8
 * Size:	00004C
 */
void Obj::doUpdate()
{
	updateMaterialColor();
	m_fsm->exec(this);
	updateIKSystem();
}

/*
 * --INFO--
 * Address:	802DBF34
 * Size:	00003C
 */
void Obj::doUpdateCommon()
{
	updateAttack();
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802DBF70
 * Size:	000094
 */
void Obj::doAnimationUpdateAnimator()
{
	SysShape::BlendLinearFun linearBlend;
	f32 animTime = EnemyAnimatorBase::defaultAnimSpeed * sys->m_deltaTime;
	static_cast<ProperAnimator*>(m_animator)->animate(&linearBlend, 60.0f * sys->m_deltaTime, animTime, animTime);

	SysShape::Model* model = m_model;
	model->m_j3dModel->m_modelData->m_jointTree.m_joints[0]->m_mtxCalc
	    = static_cast<J3DMtxCalcAnmBase*>(static_cast<ProperAnimator*>(m_animator)->m_animator.getCalc());
}

/*
 * --INFO--
 * Address:	802DC004
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
	updateTreasure();
	finishAnimationIKSystem();
}

/*
 * --INFO--
 * Address:	802DC09C
 * Size:	000194
 */
void Obj::changeMaterial()
{
	J3DModel* j3dModel      = m_model->m_j3dModel;
	J3DModelData* modelData = j3dModel->getModelData();

	u16 bodyIdx          = modelData->m_materialTable._0C->getIndex("mat_body");
	J3DMaterial* bodyMat = modelData->m_materialTable.m_materials1[bodyIdx];
	bodyMat->m_tevBlock->setTevColor(0, m_currMatBodyColor);

	J3DGXColorS10 color1(m_currClusterEyeColor.m_rgb[0], m_currClusterEyeColor.m_rgb[1], m_currClusterEyeColor.m_rgb[2], 255);

	u16 eyeIdx1          = modelData->m_materialTable._0C->getIndex("mat_eye1");
	J3DMaterial* eyeMat1 = modelData->m_materialTable.m_materials1[eyeIdx1];
	eyeMat1->m_tevBlock->setTevColor(0, color1);

	J3DGXColorS10 color2(m_currSideEyeColor.m_rgb[0], m_currSideEyeColor.m_rgb[1], m_currSideEyeColor.m_rgb[2], 255);

	u16 eyeIdx2          = modelData->m_materialTable._0C->getIndex("mat_eye2");
	J3DMaterial* eyeMat2 = modelData->m_materialTable.m_materials1[eyeIdx2];
	eyeMat2->m_tevBlock->setTevColor(0, color2);

	j3dModel->calcMaterial();
}

/*
 * --INFO--
 * Address:	802DC230
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802DC234
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802DC254
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
 * Address:	802DC2A0
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
 * Address:	802DC2DC
 * Size:	000100
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	f32 adjustedDamage = damage;
	if (collpart && creature && creature->isPiki()) {
		// damage reduced to 25% when in land state
		if (getStateID() == BIGTREASURE_Land) {
			adjustedDamage *= 0.25f;
		}

		// check if piki is damaging a weapon
		for (int i = 0; i < 4; i++) {
			if (m_treasureCollParts[i] == collpart) {
				addTreasureDamage(i, adjustedDamage);
				m_toFlick++;
				return true;
			}
		}

		// if no weapon hit, check if we even *have* any weapons
		// if we don't, damage actual health
		if (!isCapturedTreasure()) {
			addDamage(adjustedDamage, 1.0f);
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802DC3DC
 * Size:	000038
 */
bool BigTreasure::Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	return damageCallBack(creature, damage, collpart) == false; // sure.
}

/*
 * --INFO--
 * Address:	802DC414
 * Size:	000020
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/*
 * --INFO--
 * Address:	802DC434
 * Size:	000048
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, -1000.0f, nullptr);
}

/*
 * --INFO--
 * Address:	802DC47C
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802DC49C
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802DC4BC
 * Size:	000050
 */
void Obj::getThrowupItemPosition(Vector3f* position) { *position = m_model->getJoint("kosi")->getWorldMatrix()->getBasis(3); }

/*
 * --INFO--
 * Address:	802DC50C
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
 * Address:	802DC520
 * Size:	00005C
 */
void Obj::resetAttackLimitTimer() { m_attackLimitTimer = randWeightFloat(2.0f); }

/*
 * --INFO--
 * Address:	802DC57C
 * Size:	000228
 */
bool Obj::isAttackLimitTime()
{
	bool check         = false;
	f32 incTime        = sys->m_deltaTime;
	f32 extendedTime   = 3.0f * sys->m_deltaTime;
	f32 treasureFactor = 2.0f * (f32)getCapturedTreasureNum() + 4.0f;

	Sys::Sphere sphere(m_position, 300.0f);
	CellIteratorArg iterArg(sphere);
	iterArg._1C = 1;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			if (!check) {
				Vector3f creaturePos = creature->getPosition();

				f32 xDiff = m_position.x - creaturePos.x;
				xDiff     = (xDiff > 0.0f) ? xDiff : -xDiff;

				if (xDiff < 225.0f) {
					f32 zDiff = m_position.z - creaturePos.z;
					zDiff     = (zDiff > 0.0f) ? zDiff : -zDiff;

					if (zDiff < 225.0f) {
						check = true;
					}
				}
			}

			if (creature->isStickTo()) {
				if (creature->m_sticker != this) {
					incTime = extendedTime;
				}
			}
		}
	}

	if (m_attackLimitTimer > treasureFactor) {
		return check;
	} else {
		m_attackLimitTimer += incTime;
		return false;
	}
}

/*
 * --INFO--
 * Address:	802DC7A4
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
 * Address:	802DCA3C
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	m_ikSystemMgr    = new IKSystemMgr;
	m_ikSystemParms  = new IKSystemParms;
	m_groundCallBack = new BigTreasureGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802DCB48
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
 * Address:	802DCC6C
 * Size:	000084
 */
void Obj::setIKParameter()
{
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
 * Address:	802DCCF0
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { m_ikSystemMgr->m_targetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802DCD10
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
 * Address:	802DCD70
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
 * Address:	802DCDD0
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { m_ikSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802DCDF4
 * Size:	000024
 */
void Obj::startProgramedIK() { m_ikSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802DCE18
 * Size:	000024
 */
void Obj::startIKMotion() { m_ikSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802DCE3C
 * Size:	000024
 */
void Obj::finishIKMotion() { m_ikSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802DCE60
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { m_ikSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802DCE84
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return m_ikSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802DCEA8
 * Size:	000024
 */
void Obj::startBlendMotion() { m_ikSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802DCECC
 * Size:	000024
 */
void Obj::finishBlendMotion() { m_ikSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802DCEF0
 * Size:	000024
 */
void Obj::checkJointScaleOn() { m_ikSystemMgr->checkJointScaleOn(); }

/*
 * --INFO--
 * Address:	802DCF14
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return m_ikSystemMgr->m_traceCentrePosition; }

/*
 * --INFO--
 * Address:	802DCF34
 * Size:	00001C
 */
Vector3f* Obj::getJointPositionPtr(int p1, int p2) { return &m_jointPositions[p1][p2]; }

/*
 * --INFO--
 * Address:	802DCF50
 * Size:	000048
 */
void Obj::createShadowSystem() { m_shadowMgr = new BigTreasureShadowMgr(this); }

/*
 * --INFO--
 * Address:	802DCF98
 * Size:	000080
 */
void Obj::setupShadowSystem()
{
	m_shadowMgr->init();
	m_shadowMgr->setKosiJointPosPtr(&m_kosiJointPos);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m_shadowMgr->setJointPosPtr(i, j, &m_jointPositions[i][j]);
		}
	}
}

/*
 * --INFO--
 * Address:	802DD018
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { m_shadowMgr->update(); }

/*
 * --INFO--
 * Address:	802DD03C
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
 * Address:	........
 * Size:	00013C
 */
void Obj::setupBigTreasureCollision()
{
	bool treasureCheck = true;
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			treasureCheck = false;
		} else if (m_treasureCollParts[i]) {
			flickStickCollPartPikmin(m_treasureCollParts[i]);
			m_treasureCollParts[i]->m_specialID = '_t__';
			m_treasureCollParts[i]->m_radius    = 0.0f;
			m_treasureCollParts[i]->m_attribute = 1;
			m_treasureCollParts[i]              = nullptr;
		}
	}

	CollPart* tam1 = m_collTree->getCollPart('tam1');
	CollPart* tam2 = m_collTree->getCollPart('tam2');

	if (tam1 && tam2) {
		if (treasureCheck) {
			tam1->m_specialID = 'st__';
			tam2->m_specialID = 'st__';
		} else {
			tam1->m_specialID = '_t__';
			tam2->m_specialID = '_t__';
		}
	}
}

/*
 * --INFO--
 * Address:	802DD0CC
 * Size:	00035C
 */
void Obj::setupTreasure()
{
	u32 collTags[]      = { 'elec', 'fire', 'gasi', 'mizu' };
	char* pelletNames[] = { "elec", "fire", "gas", "water" };
	char* jointNames[]  = { "otakara_elec", "otakara_fire", "otakara_gas", "otakara_water" };

	for (int i = 0; i < 4; i++) {
		m_isWeaponAttacked[i]   = false;
		m_treasures[i]          = nullptr;
		m_treasureHealth[i]     = 0.0f;
		m_treasureShakeAngle[i] = 0.0f;
		m_treasureCollParts[i]  = m_collTree->getCollPart(collTags[i]);

		PelletInitArg weaponArg;
		if (pelletMgr->makePelletInitArg(weaponArg, pelletNames[i])) {
			m_treasures[i] = pelletMgr->birth(&weaponArg);

			if (m_treasures[i]) {
				Matrixf* pelletMat = m_model->getJoint(jointNames[i])->getWorldMatrix();
				m_treasures[i]->startCapture(pelletMat);
				m_treasureHealth[i] = 6000.0f;
			}
		}
	}

	m_louie = nullptr;
	PelletInitArg louieArg;
	if (pelletMgr->makePelletInitArg(louieArg, "loozy")) {
		m_louie = pelletMgr->birth(&louieArg);

		if (m_louie) {
			Matrixf* louieMat = m_model->getJoint("otakara_loozy")->getWorldMatrix();
			m_louie->startCapture(louieMat);
		}
	}

	setupBigTreasureCollision();

	m_attackIndex = -1;
}

/*
 * --INFO--
 * Address:	802DD428
 * Size:	000168
 */
void Obj::updateTreasure()
{
	dropTreasure();
	Matrixf captureMtx;
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			PSMTXIdentity(captureMtx.m_matrix.mtxView);

			if (m_isWeaponAttacked[i]) {
				m_treasureShakeAngle[i] += 1.4f;

				if (m_treasureShakeAngle[i] > TAU) {
					m_treasureShakeAngle[i] = 0.0f;
					m_isWeaponAttacked[i]   = false;
				}

				Matrixf rotRad;
				PSMTXRotRad(rotRad.m_matrix.mtxView, 'Y', 0.15f * pikmin2_sinf(m_treasureShakeAngle[i]));
				PSMTXConcat(captureMtx.m_matrix.mtxView, rotRad.m_matrix.mtxView, captureMtx.m_matrix.mtxView);
			}

			// vertically offset the comedy bomb from where it should be
			if (i == 2) {
				captureMtx.m_matrix.structView.ty = -22.0f;
			}

			m_treasures[i]->updateCapture(captureMtx);
		}
	}

	if (m_louie) {
		PSMTXIdentity(captureMtx.m_matrix.mtxView);
		m_louie->updateCapture(captureMtx);
	}
}

/*
 * --INFO--
 * Address:	802DD590
 * Size:	0001C0
 */
void Obj::dropTreasure()
{
	bool dropCheck = false;
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i] && m_treasureHealth[i] <= 0.0f) {
			dropCheck = true;
			createDropTreasureEffect(i);
			finishTreasurePinchSmoke(i);
			dropTreasure(i);
		}
	}

	if (dropCheck) {
		startBossItemDropBGM();
		setupBigTreasureCollision();
	}
}

/*
 * --INFO--
 * Address:	802DD750
 * Size:	000088
 */
bool Obj::dropTreasure(int idx)
{
	m_treasures[idx]->endCapture();
	Vector3f velocity(0.0f, 100.0f, 0.0f);
	m_treasures[idx]->setVelocity(velocity);
	m_treasures[idx]      = nullptr;
	m_treasureHealth[idx] = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	802DD7D8
 * Size:	00005C
 */
bool Obj::isCapturedTreasure()
{
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802DD834
 * Size:	00001C
 */
bool Obj::isCapturedTreasure(int idx) { return m_treasures[idx]; }

/*
 * --INFO--
 * Address:	802DD850
 * Size:	00004C
 */
int Obj::getCapturedTreasureNum()
{
	int count = 0;
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			count++;
		}
	}

	return count;
}

/*
 * --INFO--
 * Address:	802DD89C
 * Size:	0000A0
 */
bool Obj::addTreasureDamage(int idx, f32 damage)
{
	if (m_treasures[idx]) {
		f32 startingHealth = m_treasureHealth[idx];

		if (isEvent(0, EB_IsBittered)) {
			damage *= 0.1f;
		}

		m_isWeaponAttacked[idx] = true;
		m_treasureHealth[idx] -= damage;
		if (m_treasureHealth[idx] < 0.0f) {
			m_treasureHealth[idx] = 0.0f;
		}

		if (startingHealth >= 3000.0f && m_treasureHealth[idx] < 3000.0f) {
			startTreasurePinchSmoke(idx);
		}

		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802DD93C
 * Size:	000284
 */
void Obj::flickStickCollPartPikmin(CollPart* collpart)
{
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		Creature* creature = (*iter);
		if (creature->isAlive() && creature->m_stuckCollPart == collpart) {
			InteractFlick flick(this, 10.0f, 0.0f, -1000.0f);
			creature->stimulate(flick);
		}
	}
}

/*
 * --INFO--
 * Address:	802DDBC0
 * Size:	00006C
 */
void Obj::releaseItemLoozy()
{
	if (m_louie) {
		m_louie->endCapture();
		Vector3f velocity(0.0f, 150.0f, 0.0f);
		m_louie->setVelocity(velocity);
		m_louie = nullptr;
	}
}

/*
 * --INFO--
 * Address:	802DDC2C
 * Size:	000048
 */
void Obj::createAttack() { m_attackMgr = new BigTreasureAttackMgr(this); }

/*
 * --INFO--
 * Address:	802DDC74
 * Size:	000024
 */
void Obj::setupAttack() { m_attackMgr->init(); }

/*
 * --INFO--
 * Address:	802DDC98
 * Size:	000024
 */
void Obj::updateAttack() { m_attackMgr->update(); }

/*
 * --INFO--
 * Address:	802DDCBC
 * Size:	000074
 */
void Obj::startAttack()
{
	switch (m_attackIndex) {
	case BIGATTACK_Elec:
		m_attackMgr->startElecAttack();
		break;
	case BIGATTACK_Fire:
		m_attackMgr->startFireAttack();
		break;
	case BIGATTACK_Gas:
		m_attackMgr->startGasAttack();
		break;
	case BIGATTACK_Water:
		m_attackMgr->startWaterAttack();
		break;
	}
}

/*
 * --INFO--
 * Address:	802DDD30
 * Size:	000024
 */
void Obj::finishAttack() { m_attackMgr->finishAttack(); }

/*
 * --INFO--
 * Address:	802DDD54
 * Size:	0001A8
 */
void Obj::setTreasureAttack()
{
	int attackIdx[4];     // indices for available attacks, max 4
	f32 weaponWeights[4]; // weightings for each available attack based on health, max 4

	f32 totalWeights = 0.0f; // total weightings
	int count        = 0;    // how many weapons alive, max 4

	// loop through all weapons; if alive, calc weighting + add to arrays
	// 0 = elec, 1 = fire, 2 = gas, 3 = water
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			attackIdx[count] = i;

			// each weapon weight is [6000.0f, 12000.0f)
			// 6000.0f at max health, linearly approaches 12000.0f as health decreases
			weaponWeights[count] = 12000.0f - m_treasureHealth[i];
			totalWeights += weaponWeights[count];

			count++;
		}
	}

	// if we have any weapons left, determine attack
	if (count) {
		/*
		 * 'threshold' is a random float between 0 and totalWeights.
		 * - If threshold falls 'within' one of the 'bands' of weights, that weapon is selected.
		 * - A given band is bigger if that weapon is on lower health.
		 * - Bands are always in the order (elec -> fire -> gas -> water).
		 *
		 * i.e.
		 *
		 *      |     elec     | fire |   gas   |       water       |
		 *      0                 ^(threshold)                    total
		 *
		 * == fire gets chosen.
		 */
		f32 threshold = randWeightFloat(totalWeights);
		f32 inc       = 0.0f;
		for (int i = 0; i < count; i++) {
			inc += weaponWeights[i]; // jump to next weapon bracket
			if (inc > threshold) {   // if threshold falls in that bracket, choose weapon
				m_attackIndex = attackIdx[i];
				return;
			}
		}
	}

	// no weapons left/something weird happened, no attack
	m_attackIndex = BIGATTACK_NULL;
}

/*
 * --INFO--
 * Address:	802DDEFC
 * Size:	000048
 */
int Obj::getPreAttackAnimIndex()
{
	if (m_attackIndex == BIGATTACK_Elec) {
		return 21;
	} else if (m_attackIndex == BIGATTACK_Fire) {
		return 3;
	} else if (m_attackIndex == BIGATTACK_Gas) {
		return 18;
	} else if (m_attackIndex == BIGATTACK_Water) {
		return 15;
	}

	return 24;
}

/*
 * --INFO--
 * Address:	802DDF44
 * Size:	000090
 */
int Obj::getAttackAnimIndex()
{
	if (m_attackIndex == BIGATTACK_Elec) {
		return 22;
	} else if (m_attackIndex == BIGATTACK_Fire) {
		int currAnimIdx = getCurrAnimationIndex();
		if (currAnimIdx == 3) {
			return 4;
		} else if (currAnimIdx == 6) {
			return 7;
		} else if (currAnimIdx == 9) {
			return 10;
		} else {
			return 13;
		}
	} else if (m_attackIndex == BIGATTACK_Gas) {
		return 19;
	} else if (m_attackIndex == BIGATTACK_Water) {
		return 16;
	}

	return 24;
}

/*
 * --INFO--
 * Address:	802DDFD4
 * Size:	000090
 */
int Obj::getPutItemAnimIndex()
{
	if (m_attackIndex == BIGATTACK_Elec) {
		return 23;
	} else if (m_attackIndex == BIGATTACK_Fire) {
		int currAnimIdx = getCurrAnimationIndex();
		if (currAnimIdx == 4) {
			return 5;
		} else if (currAnimIdx == 7) {
			return 8;
		} else if (currAnimIdx == 10) {
			return 11;
		} else {
			return 14;
		}
	} else if (m_attackIndex == BIGATTACK_Gas) {
		return 20;
	} else if (m_attackIndex == BIGATTACK_Water) {
		return 17;
	}

	return 24;
}

/*
 * --INFO--
 * Address:	802DE064
 * Size:	000184
 */
int Obj::getFireAttackAnimIndex()
{
	f32 angle;

	Navi* navi = EnemyFunc::getNearestNavi(this, 180.0f, 1280.0f, nullptr, nullptr);

	if (navi) {
		Vector3f naviPos = navi->getPosition();
		angle            = JMath::atanTable_.atan2_(naviPos.x - m_position.x, naviPos.z - m_position.z);
		if (angle < 0.0f) {
			angle = TAU + angle;
		} else if (angle >= TAU) {
			angle -= TAU;
		}

		angle -= m_faceDir;

		if (angle < 0.0f) {
			angle = TAU + angle;
		} else if (angle >= TAU) {
			angle -= TAU;
		}

	} else {
		angle = randWeightFloat(TAU);
	}

	if (angle > (PI / 4) && angle <= (3 * PI / 4)) {
		return 9;

	} else if (angle > (3 * PI / 4) && angle <= (5 * PI / 4)) {
		return 12;

	} else if (angle > (5 * PI / 4) && angle <= (7 * PI / 4)) {
		return 6;
	}

	return 3;
}

/*
 * --INFO--
 * Address:	802DE1E8
 * Size:	000098
 */
f32 Obj::getPreAttackTimeMax()
{
	if (m_attackIndex == BIGATTACK_Elec) {
		return C_PROPERPARMS.m_fp10.m_value;

	} else if (m_attackIndex == BIGATTACK_Fire) {
		if (isNormalAttack(m_attackIndex)) {
			return C_PROPERPARMS.m_fp11.m_value;
		} else {
			return C_PROPERPARMS.m_fp31.m_value;
		}

	} else if (m_attackIndex == BIGATTACK_Gas) {
		return C_PROPERPARMS.m_fp12.m_value;

	} else if (m_attackIndex == BIGATTACK_Water) {
		return C_PROPERPARMS.m_fp13.m_value;
	}

	return 5.0f;
}

/*
 * --INFO--
 * Address:	802DE280
 * Size:	00005C
 */
f32 Obj::getAttackTimeMax()
{
	if (m_attackIndex == BIGATTACK_Elec) {
		return C_PROPERPARMS.m_elecAttackTimeMax.m_value;

	} else if (m_attackIndex == BIGATTACK_Fire) {
		return C_PROPERPARMS.m_fireAttackTimeMax.m_value;

	} else if (m_attackIndex == BIGATTACK_Gas) {
		return C_PROPERPARMS.m_gasAttackTimeMax.m_value;

	} else if (m_attackIndex == BIGATTACK_Water) {
		return C_PROPERPARMS.m_waterAttackTimeMax.m_value;
	}

	return 5.0f;
}

/*
 * --INFO--
 * Address:	802DE2DC
 * Size:	000020
 */
bool Obj::isNormalAttack(int idx) { return (m_treasureHealth[idx] > 3000.0f); }

/*
 * --INFO--
 * Address:	802DE2FC
 * Size:	0000B0
 */
void Obj::resetMaterialColor()
{
	m_isFastMatAnim = false;

	resetTargetMatBodyColor(isCapturedTreasure());
	resetCurrentMatBodyColor();

	m_targetEyeColorIdx = EYECOLOR_Light; // initially go towards light color
	resetTargetEyeMatColor();
	resetCurrentMatEyeColor();

	setMatEyeAnimSpeed();
}

/*
 * --INFO--
 * Address:	802DE3AC
 * Size:	000038
 */
void Obj::resetTargetMatBodyColor(bool isVisible)
{
	m_targetMatBodyColor.r = 30;
	m_targetMatBodyColor.g = 70;
	m_targetMatBodyColor.b = 60;
	if (isVisible) {
		m_targetMatBodyColor.a = 255;
	} else {
		m_targetMatBodyColor.a = 0;
	}
}

/*
 * --INFO--
 * Address:	802DE3E4
 * Size:	000024
 */
void Obj::resetCurrentMatBodyColor() { m_currMatBodyColor = m_targetMatBodyColor; }

/*
 * --INFO--
 * Address:	802DE408
 * Size:	000058
 */
void Obj::resetTargetEyeMatColor()
{
	m_targetClusterEyeColor[EYECOLOR_Dark].set(20.0f, 60.0f, 20.0f);
	m_targetClusterEyeColor[EYECOLOR_Light].set(120.0f, 255.0f, 90.0f);
	m_targetSideEyeColor[EYECOLOR_Dark].set(0.0f, 30.0f, 0.0f);
	m_targetSideEyeColor[EYECOLOR_Light].set(90.0f, 180.0f, 160.0f);
}

/*
 * --INFO--
 * Address:	802DE460
 * Size:	000034
 */
void Obj::resetCurrentMatEyeColor()
{
	m_currClusterEyeColor = m_targetClusterEyeColor[EYECOLOR_Dark];
	m_currSideEyeColor    = m_targetSideEyeColor[EYECOLOR_Dark];
}

/*
 * --INFO--
 * Address:	802DE494
 * Size:	00012C
 */
void Obj::setMatEyeAnimSpeed()
{
	f32 time = 30.0f;
	if (m_isFastMatAnim) {
		time = 10.0f; // i.e. when readying an attack
	}

	// 0 = red, 1 = green, 2 = blue
	for (int i = 0; i < 3; i++) {
		// eye 1 - cluster of eyes
		f32 colorDiff1   = absVal(m_targetClusterEyeColor[m_targetEyeColorIdx].m_rgb[i] - m_currClusterEyeColor.m_rgb[i]);
		f32 defaultDiff1 = absVal(m_targetClusterEyeColor[EYECOLOR_Light].m_rgb[i] - m_targetClusterEyeColor[EYECOLOR_Dark].m_rgb[i]);

		// go faster if 'further away' than the normal oscillating range
		// otherwise just go 'normal speed'
		colorDiff1                = (colorDiff1 > defaultDiff1) ? colorDiff1 : defaultDiff1;
		m_clusterEyeAnimSpeeds[i] = colorDiff1;
		if (m_clusterEyeAnimSpeeds[i] < 1.0f) {
			m_clusterEyeAnimSpeeds[i] = 1.0f;
		}

		m_clusterEyeAnimSpeeds[i] = m_clusterEyeAnimSpeeds[i] / time;

		// eye 2 - side eyes
		f32 colorDiff2 = absVal(m_targetSideEyeColor[m_targetEyeColorIdx].m_rgb[i] - m_currSideEyeColor.m_rgb[i]);
		f32 otherDiff2 = absVal(m_targetSideEyeColor[EYECOLOR_Light].m_rgb[i] - m_targetSideEyeColor[EYECOLOR_Dark].m_rgb[i]);

		// go faster if 'further away' than the normal oscillating range
		// otherwise just go 'normal speed'
		colorDiff2             = (colorDiff2 > otherDiff2) ? colorDiff2 : otherDiff2;
		m_sideEyeAnimSpeeds[i] = colorDiff2;
		if (m_sideEyeAnimSpeeds[i] < 1.0f) {
			m_sideEyeAnimSpeeds[i] = 1.0f;
		}

		m_sideEyeAnimSpeeds[i] = m_sideEyeAnimSpeeds[i] / time;
	}
}

/*
 * --INFO--
 * Address:	802DE5C0
 * Size:	0004D0
 */
void Obj::setAttackMaterialColor(bool isFast)
{
	m_isFastMatAnim = isFast;

	if (m_isFastMatAnim) {
		switch (m_attackIndex) {
		case BIGATTACK_Elec:
			m_targetMatBodyColor.r = 150;
			m_targetMatBodyColor.g = 130;
			m_targetMatBodyColor.b = 20;

			m_targetClusterEyeColor[EYECOLOR_Dark].set(30.0f, 30.0f, 0.0f);
			m_targetClusterEyeColor[EYECOLOR_Light].set(255.0f, 180.0f, 70.0f);

			m_targetSideEyeColor[EYECOLOR_Dark].set(60.0f, 60.0f, 30.0f);
			m_targetSideEyeColor[EYECOLOR_Light].set(255.0f, 150.0f, 80.0f);
			break;

		case BIGATTACK_Fire:
			m_targetMatBodyColor.r = 160;
			m_targetMatBodyColor.g = 50;
			m_targetMatBodyColor.b = 20;

			m_targetClusterEyeColor[EYECOLOR_Dark].set(60.0f, 20.0f, 20.0f);
			m_targetClusterEyeColor[EYECOLOR_Light].set(255.0f, 100.0f, 100.0f);

			m_targetSideEyeColor[EYECOLOR_Dark].set(80.0f, 60.0f, 45.0f);
			m_targetSideEyeColor[EYECOLOR_Light].set(255.0f, 150.0f, 120.0f);
			break;

		case BIGATTACK_Gas:
			m_targetMatBodyColor.r = 90;
			m_targetMatBodyColor.g = 5;
			m_targetMatBodyColor.b = 120;

			m_targetClusterEyeColor[EYECOLOR_Dark].set(30.0f, 0.0f, 30.0f);
			m_targetClusterEyeColor[EYECOLOR_Light].set(220.0f, 68.0f, 160.0f);

			m_targetSideEyeColor[EYECOLOR_Dark].set(40.0f, 20.0f, 80.0f);
			m_targetSideEyeColor[EYECOLOR_Light].set(120.0f, 20.0f, 200.0f);
			break;

		case BIGATTACK_Water:
			m_targetMatBodyColor.r = 40;
			m_targetMatBodyColor.g = 100;
			m_targetMatBodyColor.b = 180;

			m_targetClusterEyeColor[EYECOLOR_Dark].set(40.0f, 80.0f, 70.0f);
			m_targetClusterEyeColor[EYECOLOR_Light].set(120.0f, 255.0f, 180.0f);

			m_targetSideEyeColor[EYECOLOR_Dark].set(20.0f, 20.0f, 60.0f);
			m_targetSideEyeColor[EYECOLOR_Light].set(120.0f, 150.0f, 255.0f);
			break;
		}

	} else {
		bool hasTreasures = isCapturedTreasure();

		m_targetMatBodyColor.r = 30;
		m_targetMatBodyColor.g = 70;
		m_targetMatBodyColor.b = 60;

		if (hasTreasures) {
			m_targetMatBodyColor.a = 255;
		} else {
			m_targetMatBodyColor.a = 0;
		}

		if (hasTreasures) {
			m_targetClusterEyeColor[EYECOLOR_Dark].set(20.0f, 60.0f, 20.0f);
			m_targetClusterEyeColor[EYECOLOR_Light].set(120.0f, 255.0f, 90.0f);

			m_targetSideEyeColor[EYECOLOR_Dark].set(0.0f, 30.0f, 0.0f);
			m_targetSideEyeColor[EYECOLOR_Light].set(90.0f, 180.0f, 160.0f);

		} else {
			m_targetClusterEyeColor[EYECOLOR_Dark].set(10.0f, 100.0f, 255.0f);
			m_targetClusterEyeColor[EYECOLOR_Light].set(255.0f, 180.0f, 64.0f);

			m_targetSideEyeColor[EYECOLOR_Dark].set(60.0f, 230.0f, 30.0f);
			m_targetSideEyeColor[EYECOLOR_Light].set(100.0f, 30.0f, 200.0f);

			if (m_targetMatBodyColor.a == 0 && m_currMatBodyColor.a == 255) {
				createChangeMaterialEffect();
				getJAIObject()->startSound(PSSE_EN_BIGTAKARA_SHELL, 0);
			}
		}
	}

	setMatEyeAnimSpeed();
}

/*
 * --INFO--
 * Address:	802DEA90
 * Size:	0004C0
 */
void Obj::updateMaterialColor()
{
	// body
	const int& targetRed = getTargetBodyRed();
	const int& currRed   = getCurrentBodyRed();
	m_currMatBodyColor.r = adjustValInt(currRed, targetRed, 5);

	const int& targetGreen = getTargetBodyGreen();
	const int& currGreen   = getCurrentBodyGreen();
	m_currMatBodyColor.g   = adjustValInt(currGreen, targetGreen, 5);

	const int& targetBlue = getTargetBodyBlue();
	const int& currBlue   = getCurrentBodyBlue();
	m_currMatBodyColor.b  = adjustValInt(currBlue, targetBlue, 5);

	const int& targetAlpha = getTargetBodyAlpha();
	const int& currAlpha   = getCurrentBodyAlpha();
	m_currMatBodyColor.a   = adjustValInt(currAlpha, targetAlpha, 5);

	// cluster eyes
	m_currClusterEyeColor.m_rgb[0]
	    = adjustVal(m_currClusterEyeColor.m_rgb[0], m_targetClusterEyeColor[m_targetEyeColorIdx].m_rgb[0], m_clusterEyeAnimSpeeds[0]);
	m_currClusterEyeColor.m_rgb[1]
	    = adjustVal(m_currClusterEyeColor.m_rgb[1], m_targetClusterEyeColor[m_targetEyeColorIdx].m_rgb[1], m_clusterEyeAnimSpeeds[1]);
	m_currClusterEyeColor.m_rgb[2]
	    = adjustVal(m_currClusterEyeColor.m_rgb[2], m_targetClusterEyeColor[m_targetEyeColorIdx].m_rgb[2], m_clusterEyeAnimSpeeds[2]);

	// side eyes
	m_currSideEyeColor.m_rgb[0]
	    = adjustVal(m_currSideEyeColor.m_rgb[0], m_targetSideEyeColor[m_targetEyeColorIdx].m_rgb[0], m_sideEyeAnimSpeeds[0]);
	m_currSideEyeColor.m_rgb[1]
	    = adjustVal(m_currSideEyeColor.m_rgb[1], m_targetSideEyeColor[m_targetEyeColorIdx].m_rgb[1], m_sideEyeAnimSpeeds[1]);
	m_currSideEyeColor.m_rgb[2]
	    = adjustVal(m_currSideEyeColor.m_rgb[2], m_targetSideEyeColor[m_targetEyeColorIdx].m_rgb[2], m_sideEyeAnimSpeeds[2]);

	// if both cluster and side eyes are within 0.01f of the target color (for R, G, and B), swap target (light->dark or dark->light)
	bool check = true;
	for (int i = 0; i < 3; i++) {
		f32 clusterColorDiff = absVal(m_currClusterEyeColor.m_rgb[i] - m_targetClusterEyeColor[m_targetEyeColorIdx].m_rgb[i]);
		if (!(clusterColorDiff > 0.01f)) {
			f32 sideColorDiff = absVal(m_currSideEyeColor.m_rgb[i] - m_targetSideEyeColor[m_targetEyeColorIdx].m_rgb[i]);
			if (!(sideColorDiff > 0.01f)) {
				continue;
			}
		}
		check = false;
		break;
	}

	if (check) {
		m_targetEyeColorIdx ^= 1;

		setMatEyeAnimSpeed();
	}
}

/*
 * --INFO--
 * Address:	802DEF50
 * Size:	00011C
 */
void Obj::startBlendAnimation(int animIdx, bool doBlendAnim)
{
	if (doBlendAnim) {
		SysShape::Animator& animator = static_cast<ProperAnimator*>(m_animator)->getAnimator(0);
		SysShape::AnimInfo* animInfo = animator.m_animInfo;
		f32 time;

		if (animInfo) {
			time = animInfo->m_anm->m_time;
		} else {
			time = 0.0f;
		}

		f32 currFrame = animator.m_timer;

		if (time - 1.0f > currFrame) {
			int newIdx;
			if (animInfo) {
				newIdx = animInfo->m_id;
			} else {
				newIdx = -1;
			}

			if (animIdx != newIdx) {
				startBlend(newIdx, animIdx, &EnemyBlendAnimatorBase::sBlendLinearFun, 30.0f, nullptr);
				animator.setCurrFrame(currFrame);
			}
		} else {
			startMotion(animIdx, nullptr);
		}

	} else {
		startMotion(animIdx, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802DF06C
 * Size:	000098
 */
void Obj::endBlendAnimation()
{
	SysShape::Animator& animator = static_cast<ProperAnimator*>(m_animator)->getAnimator(1);
	SysShape::AnimInfo* animInfo = animator.m_animInfo;
	int animIdx;
	if (animInfo) {
		animIdx = animInfo->m_id;
	} else {
		animIdx = -1;
	}

	f32 currFrame = animator.m_timer;

	endBlend();
	startMotion(animIdx, nullptr);
	setMotionFrame(currFrame);
}

/*
 * --INFO--
 * Address:	802DF104
 * Size:	00004C
 */
int Obj::getCurrAnimationIndex()
{
	SysShape::AnimInfo* animInfo = static_cast<ProperAnimator*>(m_animator)->getAnimator(0).m_animInfo;
	if (animInfo) {
		return animInfo->m_id;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	802DF150
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
 * Address:	802DF218
 * Size:	000120
 */
void Obj::startBossAttackBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);

	int jumpReqIdx = 3;
	switch (m_attackIndex) {
	case 0:
		jumpReqIdx = 7;
		break;
	case 1:
		jumpReqIdx = 3;
		break;
	case 2:
		jumpReqIdx = 5;
		break;
	case 3:
		jumpReqIdx = 6;
		break;
	}

	soundObj->jumpRequest(jumpReqIdx);
}

/*
 * --INFO--
 * Address:	802DF338
 * Size:	00016C
 */
void Obj::finishBossAttackBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);

	int jumpReqIdx = 1;
	int counter    = 0;
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			counter++;
		}
	}

	switch (counter) {
	case 0:
		jumpReqIdx = 11;
		break;
	case 1:
		jumpReqIdx = 10;
		break;
	case 2:
		jumpReqIdx = 9;
		break;
	case 3:
		jumpReqIdx = 8;
		break;
	case 4:
		jumpReqIdx = 1;
		break;
	}

	soundObj->jumpRequest(jumpReqIdx);
}

/*
 * --INFO--
 * Address:	802DF4A4
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
 * Address:	802DF56C
 * Size:	0001B0
 */
void Obj::startBossItemDropBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);

	int jumpReqIdx = 8;
	int counter    = 0;
	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			counter++;
		}
	}

	switch (counter) {
	case 0:
		jumpReqIdx = 11;
		break;
	case 1:
		jumpReqIdx = 10;
		break;
	case 2:
		jumpReqIdx = 9;
		break;
	case 3:
		jumpReqIdx = 8;
		break;
	}

	if (getStateID() == BIGTREASURE_Attack) {
		if (isEvent(0, EB_IsBittered) && !m_treasures[m_attackIndex]) {
			soundObj->jumpRequest(jumpReqIdx);
		}
	} else {
		soundObj->jumpRequest(jumpReqIdx);
	}
}

/*
 * --INFO--
 * Address:	802DF71C
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
 * Address:	802DF818
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
 * Address:	802DF8D4
 * Size:	000164
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBigBoss* soundObj = static_cast<PSM::EnemyBigBoss*>(m_soundObj);
	PSM::checkBoss(soundObj);

	int counter, jumpReqIdx;
	jumpReqIdx = 1;
	counter    = 0;

	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			counter++;
		}
	}

	switch (counter) {
	case 0:
		jumpReqIdx = 11;
		break;
	case 1:
		jumpReqIdx = 10;
		break;
	case 2:
		jumpReqIdx = 9;
		break;
	case 3:
		jumpReqIdx = 8;
		break;
	case 4:
		jumpReqIdx = 1;
		break;
	}

	soundObj->_11C = jumpReqIdx;

	soundObj->setAppearFlag(true);
}

/*
 * --INFO--
 * Address:	802DFA38
 * Size:	00061C
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]          = new efx::TOootaFoot;
		m_footWFX[i]         = new efx::TDamaFootw;
		m_treasureSmokeFX[i] = new efx::TDamaSmoke;
		m_startTreasureFX[i] = new efx::TOootaStartOta;
		for (int j = 0; j < 3; j++) {
			m_startLegFX[i][j] = new efx::TOootaStartLeg;
		}

		for (int j = 0; j < 4; j++) {
			m_deadLegFX[i][j]   = new efx::TOootaDeadLeg;
			m_changeLegFX[i][j] = new efx::TOootaChangeLeg;
		}
	}

	m_startBodyFX     = new efx::TOootaStartBody;
	m_deadBodyFX      = new efx::TOootaDeadBody;
	m_deadAwaFX       = new efx::TOootaDeadAwa;
	m_changeBodyFX    = new efx::TOootaChangeBody;
	m_shineParticleFX = new efx::TOootaParticle;
}

/*
 * --INFO--
 * Address:	802E00D8
 * Size:	000220
 */
void Obj::setupEffect()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]->setPosptr(&m_jointPositions[i][3]);
		m_footWFX[i]->m_position = &m_jointPositions[i][3];

		m_startLegFX[i][0]->setPosPosPtr(&m_kosiJointPos, &m_jointPositions[i][0]);
		for (int j = 1; j < 3; j++) {
			m_startLegFX[i][j]->setPosPosPtr(&m_jointPositions[i][j - 1], &m_jointPositions[i][j]);
		}

		m_deadLegFX[i][0]->setPosptr(&m_kosiJointPos, &m_jointPositions[i][0]);
		m_changeLegFX[i][0]->setPosPosPtr(&m_kosiJointPos, &m_jointPositions[i][0]);
		for (int j = 1; j < 4; j++) {
			m_deadLegFX[i][j]->setPosptr(&m_jointPositions[i][j - 1], &m_jointPositions[i][j]);
			m_changeLegFX[i][j]->setPosPosPtr(&m_jointPositions[i][j - 1], &m_jointPositions[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			m_treasureSmokeFX[i]->m_position = &m_treasures[i]->m_pelletPosition;
		}
	}

	Matrixf* kosiMtx     = m_model->getJoint("kosi")->getWorldMatrix();
	m_startBodyFX->m_mtx = kosiMtx;
	m_deadBodyFX->setMtxptr(kosiMtx->m_matrix.mtxView);
	m_deadAwaFX->m_mtx    = kosiMtx;
	m_changeBodyFX->m_mtx = kosiMtx;

	m_startTreasureFX[0]->m_mtx = m_model->getJoint("otakara_elec")->getWorldMatrix();
	m_startTreasureFX[1]->m_mtx = m_model->getJoint("otakara_fire")->getWorldMatrix();
	m_startTreasureFX[2]->m_mtx = m_model->getJoint("otakara_gas")->getWorldMatrix();
	m_startTreasureFX[3]->m_mtx = m_model->getJoint("otakara_water")->getWorldMatrix();

	m_shineParticleFX->m_position = &m_homePosition;
}

/*
 * --INFO--
 * Address:	802E02F8
 * Size:	0001C0
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = m_jointPositions[footIdx][3];

	if (wbox) {
		effectPos.y = *wbox->getSeaHeightPtr();

		efx::Arg fxArg(effectPos);
		efx::TDamaWalkw waterWalk;

		waterWalk.create(&fxArg);
		PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&m_jointPositions[footIdx][3]);
		if (sound) {
			sound->setPitch(1.2f, 0, 0);
		}

	} else {
		efx::Arg fxArg(effectPos);
		efx::TOootaWalk walk;

		walk.create(&fxArg);
	}

	PSStartSoundVec(PSSE_EN_BIGTAKARA_WALK, (Vec*)&m_jointPositions[footIdx][3]);
	cameraMgr->startVibration(6, effectPos, 2);
	rumbleMgr->startRumble(14, effectPos, 2);
}

/*
 * --INFO--
 * Address:	802E04B8
 * Size:	0000A0
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	if (wbox) {
		m_footWFX[footIdx]->create(nullptr);
	} else {
		m_footFX[footIdx]->create(nullptr);
	}

	getJAIObject()->startSound(PSSE_EN_BIGTAKARA_RAISE, 0);
}

/*
 * --INFO--
 * Address:	802E0558
 * Size:	00003C
 */
void Obj::startTreasurePinchSmoke(int treasureIdx) { m_treasureSmokeFX[treasureIdx]->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0594
 * Size:	000038
 */
void Obj::finishTreasurePinchSmoke(int treasureIdx) { m_treasureSmokeFX[treasureIdx]->fade(); }

/*
 * --INFO--
 * Address:	802E05CC
 * Size:	0000D8
 */
void Obj::createDropTreasureEffect(int treasureIdx)
{
	Vector3f pelletPos = m_treasures[treasureIdx]->getPosition();

	efx::Arg fxArg(pelletPos);
	efx::TOootaPartsoff partsOff;

	partsOff.create(&fxArg);

	getJAIObject()->startSound(PSSE_EN_BIGTAKARA_DROP_ITEM, 0);
}

/*
 * --INFO--
 * Address:	802E06A4
 * Size:	0000F0
 */
void Obj::createAppearBodyEffect()
{
	m_startBodyFX->create(nullptr);

	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			m_startTreasureFX[i]->create(nullptr);
		}
	}

	efx::Arg fxArg(this);
	efx::TOootaStartSmoke smokeFX;

	smokeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802E0794
 * Size:	000060
 */
void Obj::createAppearLegEffect(int legIdx)
{
	for (int i = 0; i < 3; i++) {
		m_startLegFX[legIdx][i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E07F4
 * Size:	00021C
 */
void Obj::createDeadBombLegEffect(int idx)
{
	if (idx == 0) {
		for (int i = 0; i < 4; i++) {
			efx::ArgPosPos fxArg(m_kosiJointPos, m_jointPositions[i][idx]);
			efx::TOootaBombLeg bombLegFX;

			bombLegFX.create(&fxArg);
		}

	} else {
		for (int i = 0; i < 4; i++) {
			efx::ArgPosPos fxArg(m_jointPositions[i][idx - 1], m_jointPositions[i][idx]);
			efx::TOootaBombLeg bombLegFX;

			bombLegFX.create(&fxArg);
		}
	}
}

/*
 * --INFO--
 * Address:	802E0A10
 * Size:	000090
 */
void Obj::createDeadBombBodyEffect()
{
	Vector3f effectPos = m_model->getJoint("kosi")->getWorldMatrix()->getBasis(3);
	efx::Arg fxArg(effectPos);
	efx::TOootaBombBody bombBodyFX;
	bombBodyFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802E0AA0
 * Size:	000060
 */
void Obj::startDeadBubbleLegEffect(int idx)
{
	for (int i = 0; i < 4; i++) {
		m_deadLegFX[i][idx]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E0B00
 * Size:	00005C
 */
void Obj::finishDeadBubbleLegEffect(int idx)
{
	for (int i = 0; i < 4; i++) {
		m_deadLegFX[i][idx]->fade();
	}
}

/*
 * --INFO--
 * Address:	802E0B5C
 * Size:	000034
 */
void Obj::startDeadBubbleBodyEffect() { m_deadBodyFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0B90
 * Size:	000030
 */
void Obj::finishDeadBubbleBodyEffect() { m_deadBodyFX->fade(); }

/*
 * --INFO--
 * Address:	802E0BC0
 * Size:	000034
 */
void Obj::startDeadBubbleMouthEffect() { m_deadAwaFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0BF4
 * Size:	000030
 */
void Obj::finishDeadBubbleMouthEffect() { m_deadAwaFX->fade(); }

/*
 * --INFO--
 * Address:	802E0C24
 * Size:	0000A0
 */
void Obj::createChangeMaterialEffect()
{
	m_changeBodyFX->create(nullptr);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m_changeLegFX[i][j]->create(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802E0CC4
 * Size:	0000B8
 */
void Obj::createDeadBombFootEffect()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			efx::Arg fxArg(m_jointPositions[i][j]);
			efx::TDamaDeadBomb deadBombFX;
			deadBombFX.create(&fxArg);
		}
	}
}

/*
 * --INFO--
 * Address:	802E0D7C
 * Size:	000034
 */
void Obj::startShineParticleEffect() { m_shineParticleFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0DB0
 * Size:	000030
 */
void Obj::finishShineParticleEffect() { m_shineParticleFX->fade(); }

/*
 * --INFO--
 * Address:	802E0DE0
 * Size:	0001C4
 */
void Obj::effectDrawOn()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]->endDemoDrawOn();
		m_footWFX[i]->endDemoDrawOn();
		m_treasureSmokeFX[i]->endDemoDrawOn();
	}

	m_startBodyFX->endDemoDrawOn();

	for (int i = 0; i < 4; i++) {
		m_startTreasureFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			m_startLegFX[i][j]->endDemoDrawOn();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m_deadLegFX[i][j]->endDemoDrawOn();
		}
	}

	m_deadBodyFX->endDemoDrawOn();
	m_deadAwaFX->endDemoDrawOn();

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m_changeLegFX[i][j]->endDemoDrawOn();
		}
	}

	m_changeBodyFX->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	802E0FA4
 * Size:	0001C4
 */
void Obj::effectDrawOff()
{
	for (int i = 0; i < 4; i++) {
		m_footFX[i]->startDemoDrawOff();
		m_footWFX[i]->startDemoDrawOff();
		m_treasureSmokeFX[i]->startDemoDrawOff();
	}

	m_startBodyFX->startDemoDrawOff();

	for (int i = 0; i < 4; i++) {
		m_startTreasureFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			m_startLegFX[i][j]->startDemoDrawOff();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m_deadLegFX[i][j]->startDemoDrawOff();
		}
	}

	m_deadBodyFX->startDemoDrawOff();
	m_deadAwaFX->startDemoDrawOff();

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			m_changeLegFX[i][j]->startDemoDrawOff();
		}
	}

	m_changeBodyFX->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	802E1168
 * Size:	00002C
 */
void Obj::subShadowScale()
{
	m_shadowScale -= sys->m_deltaTime;
	if (m_shadowScale < 0.00001f) {
		m_shadowScale = 0.00001f;
	}
}

/*
 * --INFO--
 * Address:	802E1194
 * Size:	0000FC
 */
bool Obj::startBigTreasureBootUpDemo()
{
	if (gameSystem && gameSystem->m_mode == GSM_STORY_MODE && moviePlayer && !playData->isDemoFlag(DEMO_Find_Titan_Dweevil)) {
		playData->setDemoFlag(DEMO_Find_Titan_Dweevil);

		MoviePlayArg movieArg("g36_find_louie", nullptr, nullptr, 0);
		movieArg.m_origin           = m_position;
		movieArg.m_angle            = m_faceDir;
		moviePlayer->m_targetObject = this;

		movie_begin(false);
		moviePlayer->play(movieArg);

		return true;
	}

	return false;
}

} // namespace BigTreasure
} // namespace Game
