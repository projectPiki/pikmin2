#include "Game/Entities/Egg.h"
#include "Game/MapMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/TamagoMushi.h"
#include "Game/generalEnemyMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Egg {

/*
 * --INFO--
 * Address:	8034BB30
 * Size:	000020
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/*
 * --INFO--
 * Address:	8034BB50
 * Size:	000020
 */
void Obj::birth(Vector3f& position, f32 p1) { EnemyBase::birth(position, p1); }

/*
 * --INFO--
 * Address:	8034BB70
 * Size:	000150
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_Flying);
	resetEvent(0, EB_9);
	setEmotionNone();
	setEvent(0, EB_BitterImmune);
	_2BC = 0;
	m_FSM->start(this, 0, nullptr);

	if (!isBirthTypeDropGroup()) {
		setEvent(0, EB_Constraint);
		if (mapMgr) {
			Vector3f position = m_position;
			position.y += 20.0f;
			m_position.y = mapMgr->getMinY(position);
		}

		m_curAnim->m_isRunning = 0;
		doAnimationUpdateAnimator();

		m_mainMatrix.makeSRT(m_scale, m_rotation, m_position);

		PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
		m_model->m_j3dModel->calc();
	}
}

/*
 * --INFO--
 * Address:	8034BCC0
 * Size:	000138
 */
