#include "types.h"
#include "Game/Entities/Sarai.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Stickers.h"
#include "Game/PikiMgr.h"
#include "JSystem/JMath.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sarai {

/*
 * --INFO--
 * Address:	80272BC4
 * Size:	000138
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80272CFC
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80272D00
 * Size:	000078
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);

	setEvent(0, EB_3);

	_2C0 = 0.0f;
	resetAttackableTimer(12800.0f);

	m_FSM->start(this, SARAI_Move, nullptr);
}

/*
 * --INFO--
 * Address:	80272D78
 * Size:	000048
 */
void Obj::doUpdate()
{
	m_FSM->exec(this);
	m_mouthSlots.update();
}

/*
 * --INFO--
 * Address:	80272DC0
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
 * Address:	80272E0C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80272E10
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80272E30
 * Size:	000140
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* bodyMtx       = m_model->getJoint("bodyjnt")->getWorldMatrix();
	shadowParam.m_position = bodyMtx->getBasis(3);

	if (isAlive()) {
		s32 stateId = getStateID();

		if (stateId == SARAI_Fall || stateId == SARAI_Damage || stateId == SARAI_TakeOff) {
			shadowParam.m_position.y -= 5.0f;
			shadowParam.m_boundingSphere.m_radius = 100.0f + static_cast<Parms*>(m_parms)->m_properParms.m_fp01.m_value;
		} else if (m_curTriangle) {
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
	shadowParam.m_size                      = 12.5f;
}

/*
 * --INFO--
 * Address:	80272F70
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	flickStickTarget();
}

/*
 * --INFO--
 * Address:	80272FA4
 * Size:	00005C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();

	s32 stateId = getStateID();
	if (stateId >= SARAI_TakeOff) {
		m_FSM->transit(this, SARAI_TakeOff, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80273000
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(11, nullptr); }

/*
 * --INFO--
 * Address:	80273028
 * Size:	0000A8
 */
void Obj::initMouthSlots()
{
	m_mouthSlots.alloc(2);
	m_mouthSlots.setup(0, m_model, "rkamujnt");
	m_mouthSlots.setup(1, m_model, "lkamujnt");

	for (int i = 0; i < m_mouthSlots.m_max; i++) {
		m_mouthSlots.getSlot(i)->m_radius = 15.0f;
	}
}

/*
 * --INFO--
 * Address:	802730D0
 * Size:	000108
 */
f32 Obj::setHeightVelocity()
{
	// The maximum amount of Pikmin that can have an effect on the upward velocity of the Sarai
#define MAX_PIKMIN_STUCK_FACTOR 5

	// Calculate the weight factor based on Pikmin stuck
	int pikminWeightFactor = (m_stuckPikminCount < 0)
	                           ? (0)
	                           : (m_stuckPikminCount <= MAX_PIKMIN_STUCK_FACTOR ? (m_stuckPikminCount) : (MAX_PIKMIN_STUCK_FACTOR));

	f32 riseFactor     = static_cast<Parms*>(m_parms)->m_properParms.m_fp11.m_value;
	f32 climbingFactor = static_cast<Parms*>(m_parms)->m_properParms.m_fp12.m_value;
	f32 weight         = pikminWeightFactor;

	// Custom linear interpolation (https://en.wikipedia.org/wiki/Linear_interpolation)
	// lerp v0, v1, t -> (1 - t) * v0 + t * v1
	f32 velFactor = (((MAX_PIKMIN_STUCK_FACTOR - weight) / MAX_PIKMIN_STUCK_FACTOR) * riseFactor)
	              + (weight / MAX_PIKMIN_STUCK_FACTOR) * climbingFactor;

	// Get the Y position of the map model (equivalent to a downwards raycast)
	f32 mapPosY = mapMgr->getMinY(m_position);

	// Get intended flight height
	f32 flightHeight = getCatchTargetNum() ? static_cast<Parms*>(m_parms)->m_properParms.m_fp02.m_value  // Grab flight height
	                                       : static_cast<Parms*>(m_parms)->m_properParms.m_fp01.m_value; // Normal flight height

	// Upward velocity is offset by map height
	m_impVelocity.y = velFactor * ((mapPosY + flightHeight) - m_position.y);

	return m_position.y - mapPosY;
}

/*
 * --INFO--
 * Address:	802731D8
 * Size:	000230
 */
