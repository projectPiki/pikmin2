#include "Game/Entities/BigTreasure.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/ConditionNotStick.h"
#include "Game/IKSystemBase.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x408(r3)
	cmpwi    r0, 0
	bne      lbl_802DDF64
	li       r3, 0x16
	b        lbl_802DDFC4

lbl_802DDF64:
	cmpwi    r0, 1
	bne      lbl_802DDFA4
	bl       getCurrAnimationIndex__Q34Game11BigTreasure3ObjFv
	cmpwi    r3, 3
	bne      lbl_802DDF80
	li       r3, 4
	b        lbl_802DDFC4

lbl_802DDF80:
	cmpwi    r3, 6
	bne      lbl_802DDF90
	li       r3, 7
	b        lbl_802DDFC4

lbl_802DDF90:
	cmpwi    r3, 9
	li       r3, 0xd
	bne      lbl_802DDFC4
	li       r3, 0xa
	b        lbl_802DDFC4

lbl_802DDFA4:
	cmpwi    r0, 2
	bne      lbl_802DDFB4
	li       r3, 0x13
	b        lbl_802DDFC4

lbl_802DDFB4:
	cmpwi    r0, 3
	li       r3, 0x18
	bne      lbl_802DDFC4
	li       r3, 0x10

lbl_802DDFC4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDFD4
 * Size:	000090
 */
int Obj::getPutItemAnimIndex()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x408(r3)
	cmpwi    r0, 0
	bne      lbl_802DDFF4
	li       r3, 0x17
	b        lbl_802DE054

lbl_802DDFF4:
	cmpwi    r0, 1
	bne      lbl_802DE034
	bl       getCurrAnimationIndex__Q34Game11BigTreasure3ObjFv
	cmpwi    r3, 4
	bne      lbl_802DE010
	li       r3, 5
	b        lbl_802DE054

lbl_802DE010:
	cmpwi    r3, 7
	bne      lbl_802DE020
	li       r3, 8
	b        lbl_802DE054

lbl_802DE020:
	cmpwi    r3, 0xa
	li       r3, 0xe
	bne      lbl_802DE054
	li       r3, 0xb
	b        lbl_802DE054

lbl_802DE034:
	cmpwi    r0, 2
	bne      lbl_802DE044
	li       r3, 0x14
	b        lbl_802DE054

lbl_802DE044:
	cmpwi    r0, 3
	li       r3, 0x18
	bne      lbl_802DE054
	li       r3, 0x11

lbl_802DE054:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE064
 * Size:	000184
 */
int Obj::getFireAttackAnimIndex()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f1, lbl_8051CCF8@sda21(r2)
	li       r4, 0
	stw      r0, 0x34(r1)
	li       r5, 0
	lfs      f2, lbl_8051CCFC@sda21(r2)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_802DE134
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x18c(r31)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f2, 0x10(r1)
	lfs      f0, 0x194(r31)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lfs      f0, lbl_8051CC30@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802DE0E8
	lfs      f0, lbl_8051CCDC@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_802DE0FC

lbl_802DE0E8:
	lfs      f0, lbl_8051CCDC@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802DE0FC
	fsubs    f1, f1, f0

lbl_802DE0FC:
	lfs      f2, 0x1fc(r31)
	lfs      f0, lbl_8051CC30@sda21(r2)
	fsubs    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_802DE11C
	lfs      f0, lbl_8051CCDC@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_802DE164

lbl_802DE11C:
	lfs      f0, lbl_8051CCDC@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_802DE164
	fsubs    f1, f1, f0
	b        lbl_802DE164

lbl_802DE134:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_8051CC60@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f1, lbl_8051CCDC@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_8051CC58@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f1, f1, f0

lbl_802DE164:
	lfs      f0, lbl_8051CD00@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802DE188
	lfs      f0, lbl_8051CD04@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802DE188
	li       r3, 9
	b        lbl_802DE1D4

lbl_802DE188:
	lfs      f0, lbl_8051CD04@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802DE1AC
	lfs      f0, lbl_8051CD08@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802DE1AC
	li       r3, 0xc
	b        lbl_802DE1D4

lbl_802DE1AC:
	lfs      f0, lbl_8051CD08@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802DE1D0
	lfs      f0, lbl_8051CD0C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802DE1D0
	li       r3, 6
	b        lbl_802DE1D4

lbl_802DE1D0:
	li       r3, 3

lbl_802DE1D4:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE1E8
 * Size:	000098
 */
f32 Obj::getPreAttackTimeMax()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x408(r3)
	cmpwi    r4, 0
	bne      lbl_802DE214
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x90c(r3)
	b        lbl_802DE26C