Obj::Obj()
{
	m_FSM      = nullptr;
	m_animator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	8034BE44
 * Size:	00006C
 */
void Obj::doUpdate()
{
	if (m_curTriangle) {
		m_simVelocity = Vector3f(0.0f);
	} else {
		m_simVelocity = m_impVelocity;
	}

	m_FSM->exec(this);
}

/*
 * --INFO--
 * Address:	8034BEB0
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8034BEB4
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8034BED4
 * Size:	00004C
 */
void Obj::doSimulation(f32 constraint)
{
	if (m_captureMatrix) {
		m_position = m_captureMatrix->getBasis(3);
		updateSpheres();
	} else {
		EnemyBase::doSimulation(constraint);
	}
}

/*
 * --INFO--
 * Address:	8034BF20
 * Size:	000128
 */
void Obj::doAnimationCullingOff()
{
	m_curAnim->m_isRunning = 0;
	doAnimationUpdateAnimator();
	bool check;
	Vector3f vec = m_mainMatrix.getBasis(3);
	if (m_captureMatrix) {
		check             = false;
		Vector3f checkVec = m_captureMatrix->getBasis(3);
		if (vec.x != checkVec.x || vec.y != checkVec.y || vec.z != checkVec.z) {
			check = true;
			PSMTXCopy(m_captureMatrix->m_matrix.mtxView, m_mainMatrix.m_matrix.mtxView);
		}
	} else {
		check = false;
		if (m_position.x != vec.x || m_position.y != vec.y || m_position.z != vec.z) {
			check = true;
			m_mainMatrix.makeSRT(m_scale, m_rotation, m_position);
		}
	}

	if (check || !isStopMotion()) {
		PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
		m_model->m_j3dModel->calc();
		m_collTree->update();
	}
}

/*
 * --INFO--
 * Address:	8034C048
 * Size:	000008
 */
bool Obj::pressCallBack(Creature*, f32, CollPart*) { return false; }

/*
 * --INFO--
 * Address:	8034C050
 * Size:	000054
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (_2BC != 0 || isBirthTypeDropGroup()) {
		setEvent(0, EB_LifegaugeVisible);
		m_health = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8034C0A4
 * Size:	000090
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	EnemyBase::collisionCallback(collEvent);
	if (isBirthTypeDropGroup() && collEvent.m_collidingCreature != nullptr && !collEvent.m_collidingCreature->isTeki()
	    && getStateID() == 0) {
		setEvent(0, EB_LifegaugeVisible);
		m_health = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	8034C134
 * Size:	000050
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.m_position                  = m_position;
	shadowParam.m_position.y                = m_position.y + 2.0f;
	shadowParam.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.m_boundingSphere.m_radius   = 20.0f;
	shadowParam._1C                         = 10.0f;
}

/*
 * --INFO--
 * Address:	8034C184
 * Size:	000048
 */
bool Obj::needShadow()
{
	bool result = (!EnemyBase::needShadow()) ? false : (m_captureMatrix == nullptr);
	return result;
}

/*
 * --INFO--
 * Address:	8034C1CC
 * Size:	0000A0
 */
void Obj::onStartCapture()
{
	if (m_captureMatrix) {
		Vector3f position = m_captureMatrix->getBasis(3);
		onSetPosition(position);
		m_impVelocity = Vector3f(0.0f);
		m_simVelocity = Vector3f(0.0f);
		setEvent(0, EB_Constraint);
		setEvent(0, EB_Vulnerable);
		resetEvent(0, EB_Cullable);
	}
}

/*
 * --INFO--
 * Address:	8034C26C
 * Size:	000040
 */
void Obj::onEndCapture()
{
	constraintOff();
	_2BC = 1;
	setEvent(0, EB_Cullable);
}

/*
 * --INFO--
 * Address:	8034C2AC
 * Size:	0005F4
 */
void Obj::genItem()
{
	int dropType = 2;
	Vector3f velocity(0.0f, 250.0f, 0.0f);
	Vector3f position = m_position;
	position.y += 2.0f;

	f32 randVal = randFloat();
	f32 test    = C_PARMS->m_properParms.m_singleNectarChance.m_value;
	if (randVal < test) {
		dropType = 2;
	} else {
		test += C_PARMS->m_properParms.m_doubleNectarChance.m_value;
		if (randVal < test) {
			dropType = 3;
		} else {
			test += C_PARMS->m_properParms.m_mititesChance.m_value;
			if (randVal < test) {
				dropType = 4;
			} else {
				test += C_PARMS->m_properParms.m_spicyChance.m_value;
				if (randVal < test) {
					dropType = 5;
				} else {
					test += C_PARMS->m_properParms.m_bitterChance.m_value;
					if (randVal < test) {
						dropType = 6;
					}
				}
			}
		}
	}

	if (C_PARMS->_8D0 != 0) {
		dropType = C_PARMS->_8D0 - 1;
	}

	if (C_PARMS->_8D1 != 0) {
		if (dropType == 5) {
			if (!playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
				dropType = 2;
			}
		} else if (dropType == 6 && !playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
			dropType = 2;
		}
	}

	TamagoMushi::Obj* mititeGroup = nullptr;
	switch (dropType) {
	case 0:
		PelletNumberInitArg initArg0(1, (int)3.0f * randFloat());
		Pellet* pellet0 = pelletMgr->birth(&initArg0);
		pellet0->setPosition(position, false);
		pellet0->setVelocity(velocity);
		break;

	case 1:
		PelletNumberInitArg initArg1(5, (int)3.0f * randFloat());
		Pellet* pellet1 = pelletMgr->birth(&initArg1);
		pellet1->setPosition(position, false);
		pellet1->setVelocity(velocity);
		break;

	case 2:
		ItemHoney::Item* nectar = ItemHoney::mgr->birth();
		if (nectar) {
			nectar->init(nullptr);
			nectar->_1E0 = 0;
			nectar->setPosition(position, false);
			nectar->setVelocity(velocity);
		}
		break;

	case 3:
		f32 angle = TAU * randFloat();

		for (int i = 0; i < 2; i++) {
			ItemHoney::Item* nectar = ItemHoney::mgr->birth();
			Vector3f sprayVelocity  = velocity;

			if (nectar) {
				f32 theta       = PI * i + angle;
				sprayVelocity.x = 50.0f * pikmin2_sinf(theta);
				sprayVelocity.z = 50.0f * pikmin2_cosf(theta);
				nectar->init(nullptr);
				nectar->_1E0 = 0;
				nectar->setPosition(position, false);
				nectar->setVelocity(sprayVelocity);
			}
		}

		break;

	case 4:
		TamagoMushi::Mgr* mititeMgr = static_cast<TamagoMushi::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_TamagoMushi));
		if (mititeMgr) {
			EnemyBirthArg birthArg;
			birthArg.m_position = m_position;

			birthArg.m_faceDir = TAU * randFloat();
			velocity.y         = 0.0f;
			mititeGroup        = mititeMgr->createGroup(birthArg, 10, velocity);
		}

		if (mititeGroup == nullptr) {
			ItemHoney::Item* nectar = ItemHoney::mgr->birth();
			if (nectar) {
				nectar->init(nullptr);
				nectar->_1E0 = 0;
				nectar->setPosition(position, false);
				nectar->setVelocity(velocity);
			}
		}

		break;

	case 5:
	case 6:
		ItemHoney::Item* defNectar = ItemHoney::mgr->birth();

		if (defNectar) {
			defNectar->init(nullptr);

			defNectar->_1E0 = 1;
			if (dropType == 6) {
				defNectar->_1E0 = 2;
			}

			defNectar->setPosition(position, false);
			defNectar->setVelocity(velocity);
		}

		break;
	}
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	lfs      f2, lbl_8051E38C@sda21(r2)
	mr       r29, r3
	lfs      f1, lbl_8051E39C@sda21(r2)
	li       r30, 2
	stfs     f2, 0x20(r1)
	lfs      f0, lbl_8051E390@sda21(r2)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	lfs      f1, 0x18c(r3)
	stfs     f1, 0x14(r1)
	lfs      f1, 0x190(r3)
	stfs     f1, 0x18(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x194(r3)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xb4(r1)
	lwz      r3, 0xc0(r29)
	stw      r0, 0xb0(r1)
	lfd      f2, lbl_8051E3C0@sda21(r2)
	lfd      f1, 0xb0(r1)
	lfs      f0, lbl_8051E3A0@sda21(r2)
	fsubs    f1, f1, f2
	lfs      f2, 0x81c(r3)
	fdivs    f1, f1, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C34C
	li       r30, 2
	b        lbl_8034C3A8

lbl_8034C34C:
	lfs      f0, 0x844(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C364
	li       r30, 3
	b        lbl_8034C3A8

lbl_8034C364:
	lfs      f0, 0x86c(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C37C
	li       r30, 4
	b        lbl_8034C3A8

lbl_8034C37C:
	lfs      f0, 0x894(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C394
	li       r30, 5
	b        lbl_8034C3A8

lbl_8034C394:
	lfs      f0, 0x8bc(r3)
	fadds    f2, f2, f0
	fcmpo    cr0, f1, f2
	bge      lbl_8034C3A8
	li       r30, 6

lbl_8034C3A8:
	lbz      r4, 0x8d0(r3)
	cmplwi   r4, 0
	beq      lbl_8034C3B8
	addi     r30, r4, -1

lbl_8034C3B8:
	lbz      r0, 0x8d1(r3)
	cmplwi   r0, 0
	beq      lbl_8034C408
	cmpwi    r30, 5
	bne      lbl_8034C3E8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034C408
	li       r30, 2
	b        lbl_8034C408

lbl_8034C3E8:
	cmpwi    r30, 6
	bne      lbl_8034C408
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034C408
	li       r30, 2

lbl_8034C408:
	cmpwi    r30, 3
	li       r31, 0
	beq      lbl_8034C5A0
	bge      lbl_8034C430
	cmpwi    r30, 1
	beq      lbl_8034C4C4
	bge      lbl_8034C544
	cmpwi    r30, 0
	bge      lbl_8034C444
	b        lbl_8034C87C

lbl_8034C430:
	cmpwi    r30, 7
	bge      lbl_8034C87C
	cmpwi    r30, 5
	bge      lbl_8034C814
	b        lbl_8034C728

lbl_8034C444:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xb4(r1)
	addi     r3, r1, 0x88
	lfd      f3, lbl_8051E3C0@sda21(r2)
	li       r4, 1
	stw      r0, 0xb0(r1)
	lfs      f1, lbl_8051E3A0@sda21(r2)
	lfd      f2, 0xb0(r1)
	lfs      f0, lbl_8051E3A4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r5, 0xbc(r1)
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x88
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	addi     r4, r1, 0x14
	mr       r30, r3
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C4C4:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xbc(r1)
	addi     r3, r1, 0x60
	lfd      f3, lbl_8051E3C0@sda21(r2)
	li       r4, 5
	stw      r0, 0xb8(r1)
	lfs      f1, lbl_8051E3A0@sda21(r2)
	lfd      f2, 0xb8(r1)
	lfs      f0, lbl_8051E3A4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r5, 0xb4(r1)
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x60
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	addi     r4, r1, 0x14
	mr       r31, r3
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	addi     r4, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C544:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8034C87C
	mr       r30, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C5A0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xbc(r1)
	li       r31, 0
	lfd      f3, lbl_8051E3C0@sda21(r2)
	stw      r0, 0xb8(r1)
	lfs      f1, lbl_8051E3A0@sda21(r2)
	lfd      f2, 0xb8(r1)
	lfs      f0, lbl_8051E3A8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f31, f0, f1

lbl_8034C5D4:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	cmplwi   r3, 0
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	beq      lbl_8034C718
	xoris    r4, r31, 0x8000
	lis      r0, 0x4330
	stw      r4, 0xbc(r1)
	mr       r30, r3
	lfd      f2, lbl_8051E3C0@sda21(r2)
	stw      r0, 0xb8(r1)
	lfs      f3, lbl_8051E3AC@sda21(r2)
	lfd      f1, 0xb8(r1)
	lfs      f0, lbl_8051E38C@sda21(r2)
	fsubs    f2, f1, f2
	lfs      f1, lbl_8051E3B0@sda21(r2)
	fmadds   f2, f3, f2, f31
	fcmpo    cr0, f2, f0
	bge      lbl_8034C66C
	lfs      f0, lbl_8051E3B4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_8034C690

lbl_8034C66C:
	lfs      f0, lbl_8051E3B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_8034C690:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051E38C@sda21(r2)
	fcmpo    cr0, f2, f0
	stfs     f1, 8(r1)
	bge      lbl_8034C6A8
	fneg     f2, f2

lbl_8034C6A8:
	lfs      f0, lbl_8051E3B8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r0, r3, sincosTable___5JMath@l
	lfs      f1, lbl_8051E3B0@sda21(r2)
	fmuls    f0, f2, f0
	mr       r3, r30
	li       r4, 0
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r5, 0xcc(r1)
	rlwinm   r5, r5, 3, 0x12, 0x1c
	add      r5, r0, r5
	lfs      f0, 4(r5)
	fmuls    f0, f1, f0
	stfs     f0, 0x10(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8034C718:
	addi     r31, r31, 1
	cmpwi    r31, 2
	blt      lbl_8034C5D4
	b        lbl_8034C87C

lbl_8034C728:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x44
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r30, r3, r3
	beq      lbl_8034C7B0
	addi     r3, r1, 0x2c
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r29)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x34(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xcc(r1)
	mr       r3, r30
	lfs      f0, lbl_8051E3BC@sda21(r2)
	addi     r4, r1, 0x2c
	stw      r0, 0xc8(r1)
	addi     r6, r1, 0x20
	lfd      f3, lbl_8051E3C0@sda21(r2)
	li       r5, 0xa
	lfd      f1, 0xc8(r1)
	lfs      f2, lbl_8051E3A0@sda21(r2)
	fsubs    f3, f1, f3
	lfs      f1, lbl_8051E3A8@sda21(r2)
	stfs     f0, 0x24(r1)
	fdivs    f0, f3, f2
	fmuls    f0, f1, f0
	stfs     f0, 0x38(r1)
	bl
"createGroup__Q34Game11TamagoMushi3MgrFRQ24Game13EnemyBirthArgiR10Vector3<f>" mr
r31, r3

lbl_8034C7B0:
	cmplwi   r31, 0
	bne      lbl_8034C87C
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8034C87C
	mr       r30, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x1e0(r30)
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	addi     r4, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	b        lbl_8034C87C

lbl_8034C814:
	lwz      r3, mgr__Q24Game9ItemHoney@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r0, r3, r3
	beq      lbl_8034C87C
	mr       r31, r0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	li       r0, 1
	cmpwi    r30, 6
	stb      r0, 0x1e0(r31)
	bne      lbl_8034C854
	li       r0, 2
	stb      r0, 0x1e0(r31)

lbl_8034C854:
	mr       r3, r31
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r31
	addi     r4, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_8034C87C:
	psq_l    f31, 232(r1), 0, qr0
	lwz      r0, 0xf4(r1)
	lfd      f31, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

} // namespace Egg
} // namespace Game
