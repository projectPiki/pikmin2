#include "Game/Entities/ElecHiba.h"
#include "Game/GameSystem.h"
#include "Game/Cave/RandMapMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ElecHiba {

/*
 * --INFO--
 * Address:	8026F258
 * Size:	000150
 */
Obj::Obj()
{
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	8026F3A8
 * Size:	000038
 */
void Obj::birth(Vector3f& position, float faceDirection)
{
	EnemyBase::birth(position, faceDirection);
	m_waitTimer              = 0.0f;
	m_teamList.m_childObjPtr = this;
}

/*
 * --INFO--
 * Address:	8026F3E0
 * Size:	000080
 */
void Obj::setInitialSetting(EnemyInitialParamBase* param)
{
	InitialParam* parms = static_cast<InitialParam*>(param);
	if (m_teamList.m_child) {
		setElecHibaPosition(parms, 1.0f);
		FOREACH_NODE(TeamList, m_teamList.m_child, node)
		{
			Obj* temp = node->m_childObjPtr;
			temp->setInitialSetting(parms);
		}
	} else {
		setElecHibaPosition(parms, -1.0f);
	}
}

/*
 * --INFO--
 * Address:	8026F460
 * Size:	000144
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
	m_waitTimer = 0.0f;
	_2C0        = true;
	setupLodParms();
	if (m_teamList.m_child) {
		FOREACH_NODE(TeamList, m_teamList.m_child, node)
		{
			Obj* temp = node->m_childObjPtr;
			temp->init(nullptr);
		}
	}
	setVersusHibaOnOff();
	m_versusHibaType = VHT_Neutral;
	resetAttrHitCount();

	f32 r = randWeightFloat(C_PROPERPARMS.m_waitTime.m_value);
	WaitStateArg arg;
	arg.m_waitTimer = r;
	m_FSM->start(this, ELECHIBA_Wait, &arg);
}

/*
 * --INFO--
 * Address:	8026F5A4
 * Size:	000040
 */
void Obj::doUpdate()
{
	if (m_teamList.m_child) {
		m_FSM->exec(this);
	}
}

/*
 * --INFO--
 * Address:	8026F5E4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8026F5E8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8026F608
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
 * Address:	8026F654
 * Size:	000038
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.m_position                  = m_position;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 1.0f;
	shadowParam.m_size                      = 1.0f;
}

/*
 * --INFO--
 * Address:	8026F68C
 * Size:	0000CC
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if ((creature) && !creature->isNavi()) {
		if (_2F4) {
			if (creature->isPiki()) {
				Piki* piki         = static_cast<Piki*>(creature);
				TeamList* listHead = static_cast<TeamList*>(m_teamList.m_parent);
				if (listHead) {
					listHead->m_childObjPtr->addAttrAttackCount(piki);
				} else {
					addAttrAttackCount(piki);
				}
			}
		} else {
			addDamageMyself(damage);
		}
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8026F758
 * Size:	000030
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026F788
 * Size:	000030
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	damageCallBack(creature, damage, collpart);
	return true;
}

/*
 * --INFO--
 * Address:	8026F7B8
 * Size:	000034
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	damageCallBack(creature, damage, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8026F7EC
 * Size:	000100
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	Obj* childObj = getChildObjPtr();
	if (childObj) {
		param.m_position = childObj->getPosition();

		param.m_position.x += m_position.x;
		param.m_position.y += m_position.y;
		param.m_position.z += m_position.z;

		param.m_position.x *= 0.5f;
		param.m_position.y *= 0.5f;
		param.m_position.z *= 0.5f;

		param.m_position.y += C_PARMS->m_general.m_lifeMeterHeight.m_value;

		param.m_healthPercentage = m_health / m_maxHealth;

		param._10 = 10.0f;
	} else {
		param._14 = false;
	}
}

/*
 * --INFO--
 * Address:	8026F8EC
 * Size:	00004C
 */
bool Obj::injure()
{
	if (!(isEvent(0, EB_Vulnerable))) {
		m_health -= m_instantDamage;
		if (m_health < 0.0f) {
			m_health = 0.0f;
		}
	}
	m_instantDamage = 0.0f;
	resetEvent(0, EB_Damage);
	return true;
}

/*
 * --INFO--
 * Address:	8026F938
 * Size:	00001C
 */
Obj* Obj::getChildObjPtr()
{
	if (m_teamList.m_child) {
		return static_cast<TeamList*>(m_teamList.m_child)->m_childObjPtr;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	8026F954
 * Size:	000170
 */
void Obj::setElecHibaPosition(InitialParam* param, f32 p1)
{
	Vector3f initPos = _2E4;
	f32 theta        = HALF_PI + getFaceDir();
	f32 halfFactor   = param->_00 / 2;

	Vector3f finalPos
	    = Vector3f((p1 * halfFactor) * pikmin2_sinf(theta) + initPos.x, initPos.y, (p1 * halfFactor) * pikmin2_cosf(theta) + initPos.z);
	finalPos.y = mapMgr->getMinY(finalPos);
	setPosition(finalPos, false);
}

/*
 * --INFO--
 * Address:	8026FAC4
 * Size:	0005C8
 */
void Obj::interactDenkiAttack(Vector3f& position)
{
	Vector3f sep     = position - m_position;
	Vector3f normSep = sep;
	f32 theta        = m_faceDir;
	Vector3f dirXZ   = Vector3f(pikmin2_sinf(theta), 0.0f, pikmin2_cosf(theta));
	normSep.normalise();

	// Vector3f crossProd = normSep cross dirXZ
	// crossProd.normalise();
	f32 distance = sep.length();

	// some vector addition/scalar multiplication here
	Vector3f spherePos;
	spherePos.x     = (position.x - m_position.x) / 2;
	spherePos.y     = (position.y - m_position.y) / 2;
	spherePos.z     = (position.z - m_position.z) / 2;
	f32 attackRange = C_PARMS->m_general.m_fp20.m_value;
	f32 negRange    = -attackRange;
	f32 totalRange  = distance + C_PARMS->m_general.m_fp20.m_value;
	f32 radius      = (totalRange - negRange) / 2;
	Sys::Sphere sphere(spherePos, radius);

	// also some other constants pulled from parms

	CellIteratorArg iterArg(sphere);
	iterArg._1C = 1;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f creaturePos = creature->getPosition();
			// Vector3f creatureSep = creaturePos - some other vector of consts;

			// f32 dotProd = dot(crossProd, creatureSep);
			f32 dotProd = 1.0f;
			if (!(dotProd > 0.0f)) { // make sure it's positive
				dotProd = -dotProd;
			}

			if (dotProd < C_PARMS->m_general.m_fp23.m_value) {
				if (m_versusHibaType == VHT_Neutral) {
					// some math to determine attack direction
					// Vector3f attackDirection = something
					InteractDenki zap(this, C_PARMS->m_general.m_attackDamage.m_value,
					                  &creaturePos); // should be &attackDirection eventually
					creature->stimulate(zap);

				} else if (m_versusHibaType == VHT_Red) {
					InteractFire fire(this, C_PARMS->m_general.m_attackDamage.m_value);
					creature->stimulate(fire);

				} else if (m_versusHibaType == VHT_Blue) {
					InteractBubble bubble(this, C_PARMS->m_general.m_attackDamage.m_value);
					creature->stimulate(bubble);
				}
			}
		}
	}
	/*
	stwu     r1, -0x210(r1)
	mflr     r0
	stw      r0, 0x214(r1)
	stfd     f31, 0x200(r1)
	psq_st   f31, 520(r1), 0, qr0
	stfd     f30, 0x1f0(r1)
	psq_st   f30, 504(r1), 0, qr0
	stfd     f29, 0x1e0(r1)
	psq_st   f29, 488(r1), 0, qr0
	stfd     f28, 0x1d0(r1)
	psq_st   f28, 472(r1), 0, qr0
	stfd     f27, 0x1c0(r1)
	psq_st   f27, 456(r1), 0, qr0
	stfd     f26, 0x1b0(r1)
	psq_st   f26, 440(r1), 0, qr0
	stfd     f25, 0x1a0(r1)
	psq_st   f25, 424(r1), 0, qr0
	stfd     f24, 0x190(r1)
	psq_st   f24, 408(r1), 0, qr0
	stfd     f23, 0x180(r1)
	psq_st   f23, 392(r1), 0, qr0
	stfd     f22, 0x170(r1)
	psq_st   f22, 376(r1), 0, qr0
	stfd     f21, 0x160(r1)
	psq_st   f21, 360(r1), 0, qr0
	stfd     f20, 0x150(r1)
	psq_st   f20, 344(r1), 0, qr0
	stfd     f19, 0x140(r1)
	psq_st   f19, 328(r1), 0, qr0
	stfd     f18, 0x130(r1)
	psq_st   f18, 312(r1), 0, qr0
	stfd     f17, 0x120(r1)
	psq_st   f17, 296(r1), 0, qr0
	stfd     f16, 0x110(r1)
	psq_st   f16, 280(r1), 0, qr0
	stfd     f15, 0x100(r1)
	psq_st   f15, 264(r1), 0, qr0
	stfd     f14, 0xf0(r1)
	psq_st   f14, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	mr       r30, r3
	lfs      f8, 8(r4)
	lfs      f31, 0x194(r3)
	lfs      f9, 4(r4)
	lfs      f3, 0x190(r3)
	fadds    f2, f8, f31
	lfs      f4, lbl_8051B0F8@sda21(r2)
	fadds    f1, f9, f3
	lfs      f7, 0x1fc(r3)
	lfs      f0, lbl_8051B0E0@sda21(r2)
	fmuls    f2, f4, f2
	lfs      f10, 0(r4)
	fmr      f5, f7
	lfs      f30, 0x18c(r3)
	fcmpo    cr0, f7, f0
	fmuls    f1, f4, f1
	fadds    f0, f10, f30
	fmuls    f0, f4, f0
	bge      lbl_8026FBB8
	fneg     f5, f7

lbl_8026FBB8:
	lfs      f6, lbl_8051B104@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f4, lbl_8051B0E0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f5, f5, f6
	fcmpo    cr0, f7, f4
	fctiwz   f4, f5
	stfd     f4, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f24, 4(r3)
	bge      lbl_8026FC10
	lfs      f4, lbl_8051B108@sda21(r2)
	fmuls    f4, f7, f4
	fctiwz   f4, f4
	stfd     f4, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r4, r0
	fneg     f23, f4
	b        lbl_8026FC28

lbl_8026FC10:
	fmuls    f4, f7, f6
	fctiwz   f4, f4
	stfd     f4, 0xd0(r1)
	lwz      r0, 0xd4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f23, r4, r0

lbl_8026FC28:
	fsubs    f5, f9, f3
	lfs      f7, lbl_8051B0E0@sda21(r2)
	fsubs    f6, f8, f31
	fsubs    f4, f10, f30
	fmuls    f8, f5, f5
	fmuls    f9, f6, f6
	fmr      f22, f4
	fmadds   f8, f4, f4, f8
	fmr      f21, f5
	fmr      f20, f6
	fadds    f8, f9, f8
	fcmpo    cr0, f8, f7
	ble      lbl_8026FC6C
	ble      lbl_8026FC70
	frsqrte  f7, f8
	fmuls    f8, f7, f8
	b        lbl_8026FC70

lbl_8026FC6C:
	fmr      f8, f7

lbl_8026FC70:
	lfs      f7, lbl_8051B0E0@sda21(r2)
	fcmpo    cr0, f8, f7
	ble      lbl_8026FC90
	lfs      f7, lbl_8051B0E4@sda21(r2)
	fdivs    f7, f7, f8
	fmuls    f22, f22, f7
	fmuls    f21, f21, f7
	fmuls    f20, f20, f7

lbl_8026FC90:
	fmuls    f8, f23, f20
	lfs      f10, lbl_8051B0E0@sda21(r2)
	fmuls    f9, f24, f21
	fmuls    f7, f10, f22
	fmsubs   f18, f24, f22, f8
	fmsubs   f19, f10, f20, f9
	fmsubs   f17, f23, f21, f7
	fmuls    f7, f18, f18
	fmuls    f8, f17, f17
	fmadds   f7, f19, f19, f7
	fadds    f8, f8, f7
	fcmpo    cr0, f8, f10
	ble      lbl_8026FCD4
	ble      lbl_8026FCD8
	frsqrte  f7, f8
	fmuls    f8, f7, f8
	b        lbl_8026FCD8

lbl_8026FCD4:
	fmr      f8, f10

lbl_8026FCD8:
	lfs      f7, lbl_8051B0E0@sda21(r2)
	fcmpo    cr0, f8, f7
	ble      lbl_8026FCF8
	lfs      f7, lbl_8051B0E4@sda21(r2)
	fdivs    f7, f7, f8
	fmuls    f19, f19, f7
	fmuls    f18, f18, f7
	fmuls    f17, f17, f7

lbl_8026FCF8:
	fmuls    f7, f5, f5
	lfs      f5, lbl_8051B0E0@sda21(r2)
	fmuls    f6, f6, f6
	fmadds   f4, f4, f4, f7
	fadds    f6, f6, f4
	fcmpo    cr0, f6, f5
	ble      lbl_8026FD24
	ble      lbl_8026FD28
	frsqrte  f4, f6
	fmuls    f6, f4, f6
	b        lbl_8026FD28

lbl_8026FD24:
	fmr      f6, f5

lbl_8026FD28:
	lwz      r5, 0xc0(r30)
	addi     r3, r1, 0x54
	lfs      f4, lbl_8051B0F8@sda21(r2)
	addi     r4, r1, 0x2c
	lfs      f7, 0x564(r5)
	lfs      f5, 0x44c(r5)
	fadds    f29, f6, f7
	lfs      f6, 0x58c(r5)
	lfs      f26, 0x474(r5)
	fneg     f28, f7
	fadds    f3, f3, f6
	stfs     f0, 0x2c(r1)
	fmuls    f25, f24, f5
	stfs     f3, 0xd8(r1)
	fsubs    f3, f29, f28
	fmuls    f27, f23, f5
	stfs     f1, 0x30(r1)
	fmuls    f0, f4, f3
	stfs     f2, 0x34(r1)
	stfs     f0, 0x38(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8026FFD4

lbl_8026FD9C:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FFCC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8026FDF8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FFCC

lbl_8026FDF8:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0xd8(r1)
	lfs      f2, 8(r1)
	fsubs    f4, f1, f0
	lfs      f1, lbl_8051B0E0@sda21(r2)
	lfs      f3, 0x10(r1)
	fsubs    f2, f2, f30
	fmuls    f0, f1, f4
	fsubs    f3, f3, f31
	fmadds   f0, f23, f2, f0
	fmadds   f5, f24, f3, f0
	fcmpo    cr0, f5, f1
	ble      lbl_8026FE4C
	fmr      f6, f5
	b        lbl_8026FE50

lbl_8026FE4C:
	fneg     f6, f5

lbl_8026FE50:
	lwz      r3, 0xc0(r30)
	lfs      f0, 0x5b4(r3)
	fcmpo    cr0, f6, f0
	bge      lbl_8026FFCC
	fmuls    f0, f21, f4
	fmadds   f0, f22, f2, f0
	fmadds   f0, f20, f3, f0
	fcmpo    cr0, f0, f29
	bge      lbl_8026FFCC
	fcmpo    cr0, f0, f28
	ble      lbl_8026FFCC
	fmuls    f1, f18, f4
	lfs      f0, lbl_8051B0E0@sda21(r2)
	fmadds   f1, f19, f2, f1
	fmadds   f1, f17, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8026FE98
	b        lbl_8026FE9C

lbl_8026FE98:
	fneg     f1, f1

lbl_8026FE9C:
	lfs      f0, 0x5dc(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8026FFCC
	lwz      r0, 0x2f8(r30)
	cmpwi    r0, 0
	bne      lbl_8026FF40
	fdivs    f0, f5, f6
	mr       r3, r31
	lwz      r12, 0(r31)
	lfs      f16, lbl_8051B0E0@sda21(r2)
	lwz      r12, 0x18(r12)
	fmuls    f14, f0, f25
	fmuls    f15, f0, f27
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FEE4
	fmr      f16, f26

lbl_8026FEE4:
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game13InteractDenki@ha
	lfs      f0, 0x604(r6)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r6, 0x3c(r1)
	mr       r3, r31
	addi     r4, r1, 0x3c
	stw      r5, 0x3c(r1)
	stw      r30, 0x40(r1)
	stfs     f0, 0x44(r1)
	stfs     f15, 0x48(r1)
	stfs     f16, 0x4c(r1)
	stfs     f14, 0x50(r1)
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_8026FFCC

lbl_8026FF40:
	cmpwi    r0, 1
	bne      lbl_8026FF88
	lfs      f0, 0x604(r3)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractFire@ha
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q24Game12InteractFire@l
	mr       r3, r31
	addi     r4, r1, 0x20
	stw      r30, 0x24(r1)
	stw      r0, 0x20(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_8026FFCC

lbl_8026FF88:
	cmpwi    r0, 2
	bne      lbl_8026FFCC
	lfs      f0, 0x604(r3)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game14InteractBubble@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q24Game14InteractBubble@l
	mr       r3, r31
	addi     r4, r1, 0x14
	stw      r30, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8026FFCC:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_8026FFD4:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8026FD9C
	psq_l    f31, 520(r1), 0, qr0
	lfd      f31, 0x200(r1)
	psq_l    f30, 504(r1), 0, qr0
	lfd      f30, 0x1f0(r1)
	psq_l    f29, 488(r1), 0, qr0
	lfd      f29, 0x1e0(r1)
	psq_l    f28, 472(r1), 0, qr0
	lfd      f28, 0x1d0(r1)
	psq_l    f27, 456(r1), 0, qr0
	lfd      f27, 0x1c0(r1)
	psq_l    f26, 440(r1), 0, qr0
	lfd      f26, 0x1b0(r1)
	psq_l    f25, 424(r1), 0, qr0
	lfd      f25, 0x1a0(r1)
	psq_l    f24, 408(r1), 0, qr0
	lfd      f24, 0x190(r1)
	psq_l    f23, 392(r1), 0, qr0
	lfd      f23, 0x180(r1)
	psq_l    f22, 376(r1), 0, qr0
	lfd      f22, 0x170(r1)
	psq_l    f21, 360(r1), 0, qr0
	lfd      f21, 0x160(r1)
	psq_l    f20, 344(r1), 0, qr0
	lfd      f20, 0x150(r1)
	psq_l    f19, 328(r1), 0, qr0
	lfd      f19, 0x140(r1)
	psq_l    f18, 312(r1), 0, qr0
	lfd      f18, 0x130(r1)
	psq_l    f17, 296(r1), 0, qr0
	lfd      f17, 0x120(r1)
	psq_l    f16, 280(r1), 0, qr0
	lfd      f16, 0x110(r1)
	psq_l    f15, 264(r1), 0, qr0
	lfd      f15, 0x100(r1)
	psq_l    f14, 248(r1), 0, qr0
	lfd      f14, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r0, 0x214(r1)
	lwz      r30, 0xe8(r1)
	mtlr     r0
	addi     r1, r1, 0x210
	blr
	*/
}

/*
 * --INFO--
 * Address:	8027008C
 * Size:	00004C
 */
void Obj::addDamageMyself(float damage)
{
	if (!(isEvent(0, EB_Vulnerable))) {
		setEvent(0, EB_Damage);
		TeamList* listHead = static_cast<TeamList*>(m_teamList.m_parent);
		if (listHead) {
			listHead->m_childObjPtr->damageIncrement(damage);
		} else {
			damageIncrement(damage);
		}
	}
}

/*
 * --INFO--
 * Address:	802700D8
 * Size:	00002C
 */
void Obj::damageIncrement(float damage)
{
	m_instantDamage += damage;
	if (!isEvent(0, EB_DropMassSet)) {
		return;
	}
	m_toFlick += 1.0f;
}

/*
 * --INFO--
 * Address:	80270104
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
 * Address:	80270128
 * Size:	000038
 */
void Obj::updateEfxLod()
{
	if (m_efxDenkiHibaMgr) {
		m_efxDenkiHibaMgr->setRateLOD(m_lod.m_flags & (AILOD_FLAG_IS_MID | AILOD_FLAG_IS_FAR));
	}
}

/*
 * --INFO--
 * Address:	80270160
 * Size:	0000DC
 */
void Obj::createEffect(bool check)
{
	if (check) {
		m_efxDenkiHibaMgr = new efx::TDenkiHibaMgr;
	} else {
		m_efxDenkiHibaMgr = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80270418
 * Size:	000110
 */
void Obj::startChargeEffect(Creature* creature)
{
	if (m_efxDenkiHibaMgr) {
		Vector3f creaturePos = creature->getPosition();
		efx::ArgDenkiHiba denkiHibaArg(m_position, creaturePos);
		m_efxDenkiHibaMgr->create(&denkiHibaArg);
	}
}

/*
 * --INFO--
 * Address:	80270528
 * Size:	000038
 */
void Obj::finishChargeEffect()
{
	if (m_efxDenkiHibaMgr) {
		m_efxDenkiHibaMgr->fade();
	}
}

/*
 * --INFO--
 * Address:	80270560
 * Size:	000070
 */
void Obj::startDisChargeEffect()
{
	efx::TDenkiHibaMgr* efxMgr = m_efxDenkiHibaMgr;
	if (efxMgr) {
		int type = m_versusHibaType;
		if (type == VHT_Neutral) {
			efxMgr->createHiba(VHT_Neutral);
			return;
		}

		if (type == VHT_Red) {
			efxMgr->createHiba(VHT_Red);
			return;
		}

		if (type == VHT_Blue) {
			efxMgr->createHiba(VHT_Blue);
			return;
		}
	}
}

/*
 * --INFO--
 * Address:	802705D0
 * Size:	000038
 */
void Obj::finishDisChargeEffect()
{
	if (m_efxDenkiHibaMgr) {
		m_efxDenkiHibaMgr->fade();
	}
}

/*
 * --INFO--
 * Address:	80270608
 * Size:	000044
 */
void Obj::generatorKill()
{
	if (m_generator) {
		m_generator->informDeath(this);
		m_generator = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8027064C
 * Size:	00006C
 */
void Obj::setVersusHibaOnOff()
{
	if ((gameSystem && gameSystem->m_mode == GSM_VERSUS_MODE) && (Cave::randMapMgr && Cave::randMapMgr->isVersusHiba())) {
		_2F4 = true;
		return;
	}
	_2F4 = false;
}

/*
 * --INFO--
 * Address:	802706B8
 * Size:	00002C
 */
void Obj::setVersusHibaType()
{
	if (m_redAttrAttackCount != m_blueAttrAttackCount) {
		if (m_redAttrAttackCount > m_blueAttrAttackCount) {
			m_versusHibaType = VHT_Red;
			return;
		}
		m_versusHibaType = VHT_Blue;
	}
}

/*
 * --INFO--
 * Address:	802706E4
 * Size:	000010
 */
void Obj::resetAttrHitCount()
{
	m_redAttrAttackCount  = 0;
	m_blueAttrAttackCount = 0;
}

/*
 * --INFO--
 * Address:	802706F4
 * Size:	000070
 */
void Obj::addAttrAttackCount(Piki* piki)
{
	int type = piki->m_pikiKind;
	if (type == Red) {
		m_redAttrAttackCount++;
	} else if (type == Blue) {
		m_blueAttrAttackCount++;
	}
	if (getStateID() == ELECHIBA_Attack) {
		m_waitTimer = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	80270764
 * Size:	000040
 */
bool Obj::isWaitFinish()
{
	if ((m_waitTimer > C_PROPERPARMS.m_activeTime.m_value) && (m_versusHibaType || (m_redAttrAttackCount != m_blueAttrAttackCount))) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	802707A4
 * Size:	000058
 */
bool Obj::isAttackFinish()
{
	if (m_waitTimer > C_PROPERPARMS.m_activeTime.m_value || (m_versusHibaType == VHT_Red && (m_blueAttrAttackCount > m_redAttrAttackCount))
	    || (m_versusHibaType == VHT_Blue && (m_redAttrAttackCount > m_blueAttrAttackCount))) {
		return true;
	}
	return false;
}

} // namespace ElecHiba
} // namespace Game
