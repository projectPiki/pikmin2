#include "Game/Entities/Baby.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/GameSystem.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/EnemyFunc.h"
#include "efx/TBaby.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9TBabyBorn
    __vt__Q23efx9TBabyBorn:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx9TBabyBornFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx9TBabyBornFv
    .global __vt__Q34Game4Baby3Obj
    __vt__Q34Game4Baby3Obj:
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
        .4byte onInit__Q34Game4Baby3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game4Baby3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game4Baby3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game4Baby3ObjFv
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
        .4byte getShadowParam__Q34Game4Baby3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game4Baby3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game4Baby3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game4Baby3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game4Baby3ObjFR8Graphics .4byte
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
        .4byte initMouthSlots__Q34Game4Baby3ObjFv
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
        .4byte getEnemyTypeID__Q34Game4Baby3ObjFv
        .4byte getMouthSlots__Q34Game4Baby3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game4Baby3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game4Baby3ObjFv .4byte
   doFinishStoneState__Q34Game4Baby3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q24Game9EnemyBaseFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q34Game4Baby3ObjFv .4byte
   doFinishWaitingBirthTypeDrop__Q34Game4Baby3ObjFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q34Game4Baby3ObjFv .4byte doEndMovie__Q34Game4Baby3ObjFv .4byte
   setFSM__Q34Game4Baby3ObjFPQ34Game4Baby3FSM .4byte 0 .4byte 0 .4byte
   viewGetBaseScale__Q24Game10PelletViewFv .4byte
   "@728@12@viewGetShape__Q24Game9EnemyBaseFv" .4byte
   viewGetCollTreeJointIndex__Q24Game10PelletViewFv .4byte
   viewGetCollTreeOffset__Q24Game10PelletViewFv .4byte
   "@728@12@view_start_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@view_finish_carrymotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@viewStartCarryMotion__Q24Game9EnemyBaseFv" .4byte
   "@728@12@viewOnPelletKilled__Q24Game9EnemyBaseFv" .4byte
   "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B8E0
    lbl_8051B8E0:
        .4byte 0x40200000
    .global lbl_8051B8E4
    lbl_8051B8E4:
        .4byte 0x00000000
    .global lbl_8051B8E8
    lbl_8051B8E8:
        .float 1.0
    .global lbl_8051B8EC
    lbl_8051B8EC:
        .4byte 0x42480000
    .global lbl_8051B8F0
    lbl_8051B8F0:
        .4byte 0x41200000
    .global lbl_8051B8F4
    lbl_8051B8F4:
        .4byte 0x6B616D75
        .4byte 0x00000000
    .global lbl_8051B8FC
    lbl_8051B8FC:
        .4byte 0x41A00000
    .global lbl_8051B900
    lbl_8051B900:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051B908
    lbl_8051B908:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B910
    lbl_8051B910:
        .4byte 0x43FA0000
    .global lbl_8051B914
    lbl_8051B914:
        .4byte 0x42C80000
    .global lbl_8051B918
    lbl_8051B918:
        .4byte 0x40490FDB
    .global lbl_8051B91C
    lbl_8051B91C:
        .4byte 0x3FC90FDB
    .global lbl_8051B920
    lbl_8051B920:
        .4byte 0xC3A2F983
    .global lbl_8051B924
    lbl_8051B924:
        .4byte 0x43A2F983
    .global lbl_8051B928
    lbl_8051B928:
        .4byte 0x437A0000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8028D470
 * Size:	000140
 */
