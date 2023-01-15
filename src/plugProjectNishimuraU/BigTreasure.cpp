#include "Game/Entities/BigTreasure.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/ConditionNotStick.h"
#include "Game/IKSystemBase.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
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
	J3DModelData* modelData = j3dModel->m_modelData;

	u16 bodyIdx          = modelData->m_materialTable._0C->getIndex("mat_body");
	J3DMaterial* bodyMat = modelData->m_materialTable.m_materials1[bodyIdx];
	bodyMat->m_tevBlock->setTevColor(0, _414);

	u16 red1   = (u16)_450;
	u16 green1 = (u16)_454;
	u16 blue1  = (u16)_458;

	u16 eyeIdx1          = modelData->m_materialTable._0C->getIndex("mat_eye1");
	J3DMaterial* eyeMat1 = modelData->m_materialTable.m_materials1[eyeIdx1];
	eyeMat1->m_tevBlock->setTevColor(0, J3DGXColorS10(red1, green1, blue1, 255));

	u16 red2   = (u16)_474;
	u16 green2 = (u16)_478;
	u16 blue2  = (u16)_47C;

	u16 eyeIdx2          = modelData->m_materialTable._0C->getIndex("mat_eye2");
	J3DMaterial* eyeMat2 = modelData->m_materialTable.m_materials1[eyeIdx2];
	eyeMat2->m_tevBlock->setTevColor(0, J3DGXColorS10(red2, green2, blue2, 255));

	j3dModel->calcMaterial();
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	lis      r4, lbl_8048CA80@ha
	stw      r0, 0x74(r1)
	stmw     r25, 0x54(r1)
	mr       r30, r3
	addi     r29, r4, lbl_8048CA80@l
	addi     r4, r29, 0x1c
	lwz      r3, 0x174(r3)
	lwz      r31, 8(r3)
	lwz      r28, 4(r31)
	lwz      r3, 0x64(r28)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x60(r28)
	rlwinm   r3, r3, 2, 0xe, 0x1d
	lha      r0, 0x414(r30)
	addi     r5, r1, 0x18
	lwzx     r3, r4, r3
	li       r4, 0
	sth      r0, 0x18(r1)
	lha      r0, 0x416(r30)
	sth      r0, 0x1a(r1)
	lha      r0, 0x418(r30)
	sth      r0, 0x1c(r1)
	lha      r0, 0x41a(r30)
	sth      r0, 0x1e(r1)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x450(r30)
	addi     r4, r29, 0x28
	lfs      f1, 0x454(r30)
	lfs      f0, 0x458(r30)
	fctiwz   f2, f2
	fctiwz   f1, f1
	lwz      r3, 0x64(r28)
	fctiwz   f0, f0
	stfd     f2, 0x20(r1)
	stfd     f1, 0x28(r1)
	lwz      r27, 0x24(r1)
	stfd     f0, 0x30(r1)
	lwz      r26, 0x2c(r1)
	lwz      r25, 0x34(r1)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x60(r28)
	rlwinm   r3, r3, 2, 0xe, 0x1d
	li       r0, 0xff
	addi     r5, r1, 0x10
	lwzx     r3, r4, r3
	li       r4, 0
	sth      r27, 0x10(r1)
	sth      r26, 0x12(r1)
	sth      r25, 0x14(r1)
	sth      r0, 0x16(r1)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x474(r30)
	addi     r4, r29, 0x34
	lfs      f1, 0x478(r30)
	lfs      f0, 0x47c(r30)
	fctiwz   f2, f2
	fctiwz   f1, f1
	lwz      r3, 0x64(r28)
	fctiwz   f0, f0
	stfd     f2, 0x38(r1)
	stfd     f1, 0x40(r1)
	lwz      r25, 0x3c(r1)
	stfd     f0, 0x48(r1)
	lwz      r26, 0x44(r1)
	lwz      r27, 0x4c(r1)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x60(r28)
	rlwinm   r3, r3, 2, 0xe, 0x1d
	li       r0, 0xff
	addi     r5, r1, 8
	lwzx     r3, r4, r3
	li       r4, 0
	sth      r25, 8(r1)
	sth      r26, 0xa(r1)
	sth      r27, 0xc(r1)
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
	lmw      r25, 0x54(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
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
 * Address:	802DD0CC
 * Size:	00035C
 */
void Obj::setupTreasure()
{
	u32 tags[]        = { 'elec', 'fire', 'gasi', 'mizu' };
	char* weapons[]   = { "elec", "fire", "gas", "water" };
	char* treasures[] = { "otakara_elec", "otakara_fire", "otakara_gas", "otakara_water" };

	for (int i = 0; i < 4; i++) { }
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stmw     r22, 0x88(r1)
	lis      r4, lbl_8048CA80@ha
	mr       r24, r3
	addi     r30, r4, lbl_8048CA80@l
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	lwz      r22, 0x110(r30)
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	lwz      r12, 0x114(r30)
	mr       r29, r24
	lwz      r11, 0x118(r30)
	addi     r28, r1, 0x28
	lwz      r10, 0x11c(r30)
	addi     r27, r1, 0x18
	lwz      r9, 0x120(r30)
	addi     r26, r1, 8
	lwz      r8, 0x124(r30)
	addi     r31, r4, __vt__Q24Game15CreatureInitArg@l
	lwz      r7, 0x128(r30)
	addi     r23, r3, __vt__Q24Game13PelletInitArg@l
	lwz      r6, 0x12c(r30)
	li       r25, 0
	lwz      r5, 0x16c(r30)
	lwz      r4, 0x170(r30)
	lwz      r3, 0x174(r30)
	lwz      r0, 0x178(r30)
	stw      r22, 0x28(r1)
	lfs      f31, lbl_8051CC30@sda21(r2)
	stw      r12, 0x2c(r1)
	stw      r11, 0x30(r1)
	stw      r10, 0x34(r1)
	stw      r9, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r7, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)

lbl_802DD178:
	addi     r0, r25, 0x2dd
	li       r3, 0
	stbx     r3, r24, r0
	lwz      r4, 0(r28)
	stw      r3, 0x3c4(r29)
	stfs     f31, 0x3d8(r29)
	stfs     f31, 0x3e8(r29)
	lwz      r3, 0x114(r24)
	bl       getCollPart__8CollTreeFUl
	stw      r3, 0x3f8(r29)
	li       r8, 0
	li       r0, -1
	li       r7, 0xff
	stw      r31, 0x60(r1)
	li       r6, 1
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x60
	stw      r23, 0x60(r1)
	lwz      r5, 0(r27)
	stb      r8, 0x7c(r1)
	sth      r8, 0x74(r1)
	stb      r7, 0x76(r1)
	stw      r8, 0x78(r1)
	stb      r8, 0x77(r1)
	stb      r6, 0x64(r1)
	stb      r8, 0x7d(r1)
	stw      r0, 0x84(r1)
	stw      r0, 0x80(r1)
	stb      r8, 0x7e(r1)
	stb      r8, 0x7f(r1)
	bl       makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc
	clrlwi.  r0, r3, 0x18
	beq      lbl_802DD240
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x60
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	stw      r3, 0x3c4(r29)
	lwz      r0, 0x3c4(r29)
	cmplwi   r0, 0
	beq      lbl_802DD240
	lwz      r3, 0x174(r24)
	lwz      r4, 0(r26)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	lwz      r3, 0x3c4(r29)
	mr       r4, r0
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	lfs      f0, lbl_8051CCCC@sda21(r2)
	stfs     f0, 0x3d8(r29)

lbl_802DD240:
	addi     r25, r25, 1
	addi     r28, r28, 4
	cmpwi    r25, 4
	addi     r27, r27, 4
	addi     r26, r26, 4
	addi     r29, r29, 4
	blt      lbl_802DD178
	li       r8, 0
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	stw      r8, 0x3d4(r24)
	li       r0, -1
	addi     r4, r3, __vt__Q24Game15CreatureInitArg@l
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	stw      r4, 0x38(r1)
	addi     r3, r3, __vt__Q24Game13PelletInitArg@l
	li       r7, 0xff
	li       r6, 1
	stw      r3, 0x38(r1)
	addi     r4, r1, 0x38
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r5, r2, lbl_8051CCD0@sda21
	stb      r8, 0x54(r1)
	sth      r8, 0x4c(r1)
	stb      r7, 0x4e(r1)
	stw      r8, 0x50(r1)
	stb      r8, 0x4f(r1)
	stb      r6, 0x3c(r1)
	stb      r8, 0x55(r1)
	stw      r0, 0x5c(r1)
	stw      r0, 0x58(r1)
	stb      r8, 0x56(r1)
	stb      r8, 0x57(r1)
	bl       makePelletInitArg__Q24Game9PelletMgrFRQ24Game13PelletInitArgPc
	clrlwi.  r0, r3, 0x18
	beq      lbl_802DD308
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x38
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	stw      r3, 0x3d4(r24)
	lwz      r0, 0x3d4(r24)
	cmplwi   r0, 0
	beq      lbl_802DD308
	lwz      r3, 0x174(r24)
	addi     r4, r30, 0x17c
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	lwz      r3, 0x3d4(r24)
	mr       r4, r0
	bl       startCapture__Q24Game8CreatureFP7Matrixf

lbl_802DD308:
	mr       r25, r24
	li       r23, 1
	li       r22, 0

lbl_802DD314:
	lwz      r0, 0x3c4(r25)
	cmplwi   r0, 0
	beq      lbl_802DD328
	li       r23, 0
	b        lbl_802DD370

lbl_802DD328:
	lwz      r4, 0x3f8(r25)
	cmplwi   r4, 0
	beq      lbl_802DD370
	mr       r3, r24
	bl       flickStickCollPartPikmin__Q34Game11BigTreasure3ObjFP8CollPart
	lwz      r5, 0x3f8(r25)
	lis      r3, 0x5F745F5F@ha
	addi     r4, r3, 0x5F745F5F@l
	addi     r3, r5, 0x3c
	bl       __as__4ID32FUl
	lfs      f0, lbl_8051CC30@sda21(r2)
	li       r4, 1
	lwz      r3, 0x3f8(r25)
	li       r0, 0
	stfs     f0, 0x1c(r3)
	lwz      r3, 0x3f8(r25)
	sth      r4, 0x48(r3)
	stw      r0, 0x3f8(r25)

lbl_802DD370:
	addi     r22, r22, 1
	addi     r25, r25, 4
	cmpwi    r22, 4
	blt      lbl_802DD314
	lis      r4, 0x74616D31@ha
	lwz      r3, 0x114(r24)
	addi     r4, r4, 0x74616D31@l
	bl       getCollPart__8CollTreeFUl
	mr       r26, r3
	lis      r4, 0x74616D32@ha
	lwz      r3, 0x114(r24)
	addi     r4, r4, 0x74616D32@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r26, 0
	mr       r25, r3
	beq      lbl_802DD404
	cmplwi   r25, 0
	beq      lbl_802DD404
	clrlwi.  r0, r23, 0x18
	beq      lbl_802DD3E4
	lis      r4, 0x73745F5F@ha
	addi     r3, r26, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r25, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	b        lbl_802DD404

lbl_802DD3E4:
	lis      r4, 0x5F745F5F@ha
	addi     r3, r26, 0x3c
	addi     r4, r4, 0x5F745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x5F745F5F@ha
	addi     r3, r25, 0x3c
	addi     r4, r4, 0x5F745F5F@l
	bl       __as__4ID32FUl

lbl_802DD404:
	li       r0, -1
	stw      r0, 0x408(r24)
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	lmw      r22, 0x88(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DD428
 * Size:	000168
 */
void Obj::updateTreasure()
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	mr       r29, r3
	bl       dropTreasure__Q34Game11BigTreasure3ObjFv
	li       r30, 0
	mr       r31, r29

lbl_802DD450:
	lwz      r0, 0x3c4(r31)
	cmplwi   r0, 0
	beq      lbl_802DD544
	addi     r3, r1, 0x38
	bl       PSMTXIdentity
	addi     r3, r30, 0x2dd
	lbzx     r0, r29, r3
	cmplwi   r0, 0
	beq      lbl_802DD528
	lfs      f2, 0x3e8(r31)
	lfs      f1, lbl_8051CCD8@sda21(r2)
	lfs      f0, lbl_8051CCDC@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x3e8(r31)
	lfs      f1, 0x3e8(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_802DD4A4
	lfs      f0, lbl_8051CC30@sda21(r2)
	li       r0, 0
	stfs     f0, 0x3e8(r31)
	stbx     r0, r29, r3

lbl_802DD4A4:
	lfs      f2, 0x3e8(r31)
	addi     r3, r1, 8
	lfs      f0, lbl_8051CC30@sda21(r2)
	li       r4, 0x59
	lfs      f1, lbl_8051CCE0@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802DD4EC
	lfs      f0, lbl_8051CC84@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_802DD510

lbl_802DD4EC:
	lfs      f0, lbl_8051CC88@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_802DD510:
	fmuls    f1, f1, f0
	bl       PSMTXRotRad
	addi     r3, r1, 0x38
	addi     r4, r1, 8
	mr       r5, r3
	bl       PSMTXConcat

lbl_802DD528:
	cmpwi    r30, 2
	bne      lbl_802DD538
	lfs      f0, lbl_8051CCE4@sda21(r2)
	stfs     f0, 0x54(r1)

lbl_802DD538:
	lwz      r3, 0x3c4(r31)
	addi     r4, r1, 0x38
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_802DD544:
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802DD450
	lwz      r0, 0x3d4(r29)
	cmplwi   r0, 0
	beq      lbl_802DD574
	addi     r3, r1, 0x38
	bl       PSMTXIdentity
	lwz      r3, 0x3d4(r29)
	addi     r4, r1, 0x38
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_802DD574:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DD590
 * Size:	0001C0
 */
void Obj::dropTreasure()
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
	stw      r28, 0x10(r1)
	mr       r31, r3
	lfs      f31, lbl_8051CC30@sda21(r2)
	mr       r29, r31
	li       r28, 0
	li       r30, 0

lbl_802DD5C8:
	lwz      r0, 0x3c4(r29)
	cmplwi   r0, 0
	beq      lbl_802DD60C
	lfs      f0, 0x3d8(r29)
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_802DD60C
	mr       r3, r31
	mr       r4, r30
	li       r28, 1
	bl       createDropTreasureEffect__Q34Game11BigTreasure3ObjFi
	mr       r3, r31
	mr       r4, r30
	bl       finishTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi
	mr       r3, r31
	mr       r4, r30
	bl       dropTreasure__Q34Game11BigTreasure3ObjFi

lbl_802DD60C:
	addi     r30, r30, 1
	addi     r29, r29, 4
	cmpwi    r30, 4
	blt      lbl_802DD5C8
	clrlwi.  r0, r28, 0x18
	beq      lbl_802DD728
	mr       r3, r31
	bl       startBossItemDropBGM__Q34Game11BigTreasure3ObjFv
	mr       r28, r31
	li       r29, 1
	li       r30, 0

lbl_802DD638:
	lwz      r0, 0x3c4(r28)
	cmplwi   r0, 0
	beq      lbl_802DD64C
	li       r29, 0
	b        lbl_802DD694

lbl_802DD64C:
	lwz      r4, 0x3f8(r28)
	cmplwi   r4, 0
	beq      lbl_802DD694
	mr       r3, r31
	bl       flickStickCollPartPikmin__Q34Game11BigTreasure3ObjFP8CollPart
	lwz      r5, 0x3f8(r28)
	lis      r3, 0x5F745F5F@ha
	addi     r4, r3, 0x5F745F5F@l
	addi     r3, r5, 0x3c
	bl       __as__4ID32FUl
	lfs      f0, lbl_8051CC30@sda21(r2)
	li       r4, 1
	lwz      r3, 0x3f8(r28)
	li       r0, 0
	stfs     f0, 0x1c(r3)
	lwz      r3, 0x3f8(r28)
	sth      r4, 0x48(r3)
	stw      r0, 0x3f8(r28)

lbl_802DD694:
	addi     r30, r30, 1
	addi     r28, r28, 4
	cmpwi    r30, 4
	blt      lbl_802DD638
	lis      r4, 0x74616D31@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74616D31@l
	bl       getCollPart__8CollTreeFUl
	mr       r30, r3
	lis      r4, 0x74616D32@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x74616D32@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r30, 0
	mr       r31, r3
	beq      lbl_802DD728
	cmplwi   r31, 0
	beq      lbl_802DD728
	clrlwi.  r0, r29, 0x18
	beq      lbl_802DD708
	lis      r4, 0x73745F5F@ha
	addi     r3, r30, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r31, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	b        lbl_802DD728

lbl_802DD708:
	lis      r4, 0x5F745F5F@ha
	addi     r3, r30, 0x3c
	addi     r4, r4, 0x5F745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x5F745F5F@ha
	addi     r3, r31, 0x3c
	addi     r4, r4, 0x5F745F5F@l
	bl       __as__4ID32FUl

lbl_802DD728:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DD750
 * Size:	000088
 */
void Obj::dropTreasure(int idx)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	slwi     r30, r4, 2
	stw      r29, 0x24(r1)
	mr       r29, r3
	add      r31, r29, r30
	lwz      r3, 0x3c4(r31)
	bl       endCapture__Q24Game8CreatureFv
	lfs      f1, lbl_8051CC30@sda21(r2)
	addi     r4, r1, 8
	lfs      f0, lbl_8051CCE8@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	lwz      r3, 0x3c4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_8051CC30@sda21(r2)
	stw      r0, 0x3c4(r31)
	li       r3, 1
	stfs     f0, 0x3d8(r31)
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
 * Address:	802DD7D8
 * Size:	00005C
 */
bool Obj::isCapturedTreasure()
{
	/*
	lwz      r0, 0x3c4(r3)
	cmplwi   r0, 0
	beq      lbl_802DD7EC
	li       r3, 1
	blr

lbl_802DD7EC:
	lwz      r0, 0x3c8(r3)
	cmplwi   r0, 0
	beq      lbl_802DD800
	li       r3, 1
	blr

lbl_802DD800:
	addi     r3, r3, 8
	lwz      r0, 0x3c4(r3)
	cmplwi   r0, 0
	beq      lbl_802DD818
	li       r3, 1
	blr

lbl_802DD818:
	lwz      r0, 0x3c8(r3)
	cmplwi   r0, 0
	beq      lbl_802DD82C
	li       r3, 1
	blr

lbl_802DD82C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DD834
 * Size:	00001C
 */
bool Obj::isCapturedTreasure(int idx)
{
	/*
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r3, 0x3c4(r3)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DD850
 * Size:	00004C
 */
int Obj::getCapturedTreasureNum()
{
	/*
	lwz      r0, 0x3c4(r3)
	li       r4, 0
	cmplwi   r0, 0
	beq      lbl_802DD864
	li       r4, 1

lbl_802DD864:
	lwz      r0, 0x3c8(r3)
	cmplwi   r0, 0
	beq      lbl_802DD874
	addi     r4, r4, 1

lbl_802DD874:
	lwz      r0, 0x3cc(r3)
	cmplwi   r0, 0
	beq      lbl_802DD884
	addi     r4, r4, 1

lbl_802DD884:
	lwz      r0, 0x3d0(r3)
	cmplwi   r0, 0
	beq      lbl_802DD894
	addi     r4, r4, 1

lbl_802DD894:
	mr       r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DD89C
 * Size:	0000A0
 */
bool Obj::addTreasureDamage(int idx, f32 damage)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	slwi     r0, r4, 2
	add      r6, r3, r0
	lwz      r0, 0x3c4(r6)
	cmplwi   r0, 0
	beq      lbl_802DD928
	lwz      r0, 0x1e0(r3)
	lfs      f3, 0x3d8(r6)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_802DD8D4
	lfs      f0, lbl_8051CC3C@sda21(r2)
	fmuls    f1, f1, f0

lbl_802DD8D4:
	add      r5, r3, r4
	li       r0, 1
	stb      r0, 0x2dd(r5)
	lfs      f0, lbl_8051CC30@sda21(r2)
	lfs      f2, 0x3d8(r6)
	fsubs    f1, f2, f1
	stfs     f1, 0x3d8(r6)
	lfs      f1, 0x3d8(r6)
	fcmpo    cr0, f1, f0
	bge      lbl_802DD900
	stfs     f0, 0x3d8(r6)

lbl_802DD900:
	lfs      f1, lbl_8051CCEC@sda21(r2)
	fcmpo    cr0, f3, f1
	cror     2, 1, 2
	bne      lbl_802DD920
	lfs      f0, 0x3d8(r6)
	fcmpo    cr0, f0, f1
	bge      lbl_802DD920
	bl       startTreasurePinchSmoke__Q34Game11BigTreasure3ObjFi

lbl_802DD920:
	li       r3, 1
	b        lbl_802DD92C

lbl_802DD928:
	li       r3, 0

lbl_802DD92C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DD93C
 * Size:	000284
 */
void Obj::flickStickCollPartPikmin(CollPart* collpart)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	stw      r30, 0x58(r1)
	mr       r30, r3
	mr       r4, r30
	addi     r3, r1, 0x2c
	stw      r29, 0x54(r1)
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x2c
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_802DD9A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802DDB78

lbl_802DD9A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802DDA14

lbl_802DD9C0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802DDB78
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802DDA14:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802DD9C0
	b        lbl_802DDB78

lbl_802DDA34:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802DDABC
	lwz      r0, 0xf8(r29)
	cmplw    r0, r31
	bne      lbl_802DDABC
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f2, lbl_8051CC44@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f1, lbl_8051CC30@sda21(r2)
	lfs      f0, lbl_8051CC48@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r29
	addi     r4, r1, 0x18
	stw      r30, 0x1c(r1)
	stw      r0, 0x18(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802DDABC:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_802DDAE8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802DDB78

lbl_802DDAE8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_802DDB5C

lbl_802DDB08:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802DDB78
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_802DDB5C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802DDB08

lbl_802DDB78:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_802DDA34
	addi     r3, r1, 0x2c
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDBC0
 * Size:	00006C
 */
void Obj::releaseItemLoozy()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x3d4(r3)
	cmplwi   r3, 0
	beq      lbl_802DDC18
	bl       endCapture__Q24Game8CreatureFv
	lfs      f1, lbl_8051CC30@sda21(r2)
	addi     r4, r1, 8
	lfs      f0, lbl_8051CCF0@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	lwz      r3, 0x3d4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x3d4(r31)

lbl_802DDC18:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDC2C
 * Size:	000048
 */
void Obj::createAttack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x120
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802DDC5C
	mr       r4, r31
	bl
__ct__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure3Obj mr
r0, r3

lbl_802DDC5C:
	stw      r0, 0x2f4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDC74
 * Size:	000024
 */
void Obj::setupAttack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
	bl       init__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDC98
 * Size:	000024
 */
void Obj::updateAttack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
	bl       update__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDCBC
 * Size:	000074
 */
void Obj::startAttack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x408(r3)
	cmpwi    r0, 2
	beq      lbl_802DDD0C
	bge      lbl_802DDCE8
	cmpwi    r0, 0
	beq      lbl_802DDCF4
	bge      lbl_802DDD00
	b        lbl_802DDD20

lbl_802DDCE8:
	cmpwi    r0, 4
	bge      lbl_802DDD20
	b        lbl_802DDD18

lbl_802DDCF4:
	lwz      r3, 0x2f4(r3)
	bl       startElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	b        lbl_802DDD20

lbl_802DDD00:
	lwz      r3, 0x2f4(r3)
	bl       startFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	b        lbl_802DDD20

lbl_802DDD0C:
	lwz      r3, 0x2f4(r3)
	bl       startGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	b        lbl_802DDD20

lbl_802DDD18:
	lwz      r3, 0x2f4(r3)
	bl       startWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

lbl_802DDD20:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDD30
 * Size:	000024
 */
void Obj::finishAttack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f4(r3)
	bl       finishAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDD54
 * Size:	0001A8
 */
void Obj::setTreasureAttack()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3
	addi     r31, r1, 8
	lwz      r0, 0x3c4(r3)
	mr       r4, r31
	lfs      f31, lbl_8051CC30@sda21(r2)
	addi     r3, r1, 0x18
	cmplwi   r0, 0
	lfs      f1, lbl_8051CCF4@sda21(r2)
	li       r30, 0
	li       r5, 0
	beq      lbl_802DDDC4
	lfs      f0, 0x3d8(r29)
	addi     r4, r31, 4
	stw      r5, 0x18(r1)
	li       r30, 1
	fsubs    f0, f1, f0
	addi     r3, r3, 4
	stfs     f0, 0(r31)
	lfs      f0, 0(r31)
	fadds    f31, f31, f0

lbl_802DDDC4:
	lwz      r0, 0x3c8(r29)
	li       r5, 1
	cmplwi   r0, 0
	beq      lbl_802DDDF8
	lfs      f0, 0x3dc(r29)
	addi     r30, r30, 1
	stw      r5, 0(r3)
	addi     r3, r3, 4
	fsubs    f0, f1, f0
	stfs     f0, 0(r4)
	lfs      f0, 0(r4)
	addi     r4, r4, 4
	fadds    f31, f31, f0

lbl_802DDDF8:
	lwz      r0, 0x3cc(r29)
	li       r5, 2
	cmplwi   r0, 0
	beq      lbl_802DDE2C
	lfs      f0, 0x3e0(r29)
	addi     r30, r30, 1
	stw      r5, 0(r3)
	addi     r3, r3, 4
	fsubs    f0, f1, f0
	stfs     f0, 0(r4)
	lfs      f0, 0(r4)
	addi     r4, r4, 4
	fadds    f31, f31, f0

lbl_802DDE2C:
	lwz      r0, 0x3d0(r29)
	li       r5, 3
	cmplwi   r0, 0
	beq      lbl_802DDE58
	lfs      f0, 0x3e4(r29)
	addi     r30, r30, 1
	stw      r5, 0(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0(r4)
	lfs      f0, 0(r4)
	fadds    f31, f31, f0

lbl_802DDE58:
	cmpwi    r30, 0
	beq      lbl_802DDED0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	li       r3, 0
	lfd      f2, lbl_8051CC60@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f0, lbl_8051CC58@sda21(r2)
	lfd      f1, 0x28(r1)
	lfs      f3, lbl_8051CC30@sda21(r2)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f1, f1, f0
	mtctr    r30
	cmpwi    r30, 0
	ble      lbl_802DDED0

lbl_802DDEA0:
	lfs      f0, 0(r31)
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_802DDEC4
	slwi     r0, r3, 2
	addi     r3, r1, 0x18
	lwzx     r0, r3, r0
	stw      r0, 0x408(r29)
	b        lbl_802DDED8

lbl_802DDEC4:
	addi     r31, r31, 4
	addi     r3, r3, 1
	bdnz     lbl_802DDEA0

lbl_802DDED0:
	li       r0, -1
	stw      r0, 0x408(r29)

lbl_802DDED8:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DDEFC
 * Size:	000048
 */
int Obj::getPreAttackAnimIndex()
{
	/*
	lwz      r0, 0x408(r3)
	cmpwi    r0, 0
	bne      lbl_802DDF10
	li       r3, 0x15
	blr

lbl_802DDF10:
	cmpwi    r0, 1
	bne      lbl_802DDF20
	li       r3, 3
	blr

lbl_802DDF20:
	cmpwi    r0, 2
	bne      lbl_802DDF30
	li       r3, 0x12
	blr

lbl_802DDF30:
	cmpwi    r0, 3
	li       r3, 0x18
	bnelr
	li       r3, 0xf
	blr
	*/
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
bool Obj::isNormalAttack(int p1)
{
	/*
	slwi     r0, r4, 2
	lfs      f0, lbl_8051CCEC@sda21(r2)
	add      r3, r3, r0
	lfs      f1, 0x3d8(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE2FC
 * Size:	0000B0
 */
void Obj::resetMaterialColor()
{
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
void Obj::resetTargetMatBodyColor(bool check)
{
	/*
	li       r5, 0x1e
	clrlwi.  r0, r4, 0x18
	sth      r5, 0x40c(r3)
	li       r4, 0x46
	li       r0, 0x3c
	sth      r4, 0x40e(r3)
	sth      r0, 0x410(r3)
	beq      lbl_802DE3D8
	li       r0, 0xff
	sth      r0, 0x412(r3)
	blr

lbl_802DE3D8:
	li       r0, 0
	sth      r0, 0x412(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE3E4
 * Size:	000024
 */
void Obj::resetCurrentMatBodyColor()
{
	/*
	lha      r0, 0x40c(r3)
	sth      r0, 0x414(r3)
	lha      r0, 0x40e(r3)
	sth      r0, 0x416(r3)
	lha      r0, 0x410(r3)
	sth      r0, 0x418(r3)
	lha      r0, 0x412(r3)
	sth      r0, 0x41a(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE408
 * Size:	000058
 */
void Obj::resetTargetEyeMatColor()
{
	/*
	lfs      f2, lbl_8051CD14@sda21(r2)
	lfs      f0, lbl_8051CC38@sda21(r2)
	stfs     f2, 0x438(r3)
	lfs      f1, lbl_8051CC90@sda21(r2)
	stfs     f0, 0x43c(r3)
	lfs      f0, lbl_8051CD18@sda21(r2)
	stfs     f2, 0x440(r3)
	lfs      f4, lbl_8051CD1C@sda21(r2)
	stfs     f1, 0x444(r3)
	lfs      f3, lbl_8051CC30@sda21(r2)
	stfs     f0, 0x448(r3)
	lfs      f2, lbl_8051CCA4@sda21(r2)
	stfs     f4, 0x44c(r3)
	lfs      f1, lbl_8051CCF8@sda21(r2)
	stfs     f3, 0x45c(r3)
	lfs      f0, lbl_8051CD20@sda21(r2)
	stfs     f2, 0x460(r3)
	stfs     f3, 0x464(r3)
	stfs     f4, 0x468(r3)
	stfs     f1, 0x46c(r3)
	stfs     f0, 0x470(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE460
 * Size:	000034
 */
void Obj::resetCurrentMatEyeColor()
{
	/*
	lfs      f0, 0x438(r3)
	stfs     f0, 0x450(r3)
	lfs      f0, 0x43c(r3)
	stfs     f0, 0x454(r3)
	lfs      f0, 0x440(r3)
	stfs     f0, 0x458(r3)
	lfs      f0, 0x45c(r3)
	stfs     f0, 0x474(r3)
	lfs      f0, 0x460(r3)
	stfs     f0, 0x478(r3)
	lfs      f0, 0x464(r3)
	stfs     f0, 0x47c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802DE494
 * Size:	00012C
 */
void Obj::setMatEyeAnimSpeed()
{
	/*
	lbz      r0, 0x2dc(r3)
	lfs      f5, lbl_8051CCA4@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_802DE4A8
	lfs      f5, lbl_8051CC44@sda21(r2)

lbl_802DE4A8:
	li       r0, 3
	mr       r5, r3
	lfs      f3, lbl_8051CC30@sda21(r2)
	li       r6, 0
	lfs      f2, lbl_8051CC34@sda21(r2)
	mtctr    r0

lbl_802DE4C0:
	lwz      r0, 0x41c(r3)
	lfs      f0, 0x450(r5)
	mulli    r0, r0, 0xc
	add      r4, r0, r6
	addi     r0, r4, 0x438
	lfsx     f1, r3, r0
	fsubs    f4, f1, f0
	fcmpo    cr0, f4, f3
	ble      lbl_802DE4E8
	b        lbl_802DE4EC

lbl_802DE4E8:
	fneg     f4, f4

lbl_802DE4EC:
	lfs      f1, 0x444(r5)
	lfs      f0, 0x438(r5)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DE504
	b        lbl_802DE508

lbl_802DE504:
	fneg     f0, f0

lbl_802DE508:
	fcmpo    cr0, f4, f0
	ble      lbl_802DE514
	b        lbl_802DE518

lbl_802DE514:
	fmr      f4, f0

lbl_802DE518:
	stfs     f4, 0x420(r5)
	lfs      f0, 0x420(r5)
	fcmpo    cr0, f0, f2
	bge      lbl_802DE52C
	stfs     f2, 0x420(r5)

lbl_802DE52C:
	lfs      f0, 0x420(r5)
	fdivs    f0, f0, f5
	stfs     f0, 0x420(r5)
	lwz      r0, 0x41c(r3)
	lfs      f0, 0x474(r5)
	mulli    r0, r0, 0xc
	add      r4, r0, r6
	addi     r0, r4, 0x45c
	lfsx     f1, r3, r0
	fsubs    f4, f1, f0
	fcmpo    cr0, f4, f3
	ble      lbl_802DE560
	b        lbl_802DE564

lbl_802DE560:
	fneg     f4, f4

lbl_802DE564:
	lfs      f1, 0x468(r5)
	lfs      f0, 0x45c(r5)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f3
	ble      lbl_802DE57C
	b        lbl_802DE580

lbl_802DE57C:
	fneg     f0, f0

lbl_802DE580:
	fcmpo    cr0, f4, f0
	ble      lbl_802DE58C
	b        lbl_802DE590

lbl_802DE58C:
	fmr      f4, f0

lbl_802DE590:
	stfs     f4, 0x42c(r5)
	lfs      f0, 0x42c(r5)
	fcmpo    cr0, f0, f2
	bge      lbl_802DE5A4
	stfs     f2, 0x42c(r5)

lbl_802DE5A4:
	lfs      f0, 0x42c(r5)
	addi     r6, r6, 4
	fdivs    f0, f0, f5
	stfs     f0, 0x42c(r5)
	addi     r5, r5, 4
	bdnz     lbl_802DE4C0
	blr
	*/
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
