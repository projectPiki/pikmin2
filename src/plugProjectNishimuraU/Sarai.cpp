#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80486C50
    lbl_80486C50:
        .4byte 0x726B616D
        .4byte 0x756A6E74
        .4byte 0x00000000
    .global lbl_80486C5C
    lbl_80486C5C:
        .4byte 0x6C6B616D
        .4byte 0x756A6E74
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game5Sarai3Obj
    __vt__Q34Game5Sarai3Obj:
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
        .4byte onInit__Q34Game5Sarai3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game5Sarai3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game5Sarai3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game5Sarai3ObjFv
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
        .4byte isUnderground__Q24Game8CreatureFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game5Sarai3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game5Sarai3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game5Sarai3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game5Sarai3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game5Sarai3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q24Game9EnemyBaseFv .4byte
   "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game5Sarai3ObjFv
        .4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
        .4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game5Sarai3ObjFv
        .4byte getMouthSlots__Q34Game5Sarai3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game5Sarai3ObjFv .4byte
   doFinishStoneState__Q34Game5Sarai3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game5Sarai3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game5Sarai3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game5Sarai3ObjFPQ34Game5Sarai3FSM
        .4byte getStickPikminNum__Q34Game5Sarai3ObjFv
        .4byte getAttackableTarget__Q34Game5Sarai3ObjFv
        .4byte catchTarget__Q34Game5Sarai3ObjFv
        .4byte resetAttackableTimer__Q34Game5Sarai3ObjFf
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@728@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@728@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B1F8
    lbl_8051B1F8:
        .4byte 0x00000000
    .global lbl_8051B1FC
    lbl_8051B1FC:
        .4byte 0x46480000
    .global lbl_8051B200
    lbl_8051B200:
        .4byte 0x626F6479
        .4byte 0x6A6E7400
    .global lbl_8051B208
    lbl_8051B208:
        .4byte 0x40A00000
    .global lbl_8051B20C
    lbl_8051B20C:
        .4byte 0x42C80000
    .global lbl_8051B210
    lbl_8051B210:
        .4byte 0x42480000
    .global lbl_8051B214
    lbl_8051B214:
        .4byte 0x41A00000
    .global lbl_8051B218
    lbl_8051B218:
        .4byte 0x40200000
    .global lbl_8051B21C
    lbl_8051B21C:
        .4byte 0x41C80000
    .global lbl_8051B220
    lbl_8051B220:
        .float 1.0
    .global lbl_8051B224
    lbl_8051B224:
        .4byte 0x41480000
    .global lbl_8051B228
    lbl_8051B228:
        .4byte 0x41700000
        .4byte 0x00000000
    .global lbl_8051B230
    lbl_8051B230:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B238
    lbl_8051B238:
        .4byte 0x47000000
    .global lbl_8051B23C
    lbl_8051B23C:
        .4byte 0x40490FDB
    .global lbl_8051B240
    lbl_8051B240:
        .4byte 0x3FC90FDB
    .global lbl_8051B244
    lbl_8051B244:
        .4byte 0x43A2F983
    .global lbl_8051B248
    lbl_8051B248:
        .4byte 0xC3A2F983
    .global lbl_8051B24C
    lbl_8051B24C:
        .4byte 0x40800000
    .global lbl_8051B250
    lbl_8051B250:
        .float 0.25
    .global lbl_8051B254
    lbl_8051B254:
        .4byte 0x41200000
    .global lbl_8051B258
    lbl_8051B258:
        .4byte 0xC47A0000
    .global lbl_8051B25C
    lbl_8051B25C:
        .4byte 0x3BB60B61
    .global lbl_8051B260
    lbl_8051B260:
        .4byte 0x3F266666
        .4byte 0x00000000
*/

#include "Game/Entities/Sarai.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Stickers.h"
#include "Game/PikiMgr.h"
#include "JSystem/JMath.h"

namespace Game {

/*
 * --INFO--
 * Address:	80272BC4
 * Size:	000138
 */
Sarai::Obj::Obj()
{
	m_animator = new Sarai::ProperAnimator;
	setFSM(new Sarai::FSM);
}

/*
 * --INFO--
 * Address:	80272CFC
 * Size:	000004
 */
void Sarai::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80272D00
 * Size:	000078
 */
void Sarai::Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);

	setEvent(0, EB_3);

	_2C0 = 0.0f;
	resetAttackableTimer(12800.0f);

	m_fsm->start(this, 6, nullptr);
}