Baby::Obj::Obj()
{
	m_animator = new ProperAnimator;

	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8028D5B0
 * Size:	000004
 */
void Baby::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8028D5B4
 * Size:	0000B8
 */
void Baby::Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	resetEvent(0, EB_Cullable);
	resetEvent(0, EB_LeaveCarcass);
	setupEffect();
	resetRandTargetPosition();

	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		m_FSM->start(this, BABY_Move, nullptr);
		resetZukanAnimationFrame();
	} else {
		m_FSM->start(this, BABY_Born, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028D66C
 * Size:	000048
 */
void Baby::Obj::doUpdate()
{
	m_FSM->exec(this);
	m_mouthSlots.update();
}

/*
 * --INFO--
 * Address:	8028D6B4
 * Size:	000004
 */
void Baby::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8028D6B8
 * Size:	000020
 */
void Baby::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8028D6D8
 * Size:	00004C
 */
void Baby::Obj::setFSM(Game::Baby::FSM* fsm)
{
	m_FSM = fsm;
	m_FSM->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8028D724
 * Size:	000068
 */
void Baby::Obj::getShadowParam(Game::ShadowParam& param)
{
	param.m_position = m_position;
	param.m_position.y += 2.5f;

	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_1)) {
		param.m_boundingSphere.m_radius = 50.0f;
	} else {
		param.m_boundingSphere.m_radius = 10.0f;
	}
	param.m_size = 10.0f;
}

/*
 * --INFO--
 * Address:	8028D78C
 * Size:	000074
 */
bool Baby::Obj::pressCallBack(Game::Creature* obj, float, CollPart* part)
{
	if (obj && !isEvent(0, EB_Bittered) && getStateID() > 2) {
		m_FSM->transit(this, BABY_Press, nullptr);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8028D800
 * Size:	000074
 */
bool Baby::Obj::hipdropCallBack(Game::Creature* obj, float, CollPart* part)
{

	if (obj && !isEvent(0, EB_Bittered) && getStateID() > 2) {
		m_FSM->transit(this, BABY_Press, nullptr);
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	8028D874
 * Size:	000020
 */
void Baby::Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/*
 * --INFO--
 * Address:	8028D894
 * Size:	00005C
 */
void Baby::Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (getStateID() == BABY_Born) {
		m_FSM->transit(this, BABY_Move, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028D8F0
 * Size:	000034
 */
void Baby::Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8028D924
 * Size:	000034
 */
void Baby::Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8028D958
 * Size:	000020
 */
void Baby::Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8028D978
 * Size:	000020
 */
void Baby::Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8028D998
 * Size:	00008C
 */
void Baby::Obj::initMouthSlots()
{
	m_mouthSlots.alloc(1);
	m_mouthSlots.setup(0, m_model, "kamu");
	f32 size = 20.0f;
	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = size;
	}
}

/*
 * --INFO--
 * Address:	8028DA24
 * Size:	00008C
 */
int Baby::Obj::getSlotPikiNum()
{
	int slotnum       = 0;
	MouthSlots* slots = getMouthSlots();
	int max           = slots->m_max;
	for (int i = 0; i < max; i++) {
		if (slots->getSlot(i)->m_stuckCreature) {
			slotnum++;
		}
	}
	return slotnum;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x25c(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0(r3)
	li       r28, 0
	mr       r29, r3
	b        lbl_8028DA84

lbl_8028DA64:
	mr       r3, r29
	mr       r4, r28
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	beq      lbl_8028DA80
	addi     r30, r30, 1

lbl_8028DA80:
	addi     r28, r28, 1

lbl_8028DA84:
	cmpw     r28, r31
	blt      lbl_8028DA64
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028DAB0
 * Size:	000008
 */
MouthSlots* Baby::Obj::getMouthSlots() { return &m_mouthSlots; }

/*
 * --INFO--
 * Address:	8028DAB8
 * Size:	00001C
 */
void Baby::Obj::resetRandTargetPosition() { m_targetPos = m_position; }

/*
 * --INFO--
 * Address:	8028DAD4
 * Size:	000074
 */
void Baby::Obj::resetZukanAnimationFrame()
{
	f32 frame = getMotionFrameMax();
	setMotionFrame(randWeightFloat(frame));
}

/*
 * --INFO--
 * Address:	8028DB48
 * Size:	00020C
 */
void Baby::Obj::moveNoTarget()
{
	if (gameSystem && gameSystem->m_mode == GSM_PIKLOPEDIA) {
		if (sqrDistanceXZ(m_position, m_targetPos) < 500.0f) {
			f32 f1  = randWeightFloat(100.0f) + 50.0f;
			f32 ang = JMath::atanTable_.atan2_(m_position.x - m_homePosition.x, m_position.z - m_homePosition.z);
			ang += randWeightFloat(PI) + HALF_PI;

			m_targetPos.x = f1 * pikmin2_sinf(ang) + m_homePosition.x;
			m_targetPos.y = m_homePosition.y;
			m_targetPos.z = f1 * pikmin2_cosf(ang) + m_homePosition.z;
		}
		Parms* parms = static_cast<Parms*>(m_parms);
		EnemyFunc::walkToTarget(this, m_targetPos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
		                        parms->m_general.m_rotationalSpeed.m_value);
	} else {
		m_simVelocity = 0.0f;
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_8028DD20
	lwz      r0, 0x44(r4)
	cmpwi    r0, 4
	bne      lbl_8028DD20
	lfs      f1, 0x194(r31)
	lfs      f0, 0x2d0(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051B910@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8028DD00
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_8051B908@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 8(r1)
	lfs      f0, lbl_8051B914@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f5, lbl_8051B900@sda21(r2)
	fsubs    f2, f1, f2
	lfs      f3, 0x18c(r31)
	lfs      f1, 0x198(r31)
	lfs      f4, lbl_8051B8EC@sda21(r2)
	fmuls    f6, f0, f2
	lfs      f2, 0x194(r31)
	fsubs    f1, f3, f1
	lfs      f0, 0x1a0(r31)
	fdivs    f3, f6, f5
	fadds    f31, f4, f3
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f2, lbl_8051B908@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f3, lbl_8051B918@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051B900@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051B91C@sda21(r2)
	lfs      f0, lbl_8051B8E4@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_8028DC84
	lfs      f0, lbl_8051B920@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8028DCA8

lbl_8028DC84:
	lfs      f0, lbl_8051B924@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8028DCA8:
	lfs      f1, 0x198(r31)
	lfs      f0, lbl_8051B8E4@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2c8(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2cc(r31)
	bge      lbl_8028DCCC
	fneg     f3, f3

lbl_8028DCCC:
	lfs      f1, lbl_8051B924@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x1a0(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2d0(r31)

lbl_8028DD00:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r31, 0x2c8
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" b
lbl_8028DD30

lbl_8028DD20:
	lfs      f0, lbl_8051B8E4@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8028DD30:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028DD54
 * Size:	0000F4
 */
void Baby::Obj::createHoney()
{
	Parms* parms = static_cast<Parms*>(m_parms);
	if (randWeightFloat(1.0f) < parms->m_properParms.m_nectarChance.m_value) {
		ItemHoney::InitArg arg(false, false);

		ItemHoney::Item* item = static_cast<ItemHoney::Item*>(ItemHoney::mgr->birth());
		if (item) {
			item->init(&arg);
			item->setPosition(m_position, false);
			Vector3f velocity(0.0f, 250.0f, 0.0f);
			item->setVelocity(velocity);
		}
	}
}

/*
 * --INFO--
 * Address:	8028DE48
 * Size:	0000B4
 */
void Baby::Obj::createEffect()
{
	m_efxBabyBorn = new efx::TBabyBorn(&m_position);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8028DEE4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx9TBabyBorn@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TBabyBorn@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 4
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8028DEE4:
	stw      r3, 0x2d4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8028DEFC
 * Size:	000004
 */
void Baby::Obj::setupEffect() { }

/*
 * --INFO--
 * Address:	8028DF00
 * Size:	000034
 */
void Baby::Obj::createBornEffect() { m_efxBabyBorn->create(nullptr); }

/*
 * --INFO--
 * Address:	8028DF34
 * Size:	000030
 */
void Baby::Obj::effectDrawOn() { m_efxBabyBorn->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	8028DF64
 * Size:	000030
 */
void Baby::Obj::effectDrawOff() { m_efxBabyBorn->startDemoDrawOff(); }

//} // namespace Game

// namespace efx {

/*
 * --INFO--
 * Address:	8028DF94
 * Size:	00009C
 */
// TBabyBorn::~TBabyBorn()
//{
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_8028E014
lis      r3, __vt__Q23efx9TBabyBorn@ha
addi     r3, r3, __vt__Q23efx9TBabyBorn@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_8028E004
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_8028E004
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_8028E004:
extsh.   r0, r31
ble      lbl_8028E014
mr       r3, r30
bl       __dl__FPv

lbl_8028E014:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
//}

// namespace Game {

//} // namespace Game

/*
 * --INFO--
 * Address:	8028E030
 * Size:	000004
 */
void Baby::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	8028E034
 * Size:	000004
 */
void Baby::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	8028E038
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Baby::Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Baby; }

// namespace efx {

/*
 * --INFO--
 * Address:	8028E040
 * Size:	000008
 */
// TBabyBorn::@4 @~TBabyBorn()
//{
/*
addi     r3, r3, -4
b        __dt__Q23efx9TBabyBornFv
*/
//}
//} // namespace efx

} // namespace Game
