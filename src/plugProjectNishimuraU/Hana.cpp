#include "Game/Entities/Hana.h"
#include "Game/EnemyFunc.h"
#include "efx/THanaMiss.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/ConditionNotStick.h"
#include "trig.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_Hana_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D53A8
    lbl_804D53A8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game21ConditionNotStickSlot
    __vt__Q24Game21ConditionNotStickSlot:
        .4byte 0
        .4byte 0
        .4byte satisfy__Q24Game21ConditionNotStickSlotFPQ24Game4Piki
    .global __vt__Q23efx9THanaMiss
    __vt__Q23efx9THanaMiss:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q34Game4Hana3Obj
    __vt__Q34Game4Hana3Obj:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game9EnemyBaseFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game9EnemyBaseFv
        .4byte onInit__Q34Game4Hana3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game4Hana3ObjFR8Graphics
        .4byte getBodyRadius__Q24Game9EnemyBaseFv
        .4byte getCellRadius__Q24Game9EnemyBaseFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q24Game9EnemyBaseFv
        .4byte "setVelocity__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getVelocity__Q24Game9EnemyBaseFv
        .4byte "onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte updateTrMatrix__Q24Game9EnemyBaseFv
        .4byte isTeki__Q24Game9EnemyBaseFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game9EnemyBaseFv
        .4byte inWater__Q24Game9EnemyBaseFv
        .4byte getFlockMgr__Q24Game8CreatureFv
        .4byte onStartCapture__Q24Game8CreatureFv
        .4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
        .4byte onEndCapture__Q24Game8CreatureFv
        .4byte isAtari__Q24Game8CreatureFv
        .4byte setAtari__Q24Game8CreatureFb
        .4byte isAlive__Q24Game8CreatureFv
        .4byte setAlive__Q24Game8CreatureFb
        .4byte isCollisionFlick__Q24Game8CreatureFv
        .4byte setCollisionFlick__Q24Game8CreatureFb
        .4byte isMovieActor__Q24Game8CreatureFv
        .4byte isMovieExtra__Q24Game8CreatureFv
        .4byte isMovieMotion__Q24Game8CreatureFv
        .4byte setMovieMotion__Q24Game8CreatureFb
        .4byte isBuried__Q24Game8CreatureFv
        .4byte isFlying__Q24Game9EnemyBaseFv
        .4byte isUnderground__Q34Game4Hana3ObjFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game9EnemyBaseFv
        .4byte getPSCreature__Q24Game9EnemyBaseFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game9EnemyBaseFv
        .4byte sound_culling__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimFrame__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8CreatureFf
        .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q34Game4Hana3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game9EnemyBaseFv
        .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte "getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>"
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game4Hana3ObjFv
        .4byte "birth__Q34Game10ChappyBase3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10ChappyBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10ChappyBase3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game10ChappyBase3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game4Hana3ObjFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q34Game10ChappyBase3ObjFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game4Hana3ObjFv
        .4byte initWalkSmokeEffect__Q34Game4Hana3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game4Hana3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q34Game10ChappyBase3ObjFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game4Hana3ObjFv
        .4byte getMouthSlots__Q34Game10ChappyBase3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game10ChappyBase3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game10ChappyBase3ObjFv .4byte
   doFinishStoneState__Q34Game10ChappyBase3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game10ChappyBase3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game4Hana3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game10ChappyBase3ObjFPQ34Game10ChappyBase3FSM
        .4byte isWakeup__Q34Game4Hana3ObjFv
        .4byte setAnimationSpeed__Q34Game4Hana3ObjFf
        .4byte flickAttackFail__Q34Game4Hana3ObjFv
        .4byte flickStatePikmin__Q34Game4Hana3ObjFv
        .4byte flickAttackBomb__Q34Game4Hana3ObjFv
        .4byte eatAttackPikmin__Q34Game4Hana3ObjFv
        .4byte resetUnderGround__Q34Game4Hana3ObjFv
        .4byte setUnderGround__Q34Game4Hana3ObjFv
        .4byte createEffect__Q34Game4Hana3ObjFv
        .4byte setupEffect__Q34Game4Hana3ObjFv
        .4byte startSleepEffect__Q34Game4Hana3ObjFv
        .4byte finishSleepEffect__Q34Game4Hana3ObjFv
        .4byte createFlickEffect__Q34Game10ChappyBase3ObjFv
        .4byte createSmokeEffect__Q34Game4Hana3ObjFv
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@744@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@744@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@744@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515E00
    lbl_80515E00:
        .skip 0x4
    .global lbl_80515E04
    lbl_80515E04:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D1A0
    lbl_8051D1A0:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051D1A8
    lbl_8051D1A8:
        .4byte 0x00000000
    .global lbl_8051D1AC
    lbl_8051D1AC:
        .float 1.0
    .global lbl_8051D1B0
    lbl_8051D1B0:
        .float 0.1
    .global lbl_8051D1B4
    lbl_8051D1B4:
        .4byte 0x41200000
    .global lbl_8051D1B8
    lbl_8051D1B8:
        .4byte 0x42960000
    .global lbl_8051D1BC
    lbl_8051D1BC:
        .4byte 0x42480000
    .global lbl_8051D1C0
    lbl_8051D1C0:
        .4byte 0x41C80000
    .global lbl_8051D1C4
    lbl_8051D1C4:
        .4byte 0x6B616D75
        .4byte 0x31000000
    .global lbl_8051D1CC
    lbl_8051D1CC:
        .4byte 0x6B616D75
        .4byte 0x32000000
    .global lbl_8051D1D4
    lbl_8051D1D4:
        .4byte 0x6B616D75
        .4byte 0x33000000
    .global lbl_8051D1DC
    lbl_8051D1DC:
        .4byte 0x41F00000
    .global lbl_8051D1E0
    lbl_8051D1E0:
        .4byte 0xC47A0000
    .global lbl_8051D1E4
    lbl_8051D1E4:
        .4byte 0x6B757469
        .4byte 0x32000000
    .global lbl_8051D1EC
    lbl_8051D1EC:
        .4byte 0x42700000
    .global lbl_8051D1F0
    lbl_8051D1F0:
        .4byte 0x43A2F983
    .global lbl_8051D1F4
    lbl_8051D1F4:
        .4byte 0xC3A2F983
    .global lbl_8051D1F8
    lbl_8051D1F8:
        .4byte 0x3F99999A
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	802F3138
 * Size:	0000A4
 */
