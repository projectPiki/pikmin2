#include "Game/Entities/GasHiba.h"
#include "efx/TGasuHiba.h"
#include "Dolphin/rand.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804864F8
    lbl_804864F8:
        .4byte 0x41726747
        .4byte 0x61737548
        .4byte 0x69626100

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx11ArgGasuHiba
    __vt__Q23efx11ArgGasuHiba:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx11ArgGasuHibaFv
    .global __vt__Q34Game7GasHiba3Obj
    __vt__Q34Game7GasHiba3Obj:
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
        .4byte onInit__Q34Game7GasHiba3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game7GasHiba3ObjFf
        .4byte doDirectDraw__Q34Game7GasHiba3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game7GasHiba3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game7GasHiba3ObjFv
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
        .4byte isLivingThing__Q34Game7GasHiba3ObjFv
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
        .4byte getShadowParam__Q34Game7GasHiba3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game7GasHiba3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game7GasHiba3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game7GasHiba3ObjFv .4byte
   doUpdateCommon__Q24Game9EnemyBaseFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game7GasHiba3ObjFR8Graphics .4byte
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
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
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
        .4byte getEnemyTypeID__Q34Game7GasHiba3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q34Game7GasHiba3ObjFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q34Game7GasHiba3ObjFv .4byte
   startCarcassMotion__Q24Game9EnemyBaseFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game7GasHiba3ObjFPQ34Game7GasHiba3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@724@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@724@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@724@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@724@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@724@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@724@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B078
    lbl_8051B078:
        .4byte 0x00000000
    .global lbl_8051B07C
    lbl_8051B07C:
        .4byte 0x47000000
    .global lbl_8051B080
    lbl_8051B080:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051B088
    lbl_8051B088:
        .float 1.0
    .global lbl_8051B08C
    lbl_8051B08C:
        .4byte 0x41C80000
    .global lbl_8051B090
    lbl_8051B090:
        .4byte 0x42960000
        .4byte 0x00000000
*/

namespace Game {
namespace GasHiba {

/*
 * --INFO--
 * Address:	8026D14C
 * Size:	000138
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8026D284
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8026D288
 * Size:	000100
 */
void Obj::onInit(CreatureInitArg* args)
{
	EnemyBase::onInit(args);
	resetEvent(0, EB_13);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_9);
	hardConstraintOn();
	setEvent(0, EB_BitterImmune);

	setEmotionNone();
	shadowMgr->killShadow(this);
	m_timer = 0.0f;
	resetBridgeGateCheck();
	m_isAlive = false;
	setupLodParms();