/*
 * --INFO--
 * Address:	80272D78
 * Size:	000048
 */
void Sarai::Obj::doUpdate()
{
	m_fsm->exec(this);
	m_mouthSlots.update();
}

/*
 * --INFO--
 * Address:	80272DC0
 * Size:	00004C
 */
void Sarai::Obj::setFSM(Game::Sarai::FSM* fsm)
{
	m_fsm = fsm;
	m_fsm->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80272E0C
 * Size:	000004
 */
void Sarai::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80272E10
 * Size:	000020
 */
void Sarai::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80272E30
 * Size:	000140
 */
void Sarai::Obj::getShadowParam(Game::ShadowParam& shadowParam)
{
	Matrixf* bodyMtx = m_model->getJoint("bodyjnt")->getWorldMatrix();
	bodyMtx->getPosition(shadowParam.m_position);

	if (isAlive()) {
		s32 stateId = getStateID();

		if (((u32)stateId - 1) <= 1 || stateId == 3) {
			shadowParam.m_position.y -= 5.0f;
			shadowParam.m_boundingSphere.m_radius = 100.0f + static_cast<Parms*>(m_parms)->m_properParms.m_fp01.m_value;
		} else if (_0C8) {
			shadowParam.m_position.y -= 5.0f;
			shadowParam.m_boundingSphere.m_radius = 50.0f;
		} else {
			shadowParam.m_position.y -= 20.0f;
			shadowParam.m_boundingSphere.m_radius = 100.0f + static_cast<Parms*>(m_parms)->m_properParms.m_fp01.m_value;
		}
	} else {
		shadowParam.m_position.y              = 2.5f + m_position.y;
		shadowParam.m_boundingSphere.m_radius = 25.0f;
	}

	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam._1C                         = 12.5f;
}

/*
 * --INFO--
 * Address:	80272F70
 * Size:	000034
 */
void Sarai::Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	flickStickTarget();
}

/*
 * --INFO--
 * Address:	80272FA4
 * Size:	00005C
 */