Hana::Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802F31DC
 * Size:	000004
 */
void Hana::Obj::createEffect() { }

/*
 * --INFO--
 * Address:	802F31E0
 * Size:	000064
 */
void Hana::Obj::onInit(CreatureInitArg* arg)
{
	ChappyBase::Obj::onInit(arg);
	m_shadowJoint = m_model->getJoint("kosi");
	setUnderGround();
	setupEffect();
}

/*
 * --INFO--
 * Address:	802F3244
 * Size:	000004
 */
void Hana::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	802F3248
 * Size:	000004
 */
void Hana::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802F324C
 * Size:	0000E8
 */
void Hana::Obj::getShadowParam(ShadowParam& param)
{
	if (getStateID() == ChappyBase::CHAPPY_Sleep) {
		param.m_position                  = m_position;
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
		param.m_boundingSphere.m_radius   = 0.1f;
		param.m_size                      = 0.1f;
	} else {
		Matrixf* mtx = m_shadowJoint->getWorldMatrix();
		f32 y, z;
		z                  = mtx->m_matrix.structView.tz;
		y                  = mtx->m_matrix.structView.ty;
		param.m_position.x = mtx->m_matrix.structView.tx;
		param.m_position.y = y;
		param.m_position.z = z;

		param.m_position.y                = m_position.y + 10.0f;
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
		if (isEvent(1, EB2_IsEarthquake)) {
			param.m_boundingSphere.m_radius = 75.0f;
		} else {
			param.m_boundingSphere.m_radius = 50.0f;
		}
		param.m_size = 25.0f;
	}
}

/*
 * --INFO--
 * Address:	802F3334
 * Size:	0000B4
 */
void Hana::Obj::initMouthSlots()
{
	m_mouthSlots.alloc(3);
	m_mouthSlots.setup(0, m_model, "kamu1");
	m_mouthSlots.setup(1, m_model, "kamu2");
	m_mouthSlots.setup(2, m_model, "kamu3");
	f32 size = 30.0f;
	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = size;
	}
}

/*
 * --INFO--
 * Address:	802F33E8
 * Size:	000080
 */