lbl_802DE214:
	cmpwi    r4, 1
	bne      lbl_802DE240
	bl       isNormalAttack__Q34Game11BigTreasure3ObjFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_802DE234
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x934(r3)
	b        lbl_802DE26C

lbl_802DE234:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x95c(r3)
	b        lbl_802DE26C

lbl_802DE240:
	cmpwi    r4, 2
	bne      lbl_802DE254
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x984(r3)
	b        lbl_802DE26C

lbl_802DE254:
	cmpwi    r4, 3
	bne      lbl_802DE268
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x9ac(r3)
	b        lbl_802DE26C

lbl_802DE268:
	lfs      f1, lbl_8051CD10@sda21(r2)

lbl_802DE26C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE280
 * Size:	00005C
 */
f32 Obj::getAttackTimeMax()
{
	/*
	lwz      r0, 0x408(r3)
	cmpwi    r0, 0
	bne      lbl_802DE298
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x9d4(r3)
	blr

lbl_802DE298:
	cmpwi    r0, 1
	bne      lbl_802DE2AC
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x9fc(r3)
	blr

lbl_802DE2AC:
	cmpwi    r0, 2
	bne      lbl_802DE2C0
	lwz      r3, 0xc0(r3)
	lfs      f1, 0xa24(r3)
	blr

lbl_802DE2C0:
	cmpwi    r0, 3
	bne      lbl_802DE2D4
	lwz      r3, 0xc0(r3)
	lfs      f1, 0xa4c(r3)
	blr

lbl_802DE2D4:
	lfs      f1, lbl_8051CD10@sda21(r2)
	blr
	*/
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
	bool isVisible  = false;
	m_isFastMatAnim = false;

	for (int i = 0; i < 4; i++) {
		if (m_treasures[i]) {
			isVisible = true;
			break;
		}
	}

	resetTargetMatBodyColor(isVisible);
	resetCurrentMatBodyColor();
	m_targetEyeColorIdx = EYECOLOR_Light; // initially go towards light color
	resetTargetEyeMatColor();
	resetCurrentMatEyeColor();
	setMatEyeAnimSpeed();

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stb      r4, 0x2dc(r3)
	lwz      r0, 0x3c4(r3)
	cmplwi   r0, 0
	beq      lbl_802DE32C
	li       r4, 1
	b        lbl_802DE368

lbl_802DE32C:
	lwz      r0, 0x3c8(r31)
	cmplwi   r0, 0
	beq      lbl_802DE340
	li       r4, 1
	b        lbl_802DE368

lbl_802DE340:
	addi     r3, r31, 8
	lwz      r0, 0x3cc(r31)
	cmplwi   r0, 0
	beq      lbl_802DE358
	li       r4, 1
	b        lbl_802DE368

lbl_802DE358:
	lwz      r0, 0x3c8(r3)
	cmplwi   r0, 0
	beq      lbl_802DE368
	li       r4, 1

lbl_802DE368:
	mr       r3, r31
	bl       resetTargetMatBodyColor__Q34Game11BigTreasure3ObjFb
	mr       r3, r31
	bl       resetCurrentMatBodyColor__Q34Game11BigTreasure3ObjFv
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x41c(r31)
	bl       resetTargetEyeMatColor__Q34Game11BigTreasure3ObjFv
	mr       r3, r31
	bl       resetCurrentMatEyeColor__Q34Game11BigTreasure3ObjFv
	mr       r3, r31
	bl       setMatEyeAnimSpeed__Q34Game11BigTreasure3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
void Obj::setAttackMaterialColor(bool check)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stb      r4, 0x2dc(r3)
	lbz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	beq      lbl_802DE7CC
	lwz      r0, 0x408(r31)
	cmpwi    r0, 2
	beq      lbl_802DE6E8
	bge      lbl_802DE604
	cmpwi    r0, 0
	beq      lbl_802DE610
	bge      lbl_802DE67C
	b        lbl_802DE954

lbl_802DE604:
	cmpwi    r0, 4
	bge      lbl_802DE954
	b        lbl_802DE75C

lbl_802DE610:
	li       r0, 0x96
	li       r3, 0x82
	sth      r0, 0x40c(r31)
	li       r0, 0x14
	lfs      f5, lbl_8051CCA4@sda21(r2)
	sth      r3, 0x40e(r31)
	lfs      f1, lbl_8051CC30@sda21(r2)
	sth      r0, 0x410(r31)
	lfs      f4, lbl_8051CD18@sda21(r2)
	stfs     f5, 0x438(r31)
	lfs      f0, lbl_8051CCF8@sda21(r2)
	stfs     f5, 0x43c(r31)
	lfs      f3, lbl_8051CD24@sda21(r2)
	stfs     f1, 0x440(r31)
	lfs      f2, lbl_8051CC38@sda21(r2)
	stfs     f4, 0x444(r31)
	lfs      f1, lbl_8051CCF0@sda21(r2)
	stfs     f0, 0x448(r31)
	lfs      f0, lbl_8051CD28@sda21(r2)
	stfs     f3, 0x44c(r31)
	stfs     f2, 0x45c(r31)
	stfs     f2, 0x460(r31)
	stfs     f5, 0x464(r31)
	stfs     f4, 0x468(r31)
	stfs     f1, 0x46c(r31)
	stfs     f0, 0x470(r31)
	b        lbl_802DE954

lbl_802DE67C:
	li       r0, 0xa0
	li       r3, 0x32
	sth      r0, 0x40c(r31)
	li       r0, 0x14
	lfs      f6, lbl_8051CC38@sda21(r2)
	sth      r3, 0x40e(r31)
	lfs      f0, lbl_8051CD14@sda21(r2)
	sth      r0, 0x410(r31)
	lfs      f5, lbl_8051CD18@sda21(r2)
	stfs     f6, 0x438(r31)
	lfs      f4, lbl_8051CCE8@sda21(r2)
	stfs     f0, 0x43c(r31)
	lfs      f3, lbl_8051CD28@sda21(r2)
	stfs     f0, 0x440(r31)
	lfs      f2, lbl_8051CD2C@sda21(r2)
	stfs     f5, 0x444(r31)
	lfs      f1, lbl_8051CCF0@sda21(r2)
	stfs     f4, 0x448(r31)
	lfs      f0, lbl_8051CC90@sda21(r2)
	stfs     f4, 0x44c(r31)
	stfs     f3, 0x45c(r31)
	stfs     f6, 0x460(r31)
	stfs     f2, 0x464(r31)
	stfs     f5, 0x468(r31)
	stfs     f1, 0x46c(r31)
	stfs     f0, 0x470(r31)
	b        lbl_802DE954

lbl_802DE6E8:
	li       r0, 0x5a
	li       r3, 5
	sth      r0, 0x40c(r31)
	li       r0, 0x78
	lfs      f4, lbl_8051CCA4@sda21(r2)
	sth      r3, 0x40e(r31)
	lfs      f0, lbl_8051CC30@sda21(r2)
	sth      r0, 0x410(r31)
	lfs      f3, lbl_8051CD30@sda21(r2)
	stfs     f4, 0x438(r31)
	lfs      f2, lbl_8051CD34@sda21(r2)
	stfs     f0, 0x43c(r31)
	lfs      f1, lbl_8051CD20@sda21(r2)
	stfs     f4, 0x440(r31)
	lfs      f0, lbl_8051CD38@sda21(r2)
	stfs     f3, 0x444(r31)
	lfs      f3, lbl_8051CD14@sda21(r2)
	stfs     f2, 0x448(r31)
	lfs      f2, lbl_8051CD28@sda21(r2)
	stfs     f1, 0x44c(r31)
	lfs      f1, lbl_8051CC90@sda21(r2)
	stfs     f0, 0x45c(r31)
	lfs      f0, lbl_8051CD3C@sda21(r2)
	stfs     f3, 0x460(r31)
	stfs     f2, 0x464(r31)
	stfs     f1, 0x468(r31)
	stfs     f3, 0x46c(r31)
	stfs     f0, 0x470(r31)
	b        lbl_802DE954

lbl_802DE75C:
	li       r0, 0x28
	li       r3, 0x64
	sth      r0, 0x40c(r31)
	li       r0, 0xb4
	lfs      f2, lbl_8051CD38@sda21(r2)
	sth      r3, 0x40e(r31)
	lfs      f1, lbl_8051CD28@sda21(r2)
	sth      r0, 0x410(r31)
	lfs      f0, lbl_8051CD24@sda21(r2)
	stfs     f2, 0x438(r31)
	lfs      f4, lbl_8051CC90@sda21(r2)
	stfs     f1, 0x43c(r31)
	lfs      f3, lbl_8051CD18@sda21(r2)
	stfs     f0, 0x440(r31)
	lfs      f0, lbl_8051CCF8@sda21(r2)
	stfs     f4, 0x444(r31)
	lfs      f2, lbl_8051CD14@sda21(r2)
	stfs     f3, 0x448(r31)
	lfs      f1, lbl_8051CC38@sda21(r2)
	stfs     f0, 0x44c(r31)
	lfs      f0, lbl_8051CCF0@sda21(r2)
	stfs     f2, 0x45c(r31)
	stfs     f2, 0x460(r31)
	stfs     f1, 0x464(r31)
	stfs     f4, 0x468(r31)
	stfs     f0, 0x46c(r31)
	stfs     f3, 0x470(r31)
	b        lbl_802DE954

lbl_802DE7CC:
	lwz      r0, 0x3c4(r31)
	li       r4, 0
	cmplwi   r0, 0
	beq      lbl_802DE7E4
	li       r4, 1
	b        lbl_802DE820

lbl_802DE7E4:
	lwz      r0, 0x3c8(r31)
	cmplwi   r0, 0
	beq      lbl_802DE7F8
	li       r4, 1
	b        lbl_802DE820

lbl_802DE7F8:
	addi     r3, r31, 8
	lwz      r0, 0x3cc(r31)
	cmplwi   r0, 0
	beq      lbl_802DE810
	li       r4, 1
	b        lbl_802DE820

lbl_802DE810:
	lwz      r0, 0x3c8(r3)
	cmplwi   r0, 0
	beq      lbl_802DE820
	li       r4, 1

lbl_802DE820:
	li       r3, 0x1e
	clrlwi.  r0, r4, 0x18
	sth      r3, 0x40c(r31)
	li       r3, 0x46
	li       r0, 0x3c
	sth      r3, 0x40e(r31)
	sth      r0, 0x410(r31)
	beq      lbl_802DE84C
	li       r0, 0xff
	sth      r0, 0x412(r31)
	b        lbl_802DE854

lbl_802DE84C:
	li       r0, 0
	sth      r0, 0x412(r31)

lbl_802DE854:
	clrlwi.  r0, r4, 0x18
	beq      lbl_802DE8B4
	lfs      f2, lbl_8051CD14@sda21(r2)
	lfs      f0, lbl_8051CC38@sda21(r2)
	stfs     f2, 0x438(r31)
	lfs      f1, lbl_8051CC90@sda21(r2)
	stfs     f0, 0x43c(r31)
	lfs      f0, lbl_8051CD18@sda21(r2)
	stfs     f2, 0x440(r31)
	lfs      f4, lbl_8051CD1C@sda21(r2)
	stfs     f1, 0x444(r31)
	lfs      f3, lbl_8051CC30@sda21(r2)
	stfs     f0, 0x448(r31)
	lfs      f2, lbl_8051CCA4@sda21(r2)
	stfs     f4, 0x44c(r31)
	lfs      f1, lbl_8051CCF8@sda21(r2)
	stfs     f3, 0x45c(r31)
	lfs      f0, lbl_8051CD20@sda21(r2)
	stfs     f2, 0x460(r31)
	stfs     f3, 0x464(r31)
	stfs     f4, 0x468(r31)
	stfs     f1, 0x46c(r31)
	stfs     f0, 0x470(r31)
	b        lbl_802DE954

lbl_802DE8B4:
	lfs      f0, lbl_8051CC44@sda21(r2)
	lfs      f3, lbl_8051CCE8@sda21(r2)
	stfs     f0, 0x438(r31)
	lfs      f0, lbl_8051CD18@sda21(r2)
	stfs     f3, 0x43c(r31)
	lfs      f2, lbl_8051CCF8@sda21(r2)
	stfs     f0, 0x440(r31)
	lfs      f1, lbl_8051CD40@sda21(r2)
	stfs     f0, 0x444(r31)
	lfs      f0, lbl_8051CC38@sda21(r2)
	stfs     f2, 0x448(r31)
	lfs      f2, lbl_8051CD44@sda21(r2)
	stfs     f1, 0x44c(r31)
	lfs      f1, lbl_8051CCA4@sda21(r2)
	stfs     f0, 0x45c(r31)
	lfs      f0, lbl_8051CD3C@sda21(r2)
	stfs     f2, 0x460(r31)
	stfs     f1, 0x464(r31)
	stfs     f3, 0x468(r31)
	stfs     f1, 0x46c(r31)
	stfs     f0, 0x470(r31)
	lha      r0, 0x412(r31)
	cmpwi    r0, 0
	bne      lbl_802DE954
	lha      r0, 0x41a(r31)
	cmpwi    r0, 0xff
	bne      lbl_802DE954
	mr       r3, r31
	bl       createChangeMaterialEffect__Q34Game11BigTreasure3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x591b
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802DE954:
	lbz      r0, 0x2dc(r31)
	lfs      f4, lbl_8051CCA4@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_802DE968
	lfs      f4, lbl_8051CC44@sda21(r2)

lbl_802DE968:
	li       r0, 3
	li       r5, 0
	mr       r4, r31
	lfs      f3, lbl_8051CC30@sda21(r2)
	lfs      f2, lbl_8051CC34@sda21(r2)
	mtctr    r0

lbl_802DE980:
	lwz      r0, 0x41c(r31)
	lfs      f0, 0x450(r4)
	mulli    r0, r0, 0xc
	add      r3, r0, r5
	addi     r0, r3, 0x438
	lfsx     f1, r31, r0
	fsubs    f5, f1, f0
	fcmpo    cr0, f5, f3
	ble      lbl_802DE9A8
	b        lbl_802DE9AC

lbl_802DE9A8:
	fneg     f5, f5

lbl_802DE9AC:
	lfs      f1, 0x444(r4)
	lfs      f0, 0x438(r4)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DE9C4
	b        lbl_802DE9C8

lbl_802DE9C4:
	fneg     f0, f0

lbl_802DE9C8:
	fcmpo    cr0, f5, f0
	ble      lbl_802DE9D4
	b        lbl_802DE9D8

lbl_802DE9D4:
	fmr      f5, f0

lbl_802DE9D8:
	stfs     f5, 0x420(r4)
	lfs      f0, 0x420(r4)
	fcmpo    cr0, f0, f2
	bge      lbl_802DE9EC
	stfs     f2, 0x420(r4)

lbl_802DE9EC:
	lfs      f0, 0x420(r4)
	fdivs    f0, f0, f4
	stfs     f0, 0x420(r4)
	lwz      r0, 0x41c(r31)
	lfs      f0, 0x474(r4)
	mulli    r0, r0, 0xc
	add      r3, r0, r5
	addi     r0, r3, 0x45c
	lfsx     f1, r31, r0
	fsubs    f5, f1, f0
	fcmpo    cr0, f5, f3
	ble      lbl_802DEA20
	b        lbl_802DEA24

lbl_802DEA20:
	fneg     f5, f5

lbl_802DEA24:
	lfs      f1, 0x468(r4)
	lfs      f0, 0x45c(r4)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DEA3C
	b        lbl_802DEA40

lbl_802DEA3C:
	fneg     f0, f0

lbl_802DEA40:
	fcmpo    cr0, f5, f0
	ble      lbl_802DEA4C
	b        lbl_802DEA50

lbl_802DEA4C:
	fmr      f5, f0

lbl_802DEA50:
	stfs     f5, 0x42c(r4)
	lfs      f0, 0x42c(r4)
	fcmpo    cr0, f0, f2
	bge      lbl_802DEA64
	stfs     f2, 0x42c(r4)

lbl_802DEA64:
	lfs      f0, 0x42c(r4)
	addi     r5, r5, 4
	fdivs    f0, f0, f4
	stfs     f0, 0x42c(r4)
	addi     r4, r4, 4
	bdnz     lbl_802DE980
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DEA90
 * Size:	0004C0
 */
void Obj::updateMaterialColor()
{
	/*
	lha      r4, 0x40c(r3)
	lha      r5, 0x414(r3)
	subf.    r6, r4, r5
	neg      r0, r6
	ble      lbl_802DEAA8
	mr       r0, r6

lbl_802DEAA8:
	cmpwi    r0, 5
	bge      lbl_802DEAB4
	b        lbl_802DEACC

lbl_802DEAB4:
	cmpw     r5, r4
	bge      lbl_802DEAC4
	addi     r5, r5, 5
	b        lbl_802DEAC8

lbl_802DEAC4:
	addi     r5, r5, -5

lbl_802DEAC8:
	mr       r4, r5

lbl_802DEACC:
	sth      r4, 0x414(r3)
	lha      r4, 0x40e(r3)
	lha      r5, 0x416(r3)
	subf.    r6, r4, r5
	neg      r0, r6
	ble      lbl_802DEAE8
	mr       r0, r6

lbl_802DEAE8:
	cmpwi    r0, 5
	bge      lbl_802DEAF4
	b        lbl_802DEB0C

lbl_802DEAF4:
	cmpw     r5, r4
	bge      lbl_802DEB04
	addi     r5, r5, 5
	b        lbl_802DEB08

lbl_802DEB04:
	addi     r5, r5, -5

lbl_802DEB08:
	mr       r4, r5

lbl_802DEB0C:
	sth      r4, 0x416(r3)
	lha      r4, 0x410(r3)
	lha      r5, 0x418(r3)
	subf.    r6, r4, r5
	neg      r0, r6
	ble      lbl_802DEB28
	mr       r0, r6

lbl_802DEB28:
	cmpwi    r0, 5
	bge      lbl_802DEB34
	b        lbl_802DEB4C

lbl_802DEB34:
	cmpw     r5, r4
	bge      lbl_802DEB44
	addi     r5, r5, 5
	b        lbl_802DEB48

lbl_802DEB44:
	addi     r5, r5, -5

lbl_802DEB48:
	mr       r4, r5

lbl_802DEB4C:
	sth      r4, 0x418(r3)
	lha      r4, 0x412(r3)
	lha      r5, 0x41a(r3)
	subf.    r6, r4, r5
	neg      r0, r6
	ble      lbl_802DEB68
	mr       r0, r6

lbl_802DEB68:
	cmpwi    r0, 5
	bge      lbl_802DEB74
	b        lbl_802DEB8C

lbl_802DEB74:
	cmpw     r5, r4
	bge      lbl_802DEB84
	addi     r5, r5, 5
	b        lbl_802DEB88

lbl_802DEB84:
	addi     r5, r5, -5

lbl_802DEB88:
	mr       r4, r5

lbl_802DEB8C:
	sth      r4, 0x41a(r3)
	lfs      f0, lbl_8051CC30@sda21(r2)
	lwz      r0, 0x41c(r3)
	lfs      f1, 0x450(r3)
	mulli    r0, r0, 0xc
	lfs      f3, 0x420(r3)
	add      r4, r3, r0
	lfs      f2, 0x438(r4)
	fsubs    f4, f1, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802DEBBC
	b        lbl_802DEBC0

lbl_802DEBBC:
	fneg     f4, f4

lbl_802DEBC0:
	fcmpo    cr0, f4, f3
	bge      lbl_802DEBCC
	b        lbl_802DEBE0

lbl_802DEBCC:
	fcmpo    cr0, f1, f2
	bge      lbl_802DEBDC
	fadds    f2, f1, f3
	b        lbl_802DEBE0

lbl_802DEBDC:
	fsubs    f2, f1, f3

lbl_802DEBE0:
	stfs     f2, 0x450(r3)
	lfs      f0, lbl_8051CC30@sda21(r2)
	lwz      r0, 0x41c(r3)
	lfs      f1, 0x454(r3)
	mulli    r0, r0, 0xc
	lfs      f3, 0x424(r3)
	add      r4, r3, r0
	lfs      f2, 0x43c(r4)
	fsubs    f4, f1, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802DEC10
	b        lbl_802DEC14

lbl_802DEC10:
	fneg     f4, f4

lbl_802DEC14:
	fcmpo    cr0, f4, f3
	bge      lbl_802DEC20
	b        lbl_802DEC34

lbl_802DEC20:
	fcmpo    cr0, f1, f2
	bge      lbl_802DEC30
	fadds    f2, f1, f3
	b        lbl_802DEC34

lbl_802DEC30:
	fsubs    f2, f1, f3

lbl_802DEC34:
	stfs     f2, 0x454(r3)
	lfs      f0, lbl_8051CC30@sda21(r2)
	lwz      r0, 0x41c(r3)
	lfs      f1, 0x458(r3)
	mulli    r0, r0, 0xc
	lfs      f3, 0x428(r3)
	add      r4, r3, r0
	lfs      f2, 0x440(r4)
	fsubs    f4, f1, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802DEC64
	b        lbl_802DEC68

lbl_802DEC64:
	fneg     f4, f4

lbl_802DEC68:
	fcmpo    cr0, f4, f3
	bge      lbl_802DEC74
	b        lbl_802DEC88

lbl_802DEC74:
	fcmpo    cr0, f1, f2
	bge      lbl_802DEC84
	fadds    f2, f1, f3
	b        lbl_802DEC88

lbl_802DEC84:
	fsubs    f2, f1, f3

lbl_802DEC88:
	stfs     f2, 0x458(r3)
	lfs      f0, lbl_8051CC30@sda21(r2)
	lwz      r0, 0x41c(r3)
	lfs      f1, 0x474(r3)
	mulli    r0, r0, 0xc
	lfs      f3, 0x42c(r3)
	add      r4, r3, r0
	lfs      f2, 0x45c(r4)
	fsubs    f4, f1, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802DECB8
	b        lbl_802DECBC

lbl_802DECB8:
	fneg     f4, f4

lbl_802DECBC:
	fcmpo    cr0, f4, f3
	bge      lbl_802DECC8
	b        lbl_802DECDC

lbl_802DECC8:
	fcmpo    cr0, f1, f2
	bge      lbl_802DECD8
	fadds    f2, f1, f3
	b        lbl_802DECDC

lbl_802DECD8:
	fsubs    f2, f1, f3

lbl_802DECDC:
	stfs     f2, 0x474(r3)
	lfs      f0, lbl_8051CC30@sda21(r2)
	lwz      r0, 0x41c(r3)
	lfs      f1, 0x478(r3)
	mulli    r0, r0, 0xc
	lfs      f3, 0x430(r3)
	add      r4, r3, r0
	lfs      f2, 0x460(r4)
	fsubs    f4, f1, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802DED0C
	b        lbl_802DED10

lbl_802DED0C:
	fneg     f4, f4

lbl_802DED10:
	fcmpo    cr0, f4, f3
	bge      lbl_802DED1C
	b        lbl_802DED30

lbl_802DED1C:
	fcmpo    cr0, f1, f2
	bge      lbl_802DED2C
	fadds    f2, f1, f3
	b        lbl_802DED30

lbl_802DED2C:
	fsubs    f2, f1, f3

lbl_802DED30:
	stfs     f2, 0x478(r3)
	lfs      f0, lbl_8051CC30@sda21(r2)
	lwz      r0, 0x41c(r3)
	lfs      f1, 0x47c(r3)
	mulli    r0, r0, 0xc
	lfs      f3, 0x434(r3)
	add      r4, r3, r0
	lfs      f2, 0x464(r4)
	fsubs    f4, f1, f2
	fcmpo    cr0, f4, f0
	ble      lbl_802DED60
	b        lbl_802DED64

lbl_802DED60:
	fneg     f4, f4

lbl_802DED64:
	fcmpo    cr0, f4, f3
	bge      lbl_802DED70
	b        lbl_802DED84

lbl_802DED70:
	fcmpo    cr0, f1, f2
	bge      lbl_802DED80
	fadds    f2, f1, f3
	b        lbl_802DED84

lbl_802DED80:
	fsubs    f2, f1, f3

lbl_802DED84:
	li       r0, 3
	stfs     f2, 0x47c(r3)
	mr       r5, r3
	li       r7, 1
	lfs      f3, lbl_8051CC30@sda21(r2)
	li       r4, 0
	lfs      f2, lbl_8051CD48@sda21(r2)
	mtctr    r0

lbl_802DEDA4:
	lwz      r0, 0x41c(r3)
	lfs      f1, 0x450(r5)
	mulli    r0, r0, 0xc
	add      r6, r0, r4
	add      r6, r3, r6
	lfs      f0, 0x438(r6)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DEDCC
	b        lbl_802DEDD0

lbl_802DEDCC:
	fneg     f0, f0

lbl_802DEDD0:
	fcmpo    cr0, f0, f2
	bgt      lbl_802DEDFC
	lfs      f1, 0x474(r5)
	lfs      f0, 0x45c(r6)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DEDF0
	b        lbl_802DEDF4

lbl_802DEDF0:
	fneg     f0, f0

lbl_802DEDF4:
	fcmpo    cr0, f0, f2
	ble      lbl_802DEE04

lbl_802DEDFC:
	li       r7, 0
	b        lbl_802DEE10

lbl_802DEE04:
	addi     r4, r4, 4
	addi     r5, r5, 4
	bdnz     lbl_802DEDA4

lbl_802DEE10:
	clrlwi.  r0, r7, 0x18
	beqlr
	lwz      r0, 0x41c(r3)
	lfs      f4, lbl_8051CCA4@sda21(r2)
	xori     r0, r0, 1
	stw      r0, 0x41c(r3)
	lbz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	beq      lbl_802DEE38
	lfs      f4, lbl_8051CC44@sda21(r2)

lbl_802DEE38:
	li       r0, 3
	li       r6, 0
	mr       r5, r3
	lfs      f3, lbl_8051CC30@sda21(r2)
	lfs      f2, lbl_8051CC34@sda21(r2)
	mtctr    r0

lbl_802DEE50:
	lwz      r0, 0x41c(r3)
	lfs      f0, 0x450(r5)
	mulli    r0, r0, 0xc
	add      r4, r0, r6
	addi     r0, r4, 0x438
	lfsx     f1, r3, r0
	fsubs    f5, f1, f0
	fcmpo    cr0, f5, f3
	ble      lbl_802DEE78
	b        lbl_802DEE7C

lbl_802DEE78:
	fneg     f5, f5

lbl_802DEE7C:
	lfs      f1, 0x444(r5)
	lfs      f0, 0x438(r5)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DEE94
	b        lbl_802DEE98

lbl_802DEE94:
	fneg     f0, f0

lbl_802DEE98:
	fcmpo    cr0, f5, f0
	ble      lbl_802DEEA4
	b        lbl_802DEEA8

lbl_802DEEA4:
	fmr      f5, f0

lbl_802DEEA8:
	stfs     f5, 0x420(r5)
	lfs      f0, 0x420(r5)
	fcmpo    cr0, f0, f2
	bge      lbl_802DEEBC
	stfs     f2, 0x420(r5)

lbl_802DEEBC:
	lfs      f0, 0x420(r5)
	fdivs    f0, f0, f4
	stfs     f0, 0x420(r5)
	lwz      r0, 0x41c(r3)
	lfs      f0, 0x474(r5)
	mulli    r0, r0, 0xc
	add      r4, r0, r6
	addi     r0, r4, 0x45c
	lfsx     f1, r3, r0
	fsubs    f5, f1, f0
	fcmpo    cr0, f5, f3
	ble      lbl_802DEEF0
	b        lbl_802DEEF4

lbl_802DEEF0:
	fneg     f5, f5

lbl_802DEEF4:
	lfs      f1, 0x468(r5)
	lfs      f0, 0x45c(r5)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DEF0C
	b        lbl_802DEF10

lbl_802DEF0C:
	fneg     f0, f0

lbl_802DEF10:
	fcmpo    cr0, f5, f0
	ble      lbl_802DEF1C
	b        lbl_802DEF20

lbl_802DEF1C:
	fmr      f5, f0

lbl_802DEF20:
	stfs     f5, 0x42c(r5)
	lfs      f0, 0x42c(r5)
	fcmpo    cr0, f0, f2
	bge      lbl_802DEF34
	stfs     f2, 0x42c(r5)

lbl_802DEF34:
	lfs      f0, 0x42c(r5)
	addi     r6, r6, 4
	fdivs    f0, f0, f4
	stfs     f0, 0x42c(r5)
	addi     r5, r5, 4
	bdnz     lbl_802DEE50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DEF50
 * Size:	00011C
 */
void Obj::startBlendAnimation(int animIdx, bool check)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	clrlwi.  r0, r5, 0x18
	mr       r29, r3
	mr       r30, r4
	beq      lbl_802DF040
	lwz      r3, 0x184(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r3)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_802DEFD0
	lwz      r3, 0x18(r4)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lha      r0, 6(r3)
	lfd      f1, lbl_8051CC60@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	b        lbl_802DEFD4

lbl_802DEFD0:
	lfs      f1, lbl_8051CC30@sda21(r2)

lbl_802DEFD4:
	lfs      f0, lbl_8051CC34@sda21(r2)
	lfs      f31, 8(r31)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_802DF02C
	cmplwi   r4, 0
	beq      lbl_802DEFF8
	lha      r4, 0x20(r4)
	b        lbl_802DEFFC

lbl_802DEFF8:
	li       r4, -1

lbl_802DEFFC:
	cmpw     r30, r4
	beq      lbl_802DF048
	lfs      f1, lbl_8051CCA4@sda21(r2)
	mr       r3, r29
	mr       r5, r30
	addi     r6, r13, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21
	li       r7, 0
	bl
startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
	fmr      f1, f31
	mr       r3, r31
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	b        lbl_802DF048

lbl_802DF02C:
	mr       r3, r29
	mr       r4, r30
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_802DF048

lbl_802DF040:
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_802DF048:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DF06C
 * Size:	000098
 */
void Obj::endBlendAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r4, 1
	lwz      r3, 0x184(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_802DF0B8
	lha      r31, 0x20(r4)
	b        lbl_802DF0BC

lbl_802DF0B8:
	li       r31, -1

lbl_802DF0BC:
	lfs      f31, 8(r3)
	mr       r3, r30
	bl       endBlend__Q24Game9EnemyBaseFv
	mr       r3, r30
	mr       r4, r31
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	fmr      f1, f31
	mr       r3, r30
	bl       setMotionFrame__Q24Game9EnemyBaseFf
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DF104
 * Size:	00004C
 */
int Obj::getCurrAnimationIndex()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x184(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_802DF13C
	lha      r3, 0x20(r3)
	b        lbl_802DF140

lbl_802DF13C:
	li       r3, -1

lbl_802DF140:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