void Sarai::Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();

	s32 stateId = getStateID();
	if (stateId >= 3) {
		m_fsm->transit(this, 3, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80273000
 * Size:	000028
 */
void Sarai::Obj::startCarcassMotion() { EnemyBase::startMotion(11, nullptr); }

/*
 * --INFO--
 * Address:	80273028
 * Size:	0000A8
 */
void Sarai::Obj::initMouthSlots()
{
	m_mouthSlots.alloc(2);
	m_mouthSlots.setup(0, m_model, "rkamujnt");
	m_mouthSlots.setup(1, m_model, "lkamujnt");

	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->_1C = 15.0f;
	}
}

/*
 * --INFO--
 * Address:	802730D0
 * Size:	000108
 */
f32 Sarai::Obj::setHeightVelocity()
{
	// The maximum amount of Pikmin that can have an effect on the upward velocity of the Sarai
#define MAX_PIKMIN_STUCK_FACTOR 5

	// Calculate the weight factor based on Pikmin stuck
	int pikminWeightFactor = (m_stickPikminCount < 0)
	                             ? (0)
	                             : (m_stickPikminCount <= MAX_PIKMIN_STUCK_FACTOR ? (m_stickPikminCount) : (MAX_PIKMIN_STUCK_FACTOR));

	float riseFactor     = static_cast<Parms*>(m_parms)->m_properParms.m_fp11.m_value;
	float climbingFactor = static_cast<Parms*>(m_parms)->m_properParms.m_fp12.m_value;
	f32 weight           = pikminWeightFactor;

	// Custom linear interpolation (https://en.wikipedia.org/wiki/Linear_interpolation)
	// lerp v0, v1, t -> (1 - t) * v0 + t * v1
	float velFactor = (((MAX_PIKMIN_STUCK_FACTOR - weight) / MAX_PIKMIN_STUCK_FACTOR) * riseFactor)
	                  + (weight / MAX_PIKMIN_STUCK_FACTOR) * climbingFactor;

	// Get the Y position of the map model (equivalent to a downwards raycast)
	float mapPosY = mapMgr->getMinY(m_position);

	// Get intended flight height
	float flightHeight = getCatchTargetNum() ? static_cast<Parms*>(m_parms)->m_properParms.m_fp02.m_value  // Grab flight height
	                                         : static_cast<Parms*>(m_parms)->m_properParms.m_fp01.m_value; // Normal flight height

	// Upward velocity is offset by map height
	m_velocity.y = velFactor * ((mapPosY + flightHeight) - m_position.y);

	return m_position.y - mapPosY;
}

/*
 * --INFO--
 * Address:	802731D8
 * Size:	000230
 */
void Sarai::Obj::setRandTarget()
{
	// Set's a random target near the home radius, if in a cave then completely random
	float radius;
	if (getCatchTargetNum()) {
		radius = randFloatR(static_cast<Parms*>(m_parms)->m_general.m_homeRadius.m_value);
	} else if (gameSystem && gameSystem->m_inCave) {
		radius = 50.0f + randFloatR(50.0f);
	} else {
		radius = static_cast<Parms*>(m_parms)->m_general.m_homeRadius.m_value
		         + randFloatR(static_cast<Parms*>(m_parms)->m_general.m_territoryRadius.m_value
		                      - static_cast<Parms*>(m_parms)->m_general.m_homeRadius.m_value);
	}

	// Get the direction from the home position towards our position
	float dirToSarai = JMath::atanTable_.atan2_(m_position.x - m_homePosition.x, m_position.z - m_homePosition.z);

	// Randomise the angle a bit and set the target position
	float rngAngle = HALF_PI + (dirToSarai + randFloatR(PI));
	m_targetPos    = Vector3f((radius * pikmin2_sinf(rngAngle)) + m_homePosition.x, m_homePosition.y,
	                          (radius * pikmin2_cosf(rngAngle)) + m_homePosition.z);
}

/*
 * --INFO--
 * Address:	80273408
 * Size:	000294
 */
void Sarai::Obj::fallMeckGround()
{
	Stickers sticker(this);
	Iterator<Creature> iterator(&sticker);

	for (iterator.first(); iterator.m_index != iterator.m_container->getEnd(); iterator.next()) {
		Creature* c = iterator.m_container->get(iterator.m_index);

		if (!c->isStickToMouth()) {
			continue;
		}
#
		InteractFallMeck fallMeck(this, static_cast<Parms*>(m_parms)->m_general.m_attackDamage.m_value);
		if (!c->stimulate(fallMeck)) {
			continue;
		}

		Vector3f fallVelocity = Vector3f(0.0f);

		const f32 nectarDropSpeed = static_cast<Parms*>(m_parms)->m_properParms.m_fp41.m_value;
		fallVelocity.y -= nectarDropSpeed;
		c->setVelocity(fallVelocity);
	}
}

/*
 * --INFO--
 * Address:	8027369C
 * Size:	00007C
 */
int Sarai::Obj::getCatchTargetNum()
{
	int max   = m_mouthSlots.m_max;
	int count = 0;
	for (int i = 0; i < max; i++) {
		if (m_mouthSlots.getSlot(i)->m_stuckCreature != nullptr) {
			count++;
		}
	}

	return count;
}

/*
 * --INFO--
 * Address:	80273718
 * Size:	000144
 * TODO
 */
s32 Sarai::Obj::getNextStateOnHeight()
{
	if (m_health <= 0.0f) {
		return 1;
	}

	s32 stuckPiki = getStickPikminNum();
	if (stuckPiki) {
		if (EnemyFunc::getStickPikminColorNum(this, 3) > 0) {
			return 1;
		}

		s32 v1;
		if (stuckPiki - 1 < 0) {
			v1 = 0;
		} else {
			v1 = 4;
			if (stuckPiki - 1 <= 4) {
				v1 = stuckPiki - 1;
			}
		}

		float va1 = static_cast<Parms*>(m_parms)->m_properParms.m_fp21.m_value;
		float va2 = static_cast<Parms*>(m_parms)->m_properParms.m_fp22.m_value;

		f32 fv1  = v1;
		float f4 = (4.0f - fv1) / 4;
		float f5 = (fv1 / 4);

		float a = (f4 * va1) + (f5 * va2);

		if (randFloatR(1.0f) < a) {
			return 4;
		} else {
			return 1;
		}
	}

	return -1;
}

/*
 * --INFO--
 * Address:	8027385C
 * Size:	0000B0
 */
void Sarai::Obj::flickStickTarget()
{
	int max = m_mouthSlots.m_max;
	for (int i = 0; i < max; i++) {
		Creature* creature = m_mouthSlots.getSlot(i)->m_stuckCreature;

		if (creature) {
			InteractFlick flick(this, 10.0f, 0.0f, -1000.0f);
			creature->stimulate(flick);
		}
	}
}

/*
 * --INFO--
 * Address:	8027390C
 * Size:	000080
 */
s32 Sarai::Obj::getStickPikminNum() { return m_stickPikminCount - getCatchTargetNum(); }

/*
 * --INFO--
 * Address:	8027398C
 * Size:	0003D0
 */
Piki* Sarai::Obj::getAttackableTarget()
{
	float zDist = m_position.z - m_homePosition.z;
	float xDist = m_position.x - m_homePosition.x;
	if (SQUARE(zDist) + SQUARE(xDist) < SQUARE(static_cast<Parms*>(m_parms)->m_general.m_homeRadius.m_value)) {
		Iterator<Piki> iterator(pikiMgr, pikiMgr->getStart());

		f32 maxAngle = PI * (DEG2RAD * static_cast<Parms*>(m_parms)->m_general.m_privateRadius.m_value);
		f32 maxDist  = static_cast<Parms*>(m_parms)->m_general.m_sightRadius.m_value;

		for (iterator.first(); iterator.m_index != iterator.m_container->getEnd(); iterator.next()) {
			Piki* c = iterator.m_container->get(iterator.m_index);

			if (c->isAlive() && c->isPikmin() && !c->isStickToMouth() && c->m_sticker != this && c->_0C8) {
				Vector3f pikiPos = c->getPosition();
				Vector3f thisPos = getPosition();

				f32 angleToPiki = JMath::atanTable_.atan2_(pikiPos.x - thisPos.x, pikiPos.z - thisPos.z);

				if (FABS(angDist(roundAng(angleToPiki), getFaceDir()) <= maxAngle)) {
					return c;
				}
			}
		}
	}

	return nullptr;

	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lwz      r4, 0xc0(r3)
	fsubs    f3, f1, f0
	lfs      f2, 0x18c(r3)
	lfs      f1, 0x198(r3)
	lfs      f0, 0x35c(r4)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80273D28
	lfs      f2, lbl_8051B25C@sda21(r2)
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	lfs      f1, 0x424(r4)
	li       r0, 0
	lfs      f0, 0x3d4(r4)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	fmuls    f1, f2, f1
	lfs      f2, lbl_8051B23C@sda21(r2)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	fmuls    f30, f0, f0
	stw      r4, 0x44(r1)
	fmuls    f31, f2, f1
	stw      r0, 0x50(r1)
	stw      r0, 0x48(r1)
	stw      r3, 0x4c(r1)
	bne      lbl_80273A4C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80273D08

lbl_80273A4C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80273AB8

lbl_80273A64:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80273D08
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_80273AB8:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80273A64
	b        lbl_80273D08

lbl_80273AD8:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80273C4C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80273C4C
	mr       r3, r30
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80273C4C
	lwz      r0, 0xf4(r30)
	cmplw    r0, r31
	beq      lbl_80273C4C
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	beq      lbl_80273C4C
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_80273C4C
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	lfs      f0, 0x40(r1)
	lfs      f2, 0x18c(r31)
	fsubs    f1, f1, f0
	lfs      f0, 0x38(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f30
	bge      lbl_80273C4C
	mr       r3, r30
	b        lbl_80273D2C

lbl_80273C4C:
	lwz      r0, 0x50(r1)
	cmplwi   r0, 0
	bne      lbl_80273C78
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80273D08

lbl_80273C78:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80273CEC

lbl_80273C98:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80273D08
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_80273CEC:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80273C98

lbl_80273D08:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x48(r1)
	cmplw    r4, r3
	bne      lbl_80273AD8

lbl_80273D28:
	li       r3, 0

lbl_80273D2C:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80273D5C
 * Size:	000024
 */
void Sarai::Obj::catchTarget() { EnemyFunc::eatPikmin(this, nullptr); }

/*
 * --INFO--
 * Address:	80273D80
 * Size:	000044
 */
void Sarai::Obj::createDownEffect() { EnemyBase::createBounceEffect(m_position, getDownSmokeScale()); }
} // namespace Game