void Obj::setRandTarget()
{
	// Set's a random target near the home radius, if in a cave then completely random
	f32 radius;
	if (getCatchTargetNum()) {
		radius = randWeightFloat(static_cast<Parms*>(m_parms)->m_general.m_homeRadius.m_value);
	} else if (gameSystem && gameSystem->m_inCave) {
		radius = 50.0f + randWeightFloat(50.0f);
	} else {
		radius = static_cast<Parms*>(m_parms)->m_general.m_homeRadius.m_value
		       + randWeightFloat(static_cast<Parms*>(m_parms)->m_general.m_territoryRadius.m_value
		                         - static_cast<Parms*>(m_parms)->m_general.m_homeRadius.m_value);
	}

	// Get the direction from the home position towards our position
	f32 dirToSarai = JMath::atanTable_.atan2_(m_position.x - m_homePosition.x, m_position.z - m_homePosition.z);

	// Randomise the angle a bit and set the target position
	f32 rngAngle = HALF_PI + (dirToSarai + randWeightFloat(PI));
	m_targetPos  = Vector3f((radius * pikmin2_sinf(rngAngle)) + m_homePosition.x, m_homePosition.y,
                           (radius * pikmin2_cosf(rngAngle)) + m_homePosition.z);
}

/*
 * --INFO--
 * Address:	80273408
 * Size:	000294
 */
void Obj::fallMeckGround()
{
	Stickers sticker(this);
	Iterator<Creature> iterator(&sticker);

	CI_LOOP(iterator)
	{
		Creature* c = iterator.m_container->get(iterator.m_index);

		if (!c->isStickToMouth()) {
			continue;
		}

		InteractFallMeck fallMeck(this, static_cast<Parms*>(m_parms)->m_general.m_attackDamage.m_value);
		if (!c->stimulate(fallMeck)) {
			continue;
		}

		Vector3f fallVelocity = Vector3f(0.0f);

		const f32 fallMeckSpeed = static_cast<Parms*>(m_parms)->m_properParms.m_fp41.m_value;
		fallVelocity.y -= fallMeckSpeed;
		c->setVelocity(fallVelocity);
	}
}

/*
 * --INFO--
 * Address:	8027369C
 * Size:	00007C
 */
int Obj::getCatchTargetNum()
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
int Obj::getNextStateOnHeight()
{
	if (m_health <= 0.0f) {
		return SARAI_Fall;
	}

	int stuckPiki = getStickPikminNum();
	if (stuckPiki) {
		if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
			return SARAI_Fall;
		}

		int v1;
		if (stuckPiki - 1 < 0) {
			v1 = 0;
		} else {
			v1 = 4;
			if (stuckPiki - 1 <= 4) {
				v1 = stuckPiki - 1;
			}
		}

		f32 va1 = static_cast<Parms*>(m_parms)->m_properParms.m_fp21.m_value;
		f32 va2 = static_cast<Parms*>(m_parms)->m_properParms.m_fp22.m_value;

		f32 fv1 = v1;
		f32 f4  = (4.0f - fv1) / 4;
		f32 f5  = (fv1 / 4);

		f32 fallChance = (f4 * va1) + (f5 * va2);

		if (randWeightFloat(1.0f) < fallChance) {
			return SARAI_Flick;
		} else {
			return SARAI_Fall;
		}
	}

	return SARAI_NULL;
}

/*
 * --INFO--
 * Address:	8027385C
 * Size:	0000B0
 */
void Obj::flickStickTarget()
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
int Obj::getStickPikminNum() { return m_stuckPikminCount - getCatchTargetNum(); }

/*
 * --INFO--
 * Address:	8027398C
 * Size:	0003D0
 */
Piki* Obj::getAttackableTarget()
{
	Parms* parms  = static_cast<Parms*>(m_parms);
	Vector3f dist = m_position - m_homePosition;

	if (SQUARE(dist.x) + SQUARE(dist.z) < SQUARE(parms->m_general.m_territoryRadius.m_value)) {
		f32 maxAngle = PI * (DEG2RAD * parms->m_general.m_fov.m_value);
		f32 maxDist  = SQUARE(parms->m_general.m_sightRadius.m_value);

		Iterator<Piki> iterator(pikiMgr);
		iterator.first();
		while (!iterator.isDone()) {
			Piki* c = iterator.m_container->get(iterator.m_index);

			if (c->isAlive() && c->isPikmin() && !c->isStickToMouth() && c->m_sticker != this && c->m_curTriangle) {
				// this angDist calc should probably be a bigger inline than just angXZ, but not sure.
				Vector3f pikiPos = c->getPosition();
				Vector3f thisPos = getPosition();

				f32 angleToPiki = angXZ(pikiPos, thisPos);
				if (FABS(angDist(angleToPiki, getFaceDir())) <= maxAngle) {
					Vector3f pos = c->getPosition();
					if (sqrDistanceXZ(m_position, pos) < maxDist) {
						return c;
					}
				}
			}
			iterator.next();
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
void Obj::catchTarget() { EnemyFunc::eatPikmin(this, nullptr); }

/*
 * --INFO--
 * Address:	80273D80
 * Size:	000044
 */
void Obj::createDownEffect() { EnemyBase::createBounceEffect(m_position, getDownSmokeScale()); }
} // namespace Sarai
} // namespace Game