	f32 r = randWeightFloat(C_PROPERPARMS.m_waitTime.m_value);
	WaitStateArg arg;
	arg.m_waitTimer = r;
	m_FSM->start(this, GASHIBA_Wait, &arg);
}

/*
 * --INFO--
 * Address:	8026D388
 * Size:	000034
 */
void Obj::doUpdate() { m_FSM->exec(this); }

/*
 * --INFO--
 * Address:	8026D3BC
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8026D3C0
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8026D3E0
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	m_FSM = fsm;
	m_FSM->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	8026D42C
 * Size:	000038
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.m_position                  = m_position;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 1.0f;
	shadowParam._1C                         = 1.0f;
}

/*
 * --INFO--
 * Address:	8026D464
 * Size:	0000C8
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature) && !creature->isNavi()) {
		Vector3f position = creature->getPosition();
		position.y -= m_position.y;

		Parms* parms = C_PARMS;
		f32 max      = parms->m_general.m_fp20.m_value;
		f32 min      = parms->m_general.m_fp21.m_value;
		// this block comparing max, min, and position.y is incorrect.
		if ((position.y < max) && (position.y > -min)) {
			addDamage(damage, 1.0f);
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8026D52C
 * Size:	000030
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026D55C
 * Size:	000030
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026D58C
 * Size:	000034
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8026D5C0
 * Size:	0001D0
 */
void Obj::interactGasAttack()
{
	Parms* parms = C_PARMS;
	f32 max      = m_position.y + parms->m_general.m_fp20.m_value;
	f32 min      = m_position.y - parms->m_general.m_fp21.m_value;
	f32 radSqr   = SQUARE(parms->m_general.m_fp22.m_value);

	Sys::Sphere sphere(m_position);
	sphere.m_radius = parms->m_general.m_fp22.m_value;

	CellIteratorArg arg(sphere);
	arg._1C = true;

	CellIterator iterator(arg);
	CI_LOOP(iterator)
	{
		Creature* creature = static_cast<Creature*>(*iterator);

		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f position = creature->getPosition();
			if ((max > position.y) && (min < position.y)) {
				Vector2f delta;
				getDistance2D(position, delta);
				if (SQUARE(delta.x) + SQUARE(delta.y) < radSqr) {
					InteractGas gas(this, C_PARMS->m_general.m_attackDamage.m_value);
					creature->stimulate(gas);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8026D790
 * Size:	000018
 */
void Obj::resetBridgeGateCheck()
{
	m_isBridgeGate = true;
	m_bridge       = nullptr;
	m_gate         = nullptr;
}

/*
 * --INFO--
 * Address:	8026D7A8
 * Size:	0005B0
 */
void Obj::setInitLivingThing()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r31, r3
	lbz      r0, 0x2c0(r3)
	cmplwi   r0, 0
	beq      lbl_8026DD30
	li       r0, 0
	stb      r0, 0x2c0(r31)
	stw      r0, 0x2c8(r31)
	stw      r0, 0x2cc(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8026DD04
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	bne      lbl_8026DD04
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8026DD04
	lwz      r3, mgr__Q24Game10ItemBridge@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8026DA88
	beq      lbl_8026D824
	addi     r3, r3, 0x30

lbl_8026D824:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x3c(r1)
	cmplwi   r0, 0
	stw      r4, 0x30(r1)
	stw      r0, 0x34(r1)
	stw      r3, 0x38(r1)
	bne      lbl_8026D860
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8026D8E8

lbl_8026D860:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8026D8CC

lbl_8026D878:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026D8E8
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_8026D8CC:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026D878

lbl_8026D8E8:
	lfs      f31, lbl_8051B078@sda21(r2)
	lfs      f30, lbl_8051B08C@sda21(r2)
	b        lbl_8026DA68

lbl_8026D8F4:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 0x14
	mr       r30, r0
	lwz      r12, 0(r30)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x18(r1)
	lfs      f0, 0x190(r31)
	lfs      f2, 0x14(r1)
	fsubs    f0, f1, f0
	lfs      f3, 0x1c(r1)
	fcmpo    cr0, f0, f31
	ble      lbl_8026D948
	b        lbl_8026D94C

lbl_8026D948:
	fneg     f0, f0

lbl_8026D94C:
	fcmpo    cr0, f0, f30
	bge      lbl_8026D9AC
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051B078@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8026D96C
	b        lbl_8026D970

lbl_8026D96C:
	fneg     f1, f1

lbl_8026D970:
	lfs      f0, lbl_8051B090@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8026D9AC
	lfs      f1, 0x194(r31)
	lfs      f0, lbl_8051B078@sda21(r2)
	fsubs    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8026D994
	b        lbl_8026D998

lbl_8026D994:
	fneg     f1, f1

lbl_8026D998:
	lfs      f0, lbl_8051B090@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8026D9AC
	stw      r30, 0x2c8(r31)
	b        lbl_8026DA88

lbl_8026D9AC:
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_8026D9D8
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8026DA68

lbl_8026D9D8:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8026DA4C

lbl_8026D9F8:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026DA68
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_8026DA4C:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026D9F8

lbl_8026DA68:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_8026D8F4

lbl_8026DA88:
	lwz      r5, itemGateMgr__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8026DD04
	lwz      r0, 0x2c8(r31)
	cmplwi   r0, 0
	bne      lbl_8026DD04
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8ItemGate>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8ItemGate>"@l
	addi     r3, r5, 0x30
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x2c(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_8026DAE0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8026DB68

lbl_8026DAE0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8026DB4C

lbl_8026DAF8:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026DB68
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8026DB4C:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026DAF8

lbl_8026DB68:
	lfs      f30, lbl_8051B078@sda21(r2)
	lfs      f31, lbl_8051B08C@sda21(r2)
	b        lbl_8026DCE4

lbl_8026DB74:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x190(r31)
	lfs      f2, 8(r1)
	fsubs    f0, f1, f0
	lfs      f3, 0x10(r1)
	fcmpo    cr0, f0, f30
	ble      lbl_8026DBC4
	b        lbl_8026DBC8

lbl_8026DBC4:
	fneg     f0, f0

lbl_8026DBC8:
	fcmpo    cr0, f0, f31
	bge      lbl_8026DC28
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051B078@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8026DBE8
	b        lbl_8026DBEC

lbl_8026DBE8:
	fneg     f1, f1

lbl_8026DBEC:
	lfs      f0, lbl_8051B090@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8026DC28
	lfs      f1, 0x194(r31)
	lfs      f0, lbl_8051B078@sda21(r2)
	fsubs    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8026DC10
	b        lbl_8026DC14

lbl_8026DC10:
	fneg     f1, f1

lbl_8026DC14:
	lfs      f0, lbl_8051B090@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8026DC28
	stw      r30, 0x2cc(r31)
	b        lbl_8026DD04

lbl_8026DC28:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_8026DC54
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8026DCE4

lbl_8026DC54:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8026DCC8

lbl_8026DC74:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026DCE4
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8026DCC8:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026DC74

lbl_8026DCE4:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_8026DB74

lbl_8026DD04:
	lwz      r0, 0x2c8(r31)
	cmplwi   r0, 0
	bne      lbl_8026DD1C
	lwz      r0, 0x2cc(r31)
	cmplwi   r0, 0
	beq      lbl_8026DD28

lbl_8026DD1C:
	li       r0, 0
	stb      r0, 0x2c1(r31)
	b        lbl_8026DD30

lbl_8026DD28:
	li       r0, 1
	stb      r0, 0x2c1(r31)

lbl_8026DD30:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8026DD58
 * Size:	00009C
 * Please for the love of cheese clean this up.
 * TODO: ItemGate and ItemBridge both need their structs filled out.
 */
void Obj::updateLivingThing()
{
	/*
	if (!isLivingThing()) {
	    if (!m_bridge) {
	        if (!m_gate) {
	            m_isAlive = true;
	        } else if (!m_gate->isAlive()) {
	            m_isAlive == true;
	        }
	    } else if (m_bridge->m_stagesRemaining) {
	        m_isAlive == true;
	    }
	}
	*/
}

/*
 * --INFO--
 * Address:	8026DDFC
 * Size:	000024
 */
void Obj::setupLodParms()
{
	m_lodParm.m_far        = C_PARMS->m_properParms.m_lodNear.m_value;
	m_lodParm.m_close      = C_PARMS->m_properParms.m_lodMiddle.m_value;
	m_lodParm.m_isCylinder = false;
}

/*
 * --INFO--
 * Address:	8026DE20
 * Size:	00002C
 */
void Obj::updateEfxLod() { m_efxGas->setRateLOD(m_lod.m_flags & (AILOD_FLAG_IS_MID | AILOD_FLAG_IS_FAR)); }

/*
 * --INFO--
 * Address:	8026DE4C
 * Size:	00005C
 */
void Obj::createEffect() { m_efxGas = new efx::TGasuHiba; }

/*
 * --INFO--
 * Address:	8026DEA8
 * Size:	0000A0
 */
void Obj::startGasEffect()
{
	bool underground = false;
	if ((gameSystem) && (!gameSystem->m_inCave)) {
		underground = true;
	}
	efx::ArgGasuHiba arg(m_position);
	arg.m_isUnderground = underground;
	m_efxGas->create(&arg);
}

/*
 * --INFO--
 * Address:	8026DF48
 * Size:	000030
 */
void Obj::finishGasEffect() { m_efxGas->fade(); }

/*
 * --INFO--
 * Address:	8026DF78
 * Size:	000044
 */
void Obj::generatorKill()
{
	if (m_generator) {
		m_generator->informDeath(this);
		m_generator = nullptr;
	}
}

} // namespace GasHiba
} // namespace Game
