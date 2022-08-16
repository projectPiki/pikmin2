#include "types.h"
#include "Game/Entities/Catfish.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game7Catfish3Obj
    __vt__Q34Game7Catfish3Obj:
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
        .4byte onInit__Q34Game7Catfish3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game12KochappyBase3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game7Catfish3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game7Catfish3ObjFv
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
        .4byte bounceCallback__Q34Game12KochappyBase3ObjFPQ23Sys8Triangle
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
        .4byte getShadowParam__Q34Game7Catfish3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game7Catfish3ObjFv
        .4byte "birth__Q34Game12KochappyBase3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game12KochappyBase3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game12KochappyBase3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game12KochappyBase3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game7Catfish3ObjFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q34Game12KochappyBase3ObjFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q34Game7Catfish3ObjFv
        .4byte initWalkSmokeEffect__Q34Game12KochappyBase3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game12KochappyBase3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game7Catfish3ObjFv
        .4byte getMouthSlots__Q34Game12KochappyBase3ObjFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q34Game7Catfish3ObjFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game7Catfish3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game12KochappyBase3ObjFv .4byte
   doFinishStoneState__Q34Game12KochappyBase3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game12KochappyBase3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game12KochappyBase3ObjFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game12KochappyBase3ObjFPQ34Game12KochappyBase3FSM
        .4byte setAnimationSpeed__Q34Game12KochappyBase3ObjFf
        .4byte resetEnemyNonStone__Q34Game7Catfish3ObjFv
        .4byte setEnemyNonStone__Q34Game7Catfish3ObjFv
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

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051B358
    lbl_8051B358:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051B360
    lbl_8051B360:
        .4byte 0x41200000
    .global lbl_8051B364
    lbl_8051B364:
        .4byte 0x00000000
    .global lbl_8051B368
    lbl_8051B368:
        .float 1.0
    .global lbl_8051B36C
    lbl_8051B36C:
        .4byte 0x42480000
    .global lbl_8051B370
    lbl_8051B370:
        .4byte 0x41700000
    .global lbl_8051B374
    lbl_8051B374:
        .4byte 0x6B616D75
        .4byte 0x31000000
    .global lbl_8051B37C
    lbl_8051B37C:
        .4byte 0x6B616D75
        .4byte 0x32000000
    .global lbl_8051B384
    lbl_8051B384:
        .4byte 0x41A00000
    .global lbl_8051B388
    lbl_8051B388:
        .float 0.5
        .4byte 0x00000000
*/

namespace Game {
namespace Catfish {

/*
 * --INFO--
 * Address:	80277008
 * Size:	000090
 */
Obj::Obj() { }

/*
 * --INFO--
 * Address:	80277098
 * Size:	00003C
 */
void Obj::onInit(Game::CreatureInitArg* arg)
{
	KochappyBase::Obj::onInit(arg);
	m_shadowJoint = m_model->getJoint("kosi");
}

/*
 * --INFO--
 * Address:	802770D4
 * Size:	0000C0
 */
void Obj::getShadowParam(Game::ShadowParam& param)
{
	Matrixf* worldMatrix = m_shadowJoint->getWorldMatrix();

	param.m_position
	    = Vector3f(worldMatrix->m_matrix.mtxView[0][3], worldMatrix->m_matrix.mtxView[1][3], worldMatrix->m_matrix.mtxView[2][3]);

	param.m_position.y -= 10.0f;
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	param.m_boundingSphere.m_radius   = param.m_position.y - m_position.y;

	if (_1E0.m_flags[1].typeView & ENEMY_EVENT_REFRESH) {
		param.m_boundingSphere.m_radius += 50.0f;
	} else {
		param.m_boundingSphere.m_radius += 15.0f;
	}

	param._1C = 15.0f;
}

/*
 * --INFO--
 * Address:	80277194
 * Size:	000028
 */
bool Catfish::Obj::pressCallBack(Game::Creature*, float damage, CollPart*)
{
	EnemyBase::addDamage(damage, 1.0f);
	return false;
}

/*
 * --INFO--
 * Address:	802771BC
 * Size:	000020
 */
bool Catfish::Obj::hipdropCallBack(Game::Creature* creature, float a2, CollPart* collPart)
{
	return EnemyBase::hipdropCallBack(creature, a2, collPart);
}

/*
 * --INFO--
 * Address:	802771DC
 * Size:	0000A0
 */
void Catfish::Obj::initMouthSlots()
{
	m_mouthSlots.alloc(2);
	m_mouthSlots.setup(0, Creature::m_model, "kamu1");
	m_mouthSlots.setup(1, Creature::m_model, "kamu2");

	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->_1C = 20.0f;
	}
}

/*
 * --INFO--
 * Address:	8027727C
 * Size:	000044
 */
void Catfish::Obj::resetEnemyNonStone()
{
	if (_1E0.m_flags[0].typeView & ENEMY_EVENT_STONE) {
		createDownEffect();
	}

	_1E0.m_flags[0].typeView &= 0xFFDFFFFF;
}

/*
 * --INFO--
 * Address:	802772C0
 * Size:	000028
 */
void Catfish::Obj::createDownEffect()
{
	EnemyBase::createBounceEffect(m_position, 0.5);
}

/*
 * --INFO--
 * Address:	802772E8
 * Size:	000004
 */
// void Catfish::Obj::changeMaterial() { }

// /*
//  * --INFO--
//  * Address:	802772EC
//  * Size:	000004
//  */
// void Catfish::Obj::inWaterCallback(Game::WaterBox*) { }

// /*
//  * --INFO--
//  * Address:	802772F0
//  * Size:	000004
//  */
// void Catfish::Obj::outWaterCallback() { }

// /*
//  * --INFO--
//  * Address:	802772F4
//  * Size:	000008
//  */
// u32 Catfish::Obj::getEnemyTypeID() { return 0x1A; }

// /*
//  * --INFO--
//  * Address:	802772FC
//  * Size:	000010
//  */
// void Catfish::Obj::setEnemyNonStone()
// {
// 	/*
// 	lwz      r0, 0x1e0(r3)
// 	oris     r0, r0, 0x20
// 	stw      r0, 0x1e0(r3)
// 	blr
// 	*/
// }

} // namespace Catfish
} // namespace Game