bool Hana::Obj::isWakeup()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	f32 rad                  = parms->m_general.m_privateRadius.m_value;

	if (EnemyFunc::isThereOlimar(this, rad, nullptr) || EnemyFunc::isTherePikmin(this, rad, nullptr)) {
		return true;
	} else {
		return false;
	}

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r4, 0
	lwz      r5, 0xc0(r3)
	lfs      f31, 0x3ac(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3428
	li       r3, 1
	b        lbl_802F344C

lbl_802F3428:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802F3448
	li       r3, 1
	b        lbl_802F344C

lbl_802F3448:
	li       r3, 0

lbl_802F344C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802F3468
 * Size:	000084
 */
void Hana::Obj::flickStatePikmin()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickStickPikmin(this, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

	parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickNearbyPikmin(this, parms->m_general.m_shakeRange.m_value, parms->m_general.m_shakeKnockback.m_value,
	                             parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

	parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickNearbyNavi(this, parms->m_general.m_shakeRange.m_value, parms->m_general.m_shakeKnockback.m_value,
	                           parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
}

/*
 * --INFO--
 * Address:	802F34EC
 * Size:	0000F0
 */
void Hana::Obj::flickAttackBomb()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickStickPikmin(this, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
	efx::THanaMiss efx(m_model->getJoint("kuti2")->getWorldMatrix());
	efx.create(nullptr);

	Vector3f pos = m_position;
	cameraMgr->startVibration(28, pos, 2);
	rumbleMgr->startRumble(11, pos, 2);
}

/*
 * --INFO--
 * Address:	802F35DC
 * Size:	00003C
 */
void Hana::Obj::eatAttackPikmin()
{
	ConditionNotStickSlot cond;
	EnemyFunc::eatPikmin(this, &cond);
}

/*
 * --INFO--
 * Address:	802F3618
 * Size:	000070
 */
void Hana::Obj::resetUnderGround()
{
	m_buried = false;
	disableEvent(0, EB_IsImmuneBitter);
	disableEvent(0, EB_IsEnemyNotBitter);
	hardConstraintOff();
	disableEvent(0, EB_IsVulnerable);
	setAtari(true);
}

/*
 * --INFO--
 * Address:	802F3688
 * Size:	000084
 */
void Hana::Obj::setUnderGround()
{
	ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
	EnemyFunc::flickStickPikmin(this, parms->m_general.m_shakeRateMaybe.m_value, parms->m_general.m_shakeKnockback.m_value,
	                            parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

	m_buried = true;
	enableEvent(0, EB_IsImmuneBitter);
	hardConstraintOn();
	enableEvent(0, EB_IsVulnerable);
	setAtari(false);
}

/*
 * --INFO--
 * Address:	802F370C
 * Size:	0001C0
 */
void Hana::Obj::createSmokeEffect()
{
	Vector3f pos = m_position;
	int id       = getCurrAnimIndex();
	if (id == 8) {
		pos -= Vector3f(pikmin2_sinf(m_faceDir) * 60.0f, 0.9f, pikmin2_cosf(m_faceDir) * 60.0f);

		cameraMgr->startVibration(3, pos, 2);
		rumbleMgr->startRumble(11, pos, 2);
	} else if (id == 4) {
		setAtari(true);

		ChappyBase::Parms* parms = static_cast<ChappyBase::Parms*>(m_parms);
		EnemyFunc::flickNearbyPikmin(this, parms->m_general.m_privateRadius.m_value, parms->m_general.m_shakeKnockback.m_value,
		                             parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

		parms = static_cast<ChappyBase::Parms*>(m_parms);
		EnemyFunc::flickNearbyNavi(this, parms->m_general.m_privateRadius.m_value, parms->m_general.m_shakeKnockback.m_value,
		                           parms->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
		rumbleMgr->startRumble(10, pos, 2);
	} else {
		return;
	}
	createBounceEffect(pos, 1.0f);
}

/*
 * --INFO--
 * Address:	802F38CC
 * Size:	00007C
 */
// void ConditionNotStickSlot::satisfy(Piki* p)
//{
//}

/*
 * --INFO--
 * Address:	802F3948
 * Size:	000004
 */
void Hana::Obj::changeMaterial() { }

/*
 * --INFO--
 * Address:	802F394C
 * Size:	000008
 */
bool Hana::Obj::isUnderground() { return m_buried; }

/*
 * --INFO--
 * Address:	802F3954
 * Size:	000004
 */
void Hana::Obj::initWalkSmokeEffect() { }

/*
 * --INFO--
 * Address:	802F3958
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Hana::Obj::getWalkSmokeEffectMgr() { return 0x0; }

/*
 * --INFO--
 * Address:	802F3960
 * Size:	000008
 */
f32 Hana::Obj::getDownSmokeScale() { return 1.2f; }

/*
 * --INFO--
 * Address:	802F3968
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Hana::Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Hana; }

/*
 * --INFO--
 * Address:	802F3970
 * Size:	000004
 */
void Hana::Obj::setAnimationSpeed(f32) { }

/*
 * --INFO--
 * Address:	802F3974
 * Size:	000004
 */
void Hana::Obj::flickAttackFail() { }

/*
 * --INFO--
 * Address:	802F3978
 * Size:	000004
 */
void Hana::Obj::startSleepEffect() { }

/*
 * --INFO--
 * Address:	802F397C
 * Size:	000004
 */
void Hana::Obj::finishSleepEffect() { }

} // namespace Game

/*
 * --INFO--
 * Address:	802F3980
 * Size:	000028
 */
void __sinit_Hana_cpp()
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D53A8@ha
	stw      r0, lbl_80515E00@sda21(r13)
	stfsu    f0, lbl_804D53A8@l(r3)
	stfs     f0, lbl_80515E04@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
