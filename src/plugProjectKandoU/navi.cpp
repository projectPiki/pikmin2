#include "Game/Navi.h"
#include "Game/NaviState.h"
#include "Game/NaviParms.h"
#include "Game/PikiState.h"
#include "Game/StateMachine.h"
#include "Game/CPlate.h"
#include "Game/Footmark.h"
#include "Game/MoviePlayer.h"
#include "Game/PikiMgr.h"
#include "Game/Entities/ItemPikihead.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/JUT/JUTException.h"
#include "PSM/Navi.h"
#include "SysShape/Model.h"
#include "CollInfo.h"
#include "Iterator.h"
#include "PikiAI.h"
#include "Radar.h"
#include "nans.h"

static const u32 fillerbytes[3] = { 0, 0, 0 };

namespace Game {

/*
 * --INFO--
 * Address:	8013F6D4
 * Size:	000050
 */
void Navi::getShadowParam(ShadowParam& param)
{
	param.m_position = m_position3;
	param.m_position.y += 0.5f;

	param.m_boundingSphere.m_radius = 10.0f;
	param.m_size                    = 4.0f;

	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
}

/*
 * --INFO--
 * Address:	8013F724
 * Size:	000024
 */
void Navi::getLODSphere(Sys::Sphere& sphere)
{
	sphere.m_radius   = 24.0f;
	sphere.m_position = m_boundingSphere.m_position;
}

/*
 * --INFO--
 * Address:	8013F748
 * Size:	000208
 */
Navi::Navi()
    : FakePiki()
{
	m_controller1 = nullptr;
	m_controller2 = nullptr;
	m_camera      = nullptr;
	m_camera2     = nullptr;
	m_whistle     = nullptr;

	m_objectTypeID = 1;

	m_effectsObj = new efx::TNaviEffect;
	m_effectsObj->init(nullptr, nullptr, nullptr, efx::TNaviEffect::NAVITYPE_Unk0);
	m_effectsObj->_08 = &m_position3;

	m_fsm = new NaviFSM;
	m_fsm->init(this);

	m_cPlateMgr = new CPlate(100);
	m_mass      = 1.0f;

	m_footmarks = new Footmarks;
	m_footmarks->alloc(16);

	m_updateContext._09 = true;

	m_cursorMatAnim = new Sys::MatRepeatAnimator;
	m_arrowMatAnim  = new Sys::MatLoopAnimator;

	m_soundObj = new PSM::Navi(this);
}

/*
 * --INFO--
 * Address:	801400B0
 * Size:	000290
 */
void Navi::onInit(Game::CreatureInitArg* arg)
{
	m_stick = 0;
	_258    = 0;
	u16 uVar2;

	clearKaisanDisable();
	clearThrowDisable();

	m_invincibleTimer = 0;
	_2F8              = 0.0f;

	m_sprayCounts[1] = 0;
	m_sprayCounts[0] = 0;

	initFakePiki();
	naviMgr->setupNavi(this);

	m_model->m_j3dModel->m_modelData->m_jointTree.m_joints[0]->m_mtxCalc = nullptr;
	m_model->m_j3dModel->m_modelData->m_jointTree.m_joints[1]->m_mtxCalc = nullptr;

	_288.clear();
	_288.typeView &= ~1;

	initAnimator();

	m_isAlive = false;
	_308      = 0.0f;

	m_whistle = new NaviWhistle(this);

	_2DE            = 0;
	m_nextThrowPiki = nullptr;
	m_holdPikiTimer = 0.0f;
	_2AC            = 0;

	m_collTree->createFromFactory(m_model, naviMgr->_CC, nullptr);
	JUT_ASSERTLINE(838, ((int)m_collTree->m_part) >= 0x80000000, "ザンーー（・д・）??ネン\n"); // 'disappointttttt D: ?? ment' (lol)
	m_collTree->attachModel(m_model);

	m_fsm->start(this, NSID_Walk, nullptr);

	getCreatureID();

	m_beaconJoint = m_model->getJoint("happajnt3");

	m_effectsObj->m_beaconMtx = m_beaconJoint->getWorldMatrix();
	m_effectsObj->_0C         = &m_whistle->_0C;

	SysShape::Joint* headJnt = m_model->getJoint("headjnt");
	m_effectsObj->m_headMtx  = headJnt->getWorldMatrix();
	m_effectsObj->setNaviType((efx::TNaviEffect::enumNaviType)(bool)m_naviIndex);

	m_effectsObj->createLight();

	setLifeMax();

	_26A = 0;
	_269 = 0;
	Vector3f navi_scale; // navi model scale
	navi_scale = Vector3f(1.3f);

	if (m_naviIndex == 1) { // case for Louie/President scale
		navi_scale = Vector3f(1.5f);
	}

	m_scale = navi_scale;
	uVar2   = m_naviIndex;
	m_cursorMatAnim->start((Sys::MatBaseAnimation*)(naviMgr->naviIndexArray + (u32)uVar2 * 5 + 3));
	m_arrowMatAnim->start((Sys::MatBaseAnimation*)(naviMgr->naviIndexArray + (u32)uVar2 * 5 + 0xd));
}

/*
 * --INFO--
 * Address:	80140340
 * Size:	000008
 */
s32 Navi::getCreatureID() { return m_naviIndex; }

/*
 * --INFO--
 * Address:	80140348
 * Size:	000034
 */
void StateMachine<Game::Navi>::start(Navi* navi, int stateID, StateArg* stateArg)
{
	navi->m_currentState = nullptr;
	transit(navi, stateID, stateArg);
}

/*
 * --INFO--
 * Address:	8014037C
 * Size:	000088
 */
void Navi::onSetPosition(Vector3f& position)
{
	m_position3 = position;
	static_cast<FakePiki*>(this)->onSetPosition(); // dumb.

	if (m_naviIndex == 0) { // olimar
		Radar::Mgr::entry(this, Radar::MAP_OLIMAR, 0);

	} else { // louie/president
		Radar::Mgr::entry(this, Radar::MAP_LOUIE_PRESIDENT, 0);
	}

	m_whistle->init();
}

/*
 * --INFO--
 * Address:	80140404
 * Size:	000040
 */
void Navi::onKill(CreatureKillArg* killArg)
{
	killFakePiki();
	m_effectsObj->killLight();
}

/*
 * --INFO--
 * Address:	80140444
 * Size:	0000D4
 */
void Navi::onKeyEvent(const SysShape::KeyEvent& event)
{
	if (m_currentState) {
		m_currentState->onKeyEvent(this, event);
	}

	if (_248) {
		int walkSound = _248->m_code.getAttribute();
		if (inWater()) {
			walkSound = 4;
		}

		if ((u32)event.m_type == KEYEVENT_200) {
			m_soundObj->playWalkSound(PSM::Navi::NAVIFOOT_840, walkSound);

		} else if ((u32)event.m_type == KEYEVENT_201) {
			m_soundObj->playWalkSound(PSM::Navi::NAVIFOOT_820, walkSound);
		}
	}
}

/*
 * --INFO--
 * Address:	8014051C
 * Size:	000080
 */
Vector3f Navi::getPosition()
{
	if (moviePlayer && moviePlayer->m_flags & MoviePlayer::IS_ACTIVE) {
		Matrixf* mat = m_model->m_joints->getWorldMatrix();
		Vector3f position;
		mat->getTranslation(position);
		return position;

	} else {
		return m_position3;
	}
}

/*
 * --INFO--
 * Address:	8014059C
 * Size:	000050
 */
void Navi::onStickStart(Creature* creature)
{
	if (creature->isPiki()) {
		m_stick++;
	}
}

/*
 * --INFO--
 * Address:	801405EC
 * Size:	000058
 */
void Navi::onStickEnd(Creature* creature)
{
	if (creature->isPiki() && m_stick) {
		m_stick--;
	}
}

/*
 * --INFO--
 * Address:	80140644
 * Size:	000654
 */
bool Navi::procActionButton()
{
	f32 minDist;
	if (_26A) {
		minDist = naviMgr->m_naviParms->m_naviParms.m_p060.m_value; // 'continuous extraction distance' - autoplucking range?
	} else {
		minDist = naviMgr->m_naviParms->m_naviParms.m_p000.m_value; // 'action radius' - first pluck range
	}

	Iterator<ItemPikihead::Item> iter(ItemPikihead::mgr);
	minDist *= minDist;
	ItemPikihead::Item* targetSprout = nullptr;

	// find (closest) pluckable sprout within range
	CI_LOOP(iter)
	{
		ItemPikihead::Item* sprout = *iter;
		Vector3f sproutPos         = sprout->getPosition();
		Vector3f naviPos           = getPosition();
		f32 heightDiff             = FABS(sproutPos.y - naviPos.y);
		f32 sqrXZ                  = sqrDistanceXZ(sproutPos, naviPos);

		// sprout has to be pluckable, closer than current/within range, not at massive height difference
		// AND either we're not in VS mode OR sprout color matches captain color
		if (sprout->canPullout() && sqrXZ < minDist && heightDiff < 25.0f
		    && (!gameSystem->isVersusMode() || sprout->m_color == (1 - m_naviIndex))) {
			minDist      = sqrXZ;
			targetSprout = sprout;
		}
	}

	// if sprout found, pluck it.
	if (targetSprout) {
		NaviNukuAdjustStateArg nukuAdjustArg;
		setupNukuAdjustArg(targetSprout, nukuAdjustArg);
		m_fsm->transit(this, NSID_NukuAdjust, &nukuAdjustArg);

		// if there's a captain following us, put them to work.
		Navi* otherNavi = naviMgr->getAt(1 - m_naviIndex);
		if (otherNavi && otherNavi->isAlive() && otherNavi->getStateID() == NSID_Follow) {
			f32 actionRadius = naviMgr->m_naviParms->m_naviParms.m_p060.m_value; // following captain uses autopluck range

			ItemPikihead::Item* otherTargetSprout = nullptr;
			minDist                               = actionRadius * actionRadius;

			// find (closest) pluckable sprout within range that -isn't- the same as main captain's target
			CI_LOOP(iter)
			{
				ItemPikihead::Item* sprout = *iter;
				if (sprout != targetSprout) {
					Vector3f sproutPos = sprout->getPosition();
					Vector3f naviPos   = getPosition();
					f32 heightDiff     = FABS(sproutPos.y - naviPos.y);
					f32 sqrXZ          = sqrDistanceXZ(sproutPos, naviPos);

					// sprout has to be pluckable, closer than current/within range, not at massive height difference
					// (we don't care about VS mode now bc can't have a following captain)
					if (sprout->canPullout() && sqrXZ < minDist && heightDiff < 25.0f) {
						minDist           = sqrXZ;
						otherTargetSprout = sprout;
					}
				}
			}

			// if sprout found, pluck it.
			if (otherTargetSprout) {
				NaviNukuAdjustStateArg nukuAdjustArg2;
				setupNukuAdjustArg(otherTargetSprout, nukuAdjustArg2);
				nukuAdjustArg2._18 = 1;
				otherNavi->m_fsm->transit(this, NSID_NukuAdjust, &nukuAdjustArg2);
			}
		}

		// we plucked something.
		return true;
	}

	// we did not pluck something.
	return false;
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stmw     r27, 0x8c(r1)
	mr       r31, r3
	lbz      r0, 0x26a(r3)
	cmplwi   r0, 0
	beq      lbl_80140694
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f28, 0x2c8(r3)
	b        lbl_801406A0

lbl_80140694:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f28, 0x2a0(r3)

lbl_801406A0:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801406B0
	addi     r3, r3, 0x30

lbl_801406B0:
	li       r0, 0
	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
	fmuls    f28, f28, f28
	cmplwi   r0, 0
	stw      r4, 0x38(r1)
	li       r30, 0
	stw      r0, 0x44(r1)
	stw      r0, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_801406F4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_8014090C

lbl_801406F4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140760

lbl_8014070C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014090C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80140760:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014070C
	b        lbl_8014090C

lbl_80140780:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 0x2c
	mr       r4, r0
	lwz      r12, 0(r4)
	mr       r28, r4
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f31, 0x2c(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x30(r1)
	lfs      f29, 0x34(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	mr       r3, r28
	lfs      f0, 0x28(r1)
	fsubs    f3, f30, f1
	lfs      f1, 0x20(r1)
	fsubs    f0, f29, f0
	fsubs    f2, f31, f1
	fabs     f1, f3
	fmuls    f0, f0, f0
	frsp     f31, f1
	fmadds   f29, f2, f2, f0
	bl       canPullout__Q34Game12ItemPikihead4ItemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140850
	fcmpo    cr0, f29, f28
	bge      lbl_80140850
	lfs      f0, lbl_80518370@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80140850
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80140848
	lhz      r0, 0x2dc(r31)
	lhz      r3, 0x1f4(r28)
	subfic   r0, r0, 1
	cmpw     r3, r0
	bne      lbl_80140850

lbl_80140848:
	fmr      f28, f29
	mr       r30, r28

lbl_80140850:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_8014087C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_8014090C

lbl_8014087C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_801408F0

lbl_8014089C:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8014090C
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_801408F0:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8014089C

lbl_8014090C:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80140780
	cmplwi   r30, 0
	beq      lbl_80140C60
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x7c(r1)
	mr       r4, r30
	addi     r5, r1, 0x64
	bl
setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg
	lwz      r3, 0x270(r31)
	mr       r4, r31
	addi     r6, r1, 0x64
	li       r5, 9
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	lhz      r0, 0x2dc(r31)
	lwz      r12, 0(r3)
	subfic   r4, r0, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80140C58
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140C58
	mr       r3, r29
	bl       getStateID__Q24Game4NaviFv
	cmpwi    r3, 1
	bne      lbl_80140C58
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r28, 0
	lwz      r0, 0x44(r1)
	lwz      r3, 0xc8(r3)
	cmplwi   r0, 0
	lfs      f0, 0x2c8(r3)
	fmuls    f28, f0, f0
	bne      lbl_801409F4
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140BF0

lbl_801409F4:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140A64

lbl_80140A10:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80140BF0
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80140A64:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140A10
	b        lbl_80140BF0

lbl_80140A84:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r27, r3
	cmplw    r27, r30
	beq      lbl_80140B34
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x18(r1)
	lfs      f31, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	mr       r3, r27
	lfs      f0, 0x10(r1)
	fsubs    f3, f30, f1
	lfs      f1, 8(r1)
	fsubs    f0, f31, f0
	fsubs    f2, f29, f1
	fabs     f1, f3
	fmuls    f0, f0, f0
	frsp     f31, f1
	fmadds   f29, f2, f2, f0
	bl       canPullout__Q34Game12ItemPikihead4ItemFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140B34
	fcmpo    cr0, f29, f28
	bge      lbl_80140B34
	lfs      f0, lbl_80518370@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80140B34
	fmr      f28, f29
	mr       r28, r27

lbl_80140B34:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_80140B60
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140BF0

lbl_80140B60:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80140BD4

lbl_80140B80:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80140BF0
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80140BD4:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80140B80

lbl_80140BF0:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80140A84
	cmplwi   r28, 0
	beq      lbl_80140C58
	li       r0, 0
	mr       r3, r29
	stb      r0, 0x60(r1)
	mr       r4, r28
	addi     r5, r1, 0x48
	bl
setupNukuAdjustArg__Q24Game4NaviFPQ34Game12ItemPikihead4ItemRQ24Game22NaviNukuAdjustStateArg
	li       r0, 1
	mr       r4, r29
	stb      r0, 0x60(r1)
	addi     r6, r1, 0x48
	li       r5, 9
	lwz      r3, 0x270(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80140C58:
	li       r3, 1
	b        lbl_80140C64

lbl_80140C60:
	li       r3, 0

lbl_80140C64:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lmw      r27, 0x8c(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80140C98
 * Size:	000010
 */
/*void MonoObjectMgr<Game::Navi>::getAt(int)
{
    mulli    r0, r4, 0x320
    lwz      r3, 0x28(r3)
    add      r3, r3, r0
    blr
}*/

/*
 * --INFO--
 * Address:	80140CA8
 * Size:	00004C
 */
// void Iterator<Game::ItemPikihead::Item>::isDone()
//{
/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
lwz      r3, 8(r3)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r0, 4(r31)
subf     r0, r0, r3
cntlzw   r0, r0
srwi     r3, r0, 5
lwz      r31, 0xc(r1)
lwz      r0, 0x14(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
*/
//}

namespace Game {

/*
 * --INFO--
 * Address:	80140CF4
 * Size:	000138
 */
void Navi::setupNukuAdjustArg(Game::ItemPikihead::Item* item, Game::NaviNukuAdjustStateArg& arg)
{
	Vector3f direction = getPosition() - item->getPosition();
	arg._00            = angDist(roundAng(pikmin2_atan2f(direction.x, direction.z)), m_faceDir) / 10.0f;

	f32 length     = pikmin2_sqrtf(direction.sqrMagnitude());
	arg._04        = direction * (3.0f * (length - 15.0f) * (1.0f / length));
	arg._10        = 2;
	arg.m_pikihead = item;

	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r4, r29
	  mr        r31, r5
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x1C(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f30, f3, f2
	  lfs       f3, 0x18(r1)
	  fsubs     f29, f1, f0
	  lfs       f0, 0xC(r1)
	  fmr       f2, f30
	  fsubs     f31, f3, f0
	  fmr       f1, f29
	  bl        0x2D0A50
	  bl        0x2D0E40
	  lfs       f2, 0x1FC(r29)
	  bl        0x2D0E64
	  lfs       f2, -0x6014(r2)
	  fmuls     f0, f31, f31
	  fdivs     f1, f1, f2
	  fmadds    f0, f29, f29, f0
	  stfs      f1, 0x0(r31)
	  fmadds    f1, f30, f30, f0
	  bl        0x2D0A50
	  lfs       f2, -0x6008(r2)
	  li        r0, 0x2
	  lfs       f0, -0x5FE8(r2)
	  fdivs     f2, f2, f1
	  lfs       f3, -0x5FEC(r2)
	  fsubs     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f2, f3, f0
	  fmuls     f1, f29, f2
	  fmuls     f0, f31, f2
	  fmuls     f2, f30, f2
	  stfs      f1, 0x4(r31)
	  stfs      f0, 0x8(r31)
	  stfs      f2, 0xC(r31)
	  stw       r0, 0x10(r31)
	  stw       r30, 0x14(r31)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80140E2C
 * Size:	000050
 */
bool Navi::hasDope(int sprayType)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		return (m_sprayCounts[sprayType] > 0); // signed to generate andc
	} else {
		return playData->hasDope(sprayType);
	}
}

/*
 * --INFO--
 * Address:	80140E7C
 * Size:	000044
 */
int Navi::getDopeCount(int sprayType)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		return (m_sprayCounts[sprayType]);
	} else {
		return playData->getDopeCount(sprayType);
	}
}

/*
 * --INFO--
 * Address:	80140EC0
 * Size:	00004C
 */
void Navi::useDope(int sprayType)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		(m_sprayCounts[sprayType]--);
	} else {
		playData->useDope(sprayType);
	}
}

/*
 * --INFO--
 * Address:	80140F0C
 * Size:	0000A0
 */
void Navi::incDopeCount(int sprayType)
{
	if (gameSystem->isVersusMode()) {
		GameMessageVsGetDoping dopeMessage(m_naviIndex, sprayType);
		gameSystem->m_section->sendMessage(dopeMessage);
		m_sprayCounts[sprayType]++;
		return;
	}

	playData->incDopeCount(sprayType);
}

/*
 * --INFO--
 * Address:	80140FAC
 * Size:	000008
 */
// void BaseGameSection::sendMessage(Game::GameMessage&)
// {
// 	/*
// 	.loc_0x0:
// 	  li        r3, 0
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80140FB4
 * Size:	0002E0
 * 87%
 */
void Navi::applyDopes(int sprayType, Vector3f& sprayOrigin)
{
	if (sprayType == SPRAY_TYPE_BITTER) {
		Sys::Sphere searchCirc(sprayOrigin, 140.0f);
		Delegate1<Game::Navi, Game::CellObject*> funcCallback(this, applyDopeSmoke);

		cellMgr->mapSearch(searchCirc, &funcCallback);
		return;
	}

	Iterator<Creature> cellIt(m_cPlateMgr);
	CI_LOOP(cellIt)
	{
		Piki* got = (Piki*)*cellIt;
		if (got->isPiki()) {
			InteractDope dope(this, sprayType);
			if (!got->stimulate(dope) || got == nullptr) {
				// wtf going on here?
				return;
			}
		}
	}

	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  cmpwi     r30, 0x1
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  stw       r28, 0x50(r1)
	  bne-      .loc_0x98
	  lfs       f0, 0x0(r5)
	  lis       r6, 0x804B
	  lis       r3, 0x804B
	  lwzu      r7, 0x4EC(r3)
	  stfs      f0, 0x24(r1)
	  addi      r9, r6, 0x584
	  lis       r4, 0x804B
	  lfs       f0, -0x5FE4(r2)
	  lfs       f1, 0x4(r5)
	  addi      r8, r4, 0x578
	  lwz       r6, 0x4(r3)
	  addi      r4, r1, 0x24
	  stfs      f1, 0x28(r1)
	  lwz       r0, 0x8(r3)
	  lfs       f1, 0x8(r5)
	  addi      r5, r1, 0x34
	  lwz       r3, -0x6D38(r13)
	  stw       r9, 0x34(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  stw       r8, 0x34(r1)
	  stw       r29, 0x38(r1)
	  stw       r7, 0x3C(r1)
	  stw       r6, 0x40(r1)
	  stw       r0, 0x44(r1)
	  bl        0x15584
	  b         .loc_0x2C0
	.loc_0x98:
	  lwz       r3, 0x254(r29)
	  li        r0, 0
	  lis       r4, 0x804B
	  li        r31, 0
	  subi      r4, r4, 0x437C
	  cmplwi    r0, 0
	  stw       r4, 0x14(r1)
	  stw       r0, 0x20(r1)
	  stw       r0, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0xDC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2A0
	.loc_0xDC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x148
	.loc_0xF4:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2A0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x148:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xF4
	  b         .loc_0x2A0
	.loc_0x168:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  stw       r29, 0xC(r1)
	  addi      r0, r3, 0x4998
	  mr        r3, r28
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r30, 0x10(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E4
	  cmplwi    r31, 0
	  bne-      .loc_0x1E4
	  mr        r31, r28
	.loc_0x1E4:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x210
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2A0
	.loc_0x210:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x284
	.loc_0x230:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2A0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x284:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x230
	.loc_0x2A0:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x168
	.loc_0x2C0:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80141294
 * Size:	0001B0
 */
void Navi::applyDopeSmoke(CellObject*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stfd      f27, 0x50(r1)
	  psq_st    f27,0x58(r1),0,0
	  stfd      f26, 0x40(r1)
	  psq_st    f26,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  mr        r0, r4
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  mr        r31, r0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28C(r30)
	  lfs       f29, 0x18(r1)
	  lfs       f0, 0x10(r3)
	  lfs       f30, 0x14(r1)
	  fsubs     f27, f0, f29
	  lfs       f0, 0xC(r3)
	  lfs       f31, 0x1C(r1)
	  lfs       f1, 0x14(r3)
	  fsubs     f28, f0, f30
	  fmuls     f0, f27, f27
	  fsubs     f26, f1, f31
	  fmadds    f0, f28, f28, f0
	  fmadds    f1, f26, f26, f0
	  bl        0x2D04D4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xC0
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f28, f28, f0
	  fmuls     f27, f27, f0
	  fmuls     f26, f26, f0
	.loc_0xC0:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f4, -0x5FE0(r2)
	  lfs       f3, 0xC(r1)
	  fmuls     f2, f27, f4
	  lfs       f1, 0x8(r1)
	  fmuls     f0, f28, f4
	  lfs       f5, 0x10(r1)
	  fmuls     f4, f26, f4
	  fadds     f2, f29, f2
	  fadds     f0, f30, f0
	  fadds     f4, f31, f4
	  fsubs     f2, f3, f2
	  fsubs     f1, f1, f0
	  fsubs     f3, f5, f4
	  fmuls     f0, f2, f2
	  fmadds    f0, f1, f1, f0
	  fmadds    f1, f3, f3, f0
	  bl        0x2D0458
	  lfs       f0, -0x5FE4(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x168
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r4, r4, 0x5D00
	  li        r0, 0x1
	  stw       r4, 0x20(r1)
	  addi      r5, r3, 0x4998
	  mr        r3, r31
	  addi      r4, r1, 0x20
	  stw       r30, 0x24(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	.loc_0x168:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  psq_l     f27,0x58(r1),0,0
	  lfd       f27, 0x50(r1)
	  psq_l     f26,0x48(r1),0,0
	  lfd       f26, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80141444
 * Size:	00001C
 */
int Navi::getStateID()
{
	if (m_currentState) {
		return m_currentState->m_id;
	}

	return -1;
}

/*
 * --INFO--
 * Address:	80141460
 * Size:	000044
 */
void Navi::transit(int next, StateArg* arg) { m_fsm->transit(this, next, arg); }

/*
 * --INFO--
 * Address:	801414A4
 * Size:	00000C
 */
OlimarData* Navi::getOlimarData() { return playData->m_olimarData; }

/*
 * --INFO--
 * Address:	801414B0
 * Size:	000014
 */
JAInter::Object* Navi::getJAIObject() { return m_soundObj; }

/*
 * --INFO--
 * Address:	801414C4
 * Size:	000008
 */
PSM::Creature* Navi::getPSCreature() { return m_soundObj; }

/*
 * --INFO--
 * Address:	801414CC
 * Size:	000044
 */
void Navi::wallCallback(Vector3f& pos)
{
	if (m_currentState) {
		m_currentState->wallCallback(this, pos);
	}
}

/*
 * --INFO--
 * Address:	80141510
 * Size:	000004
 */
void NaviState::wallCallback(Navi*, Vector3f&) { }

/*
 * --INFO--
 * Address:	80141514
 * Size:	000044
 */
void Navi::bounceCallback(Sys::Triangle* tri)
{
	if (m_currentState) {
		m_currentState->bounceCallback(this, tri);
	}
}

/*
 * --INFO--
 * Address:	80141558
 * Size:	000004
 */
void NaviState::bounceCallback(Navi*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	8014155C
 * Size:	000044
 */
void Navi::collisionCallback(CollEvent& event)
{
	if (m_currentState) {
		m_currentState->collisionCallback(this, event);
	}
}

/*
 * --INFO--
 * Address:	801415A0
 * Size:	000004
 */
void NaviState::collisionCallback(Navi*, CollEvent&) { }

/*
 * --INFO--
 * Address:	801415A4
 * Size:	000194
 */
void Navi::platCallback(PlatEvent&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r30, r4
	  lis       r4, 0x656C
	  lwz       r5, 0x0(r30)
	  mr        r29, r3
	  lwz       r31, 0x10(r30)
	  addi      r4, r4, 0x6563
	  addi      r3, r5, 0xF8
	  li        r5, 0x2A
	  bl        0x2D1D08
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x138
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x1
	  addi      r3, r3, 0x48
	  bl        0xA49C4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x160
	  mr        r4, r31
	  lwz       r5, 0x0(r30)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8
	  lwz       r5, 0xB8(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x8(r5)
	  lfs       f29, 0x18(r5)
	  lfs       f31, 0x28(r5)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x210(r29)
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x20C(r29)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x8(r1)
	  lfs       f4, 0x214(r29)
	  fsubs     f2, f2, f1
	  lfs       f3, 0x10(r1)
	  fmuls     f1, f0, f29
	  fsubs     f3, f4, f3
	  lfs       f0, -0x600C(r2)
	  fmadds    f1, f2, f30, f1
	  fmadds    f1, f3, f31, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE8
	  lfs       f0, -0x5FDC(r2)
	  fmuls     f30, f30, f0
	  fmuls     f31, f31, f0
	.loc_0xE8:
	  lwz       r4, -0x6D20(r13)
	  mr        r3, r29
	  lfs       f1, -0x5FD8(r2)
	  addi      r5, r1, 0x14
	  lwz       r6, 0xC8(r4)
	  li        r4, 0xC
	  fmuls     f3, f30, f1
	  lfs       f0, -0x5FD4(r2)
	  lfs       f2, 0xC50(r6)
	  fmuls     f1, f31, f1
	  stw       r31, 0x14(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x22C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x160
	.loc_0x138:
	  lwz       r6, 0x0(r30)
	  lis       r3, 0x6669
	  addi      r4, r3, 0x6E6C
	  li        r5, 0x2A
	  addi      r3, r6, 0xF8
	  bl        0x2D1C0C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  lwz       r3, 0x254(r29)
	  bl        0x53954
	.loc_0x160:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00005C
//  */
// void Game::ColorAnimator::__ct(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000060
//  */
// void Game::ColorAnimLoop::__dt(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00004C
//  */
// void Game::ColorAnimator::start((int))
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00008C
//  */
// void Game::ColorAnimator::setLoop((int, float, float))
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00008C
//  */
// void Game::ColorAnimator::animate((float))
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80141738
 * Size:	000004
 */
void Navi::viewEntryShape(Matrixf&, Vector3f&) { }

/*
 * --INFO--
 * Address:	8014173C
 * Size:	000008
 */
SysShape::Model* Navi::viewGetShape() { return m_model; }

/*
 * --INFO--
 * Address:	80141744
 * Size:	00001C
 */
f32 Navi::viewGetBaseScale() { return m_naviIndex == 0 ? 1.3f : 1.5f; }

/*
 * --INFO--
 * Address:	80141760
 * Size:	0001F8
 * ////////////////////////FIX//SOME//WEIRD//STUFF//GOING//ON//HERE////////////////////////
 * 86%
 */
void Navi::doEntry()
{
	FakePiki::doEntry();
	if (!isAlive() && m_isAlive) {
		RESET_FLAG(m_lod.m_flags, 0x34);
	}

	if (m_controller1 == nullptr) {
		return;
	}

	m_cursorMatAnim->animate(10.0f);
	m_arrowMatAnim->animate(0.0f);

	if ((_288.typeView & 1) == FALSE) {
		if (moviePlayer->m_flags & MoviePlayer::IS_ACTIVE) {
			m_markerModel->hide();
		} else {
			m_markerModel->show();
		}

		m_markerModel->m_j3dModel->entry();
	}

	J3DGXColorS10 cursorCols;
	if (m_nextThrowPiki) {
		Color4& col  = Piki::pikiColorsCursor[m_nextThrowPiki->m_pikiKind];
		cursorCols.r = col.r;
		cursorCols.g = col.g;
		cursorCols.b = col.b;
		cursorCols.a = col.a;
	} else {
		cursorCols = J3DGXColorS10(0xFF, 0xFF, 0xFF, 0xFF);
	}

	J3DMaterial** materials = m_cursorModel->m_j3dModel->m_modelData->m_materialTable.m_materials1;
	if (materials) {
		materials[0]->m_tevBlock->setTevColor(0, cursorCols);
		m_cursorModel->m_j3dModel->calcMaterial();
		m_cursorModel->m_j3dModel->diff();
	}

	if ((_288.typeView & 1) == FALSE) {
		if (moviePlayer->m_flags & MoviePlayer::IS_ACTIVE) {
			m_cursorModel->hide();
		} else {
			m_cursorModel->show();
		}

		m_cursorModel->m_j3dModel->entry();
	}
}

/*
 * --INFO--
 * Address:	80141958
 * Size:	0002C4
 */
void Navi::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  mr        r31, r3
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f31, 0x54(r4)
	  bl        -0x5C34
	  addi      r3, r1, 0x2C
	  bl        0x95E64
	  lfs       f1, -0x5FD0(r2)
	  mr        r3, r31
	  lfs       f0, -0x5FCC(r2)
	  addi      r4, r1, 0x2C
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  bl        0x95E7C
	  lwz       r3, 0x174(r31)
	  bl        0x2E7288
	  lfs       f0, -0x5FC8(r2)
	  addi      r3, r31, 0x1AC
	  lwz       r12, 0x1AC(r31)
	  fmuls     f31, f0, f31
	  lwz       r12, 0xC(r12)
	  fmr       f1, f31
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1C8
	  fmr       f1, f31
	  lwz       r12, 0x1C8(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1C8
	  lwz       r30, 0x174(r31)
	  lwz       r12, 0x1C8(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r30)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x174(r31)
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x57788
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  bl        -0xBFD8
	  mr        r3, r31
	  bl        .loc_0x2C4
	  b         .loc_0x2A4
	.loc_0x12C:
	  lwz       r0, -0x6CF8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x144
	  mr        r3, r31
	  bl        -0x3210
	  b         .loc_0x1F4
	.loc_0x144:
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f31, 0x54(r4)
	  bl        -0x5D40
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x4A(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x19C
	  addi      r3, r31, 0x1AC
	  lfs       f0, 0x234(r31)
	  lwz       r12, 0x1AC(r31)
	  fmuls     f1, f0, f31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1C8
	  lfs       f0, 0x234(r31)
	  lwz       r12, 0x1C8(r31)
	  fmuls     f1, f0, f31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	.loc_0x19C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x3ED8
	  mr        r3, r31
	  bl        -0x3B2C
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x5785C
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  bl        -0xC0AC
	.loc_0x1F4:
	  lwz       r3, 0x2C0(r31)
	  bl        0x2E7D50
	  lfs       f1, -0x5FC4(r2)
	  addi      r4, r31, 0x2C4
	  lfs       f0, -0x600C(r2)
	  addi      r5, r1, 0x8
	  stfs      f1, 0x2C4(r31)
	  stfs      f0, 0x2C8(r31)
	  stfs      f0, 0x2CC(r31)
	  bl        -0x56F98
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x2C4(r31)
	  stfs      f1, 0x2C8(r31)
	  stfs      f2, 0x2CC(r31)
	  lwz       r0, 0x278(r31)
	  lwz       r3, 0x28C(r31)
	  cmplwi    r0, 0
	  lfs       f1, 0x24(r3)
	  beq-      .loc_0x274
	  lwz       r3, 0x2D0(r31)
	  addi      r4, r1, 0x20
	  lwz       r6, 0xC(r3)
	  lwz       r5, 0x0(r6)
	  lwz       r0, 0x4(r6)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x8(r6)
	  stw       r0, 0x28(r1)
	  bl        0x276710
	  b         .loc_0x29C
	.loc_0x274:
	  lwz       r3, 0x2D0(r31)
	  addi      r4, r1, 0x14
	  lwz       r6, 0xC(r3)
	  lwz       r5, 0x0(r6)
	  lwz       r0, 0x4(r6)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lwz       r0, 0x8(r6)
	  stw       r0, 0x1C(r1)
	  bl        0x2766E4
	.loc_0x29C:
	  mr        r3, r31
	  bl        .loc_0x2C4
	.loc_0x2A4:
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	.loc_0x2C4:
	*/
}

/*
 * --INFO--
 * Address:	80141C1C
 * Size:	000280
 */
void Navi::updateCursor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stfd      f25, 0xA0(r1)
	  psq_st    f25,0xA8(r1),0,0
	  stfd      f24, 0x90(r1)
	  psq_st    f24,0x98(r1),0,0
	  stfd      f23, 0x80(r1)
	  psq_st    f23,0x88(r1),0,0
	  stfd      f22, 0x70(r1)
	  psq_st    f22,0x78(r1),0,0
	  stfd      f21, 0x60(r1)
	  psq_st    f21,0x68(r1),0,0
	  stfd      f20, 0x50(r1)
	  psq_st    f20,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  addi      r3, r1, 0x8
	  mr        r4, r31
	  lwz       r5, 0x28C(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0xC(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x10(r5)
	  lfs       f29, 0x14(r5)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x8(r1)
	  fsubs     f27, f30, f1
	  lfs       f1, 0x10(r1)
	  fsubs     f28, f31, f0
	  fsubs     f26, f29, f1
	  fmuls     f0, f27, f27
	  fmadds    f0, f28, f28, f0
	  fmadds    f1, f26, f26, f0
	  bl        0x2CFB28
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE4
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f28, f28, f0
	  fmuls     f27, f27, f0
	  fmuls     f26, f26, f0
	.loc_0xE4:
	  lwz       r3, 0x28C(r31)
	  lfs       f25, 0x18(r3)
	  lfs       f23, 0x20(r3)
	  fmuls     f1, f25, f26
	  lfs       f24, 0x1C(r3)
	  fmuls     f2, f23, f27
	  fmuls     f0, f24, f28
	  fmsubs    f21, f23, f28, f1
	  fmsubs    f22, f24, f26, f2
	  fmsubs    f20, f25, f27, f0
	  fmuls     f0, f21, f21
	  fmadds    f0, f22, f22, f0
	  fmadds    f1, f20, f20, f0
	  bl        0x2CFAD0
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x13C
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f22, f22, f0
	  fmuls     f21, f21, f0
	  fmuls     f20, f20, f0
	.loc_0x13C:
	  fmuls     f1, f22, f23
	  fmuls     f2, f20, f24
	  fmuls     f0, f21, f25
	  fmsubs    f27, f20, f25, f1
	  fmsubs    f26, f21, f23, f2
	  fmsubs    f28, f22, f24, f0
	  fmuls     f0, f27, f27
	  fmadds    f0, f26, f26, f0
	  fmadds    f1, f28, f28, f0
	  bl        0x2CFA88
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x184
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f26, f26, f0
	  fmuls     f27, f27, f0
	  fmuls     f28, f28, f0
	.loc_0x184:
	  stfs      f22, 0x14(r1)
	  addi      r3, r1, 0x14
	  stfs      f21, 0x24(r1)
	  stfs      f20, 0x34(r1)
	  stfs      f25, 0x18(r1)
	  stfs      f24, 0x28(r1)
	  stfs      f23, 0x38(r1)
	  stfs      f26, 0x1C(r1)
	  stfs      f27, 0x2C(r1)
	  stfs      f28, 0x3C(r1)
	  stfs      f31, 0x20(r1)
	  stfs      f30, 0x30(r1)
	  stfs      f29, 0x40(r1)
	  lwz       r4, 0x290(r31)
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x57B14
	  lwz       r4, 0x294(r31)
	  addi      r3, r1, 0x14
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x57B28
	  lwz       r3, 0x290(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x294(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  psq_l     f25,0xA8(r1),0,0
	  lfd       f25, 0xA0(r1)
	  psq_l     f24,0x98(r1),0,0
	  lfd       f24, 0x90(r1)
	  psq_l     f23,0x88(r1),0,0
	  lfd       f23, 0x80(r1)
	  psq_l     f22,0x78(r1),0,0
	  lfd       f22, 0x70(r1)
	  psq_l     f21,0x68(r1),0,0
	  lfd       f21, 0x60(r1)
	  psq_l     f20,0x58(r1),0,0
	  lfd       f20, 0x50(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80141E9C
 * Size:	000058
 */
void Navi::doSimulation(f32 timeStep)
{
	if (moviePlayer->m_flags & MoviePlayer::IS_ACTIVE) {
		m_position2    = Vector3f(0.0f);
		m_velocity     = Vector3f(0.0f);
		m_acceleration = Vector3f(0.0f);
	}

	FakePiki::doSimulation(timeStep);
}

/*
 * --INFO--
 * Address:	80141EF4
 * Size:	0000B8
 */
void Navi::doSetView(int vpNumber)
{
	Creature::doSetView(vpNumber);
	m_markerModel->setCurrentViewNo(vpNumber);
	m_cursorModel->setCurrentViewNo(vpNumber);

	if (m_lod.m_flags & (16 << vpNumber)) {
		m_markerModel->showPackets();
		m_cursorModel->showPackets();
	} else {
		m_markerModel->hidePackets();
		m_cursorModel->hidePackets();
	}
}

/*
 * --INFO--
 * Address:	80141FAC
 * Size:	00003C
 */
void Navi::doViewCalc()
{
	Creature::doViewCalc();
	m_markerModel->viewCalc();
	m_cursorModel->viewCalc();
}

/*
 * --INFO--
 * Address:	80141FE8
 * Size:	000014
 */
void Navi::setLifeMax() { m_health = naviMgr->m_naviParms->m_naviParms.m_maxHealth; }

/*
 * --INFO--
 * Address:	80141FFC
 * Size:	000018
 */
f32 Navi::getLifeRatio() { return m_health / naviMgr->m_naviParms->m_naviParms.m_maxHealth.m_value; }

/*
 * --INFO--
 * Address:	80142014
 * Size:	0000AC
 */
int Navi::getDownfloorMass()
{
	NaviState* curState = m_currentState;

	int id;
	if (curState) {
		id = curState->m_id;
	} else {
		id = -1;
	}

	if (id != 6) {
		return naviMgr->m_naviParms->m_naviParms.m_q009;
	}

	// Requires casting to navi state 6, IDK what that is, so this function is impossible until then
	int a = 1;
	if (curState) {
		// Piki::getStateID
		if (curState->m_id == 4) {
			a = 2;
		} else {
			a = 0;
		}
	} else {
		a = 0;
	}

	return naviMgr->m_naviParms->m_naviParms.m_q009 + a;

	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r31, 0x274(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x2C
	  lwz       r0, 0x4(r31)
	  b         .loc_0x30
	.loc_0x2C:
	  li        r0, -0x1
	.loc_0x30:
	  lwz       r3, -0x6D20(r13)
	  cmpwi     r0, 0x6
	  lwz       r3, 0xC8(r3)
	  lwz       r30, 0xC28(r3)
	  bne-      .loc_0x8C
	  lwz       r3, 0x14(r31)
	  li        r29, 0x1
	  cmplwi    r3, 0
	  beq-      .loc_0x80
	  bl        0x6ECC
	  cmpwi     r3, 0x4
	  bne-      .loc_0x78
	  lwz       r3, 0x14(r31)
	  lbz       r0, 0x2B8(r3)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x84
	  li        r29, 0x2
	  b         .loc_0x84
	.loc_0x78:
	  li        r29, 0
	  b         .loc_0x84
	.loc_0x80:
	  li        r29, 0
	.loc_0x84:
	  add       r3, r30, r29
	  b         .loc_0x90
	.loc_0x8C:
	  mr        r3, r30
	.loc_0x90:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801420C0
 * Size:	0002A8
 */
void Navi::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  lbz       r3, 0x2A4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  subi      r0, r3, 0x1
	  stb       r0, 0x2A4(r31)
	.loc_0x2C:
	  lwz       r3, 0x26C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xDD2CC
	  mr        r3, r31
	  bl        -0x48D0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x29AC
	  mr        r3, r31
	  bl        0x2A3C
	  lwz       r3, 0x2D0(r31)
	  bl        0x275DC4
	  mr        r3, r31
	  bl        0xD50
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lwz       r5, 0x278(r31)
	  cmplwi    r5, 0
	  beq-      .loc_0xC4
	  lwz       r0, 0x1C(r5)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0xC4
	  lwz       r6, -0x6C18(r13)
	  mr        r4, r3
	  lwz       r3, 0x58(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xDC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x290
	.loc_0xC4:
	  mr        r3, r31
	  bl        0x1030
	  cmplwi    r3, 0
	  beq-      .loc_0x110
	  lwz       r4, 0x278(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x110
	  lwz       r0, 0x1C(r4)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x110
	  lwz       r6, -0x6C18(r13)
	  mr        r4, r3
	  lhz       r5, 0x2DC(r31)
	  lwz       r3, 0x58(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xD8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x290
	.loc_0x110:
	  mr        r3, r31
	  bl        0x12B0
	  mr.       r30, r3
	  beq-      .loc_0x174
	  lwz       r4, 0x278(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x174
	  lwz       r0, 0x1C(r4)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x174
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x174
	  lwz       r3, -0x6C18(r13)
	  mr        r4, r30
	  lwz       r5, 0x278(r31)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xE0(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x290
	.loc_0x174:
	  lwz       r4, -0x6C18(r13)
	  lwz       r3, 0x2D8(r31)
	  lwz       r4, 0x50(r4)
	  lwz       r0, 0x10(r3)
	  sub       r3, r0, r4
	  bl        -0x7C0F8
	  cmpwi     r3, 0xA
	  ble-      .loc_0x1D8
	  addi      r3, r1, 0x1C
	  bl        0x7253C
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x10(r1)
	  addi      r4, r1, 0x1C
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r3, 0x2D8(r31)
	  bl        0x725A4
	.loc_0x1D8:
	  lwz       r3, -0x6C18(r13)
	  bl        0x72D24
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x270
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x270
	  lwz       r3, 0x278(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x270
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,20,20
	  beq-      .loc_0x270
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x270
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x270
	  lhz       r5, 0x2DC(r31)
	  lis       r3, 0x804B
	  addi      r0, r3, 0x590
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x60F4
	  lwz       r3, -0x6C18(r13)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  stw       r5, 0xC(r1)
	  lwz       r3, 0x58(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	.loc_0x270:
	  lwz       r3, 0x270(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x254(r31)
	  bl        0x54250
	.loc_0x290:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80142368
 * Size:	000008
 */
bool NaviState::vsUsableY() { return true; }

/*
 * --INFO--
 * Address:	80142370
 * Size:	000004
 */
void BaseGameSection::openKanketuMenu(ItemBigFountain::Item*, Controller*) { }

/*
 * --INFO--
 * Address:	80142374
 * Size:	000004
 */
void BaseGameSection::openCaveInMenu(ItemCave::Item*, int) { }

/*
 * --INFO--
 * Address:	80142378
 * Size:	000004
 */
void BaseGameSection::openCaveMoreMenu(ItemHole::Item*, Controller*) { }

/*
 * --INFO--
 * Address:	8014237C
 * Size:	000004
 */
void Navi::do_updateLookCreature() { }

/*
 * --INFO--
 * Address:	80142380
 * Size:	00009C
 */
void Navi::inWaterCallback(WaterBox* wb)
{
	m_effectsObj->m_height = wb->getSeaHeightPtr();

	efx::TNaviEffect* fx = m_effectsObj;

	bool isX = fx->m_flags.typeView & 1;
	SET_FLAG(fx->m_flags.typeView, 1);

	fx->updateHamon_();
	if (!isX) {
		efx::createSimpleDive(fx->m_hamonPosition);
	}

	m_soundObj->startSound(0x814, 0);
}

/*
 * --INFO--
 * Address:	8014241C
 * Size:	000044
 */
void Navi::outWaterCallback()
{
	efx::TNaviEffect* fx = m_effectsObj;
	fx->m_flags.typeView &= 0xFFFFFFFE;
	fx->killHamonA_();
	fx->killHamonB_();
}

/*
 * --INFO--
 * Address:	80142460
 * Size:	0000B0
 */
bool Navi::ignoreAtari(Creature* other)
{
	if (moviePlayer->m_flags & MoviePlayer::IS_ACTIVE && other->isNavi()) {
		return true;
	}

	if (other->isPellet() && ((Pellet*)other)->m_pelletFlag == 1) {
		return true;
	}

	return m_currentState->ignoreAtari(other);
}

/*
 * --INFO--
 * Address:	80142510
 * Size:	000008
 */
bool NaviState::ignoreAtari(Creature*) { return false; }

/*
 * --INFO--
 * Address:	80142518
 * Size:	00004C
 */
void Navi::on_movie_begin(bool)
{
	SET_FLAG(_288.typeView, 1);

	efx::TNaviEffect* fx = m_effectsObj;
	fx->killCursor_();
	fx->killLightAct_();
	fx->killFueact_();
}

/*
 * --INFO--
 * Address:	80142564
 * Size:	000048
 */
void Navi::on_movie_end(bool)
{
	_288.typeView &= 0xFFFE;
	startMotion(IPikiAnims::WAIT, IPikiAnims::WAIT, nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	801425AC
 * Size:	00027C
 */
void Navi::movieUserCommand(u32 command, MoviePlayer* player)
{
	switch (command) {
	case 100: {
		enterAllPikis();
		if (player->m_flags & 2) {
			pikiMgr->forceEnterPikmins(0);
		}
		break;
	}
	case 102: {
		CollPart* holeTarget = m_targetCollObj;
		JUT_ASSERTLINE(2134, holeTarget != nullptr, "no target!! HOLEIN\n");

		Vector3f pos = holeTarget->getChild()->m_position;
		holeinAllPikis(pos);
		break;
	}
	case 103: {
		CollPart* fountainTarget = m_targetCollObj;
		JUT_ASSERTLINE(2148, fountainTarget != nullptr, "no target!! FOUNTAINON\n");

		Vector3f pos = fountainTarget->getChild()->m_position;
		fountainonAllPikis(pos);
		break;
	}
	case 104: {
		shadowMgr->delShadow(this);
		break;
	}
	case 105: {
		efx::TNaviEffect* fx = m_effectsObj;

		if (fx->m_flags.typeView >= 0) {
			fx->_04.typeView        = fx->m_flags.typeView;
			fx->m_flags.typeView    = 0;
			fx->m_flags.byteView[1] = 0;
			fx->m_flags.byteView[2] = 0;
			fx->m_flags.byteView[3] = 0;
			fx->m_flags.typeView |= 0x80000000;
		}

		fx->m_light.forceKill();
		fx->m_lightAct.forceKill();
		fx->m_damage.forceKill();

		fx->killHamonA_();
		fx->killHamonB_();
		fx->killLight_();
		fx->killLightAct_();
		fx->killCursor_();
		fx->killFueact_();
		break;
	}
	default:
		break;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  subi      r0, r4, 0x64
	  cmplwi    r0, 0x7
	  lis       r4, 0x8048
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r5
	  subi      r5, r4, 0x3878
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  bgt-      .loc_0x260
	  lis       r4, 0x804B
	  rlwinm    r0,r0,2,0,29
	  addi      r4, r4, 0x4F8
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  bl        0x222C
	  lwz       r0, 0x1F0(r30)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x260
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0
	  bl        0x1D6A4
	  b         .loc_0x260
	  lwz       r31, 0x194(r30)
	  cmplwi    r31, 0
	  bne-      .loc_0x8C
	  addi      r3, r5, 0xC
	  addi      r5, r5, 0x40
	  li        r4, 0x856
	  crclr     6, 0x6
	  bl        -0x117FF4
	.loc_0x8C:
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  mr        r3, r29
	  lfs       f1, 0x18(r1)
	  addi      r4, r1, 0x2C
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        0x2544
	  b         .loc_0x260
	  lwz       r31, 0x194(r30)
	  cmplwi    r31, 0
	  bne-      .loc_0xEC
	  addi      r3, r5, 0xC
	  addi      r5, r5, 0x54
	  li        r4, 0x864
	  crclr     6, 0x6
	  bl        -0x118054
	.loc_0xEC:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  mr        r3, r29
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x20
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  bl        0x27F0
	  b         .loc_0x260
	  lwz       r3, -0x6980(r13)
	  mr        r4, r29
	  bl        0xFF610
	  b         .loc_0x260
	  lwz       r3, -0x6980(r13)
	  mr        r4, r29
	  bl        0xFF5BC
	  b         .loc_0x260
	  lwz       r31, 0x2D0(r29)
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,0,0
	  bne-      .loc_0x180
	  stw       r3, 0x4(r31)
	  li        r0, 0
	  stb       r0, 0x0(r31)
	  stb       r0, 0x1(r31)
	  stb       r0, 0x2(r31)
	  stb       r0, 0x3(r31)
	  lwz       r0, 0x0(r31)
	  oris      r0, r0, 0x8000
	  stw       r0, 0x0(r31)
	.loc_0x180:
	  addi      r3, r31, 0x33C
	  lwz       r12, 0x33C(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x36C
	  lwz       r12, 0x36C(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x39C
	  lwz       r12, 0x39C(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x2758E8
	  mr        r3, r31
	  bl        0x275964
	  mr        r3, r31
	  bl        0x2759F8
	  mr        r3, r31
	  bl        0x275A94
	  mr        r3, r31
	  bl        0x275B1C
	  mr        r3, r31
	  bl        0x275E78
	  b         .loc_0x260
	  lwz       r31, 0x2D0(r29)
	  lwz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0x214
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, 0x0(r31)
	.loc_0x214:
	  lwz       r0, 0x0(r31)
	  rlwinm.   r30,r0,0,31,31
	  beq-      .loc_0x240
	  ori       r0, r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  bl        0x275744
	  cmplwi    r30, 0
	  bne-      .loc_0x240
	  addi      r3, r31, 0x1C
	  bl        0x2750AC
	.loc_0x240:
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x260
	  ori       r0, r3, 0x2
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0x10(r31)
	  bl        0x2758F4
	.loc_0x260:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80142828
 * Size:	000028
 */
void Navi::movieSetFaceDir(f32 direction)
{
	m_faceDir = direction;
	m_whistle->setFaceDir(direction);
}

/*
 * --INFO--
 * Address:	80142850
 * Size:	00004C
 */
void Navi::movieStartAnimation(u32 anim)
{
	startMotion(anim, anim, nullptr, nullptr);
	m_animSpeed = 30.0f;
}

/*
 * --INFO--
 * Address:	8014289C
 * Size:	0000DC
 */
void Navi::movieStartDemoAnimation(SysShape::AnimInfo* info)
{
	m_animator.m_boundAnimator.startExAnim(info);
	m_animator.m_selfAnimator.startExAnim(info);

	P2ASSERTLINE(2201, m_animator.m_selfAnimator.assertValid(m_model));
	P2ASSERTLINE(2202, m_animator.m_boundAnimator.assertValid(m_model));

	m_model->clearAnimatorAll();

	SysShape::Model* model                                             = m_model;
	model->m_j3dModel->m_modelData->m_jointTree.m_joints[0]->m_mtxCalc = (J3DMtxCalcAnmBase*)m_animator.m_boundAnimator.getCalc();
}

/*
 * --INFO--
 * Address:	80142978
 * Size:	000088
 */
void Navi::movieSetTranslation(Vector3f&, f32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lfs       f0, -0x600C(r2)
	  mr        r31, r3
	  fmr       f31, f1
	  li        r5, 0
	  stfs      f0, 0x200(r3)
	  stfs      f0, 0x204(r3)
	  stfs      f0, 0x208(r3)
	  stfs      f0, 0x1E4(r3)
	  stfs      f0, 0x1E8(r3)
	  stfs      f0, 0x1EC(r3)
	  stfs      f0, 0x11C(r3)
	  stfs      f0, 0x120(r3)
	  stfs      f0, 0x124(r3)
	  lfs       f0, 0x20C(r3)
	  stfs      f0, 0x238(r3)
	  lfs       f0, 0x210(r3)
	  stfs      f0, 0x23C(r3)
	  lfs       f0, 0x214(r3)
	  stfs      f0, 0x240(r3)
	  bl        -0x7834
	  stfs      f31, 0x1FC(r31)
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80142A00
 * Size:	00012C
 */
bool Navi::movieGotoPosition(Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stfd      f28, 0x10(r1)
	  psq_st    f28,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lfs       f1, 0x0(r4)
	  mr        r31, r3
	  lfs       f0, 0x20C(r3)
	  lfs       f3, 0x8(r4)
	  fsubs     f31, f1, f0
	  lfs       f2, 0x214(r3)
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x210(r3)
	  fsubs     f29, f3, f2
	  fmuls     f2, f31, f31
	  fsubs     f30, f1, f0
	  fmuls     f1, f29, f29
	  fmadds    f0, f30, f30, f2
	  fadds     f28, f2, f1
	  fadds     f1, f1, f0
	  bl        0x2CED98
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x90
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0
	.loc_0x90:
	  lfs       f0, -0x5FC0(r2)
	  fcmpo     cr0, f28, f0
	  bge-      .loc_0xC0
	  lfs       f0, -0x600C(r2)
	  li        r3, 0x1
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  stfs      f0, 0x200(r31)
	  stfs      f0, 0x204(r31)
	  stfs      f0, 0x208(r31)
	  b         .loc_0xF8
	.loc_0xC0:
	  lwz       r4, -0x6D20(r13)
	  li        r3, 0
	  lfs       f3, -0x6018(r2)
	  lwz       r4, 0xC8(r4)
	  lfs       f0, 0x3B8(r4)
	  fmuls     f2, f31, f0
	  fmuls     f1, f30, f0
	  fmuls     f0, f29, f0
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x1E4(r31)
	  stfs      f1, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	.loc_0xF8:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  psq_l     f28,0x18(r1),0,0
	  lfd       f28, 0x10(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80142B2C
 * Size:	0001A8
 */
void Navi::set_movie_draw(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0xCC
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x190
	  lwz       r31, 0x2D0(r31)
	  lwz       r0, 0x0(r31)
	  rlwinm.   r0,r0,0,0,0
	  beq-      .loc_0x7C
	  lwz       r0, 0x4(r31)
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  rlwinm    r0,r0,0,1,31
	  stw       r0, 0x0(r31)
	.loc_0x7C:
	  lwz       r0, 0x0(r31)
	  rlwinm.   r30,r0,0,31,31
	  beq-      .loc_0xA8
	  ori       r0, r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  bl        0x27535C
	  cmplwi    r30, 0
	  bne-      .loc_0xA8
	  addi      r3, r31, 0x1C
	  bl        0x274CC4
	.loc_0xA8:
	  lwz       r3, 0x0(r31)
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x190
	  ori       r0, r3, 0x2
	  mr        r3, r31
	  stw       r0, 0x0(r31)
	  lwz       r4, 0x10(r31)
	  bl        0x27550C
	  b         .loc_0x190
	.loc_0xCC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x190
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x190
	  lwz       r30, 0x2D0(r31)
	  lwz       r3, 0x0(r30)
	  rlwinm.   r0,r3,0,0,0
	  bne-      .loc_0x124
	  stw       r3, 0x4(r30)
	  li        r0, 0
	  stb       r0, 0x0(r30)
	  stb       r0, 0x1(r30)
	  stb       r0, 0x2(r30)
	  stb       r0, 0x3(r30)
	  lwz       r0, 0x0(r30)
	  oris      r0, r0, 0x8000
	  stw       r0, 0x0(r30)
	.loc_0x124:
	  addi      r3, r30, 0x33C
	  lwz       r12, 0x33C(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x36C
	  lwz       r12, 0x36C(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x39C
	  lwz       r12, 0x39C(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  bl        0x2753C4
	  mr        r3, r30
	  bl        0x275440
	  mr        r3, r30
	  bl        0x2754D4
	  mr        r3, r30
	  bl        0x275570
	  mr        r3, r30
	  bl        0x2755F8
	  mr        r3, r30
	  bl        0x275954
	.loc_0x190:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80142CD4
 * Size:	000050
 */
bool Navi::isWalking()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lfs       f1, 0x1E4(r3)
	  lfs       f0, 0x1E8(r3)
	  fmuls     f1, f1, f1
	  lfs       f2, 0x1EC(r3)
	  fmuls     f0, f0, f0
	  fmuls     f2, f2, f2
	  fadds     f0, f1, f0
	  fadds     f1, f2, f0
	  bl        0x2CEB04
	  lfs       f0, -0x6014(r2)
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,2,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80142D24
 * Size:	00016C
 */
void Navi::setDeadLaydown()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lhz       r31, 0x2DC(r30)
	  lwz       r3, -0x6B70(r13)
	  cmpwi     r31, 0x8
	  bge-      .loc_0x50
	  addi      r0, r3, 0x20
	  srawi     r4, r31, 0x3
	  sub       r5, r0, r4
	  li        r3, 0x1
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x0(r5)
	  sub       r0, r31, r0
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0x0(r5)
	.loc_0x50:
	  cmpwi     r31, 0
	  bne-      .loc_0x74
	  lfs       f2, -0x5FBC(r2)
	  lfs       f1, -0x600C(r2)
	  lfs       f0, -0x5FB8(r2)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  b         .loc_0x8C
	.loc_0x74:
	  lfs       f2, -0x5FB4(r2)
	  lfs       f1, -0x600C(r2)
	  lfs       f0, -0x6014(r2)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	.loc_0x8C:
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x58210
	  lfs       f2, 0x8(r1)
	  mr        r3, r30
	  lfs       f1, 0xC(r1)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x10(r1)
	  li        r5, 0
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x7C68
	  mr        r3, r30
	  li        r4, 0x5
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  li        r7, 0
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0x268(r30)
	  b         .loc_0x128
	.loc_0x120:
	  li        r0, 0x1
	  stb       r0, 0x268(r30)
	.loc_0x128:
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6D20(r13)
	  mr        r4, r31
	  bl        0x1839C
	  lfs       f0, -0x600C(r2)
	  stfs      f0, 0x2A0(r30)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80142E90
 * Size:	0002DC
 */
void Navi::checkHole()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  lwz       r4, -0x6BB8(r13)
	  cmplwi    r4, 0
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x2C4
	.loc_0x2C:
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x2C4
	.loc_0x44:
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x4(r3)
	  b         .loc_0x5C
	.loc_0x58:
	  li        r0, -0x1
	.loc_0x5C:
	  cmpwi     r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x2C4
	.loc_0x6C:
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  addi      r4, r4, 0x30
	.loc_0x78:
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r3, r3, 0x560
	  stw       r0, 0x20(r1)
	  cmplwi    r0, 0
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r4, 0x1C(r1)
	  bne-      .loc_0xB8
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2A0
	.loc_0xB8:
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x128
	.loc_0xD4:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2A0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x128:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x2A0
	.loc_0x148:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r30, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E4
	  mr        r3, r30
	  bl        0x8F4E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E4
	  lwz       r0, 0x1E4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E4
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x214(r31)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x20C(r31)
	  lfs       f0, -0x5FB0(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1E4
	  mr        r3, r30
	  b         .loc_0x2C4
	.loc_0x1E4:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x210
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x2A0
	.loc_0x210:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x284
	.loc_0x230:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2A0
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x284:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x230
	.loc_0x2A0:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  li        r3, 0
	.loc_0x2C4:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014316C
 * Size:	00004C
 */
bool Iterator<Game::BaseItem>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801431B8
 * Size:	0002CC
 */
void Navi::checkCave()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  lwz       r4, -0x6B60(r13)
	  cmplwi    r4, 0
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x2B4
	.loc_0x2C:
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x2B4
	.loc_0x44:
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x4(r3)
	  b         .loc_0x5C
	.loc_0x58:
	  li        r0, -0x1
	.loc_0x5C:
	  cmpwi     r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x2B4
	.loc_0x6C:
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  addi      r4, r4, 0x30
	.loc_0x78:
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r3, r3, 0x560
	  stw       r0, 0x20(r1)
	  cmplwi    r0, 0
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r4, 0x1C(r1)
	  bne-      .loc_0xB8
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x290
	.loc_0xB8:
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x128
	.loc_0xD4:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x290
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x128:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x290
	.loc_0x148:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r30, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1D4
	  lwz       r0, 0x1F4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1D4
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x214(r31)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x20C(r31)
	  lfs       f0, -0x5FAC(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1D4
	  mr        r3, r30
	  b         .loc_0x2B4
	.loc_0x1D4:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x200
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x290
	.loc_0x200:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x274
	.loc_0x220:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x290
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x274:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x220
	.loc_0x290:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  li        r3, 0
	.loc_0x2B4:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80143484
 * Size:	0002B4
 */
void Navi::checkBigFountain()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  lwz       r4, -0x6B50(r13)
	  cmplwi    r4, 0
	  bne-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x29C
	.loc_0x2C:
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x29C
	.loc_0x44:
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x4(r3)
	  b         .loc_0x5C
	.loc_0x58:
	  li        r0, -0x1
	.loc_0x5C:
	  cmpwi     r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0
	  b         .loc_0x29C
	.loc_0x6C:
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  addi      r4, r4, 0x30
	.loc_0x78:
	  li        r0, 0
	  lis       r3, 0x804B
	  addi      r3, r3, 0x560
	  stw       r0, 0x20(r1)
	  cmplwi    r0, 0
	  stw       r3, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stw       r4, 0x1C(r1)
	  bne-      .loc_0xB8
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x278
	.loc_0xB8:
	  mr        r3, r4
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x128
	.loc_0xD4:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x278
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x128:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xD4
	  b         .loc_0x278
	.loc_0x148:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r30, r0
	  bl        0xA9C80
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1BC
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x214(r31)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x20C(r31)
	  lfs       f0, -0x5FAC(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1BC
	  mr        r3, r30
	  b         .loc_0x29C
	.loc_0x1BC:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E8
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x278
	.loc_0x1E8:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x25C
	.loc_0x208:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x278
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x25C:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x208
	.loc_0x278:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x148
	  li        r3, 0
	.loc_0x29C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80143738
 * Size:	000368
 */
void Navi::checkOnyon()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  stw       r29, 0x34(r1)
	  lwz       r5, -0x6C18(r13)
	  lwz       r4, 0x44(r5)
	  cmpwi     r4, 0
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x34C
	.loc_0x34:
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x4C
	  li        r3, 0
	  b         .loc_0x34C
	.loc_0x4C:
	  lwz       r6, -0x6CD0(r13)
	  cmplwi    r6, 0
	  bne-      .loc_0x60
	  li        r3, 0
	  b         .loc_0x34C
	.loc_0x60:
	  cmpwi     r4, 0
	  bne-      .loc_0x80
	  lwz       r3, 0x40(r5)
	  lwz       r0, 0x218(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  li        r3, 0
	  b         .loc_0x34C
	.loc_0x80:
	  lwz       r3, 0x274(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r0, 0x4(r3)
	  b         .loc_0x98
	.loc_0x94:
	  li        r0, -0x1
	.loc_0x98:
	  cmpwi     r0, 0
	  beq-      .loc_0xA8
	  li        r3, 0
	  b         .loc_0x34C
	.loc_0xA8:
	  cmplwi    r6, 0
	  beq-      .loc_0xB4
	  addi      r6, r6, 0x30
	.loc_0xB4:
	  lis       r3, 0x804B
	  li        r0, 0
	  addi      r5, r3, 0x548
	  stw       r0, 0x2C(r1)
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  stw       r5, 0x20(r1)
	  stw       r0, 0x24(r1)
	  stw       r6, 0x28(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x2C(r1)
	  li        r31, 0
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  cmplwi    r0, 0
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bne-      .loc_0x12C
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x328
	.loc_0x12C:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x19C
	.loc_0x148:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x328
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	.loc_0x19C:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x148
	  b         .loc_0x328
	.loc_0x1BC:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x22E(r3)
	  mr        r29, r3
	  cmplwi    r0, 0x3
	  beq-      .loc_0x26C
	  cmplwi    r0, 0x4
	  bne-      .loc_0x210
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  bl        0xA36F8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x210
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3
	  bl        0xA36E4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x26C
	.loc_0x210:
	  mr        r3, r29
	  addi      r4, r1, 0x14
	  bl        0x36358
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x254
	  mr        r3, r29
	  li        r4, 0x1
	  bl        0x3574C
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x101B
	  li        r5, 0
	  bl        0x1F4CBC
	  lhz       r0, 0x288(r30)
	  mr        r31, r29
	  rlwinm    r0,r0,0,31,29
	  sth       r0, 0x288(r30)
	  b         .loc_0x26C
	.loc_0x254:
	  lhz       r0, 0x288(r30)
	  mr        r3, r29
	  li        r4, 0
	  ori       r0, r0, 0x2
	  sth       r0, 0x288(r30)
	  bl        0x35710
	.loc_0x26C:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x298
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x328
	.loc_0x298:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x30C
	.loc_0x2B8:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x328
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	.loc_0x30C:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2B8
	.loc_0x328:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1BC
	  mr        r3, r31
	.loc_0x34C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80143AA0
 * Size:	00004C
 */
bool Iterator<Game::Onyon>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80143AEC
 * Size:	000008
 */
f32 Navi::getMapCollisionRadius() { return 8.5f; }

/*
 * --INFO--
 * Address:	80143AF4
 * Size:	000004
 */
void Navi::doDirectDraw(Graphics&) { }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000004
//  */
// void Navi::draw2d(J2DGrafContext&)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000008
//  */
// void Navi::changeCamera(Camera*)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00000C
//  */
// void Navi::restoreCamera()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80143AF8
 * Size:	00000C
 */
void Navi::disableController() { m_controller1 = nullptr; }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000008
//  */
// void Navi::changeController(Controller*)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00000C
//  */
// void Navi::restoreController()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80143B04
 * Size:	0000D8
 */
void Navi::control()
{
	if ((moviePlayer->m_flags & MoviePlayer::IS_ACTIVE) == FALSE) {
		makeVelocity();
	}

	makeCStick(false);

	if (isMovieActor()) {
		return;
	}

	if (gameSystem->m_mode != GSM_STORY_MODE) {
	} else {
		Navi* active = naviMgr->getActiveNavi();
		if (active != this) {
			return;
		}
	}

	// PSGame::Rappa::playRappa();
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x64AC(r13)
	  lwz       r0, 0x1F0(r4)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x28
	  bl        .loc_0xD8
	.loc_0x28:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x22B4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC4
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x9C
	  lwz       r3, -0x6D20(r13)
	  bl        0x170B8
	  cmplw     r3, r31
	  bne-      .loc_0xC4
	  lwz       r3, 0x26C(r31)
	  lfs       f2, 0x2F4(r31)
	  cmplwi    r3, 0
	  lfs       f1, 0x2EC(r31)
	  mr        r5, r3
	  beq-      .loc_0x8C
	  addi      r5, r3, 0x30
	.loc_0x8C:
	  addi      r3, r3, 0x70
	  li        r4, 0x1
	  bl        0x1FBABC
	  b         .loc_0xC4
	.loc_0x9C:
	  lwz       r3, 0x26C(r31)
	  lfs       f2, 0x2F4(r31)
	  cmplwi    r3, 0
	  lfs       f1, 0x2EC(r31)
	  mr        r5, r3
	  beq-      .loc_0xB8
	  addi      r5, r3, 0x30
	.loc_0xB8:
	  addi      r3, r3, 0x70
	  li        r4, 0x1
	  bl        0x1FBA90
	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	.loc_0xD8:
	*/
}

/*
 * --INFO--
 * Address:	80143BDC
 * Size:	000418
 */
void Navi::makeVelocity()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stfd      f31, 0xF0(r1)
	  psq_st    f31,0xF8(r1),0,0
	  stfd      f30, 0xE0(r1)
	  psq_st    f30,0xE8(r1),0,0
	  stfd      f29, 0xD0(r1)
	  psq_st    f29,0xD8(r1),0,0
	  stfd      f28, 0xC0(r1)
	  psq_st    f28,0xC8(r1),0,0
	  stfd      f27, 0xB0(r1)
	  psq_st    f27,0xB8(r1),0,0
	  stfd      f26, 0xA0(r1)
	  psq_st    f26,0xA8(r1),0,0
	  stfd      f25, 0x90(r1)
	  psq_st    f25,0x98(r1),0,0
	  stfd      f24, 0x80(r1)
	  psq_st    f24,0x88(r1),0,0
	  stfd      f23, 0x70(r1)
	  psq_st    f23,0x78(r1),0,0
	  stfd      f22, 0x60(r1)
	  psq_st    f22,0x68(r1),0,0
	  stfd      f21, 0x50(r1)
	  psq_st    f21,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r3, 0x278(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xE0
	  lwz       r3, 0x18(r3)
	  rlwinm.   r0,r3,0,23,23
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,22,22
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,21,21
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,20,20
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,27,27
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,25,25
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,26,26
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,28,28
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,29,29
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,31,31
	  bne-      .loc_0xD4
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0xE0
	.loc_0xD4:
	  lfs       f0, -0x600C(r2)
	  stfs      f0, 0x308(r31)
	  b         .loc_0xF4
	.loc_0xE0:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x308(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x308(r31)
	.loc_0xF4:
	  lfs       f1, -0x600C(r2)
	  lwz       r3, 0x278(r31)
	  fmr       f2, f1
	  cmplwi    r3, 0
	  beq-      .loc_0x114
	  lfs       f0, 0x48(r3)
	  lfs       f2, 0x4C(r3)
	  fneg      f1, f0
	.loc_0x114:
	  lfs       f0, -0x600C(r2)
	  mr        r3, r31
	  stfs      f1, 0x38(r1)
	  addi      r4, r1, 0x38
	  stfs      f0, 0x3C(r1)
	  stfs      f2, 0x40(r1)
	  bl        .loc_0x418
	  lfs       f22, 0x38(r1)
	  addi      r3, r1, 0x20
	  lfs       f21, 0x40(r1)
	  lwz       r4, 0x280(r31)
	  bl        0x2D658C
	  lfs       f27, 0x20(r1)
	  addi      r3, r1, 0x14
	  lfs       f25, 0x28(r1)
	  lwz       r4, 0x280(r31)
	  bl        0x2D6558
	  lfs       f31, 0x14(r1)
	  addi      r3, r1, 0x8
	  lfs       f30, 0x18(r1)
	  lfs       f29, 0x1C(r1)
	  lwz       r4, 0x280(r31)
	  bl        0x2D658C
	  lfs       f26, -0x600C(r2)
	  lfs       f24, 0x8(r1)
	  fmadds    f0, f27, f27, f26
	  lfs       f28, 0xC(r1)
	  lfs       f23, 0x10(r1)
	  fmadds    f1, f25, f25, f0
	  bl        0x2CDAA0
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1AC
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f27, f27, f0
	  fmuls     f26, f26, f0
	  fmuls     f25, f25, f0
	.loc_0x1AC:
	  fcmpo     cr0, f30, f28
	  ble-      .loc_0x1B8
	  b         .loc_0x1C0
	.loc_0x1B8:
	  fmr       f24, f31
	  fmr       f23, f29
	.loc_0x1C0:
	  lfs       f28, -0x600C(r2)
	  fmadds    f0, f24, f24, f28
	  fmadds    f1, f23, f23, f0
	  bl        0x2CDA5C
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1F0
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f24, f24, f0
	  fmuls     f28, f28, f0
	  fmuls     f23, f23, f0
	.loc_0x1F0:
	  fmuls     f1, f27, f22
	  lwz       r3, -0x6B70(r13)
	  fmuls     f0, f24, f21
	  li        r4, 0x7
	  fmuls     f3, f26, f22
	  addi      r3, r3, 0x48
	  fmuls     f2, f28, f21
	  fadds     f4, f1, f0
	  fmuls     f1, f25, f22
	  fmuls     f0, f23, f21
	  fadds     f2, f3, f2
	  stfs      f4, 0x2C(r1)
	  fadds     f0, f1, f0
	  stfs      f2, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  bl        0xA21C8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x248
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f21, 0xBB0(r3)
	  b         .loc_0x254
	.loc_0x248:
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f21, 0x3B8(r3)
	.loc_0x254:
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x30(r1)
	  fmuls     f1, f1, f1
	  lfs       f2, 0x34(r1)
	  fmuls     f0, f0, f0
	  fmuls     f2, f2, f2
	  fadds     f0, f1, f0
	  fadds     f1, f2, f0
	  bl        0x2CD9B4
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0x8E0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x294
	  lfs       f0, -0x600C(r2)
	  stfs      f0, 0x308(r31)
	.loc_0x294:
	  lfs       f0, 0x2C(r1)
	  lfs       f2, 0x30(r1)
	  fmuls     f0, f0, f21
	  lfs       f3, -0x6008(r2)
	  fmuls     f2, f2, f21
	  lfs       f4, 0x34(r1)
	  fmuls     f0, f0, f3
	  fmuls     f4, f4, f21
	  fmuls     f2, f2, f3
	  stfs      f0, 0x1E4(r31)
	  fmuls     f0, f4, f3
	  stfs      f2, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  lwz       r0, 0x278(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x39C
	  lwz       r3, -0x6D20(r13)
	  li        r0, 0
	  lfs       f2, 0x308(r31)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0x890(r3)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2F8
	  li        r0, 0x1
	.loc_0x2F8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x310
	  bne-      .loc_0x384
	  lfs       f0, 0x8E0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x384
	.loc_0x310:
	  lfs       f0, 0x908(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x384
	  lfs       f0, -0x600C(r2)
	  stfs      f0, 0x1E4(r31)
	  stfs      f0, 0x1E8(r31)
	  stfs      f0, 0x1EC(r31)
	  lwz       r3, 0x28C(r31)
	  lfs       f1, 0x0(r3)
	  lfs       f2, 0x8(r3)
	  bl        0x2CD8C4
	  bl        0x2CDCB4
	  lfs       f2, 0x1FC(r31)
	  bl        0x2CDCD8
	  lfs       f2, -0x5FA4(r2)
	  lfs       f0, 0x1FC(r31)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x1FC(r31)
	  lfs       f1, 0x1FC(r31)
	  bl        0x2CDC94
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x39C
	.loc_0x384:
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl
	.loc_0x39C:
	  lwz       r3, 0x28C(r31)
	  addi      r4, r1, 0x2C
	  li        r5, 0
	  bl        0x21794
	  psq_l     f31,0xF8(r1),0,0
	  lfd       f31, 0xF0(r1)
	  psq_l     f30,0xE8(r1),0,0
	  lfd       f30, 0xE0(r1)
	  psq_l     f29,0xD8(r1),0,0
	  lfd       f29, 0xD0(r1)
	  psq_l     f28,0xC8(r1),0,0
	  lfd       f28, 0xC0(r1)
	  psq_l     f27,0xB8(r1),0,0
	  lfd       f27, 0xB0(r1)
	  psq_l     f26,0xA8(r1),0,0
	  lfd       f26, 0xA0(r1)
	  psq_l     f25,0x98(r1),0,0
	  lfd       f25, 0x90(r1)
	  psq_l     f24,0x88(r1),0,0
	  lfd       f24, 0x80(r1)
	  psq_l     f23,0x78(r1),0,0
	  lfd       f23, 0x70(r1)
	  psq_l     f22,0x68(r1),0,0
	  lfd       f22, 0x60(r1)
	  psq_l     f21,0x58(r1),0,0
	  lfd       f21, 0x50(r1)
	  lwz       r0, 0x104(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	.loc_0x418:
	*/
}

/*
 * --INFO--
 * Address:	80143FF4
 * Size:	0001A4
 */
void Navi::reviseController(Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  lfs       f1, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  fmuls     f1, f1, f1
	  lfs       f2, 0x8(r4)
	  fmuls     f0, f0, f0
	  fmuls     f2, f2, f2
	  fadds     f0, f1, f0
	  fadds     f1, f2, f0
	  bl        0x2CD7BC
	  fmr       f31, f1
	  lfs       f1, 0x0(r31)
	  lfs       f2, 0x8(r31)
	  bl        0x2CD784
	  bl        0x2CDB74
	  lwz       r3, -0x6D20(r13)
	  lis       r0, 0x4330
	  lfs       f3, -0x5F9C(r2)
	  lwz       r3, 0xC8(r3)
	  lfs       f5, -0x5FA0(r2)
	  lfs       f2, 0x840(r3)
	  lfs       f0, -0x6018(r2)
	  fmuls     f4, f3, f2
	  stw       r0, 0x10(r1)
	  lfd       f3, -0x5F90(r2)
	  lfs       f2, -0x5F98(r2)
	  fmuls     f4, f5, f4
	  stw       r0, 0x20(r1)
	  fmadds    f0, f0, f4, f1
	  fdivs     f0, f0, f4
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f3
	  fmuls     f29, f4, f0
	  fdivs     f0, f29, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f3
	  fnmsubs   f28, f2, f0, f29
	  fsubs     f1, f2, f28
	  bl        0x2CD64C
	  fmr       f30, f1
	  fmr       f1, f28
	  bl        0x2CD640
	  fadds     f30, f1, f30
	  lfs       f1, -0x5F98(r2)
	  bl        0x2CD634
	  fdivs     f1, f1, f30
	  lfs       f2, -0x6008(r2)
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0x930(r3)
	  fdivs     f1, f2, f1
	  fmuls     f31, f31, f1
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x138
	  fmr       f31, f2
	.loc_0x138:
	  lfs       f0, 0x8E0(r3)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x148
	  lfs       f31, -0x600C(r2)
	.loc_0x148:
	  fmr       f1, f29
	  bl        0x2CD658
	  fmuls     f30, f31, f1
	  fmr       f1, f29
	  bl        0x2CD5E4
	  fmuls     f1, f31, f1
	  lfs       f0, -0x600C(r2)
	  stfs      f1, 0x0(r31)
	  stfs      f0, 0x4(r31)
	  stfs      f30, 0x8(r31)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80144198
 * Size:	0001D4
 */
void Navi::callPikis()
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  li        r0, 0
	  mr        r31, r3
	  stw       r0, -0x6D68(r13)
	  lis       r3, 0x8048
	  subi      r30, r3, 0x3878
	  addi      r3, r1, 0x2C
	  lwz       r5, 0x28C(r31)
	  addi      r4, r1, 0x1C
	  lfs       f2, 0x10(r5)
	  lfs       f3, 0x14(r5)
	  lfs       f1, 0x24(r5)
	  lfs       f0, 0xC(r5)
	  stfs      f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f3, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  bl        0xEA19C
	  addi      r3, r1, 0x4C
	  addi      r4, r1, 0x2C
	  bl        0xEA1D0
	  lfs       f30, -0x600C(r2)
	  addi      r3, r1, 0x4C
	  li        r29, 0
	  bl        0xEA23C
	  lfs       f31, -0x5FE8(r2)
	  b         .loc_0x194
	.loc_0x94:
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x54(r3)
	  fadds     f30, f30, f0
	  fcmpo     cr0, f30, f31
	  ble-      .loc_0xE0
	  lwz       r0, 0x64(r1)
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x78
	  li        r4, 0xC54
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x68(r1)
	  stw       r0, 0xC(r1)
	  lwz       r6, 0x50(r1)
	  lwz       r7, 0x54(r1)
	  lwz       r8, 0x58(r1)
	  lwz       r9, 0x5C(r1)
	  lwz       r10, 0x60(r1)
	  crclr     6, 0x6
	  bl        -0x119C34
	.loc_0xE0:
	  addi      r3, r1, 0x4C
	  bl        0xEA2C8
	  cmplwi    r29, 0
	  mr        r28, r3
	  beq-      .loc_0x134
	  cmplw     r29, r28
	  bne-      .loc_0x134
	  lwz       r0, 0x64(r1)
	  addi      r3, r30, 0xC
	  addi      r5, r30, 0x98
	  li        r4, 0xC61
	  stw       r0, 0x8(r1)
	  lwz       r0, 0x68(r1)
	  stw       r0, 0xC(r1)
	  lwz       r6, 0x50(r1)
	  lwz       r7, 0x54(r1)
	  lwz       r8, 0x58(r1)
	  lwz       r9, 0x5C(r1)
	  lwz       r10, 0x60(r1)
	  crclr     6, 0x6
	  bl        -0x119C88
	.loc_0x134:
	  cmplwi    r28, 0
	  mr        r29, r28
	  beq-      .loc_0x18C
	  cmplw     r28, r31
	  beq-      .loc_0x18C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5D00
	  li        r5, 0
	  stw       r0, 0x10(r1)
	  addi      r6, r3, 0x49BC
	  li        r0, 0x1
	  mr        r3, r28
	  stw       r31, 0x14(r1)
	  addi      r4, r1, 0x10
	  stw       r6, 0x10(r1)
	  stb       r5, 0x18(r1)
	  stb       r0, 0x19(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	.loc_0x18C:
	  addi      r3, r1, 0x4C
	  bl        0xEA1D8
	.loc_0x194:
	  addi      r3, r1, 0x4C
	  bl        0xEA204
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x94
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0xD4(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00014C
//  */
// void Navi::applyForceObjectsInWhistle(CellObject*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8014436C
 * Size:	00008C
 */
bool Navi::invincible()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x64AC(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x2C
	  lwz       r0, 0x18(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x2C
	  li        r3, 0x1
	  b         .loc_0x7C
	.loc_0x2C:
	  lbz       r0, 0x2A4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  li        r3, 0x1
	  b         .loc_0x7C
	.loc_0x40:
	  lwz       r4, -0x6C18(r13)
	  lbz       r0, 0x3C(r4)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x58
	  li        r3, 0x1
	  b         .loc_0x7C
	.loc_0x58:
	  lwz       r3, 0x274(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x7C
	.loc_0x78:
	  li        r3, 0x1
	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801443F8
 * Size:	000008
 */
bool NaviState::invincible() { return false; }

/*
 * --INFO--
 * Address:	80144400
 * Size:	000008
 */
void Navi::setInvincibleTimer(u8 timer) { m_invincibleTimer = timer; }

/*
 * --INFO--
 * Address:	80144408
 * Size:	000208
 */
void Navi::startDamage(f32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  fmr       f31, f1
	  mr        r31, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1EC
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x58
	  li        r3, 0x1
	  b         .loc_0xA8
	.loc_0x58:
	  lbz       r0, 0x2A4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0x1
	  b         .loc_0xA8
	.loc_0x6C:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x84
	  li        r3, 0x1
	  b         .loc_0xA8
	.loc_0x84:
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xA8
	.loc_0xA4:
	  li        r3, 0x1
	.loc_0xA8:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  b         .loc_0x1EC
	.loc_0xB4:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x5
	  addi      r3, r3, 0x48
	  bl        0xA1B08
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0xC00(r3)
	  fmuls     f31, f31, f0
	.loc_0xDC:
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x4(r3)
	  b         .loc_0xF4
	.loc_0xF0:
	  li        r0, -0x1
	.loc_0xF4:
	  cmpwi     r0, 0xD
	  beq-      .loc_0x1EC
	  lis       r3, 0x804B
	  stfs      f31, 0x8(r1)
	  addi      r0, r3, 0x53C
	  mr        r4, r31
	  stw       r0, 0xC(r1)
	  addi      r6, r1, 0x8
	  li        r5, 0xD
	  lwz       r3, 0x270(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x2A0(r31)
	  li        r4, 0x80F
	  li        r5, 0
	  fsubs     f0, f0, f31
	  stfs      f0, 0x2A0(r31)
	  lwz       r3, 0x26C(r31)
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x1D
	  lhz       r5, 0x2DC(r31)
	  bl        0x10DE28
	  lwz       r3, -0x6958(r13)
	  li        r4, 0x1
	  lhz       r5, 0x2DC(r31)
	  bl        0x10F3AC
	  lwz       r3, 0x2D0(r31)
	  lwz       r4, 0x14(r3)
	  bl        0x2740B4
	  bl        0x3148F8
	  cmplwi    r3, 0
	  beq-      .loc_0x19C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	.loc_0x19C:
	  lfs       f1, 0x2A0(r31)
	  lfs       f0, -0x6008(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1EC
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C0
	  lwz       r0, 0x4(r3)
	  b         .loc_0x1C4
	.loc_0x1C0:
	  li        r0, -0x1
	.loc_0x1C4:
	  cmpwi     r0, 0x13
	  beq-      .loc_0x1EC
	  lwz       r3, 0x270(r31)
	  mr        r4, r31
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	.loc_0x1EC:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80144610
 * Size:	000214
 */
void Navi::addDamage(f32, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r5, -0x64AC(r13)
	  fmr       f31, f1
	  mr        r30, r3
	  mr        r31, r4
	  cmplwi    r5, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x18(r5)
	  cmpwi     r0, 0
	  bne-      .loc_0x1F4
	.loc_0x40:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x1F4
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x5
	  addi      r3, r3, 0x48
	  bl        0xA1964
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0xC00(r3)
	  fmuls     f31, f31, f0
	.loc_0x78:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F4
	  lwz       r3, 0x274(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  b         .loc_0x1F4
	.loc_0xB4:
	  lwz       r3, -0x64AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0xD4
	  li        r3, 0x1
	  b         .loc_0x124
	.loc_0xD4:
	  lbz       r0, 0x2A4(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  li        r3, 0x1
	  b         .loc_0x124
	.loc_0xE8:
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  bne-      .loc_0x100
	  li        r3, 0x1
	  b         .loc_0x124
	.loc_0x100:
	  lwz       r3, 0x274(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x120
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x124
	.loc_0x120:
	  li        r3, 0x1
	.loc_0x124:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1F4
	  lfs       f0, 0x2A0(r30)
	  rlwinm.   r0,r31,0,24,31
	  fsubs     f0, f0, f31
	  stfs      f0, 0x2A0(r30)
	  beq-      .loc_0x1A4
	  lwz       r3, 0x26C(r30)
	  li        r4, 0x80F
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6960(r13)
	  li        r4, 0x1D
	  lhz       r5, 0x2DC(r30)
	  bl        0x10DC18
	  lwz       r3, -0x6958(r13)
	  li        r4, 0x1
	  lhz       r5, 0x2DC(r30)
	  bl        0x10F19C
	  lwz       r3, 0x2D0(r30)
	  lwz       r4, 0x14(r3)
	  bl        0x273EA4
	  bl        0x3146E8
	  cmplwi    r3, 0
	  beq-      .loc_0x1A4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	.loc_0x1A4:
	  lfs       f1, 0x2A0(r30)
	  lfs       f0, -0x6008(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1F4
	  lwz       r3, 0x274(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x1C8
	  lwz       r0, 0x4(r3)
	  b         .loc_0x1CC
	.loc_0x1C8:
	  li        r0, -0x1
	.loc_0x1CC:
	  cmpwi     r0, 0x13
	  beq-      .loc_0x1F4
	  lwz       r3, 0x270(r30)
	  mr        r4, r30
	  li        r5, 0x13
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	.loc_0x1F4:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80144824
 * Size:	00029C
 */
void Navi::enterAllPikis()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1C0(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x1C4(r1)
	  subi      r0, r4, 0x4364
	  stw       r31, 0x1BC(r1)
	  li        r31, 0
	  stw       r30, 0x1B8(r1)
	  stw       r29, 0x1B4(r1)
	  li        r29, 0
	  cmplwi    r29, 0
	  stw       r28, 0x1B0(r1)
	  lwz       r3, -0x6D0C(r13)
	  stw       r29, 0x1C(r1)
	  stw       r0, 0x10(r1)
	  stw       r29, 0x14(r1)
	  stw       r3, 0x18(r1)
	  bne-      .loc_0x60
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1E8
	.loc_0x60:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0xCC
	.loc_0x78:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E8
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	.loc_0xCC:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x78
	  b         .loc_0x1E8
	.loc_0xEC:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r30, r3
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  addi      r3, r1, 0x20
	  addi      r31, r31, 0x1
	  stwx      r30, r3, r29
	  addi      r29, r29, 0x4
	.loc_0x12C:
	  lwz       r0, 0x1C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1E8
	.loc_0x158:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	  b         .loc_0x1CC
	.loc_0x178:
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E8
	  lwz       r3, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x14(r1)
	.loc_0x1CC:
	  lwz       r12, 0x10(r1)
	  addi      r3, r1, 0x10
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x178
	.loc_0x1E8:
	  lwz       r3, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x14(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xEC
	  addi      r29, r1, 0x20
	  li        r30, 0
	  b         .loc_0x274
	.loc_0x214:
	  lwz       r28, 0x0(r29)
	  lbz       r4, 0x2B8(r28)
	  cmpwi     r4, 0x2
	  bgt-      .loc_0x230
	  lwz       r3, -0x6CD0(r13)
	  bl        0x37050
	  b         .loc_0x238
	.loc_0x230:
	  lwz       r3, -0x6CD0(r13)
	  lwz       r3, 0xB0(r3)
	.loc_0x238:
	  cmplwi    r3, 0
	  beq-      .loc_0x26C
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r6, r5, 0x530
	  stw       r3, 0xC(r1)
	  addi      r0, r4, 0x524
	  addi      r5, r1, 0x8
	  stw       r6, 0x8(r1)
	  li        r4, 0x2
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x294(r28)
	  bl        0x52508
	.loc_0x26C:
	  addi      r29, r29, 0x4
	  addi      r30, r30, 0x1
	.loc_0x274:
	  cmpw      r30, r31
	  blt+      .loc_0x214
	  lwz       r0, 0x1C4(r1)
	  lwz       r31, 0x1BC(r1)
	  lwz       r30, 0x1B8(r1)
	  lwz       r29, 0x1B4(r1)
	  lwz       r28, 0x1B0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80144AC0
 * Size:	000014
 */
bool Navi::formationable()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x2D4(r3)
	  extsb     r0, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	00000C
//  */
// void Navi::startKaisanDisable()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80144AD4
 * Size:	000070
 */
void Navi::updateKaisanDisable()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x2D4(r3)
	  extsb.    r0, r0
	  ble-      .loc_0x5C
	  lfs       f1, 0x1E4(r31)
	  lfs       f0, 0x1E8(r31)
	  fmuls     f1, f1, f1
	  lfs       f2, 0x1EC(r31)
	  fmuls     f0, f0, f0
	  fmuls     f2, f2, f2
	  fadds     f0, f1, f0
	  fadds     f1, f2, f0
	  bl        0x2CCCF0
	  lfs       f0, -0x5F88(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5C
	  lbz       r3, 0x2D4(r31)
	  subi      r0, r3, 0x1
	  stb       r0, 0x2D4(r31)
	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80144B44
 * Size:	00000C
 */
void Navi::clearKaisanDisable() { m_disbandTimer = 0; }

/*
 * --INFO--
 * Address:	80144B50
 * Size:	000010
 */
bool Navi::throwable() { return m_throwTimer == 0; }

/*
 * --INFO--
 * Address:	80144B60
 * Size:	00000C
 */
void Navi::startThrowDisable() { m_throwTimer = NAVI_THROWTIMER_LENGTH; }

/*
 * --INFO--
 * Address:	80144B6C
 * Size:	00003C
 */
void Navi::updateThrowDisable()
{
	if (m_throwTimer == 0) {
		return;
	}

	if (m_controller1 && m_controller1->m_padButton.m_mask & PAD_BUTTON_A) {
		m_throwTimer = NAVI_THROWTIMER_LENGTH;
	}

	m_throwTimer--;
}

/*
 * --INFO--
 * Address:	80144BA8
 * Size:	00000C
 */
void Navi::clearThrowDisable() { m_throwTimer = 0; }

/*
 * --INFO--
 * Address:	80144BB4
 * Size:	0002FC
 */
void Navi::holeinAllPikis(Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  stw       r0, 0x1D4(r1)
	  stw       r31, 0x1CC(r1)
	  stw       r30, 0x1C8(r1)
	  mr        r30, r4
	  li        r4, 0
	  stw       r29, 0x1C4(r1)
	  stw       r28, 0x1C0(r1)
	  mr        r28, r3
	  lwz       r3, -0x6D20(r13)
	  bl        0x166EC
	  lwz       r3, 0x254(r28)
	  li        r29, 0
	  lis       r4, 0x804B
	  li        r31, 0
	  subi      r0, r4, 0x437C
	  cmplwi    r29, 0
	  stw       r0, 0x14(r1)
	  stw       r29, 0x20(r1)
	  stw       r29, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x74
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x268
	.loc_0x74:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0xE0
	.loc_0x8C:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x268
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0xE0:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x8C
	  b         .loc_0x268
	.loc_0x100:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r28, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  lwz       r3, 0x290(r28)
	  li        r4, 0x1B
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  lwz       r3, 0x290(r28)
	  li        r4, 0x1B
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  addi      r3, r1, 0x24
	  addi      r31, r31, 0x1
	  stwx      r28, r3, r29
	  addi      r29, r29, 0x4
	  b         .loc_0x1AC
	.loc_0x188:
	  lwz       r3, 0x28C(r28)
	  mr        r4, r28
	  li        r5, 0
	  li        r6, 0
	  bl        0x452E4
	  addi      r3, r1, 0x24
	  addi      r31, r31, 0x1
	  stwx      r28, r3, r29
	  addi      r29, r29, 0x4
	.loc_0x1AC:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1D8
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x268
	.loc_0x1D8:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x24C
	.loc_0x1F8:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x268
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x24C:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1F8
	.loc_0x268:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x100
	  addi      r29, r1, 0x24
	  li        r28, 0
	  b         .loc_0x2D4
	.loc_0x294:
	  lfs       f0, 0x0(r30)
	  addi      r6, r1, 0x8
	  lwz       r4, 0x0(r29)
	  li        r5, 0x1B
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0x28C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x1
	.loc_0x2D4:
	  cmpw      r28, r31
	  blt+      .loc_0x294
	  lwz       r0, 0x1D4(r1)
	  lwz       r31, 0x1CC(r1)
	  lwz       r30, 0x1C8(r1)
	  lwz       r29, 0x1C4(r1)
	  lwz       r28, 0x1C0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80144EC0
 * Size:	0002F8
 */
void Navi::fountainonAllPikis(Vector3f&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1D0(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x1D4(r1)
	  subi      r0, r5, 0x437C
	  stw       r31, 0x1CC(r1)
	  li        r31, 0
	  stw       r30, 0x1C8(r1)
	  mr        r30, r4
	  stw       r29, 0x1C4(r1)
	  li        r29, 0
	  cmplwi    r29, 0
	  stw       r28, 0x1C0(r1)
	  lwz       r3, 0x254(r3)
	  stw       r0, 0x14(r1)
	  stw       r29, 0x20(r1)
	  stw       r29, 0x18(r1)
	  stw       r3, 0x1C(r1)
	  bne-      .loc_0x64
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x264
	.loc_0x64:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0xD0
	.loc_0x7C:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x264
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0xD0:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x7C
	  b         .loc_0x264
	.loc_0xF0:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r28, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A8
	  lbz       r0, 0x2B8(r28)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x1A8
	  lwz       r3, 0x290(r28)
	  li        r4, 0x1C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  lwz       r3, 0x290(r28)
	  li        r4, 0x1C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  addi      r3, r1, 0x24
	  addi      r31, r31, 0x1
	  stwx      r28, r3, r29
	  addi      r29, r29, 0x4
	  b         .loc_0x1A8
	.loc_0x184:
	  lwz       r3, 0x28C(r28)
	  mr        r4, r28
	  li        r5, 0
	  li        r6, 0
	  bl        0x44FDC
	  addi      r3, r1, 0x24
	  addi      r31, r31, 0x1
	  stwx      r28, r3, r29
	  addi      r29, r29, 0x4
	.loc_0x1A8:
	  lwz       r0, 0x20(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1D4
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x264
	.loc_0x1D4:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	  b         .loc_0x248
	.loc_0x1F4:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x264
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r1)
	.loc_0x248:
	  lwz       r12, 0x14(r1)
	  addi      r3, r1, 0x14
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1F4
	.loc_0x264:
	  lwz       r3, 0x1C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x18(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xF0
	  addi      r29, r1, 0x24
	  li        r28, 0
	  b         .loc_0x2D0
	.loc_0x290:
	  lfs       f0, 0x0(r30)
	  addi      r6, r1, 0x8
	  lwz       r4, 0x0(r29)
	  li        r5, 0x1C
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x10(r1)
	  lwz       r3, 0x28C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x1
	.loc_0x2D0:
	  cmpw      r28, r31
	  blt+      .loc_0x290
	  lwz       r0, 0x1D4(r1)
	  lwz       r31, 0x1CC(r1)
	  lwz       r30, 0x1C8(r1)
	  lwz       r29, 0x1C4(r1)
	  lwz       r28, 0x1C0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1D0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801451B8
 * Size:	0002D4
 */
void Navi::demowaitAllPikis()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1C0(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x1C4(r1)
	  subi      r0, r4, 0x437C
	  stw       r31, 0x1BC(r1)
	  li        r31, 0
	  stw       r30, 0x1B8(r1)
	  li        r30, 0
	  cmplwi    r30, 0
	  stw       r29, 0x1B4(r1)
	  lwz       r3, 0x254(r3)
	  stw       r0, 0x8(r1)
	  stw       r30, 0x14(r1)
	  stw       r30, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x25C
	.loc_0x5C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xC8
	.loc_0x74:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x25C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	.loc_0xC8:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x74
	  b         .loc_0x25C
	.loc_0xE8:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r29, r0
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1A0
	  lbz       r0, 0x2B8(r29)
	  cmpwi     r0, 0x5
	  beq-      .loc_0x1A0
	  lwz       r3, 0x290(r29)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x17C
	  lwz       r3, 0x290(r29)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x17C
	  addi      r3, r1, 0x18
	  addi      r31, r31, 0x1
	  stwx      r29, r3, r30
	  addi      r30, r30, 0x4
	  b         .loc_0x1A0
	.loc_0x17C:
	  lwz       r3, 0x28C(r29)
	  mr        r4, r29
	  li        r5, 0
	  li        r6, 0
	  bl        0x44CEC
	  addi      r3, r1, 0x18
	  addi      r31, r31, 0x1
	  stwx      r29, r3, r30
	  addi      r30, r30, 0x4
	.loc_0x1A0:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1CC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x25C
	.loc_0x1CC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x240
	.loc_0x1EC:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x25C
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	.loc_0x240:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1EC
	.loc_0x25C:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE8
	  addi      r30, r1, 0x18
	  li        r29, 0
	  b         .loc_0x2B0
	.loc_0x288:
	  lwz       r4, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r3, 0x28C(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1
	.loc_0x2B0:
	  cmpw      r29, r31
	  blt+      .loc_0x288
	  lwz       r0, 0x1C4(r1)
	  lwz       r31, 0x1BC(r1)
	  lwz       r30, 0x1B8(r1)
	  lwz       r29, 0x1B4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1C0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014548C
 * Size:	000954
 */
void Navi::releasePikis()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x320(r1)
	  mflr      r0
	  stw       r0, 0x324(r1)
	  stfd      f31, 0x310(r1)
	  psq_st    f31,0x318(r1),0,0
	  stfd      f30, 0x300(r1)
	  psq_st    f30,0x308(r1),0,0
	  stfd      f29, 0x2F0(r1)
	  psq_st    f29,0x2F8(r1),0,0
	  stmw      r17, 0x2B4(r1)
	  lwz       r4, -0x6C18(r13)
	  mr        r30, r3
	  lbz       r0, 0x3C(r4)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x928
	.loc_0x44:
	  lwz       r3, -0x6D20(r13)
	  li        r21, 0
	  lhz       r0, 0x2DC(r30)
	  lwz       r12, 0x0(r3)
	  subfic    r4, r0, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x274(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x78
	  lwz       r0, 0x4(r4)
	  b         .loc_0x7C
	.loc_0x78:
	  li        r0, -0x1
	.loc_0x7C:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x88
	  li        r21, 0x1
	.loc_0x88:
	  lis       r5, 0x804B
	  lis       r4, 0x804C
	  subi      r5, r5, 0x5D00
	  stw       r30, 0xC(r1)
	  subi      r0, r4, 0x79E0
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1A4(r12)
	  mtctr     r12
	  bctrl
	  li        r29, 0
	  lwz       r3, 0x254(r30)
	  lis       r4, 0x804B
	  li        r31, 0
	  subi      r0, r4, 0x437C
	  cmplwi    r29, 0
	  stw       r0, 0x40(r1)
	  stw       r29, 0x4C(r1)
	  stw       r29, 0x44(r1)
	  stw       r3, 0x48(r1)
	  bne-      .loc_0xFC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2CC
	.loc_0xFC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x168
	.loc_0x114:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2CC
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	.loc_0x168:
	  lwz       r12, 0x40(r1)
	  addi      r3, r1, 0x40
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x114
	  b         .loc_0x2CC
	.loc_0x188:
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r17, r0
	  bl        0x3904
	  lwz       r3, 0x290(r17)
	  cmplwi    r3, 0
	  beq-      .loc_0x1CC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x210
	.loc_0x1CC:
	  mr        r3, r17
	  lwz       r12, 0x0(r17)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x210
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x108
	  addi      r31, r31, 0x1
	  stwx      r3, r4, r29
	  addi      r29, r29, 0x4
	.loc_0x210:
	  lwz       r0, 0x4C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x23C
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2CC
	.loc_0x23C:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	  b         .loc_0x2B0
	.loc_0x25C:
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x4C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2CC
	  lwz       r3, 0x48(r1)
	  lwz       r4, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x44(r1)
	.loc_0x2B0:
	  lwz       r12, 0x40(r1)
	  addi      r3, r1, 0x40
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x25C
	.loc_0x2CC:
	  lwz       r3, 0x48(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x44(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x188
	  rlwinm.   r0,r21,0,24,31
	  bne-      .loc_0x2FC
	  cmpwi     r31, 0
	  ble-      .loc_0x304
	.loc_0x2FC:
	  lwz       r3, 0x26C(r30)
	  bl        0x31D6D8
	.loc_0x304:
	  cmpwi     r31, 0
	  bne-      .loc_0x314
	  mr        r3, r21
	  b         .loc_0x928
	.loc_0x314:
	  lfs       f0, -0x600C(r2)
	  li        r0, 0
	  addi      r22, r1, 0xA8
	  addi      r23, r1, 0x88
	  stfs      f0, 0xA8(r1)
	  mr        r18, r23
	  mr        r19, r22
	  li        r21, 0
	  stfs      f0, 0xAC(r1)
	  stfs      f0, 0xB0(r1)
	  stw       r0, 0x88(r1)
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xB8(r1)
	  stfs      f0, 0xBC(r1)
	  stw       r0, 0x8C(r1)
	  stfs      f0, 0xC0(r1)
	  stfs      f0, 0xC4(r1)
	  stfs      f0, 0xC8(r1)
	  stw       r0, 0x90(r1)
	  stfs      f0, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  stfs      f0, 0xD4(r1)
	  stw       r0, 0x94(r1)
	  stfs      f0, 0xD8(r1)
	  stfs      f0, 0xDC(r1)
	  stfs      f0, 0xE0(r1)
	  stw       r0, 0x98(r1)
	  stfs      f0, 0xE4(r1)
	  stfs      f0, 0xE8(r1)
	  stfs      f0, 0xEC(r1)
	  stw       r0, 0x9C(r1)
	  stfs      f0, 0xF0(r1)
	  stfs      f0, 0xF4(r1)
	  stfs      f0, 0xF8(r1)
	  stw       r0, 0xA0(r1)
	  stfs      f0, 0xFC(r1)
	  stfs      f0, 0x100(r1)
	  stfs      f0, 0x104(r1)
	  stw       r0, 0xA4(r1)
	.loc_0x3B0:
	  addi      r17, r1, 0x108
	  li        r20, 0
	  b         .loc_0x490
	.loc_0x3BC:
	  cmpwi     r21, 0x2
	  beq-      .loc_0x428
	  lwz       r4, 0x0(r17)
	  lbz       r0, 0x2B8(r4)
	  cmpw      r21, r0
	  bne-      .loc_0x488
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x34
	  lwz       r5, 0x0(r18)
	  lwz       r12, 0x8(r12)
	  addi      r0, r5, 0x1
	  stw       r0, 0x0(r18)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x0(r19)
	  lfs       f0, 0x34(r1)
	  lfs       f1, 0x38(r1)
	  fadds     f2, f2, f0
	  lfs       f0, 0x3C(r1)
	  stfs      f2, 0x0(r19)
	  lfs       f2, 0x4(r19)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r19)
	  lfs       f1, 0x8(r19)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r19)
	  b         .loc_0x488
	.loc_0x428:
	  lwz       r4, 0x0(r17)
	  lbz       r0, 0x2B8(r4)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x488
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x28
	  lwz       r5, 0x90(r1)
	  lwz       r12, 0x8(r12)
	  addi      r0, r5, 0x1
	  stw       r0, 0x90(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC0(r1)
	  lfs       f0, 0x28(r1)
	  lfs       f3, 0xC4(r1)
	  lfs       f2, 0x2C(r1)
	  fadds     f4, f1, f0
	  lfs       f1, 0xC8(r1)
	  lfs       f0, 0x30(r1)
	  fadds     f2, f3, f2
	  stfs      f4, 0xC0(r1)
	  fadds     f0, f1, f0
	  stfs      f2, 0xC4(r1)
	  stfs      f0, 0xC8(r1)
	.loc_0x488:
	  addi      r17, r17, 0x4
	  addi      r20, r20, 0x1
	.loc_0x490:
	  cmpw      r20, r31
	  blt+      .loc_0x3BC
	  addi      r21, r21, 0x1
	  addi      r19, r19, 0xC
	  cmpwi     r21, 0x8
	  addi      r18, r18, 0x4
	  blt+      .loc_0x3B0
	  addi      r21, r1, 0x68
	  mr        r17, r23
	  mr        r18, r22
	  li        r20, 0
	  mr        r19, r21
	.loc_0x4C0:
	  lwz       r0, 0x0(r17)
	  cmpwi     r0, 0
	  ble-      .loc_0x534
	  xoris     r3, r0, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x29C(r1)
	  lfd       f3, -0x5F90(r2)
	  stw       r0, 0x298(r1)
	  lfs       f2, -0x6008(r2)
	  lfd       f0, 0x298(r1)
	  lfs       f1, 0x0(r18)
	  fsubs     f0, f0, f3
	  stw       r3, 0x2A4(r1)
	  stw       r0, 0x2A0(r1)
	  fdivs     f4, f2, f0
	  lfd       f0, 0x2A0(r1)
	  fmuls     f2, f1, f4
	  fsubs     f1, f0, f3
	  stfs      f2, 0x0(r18)
	  lfs       f0, 0x4(r18)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x4(r18)
	  lfs       f0, 0x8(r18)
	  fmuls     f0, f0, f4
	  stfs      f0, 0x8(r18)
	  bl        0x2CBE54
	  lfs       f0, -0x5F84(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x0(r19)
	.loc_0x534:
	  addi      r20, r20, 0x1
	  addi      r18, r18, 0xC
	  cmpwi     r20, 0x8
	  addi      r19, r19, 0x4
	  addi      r17, r17, 0x4
	  blt+      .loc_0x4C0
	  lwz       r3, -0x6D20(r13)
	  lhz       r0, 0x2DC(r30)
	  lwz       r12, 0x0(r3)
	  subfic    r4, r0, 0x1
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  mr        r20, r3
	.loc_0x570:
	  mr        r26, r23
	  mr        r25, r22
	  mr        r24, r21
	  li        r18, 0
	.loc_0x580:
	  lwz       r0, 0x0(r26)
	  cmpwi     r0, 0
	  ble-      .loc_0x730
	  mr        r4, r30
	  addi      r3, r1, 0x1C
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4(r25)
	  lfs       f0, 0x20(r1)
	  lfs       f1, 0x0(r25)
	  fsubs     f30, f2, f0
	  lfs       f0, 0x1C(r1)
	  lfs       f2, 0x8(r25)
	  fsubs     f31, f1, f0
	  lfs       f1, 0x24(r1)
	  fmuls     f0, f30, f30
	  fsubs     f29, f2, f1
	  fmadds    f0, f31, f31, f0
	  fmadds    f1, f29, f29, f0
	  bl        0x2CBDA4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x5FC
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0
	  b         .loc_0x600
	.loc_0x5FC:
	  fmr       f1, f0
	.loc_0x600:
	  lfs       f0, 0x0(r24)
	  lfs       f2, -0x5FF0(r2)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5F88(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x650
	  fsubs     f0, f0, f1
	  lfs       f3, 0x0(r25)
	  fmuls     f2, f31, f0
	  fmuls     f1, f30, f0
	  fmuls     f0, f29, f0
	  fadds     f2, f3, f2
	  stfs      f2, 0x0(r25)
	  lfs       f2, 0x4(r25)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r25)
	  lfs       f1, 0x8(r25)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r25)
	.loc_0x650:
	  mr        r3, r20
	  lwz       r12, 0x0(r20)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x730
	  mr        r4, r20
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r20)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x4(r25)
	  lfs       f0, 0x14(r1)
	  lfs       f1, 0x0(r25)
	  fsubs     f30, f2, f0
	  lfs       f0, 0x10(r1)
	  lfs       f2, 0x8(r25)
	  fsubs     f29, f1, f0
	  lfs       f1, 0x18(r1)
	  fmuls     f0, f30, f30
	  fsubs     f31, f2, f1
	  fmadds    f0, f29, f29, f0
	  fmadds    f1, f31, f31, f0
	  bl        0x2CBCC4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x6DC
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f29, f29, f0
	  fmuls     f30, f30, f0
	  fmuls     f31, f31, f0
	  b         .loc_0x6E0
	.loc_0x6DC:
	  fmr       f1, f0
	.loc_0x6E0:
	  lfs       f0, 0x0(r24)
	  lfs       f2, -0x5FF0(r2)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5F88(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x730
	  fsubs     f0, f0, f1
	  lfs       f3, 0x0(r25)
	  fmuls     f2, f29, f0
	  fmuls     f1, f30, f0
	  fmuls     f0, f31, f0
	  fadds     f2, f3, f2
	  stfs      f2, 0x0(r25)
	  lfs       f2, 0x4(r25)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r25)
	  lfs       f1, 0x8(r25)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r25)
	.loc_0x730:
	  addi      r17, r18, 0x1
	  addi      r29, r1, 0x88
	  mulli     r0, r17, 0xC
	  addi      r28, r1, 0xA8
	  rlwinm    r3,r17,2,0,29
	  addi      r27, r1, 0x68
	  add       r29, r29, r3
	  add       r28, r28, r0
	  add       r27, r27, r3
	  b         .loc_0x850
	.loc_0x758:
	  lwz       r0, 0x0(r26)
	  cmpwi     r0, 0
	  ble-      .loc_0x840
	  lwz       r0, 0x0(r29)
	  cmpwi     r0, 0
	  ble-      .loc_0x840
	  lfs       f2, 0x4(r25)
	  lfs       f0, 0x4(r28)
	  lfs       f1, 0x0(r25)
	  fsubs     f30, f2, f0
	  lfs       f0, 0x0(r28)
	  lfs       f2, 0x8(r25)
	  fsubs     f29, f1, f0
	  lfs       f1, 0x8(r28)
	  fmuls     f0, f30, f30
	  fsubs     f31, f2, f1
	  fmadds    f0, f29, f29, f0
	  fmadds    f1, f31, f31, f0
	  bl        0x2CBBD8
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x7C8
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f29, f29, f0
	  fmuls     f30, f30, f0
	  fmuls     f31, f31, f0
	  b         .loc_0x7CC
	.loc_0x7C8:
	  fmr       f1, f0
	.loc_0x7CC:
	  lfs       f0, 0x0(r24)
	  lfs       f2, 0x0(r27)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5F88(r2)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x840
	  fsubs     f3, f0, f1
	  lfs       f0, 0x0(r25)
	  fmuls     f1, f29, f3
	  fmuls     f2, f30, f3
	  fmuls     f3, f31, f3
	  fadds     f0, f0, f1
	  stfs      f0, 0x0(r25)
	  lfs       f0, 0x4(r25)
	  fadds     f0, f0, f2
	  stfs      f0, 0x4(r25)
	  lfs       f0, 0x8(r25)
	  fadds     f0, f0, f3
	  stfs      f0, 0x8(r25)
	  lfs       f0, 0x0(r28)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x0(r28)
	  lfs       f0, 0x4(r28)
	  fsubs     f0, f0, f2
	  stfs      f0, 0x4(r28)
	  lfs       f0, 0x8(r28)
	  fsubs     f0, f0, f3
	  stfs      f0, 0x8(r28)
	.loc_0x840:
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0xC
	  addi      r27, r27, 0x4
	  addi      r17, r17, 0x1
	.loc_0x850:
	  cmpwi     r17, 0x8
	  blt+      .loc_0x758
	  addi      r18, r18, 0x1
	  addi      r25, r25, 0xC
	  cmpwi     r18, 0x8
	  addi      r24, r24, 0x4
	  addi      r26, r26, 0x4
	  blt+      .loc_0x580
	  addi      r19, r19, 0x1
	  cmpwi     r19, 0x4
	  blt+      .loc_0x570
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r20, r1, 0x108
	  addi      r19, r1, 0x68
	  addi      r18, r4, 0x530
	  addi      r17, r3, 0x518
	  li        r21, 0
	  b         .loc_0x914
	.loc_0x89C:
	  lwz       r8, 0x0(r20)
	  addi      r9, r1, 0xA8
	  li        r3, 0x1
	  li        r4, 0x2800
	  lbz       r7, 0x2B8(r8)
	  li        r5, 0x5A
	  li        r6, 0
	  mulli     r0, r7, 0xC
	  rlwinm    r7,r7,2,0,29
	  stw       r18, 0x50(r1)
	  lfsx      f3, r19, r7
	  add       r9, r9, r0
	  stw       r17, 0x50(r1)
	  lfs       f2, 0x0(r9)
	  lfs       f1, 0x4(r9)
	  lfs       f0, 0x8(r9)
	  stb       r3, 0x54(r1)
	  stfs      f2, 0x58(r1)
	  stfs      f1, 0x5C(r1)
	  stfs      f0, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  lwz       r3, 0x250(r8)
	  bl        0x31C800
	  lwz       r3, 0x0(r20)
	  addi      r5, r1, 0x50
	  li        r4, 0x1
	  lwz       r3, 0x294(r3)
	  bl        0x51200
	  addi      r20, r20, 0x4
	  addi      r21, r21, 0x1
	.loc_0x914:
	  cmpw      r21, r31
	  blt+      .loc_0x89C
	  li        r0, 0x3C
	  li        r3, 0x1
	  stb       r0, 0x2D4(r30)
	.loc_0x928:
	  psq_l     f31,0x318(r1),0,0
	  lfd       f31, 0x310(r1)
	  psq_l     f30,0x308(r1),0,0
	  lfd       f30, 0x300(r1)
	  psq_l     f29,0x2F8(r1),0,0
	  lfd       f29, 0x2F0(r1)
	  lmw       r17, 0x2B4(r1)
	  lwz       r0, 0x324(r1)
	  mtlr      r0
	  addi      r1, r1, 0x320
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80145DE8
 * Size:	000920
 */
void Navi::makeCStick(bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x190(r1)
	  mflr      r0
	  stw       r0, 0x194(r1)
	  stfd      f31, 0x180(r1)
	  psq_st    f31,0x188(r1),0,0
	  stfd      f30, 0x170(r1)
	  psq_st    f30,0x178(r1),0,0
	  stfd      f29, 0x160(r1)
	  psq_st    f29,0x168(r1),0,0
	  stfd      f28, 0x150(r1)
	  psq_st    f28,0x158(r1),0,0
	  stfd      f27, 0x140(r1)
	  psq_st    f27,0x148(r1),0,0
	  stfd      f26, 0x130(r1)
	  psq_st    f26,0x138(r1),0,0
	  stfd      f25, 0x120(r1)
	  psq_st    f25,0x128(r1),0,0
	  stfd      f24, 0x110(r1)
	  psq_st    f24,0x118(r1),0,0
	  stfd      f23, 0x100(r1)
	  psq_st    f23,0x108(r1),0,0
	  stfd      f22, 0xF0(r1)
	  psq_st    f22,0xF8(r1),0,0
	  stfd      f21, 0xE0(r1)
	  psq_st    f21,0xE8(r1),0,0
	  stw       r31, 0xDC(r1)
	  stw       r30, 0xD8(r1)
	  mr        r31, r3
	  lfs       f22, -0x600C(r2)
	  lwz       r5, 0x278(r3)
	  mr        r30, r4
	  fmr       f21, f22
	  cmplwi    r5, 0
	  beq-      .loc_0xA4
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xA4
	  lfs       f0, 0x58(r5)
	  lfs       f21, 0x5C(r5)
	  fneg      f22, f0
	.loc_0xA4:
	  lwz       r4, 0x280(r31)
	  addi      r3, r1, 0x80
	  bl        0x2D4414
	  lfs       f27, 0x80(r1)
	  addi      r3, r1, 0x74
	  lfs       f25, 0x88(r1)
	  lwz       r4, 0x280(r31)
	  bl        0x2D43E0
	  lfs       f31, 0x74(r1)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x78(r1)
	  lfs       f29, 0x7C(r1)
	  lwz       r4, 0x280(r31)
	  bl        0x2D4414
	  lfs       f26, -0x600C(r2)
	  lfs       f24, 0x68(r1)
	  fmadds    f0, f27, f27, f26
	  lfs       f28, 0x6C(r1)
	  lfs       f23, 0x70(r1)
	  fmadds    f1, f25, f25, f0
	  bl        0x2CB928
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x118
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f27, f27, f0
	  fmuls     f26, f26, f0
	  fmuls     f25, f25, f0
	.loc_0x118:
	  fcmpo     cr0, f30, f28
	  ble-      .loc_0x124
	  b         .loc_0x12C
	.loc_0x124:
	  fmr       f24, f31
	  fmr       f23, f29
	.loc_0x12C:
	  lfs       f28, -0x600C(r2)
	  fmadds    f0, f24, f24, f28
	  fmadds    f1, f23, f23, f0
	  bl        0x2CB8E4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x15C
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f24, f24, f0
	  fmuls     f28, f28, f0
	  fmuls     f23, f23, f0
	.loc_0x15C:
	  fmuls     f5, f27, f22
	  rlwinm.   r0,r30,0,24,31
	  fmuls     f4, f24, f21
	  fmuls     f0, f23, f21
	  fmuls     f1, f25, f22
	  fmuls     f3, f26, f22
	  fmuls     f2, f28, f21
	  fadds     f23, f5, f4
	  fadds     f25, f1, f0
	  fadds     f24, f3, f2
	  beq-      .loc_0x194
	  lfs       f23, -0x600C(r2)
	  fmr       f24, f23
	  fmr       f25, f23
	.loc_0x194:
	  fmuls     f0, f24, f24
	  lfs       f1, -0x600C(r2)
	  li        r0, 0
	  stfs      f1, 0x2EC(r31)
	  fmadds    f0, f23, f23, f0
	  stfs      f1, 0x2F0(r31)
	  fmadds    f28, f25, f25, f0
	  stfs      f1, 0x2F4(r31)
	  stb       r0, 0x30D(r31)
	  fmr       f1, f28
	  bl        0x2CB860
	  lfs       f0, -0x5F80(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x338
	  li        r0, 0x1
	  lfs       f0, -0x600C(r2)
	  stb       r0, 0x30D(r31)
	  fmr       f1, f23
	  fmr       f2, f25
	  stfs      f0, 0x308(r31)
	  stfs      f23, 0x2EC(r31)
	  stfs      f24, 0x2F0(r31)
	  stfs      f25, 0x2F4(r31)
	  bl        0x2CB804
	  lwz       r3, 0x254(r31)
	  fmr       f29, f1
	  lfs       f30, 0xF0(r3)
	  bl        0x2CB7B0
	  fmr       f27, f1
	  fmr       f1, f29
	  bl        0x2CB73C
	  fmr       f26, f1
	  fmr       f1, f30
	  bl        0x2CB798
	  fmr       f22, f1
	  fmr       f1, f30
	  bl        0x2CB724
	  fmr       f21, f1
	  lfs       f1, -0x5F78(r2)
	  bl        0x2CB780
	  lfs       f0, -0x600C(r2)
	  fmadds    f0, f26, f21, f0
	  fmadds    f0, f27, f22, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x260
	  fmr       f1, f29
	  fmr       f2, f30
	  bl        0x2CBBC4
	  lfs       f0, -0x5F7C(r2)
	  fmadds    f1, f0, f1, f30
	  b         .loc_0x264
	.loc_0x260:
	  fmr       f1, f29
	.loc_0x264:
	  bl        0x2CBB84
	  fmr       f21, f1
	  fmr       f1, f28
	  stfs      f21, 0x2F8(r31)
	  bl        0x2CB7A8
	  lfs       f0, -0x5F80(r2)
	  lfs       f2, -0x5F74(r2)
	  fsubs     f1, f1, f0
	  lfs       f0, -0x5F6C(r2)
	  fdivs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2A0
	  lfs       f1, -0x6008(r2)
	  b         .loc_0x2AC
	.loc_0x2A0:
	  fdivs     f0, f1, f0
	  lfs       f1, -0x5F70(r2)
	  fmuls     f1, f1, f0
	.loc_0x2AC:
	  lwz       r3, 0x254(r31)
	  lwz       r4, 0xC8(r3)
	  bl        0x5005C
	  lbz       r3, 0x258(r31)
	  cmplwi    r3, 0x28
	  bge-      .loc_0x2CC
	  addi      r0, r3, 0x1
	  stb       r0, 0x258(r31)
	.loc_0x2CC:
	  mr        r4, r31
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x5C(r1)
	  fmr       f1, f21
	  lfs       f2, 0x60(r1)
	  addi      r4, r1, 0xCC
	  lfs       f0, 0x64(r1)
	  addi      r5, r31, 0x200
	  stfs      f3, 0xCC(r1)
	  stfs      f2, 0xD0(r1)
	  stfs      f0, 0xD4(r1)
	  lbz       r0, 0x258(r31)
	  lwz       r3, 0x254(r31)
	  cmplwi    r0, 0x28
	  blt-      .loc_0x320
	  lfs       f2, -0x5F68(r2)
	  b         .loc_0x324
	.loc_0x320:
	  lfs       f2, -0x6008(r2)
	.loc_0x324:
	  bl        0x4F1E0
	  li        r0, 0
	  stb       r0, 0x2FC(r31)
	  stb       r0, 0x30C(r31)
	  b         .loc_0x8A4
	.loc_0x338:
	  li        r0, 0
	  stb       r0, 0x258(r31)
	  lbz       r0, 0x2FC(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x354
	  li        r0, 0x1
	  stb       r0, 0x30C(r31)
	.loc_0x354:
	  lbz       r0, 0x2FC(r31)
	  lfs       f1, -0x5FA0(r2)
	  lfs       f0, 0x1FC(r31)
	  cmplwi    r0, 0
	  fadds     f21, f1, f0
	  bne-      .loc_0x40C
	  lfs       f1, 0x1E4(r31)
	  lfs       f0, 0x1E8(r31)
	  fmuls     f1, f1, f1
	  lfs       f2, 0x1EC(r31)
	  fmuls     f0, f0, f0
	  fmuls     f2, f2, f2
	  fadds     f0, f1, f0
	  fadds     f1, f2, f0
	  bl        0x2CB690
	  lfs       f0, -0x5FE0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x40C
	  lwz       r3, 0x274(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x3B0
	  lwz       r0, 0x4(r3)
	  b         .loc_0x3B4
	.loc_0x3B0:
	  li        r0, -0x1
	.loc_0x3B4:
	  cmpwi     r0, 0x6
	  beq-      .loc_0x40C
	  mr        r4, r31
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r31)
	  lfs       f21, 0x2F8(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x50(r1)
	  fmr       f1, f21
	  lfs       f3, 0x54(r1)
	  addi      r4, r1, 0xC0
	  lfs       f0, 0x58(r1)
	  addi      r5, r31, 0x200
	  stfs      f2, 0xC0(r1)
	  lfs       f2, -0x6008(r2)
	  stfs      f3, 0xC4(r1)
	  stfs      f0, 0xC8(r1)
	  lwz       r3, 0x254(r31)
	  bl        0x4F100
	  b         .loc_0x414
	.loc_0x40C:
	  li        r0, 0x1
	  stb       r0, 0x2FC(r31)
	.loc_0x414:
	  lwz       r3, 0x254(r31)
	  lfs       f1, -0x600C(r2)
	  lwz       r4, 0xC8(r3)
	  bl        0x4FEF0
	  lwz       r3, 0x254(r31)
	  li        r0, 0
	  lis       r4, 0x804B
	  lfs       f22, -0x5F64(r2)
	  subi      r4, r4, 0x437C
	  cmplwi    r0, 0
	  stw       r4, 0xB0(r1)
	  stw       r0, 0xBC(r1)
	  stw       r0, 0xB4(r1)
	  stw       r3, 0xB8(r1)
	  bne-      .loc_0x468
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB4(r1)
	  b         .loc_0x63C
	.loc_0x468:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB4(r1)
	  b         .loc_0x4D4
	.loc_0x480:
	  lwz       r3, 0xB8(r1)
	  lwz       r4, 0xB4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xBC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x63C
	  lwz       r3, 0xB8(r1)
	  lwz       r4, 0xB4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB4(r1)
	.loc_0x4D4:
	  lwz       r12, 0xB0(r1)
	  addi      r3, r1, 0xB0
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x480
	  b         .loc_0x63C
	.loc_0x4F4:
	  lwz       r3, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  bl        0x2C40
	  mr        r4, r31
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x48(r1)
	  lfs       f0, 0x3C(r1)
	  lfs       f1, 0x44(r1)
	  fsubs     f3, f2, f0
	  lfs       f0, 0x38(r1)
	  lfs       f2, 0x4C(r1)
	  fsubs     f4, f1, f0
	  lfs       f1, 0x40(r1)
	  fmuls     f0, f3, f3
	  fsubs     f1, f2, f1
	  fmadds    f0, f4, f4, f0
	  fmadds    f1, f1, f1, f0
	  bl        0x2CB4AC
	  fcmpo     cr0, f1, f22
	  bge-      .loc_0x580
	  fmr       f22, f1
	.loc_0x580:
	  lwz       r0, 0xBC(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x5AC
	  lwz       r3, 0xB8(r1)
	  lwz       r4, 0xB4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB4(r1)
	  b         .loc_0x63C
	.loc_0x5AC:
	  lwz       r3, 0xB8(r1)
	  lwz       r4, 0xB4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB4(r1)
	  b         .loc_0x620
	.loc_0x5CC:
	  lwz       r3, 0xB8(r1)
	  lwz       r4, 0xB4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xBC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x63C
	  lwz       r3, 0xB8(r1)
	  lwz       r4, 0xB4(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xB4(r1)
	.loc_0x620:
	  lwz       r12, 0xB0(r1)
	  addi      r3, r1, 0xB0
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x5CC
	.loc_0x63C:
	  lwz       r3, 0xB8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xB4(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x4F4
	  lwz       r3, -0x6D20(r13)
	  lwz       r3, 0xC8(r3)
	  lfs       f0, 0x6B0(r3)
	  fcmpo     cr0, f22, f0
	  bge-      .loc_0x69C
	  lwz       r0, 0x300(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x68C
	  lwz       r3, 0x304(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x304(r31)
	  b         .loc_0x704
	.loc_0x68C:
	  li        r0, 0
	  stw       r0, 0x304(r31)
	  stw       r0, 0x300(r31)
	  b         .loc_0x704
	.loc_0x69C:
	  lfs       f0, 0x6D8(r3)
	  fcmpo     cr0, f22, f0
	  bge-      .loc_0x6D8
	  lwz       r0, 0x300(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x6C4
	  lwz       r3, 0x304(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x304(r31)
	  b         .loc_0x704
	.loc_0x6C4:
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x304(r31)
	  stw       r0, 0x300(r31)
	  b         .loc_0x704
	.loc_0x6D8:
	  lwz       r0, 0x300(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x6F4
	  lwz       r3, 0x304(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x304(r31)
	  b         .loc_0x704
	.loc_0x6F4:
	  li        r3, 0
	  li        r0, 0x2
	  stw       r3, 0x304(r31)
	  stw       r0, 0x300(r31)
	.loc_0x704:
	  lwz       r0, 0x300(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x71C
	  li        r0, 0x1
	  stb       r0, 0x2FD(r31)
	  b         .loc_0x8A4
	.loc_0x71C:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x7F4
	  li        r0, 0x1
	  mr        r4, r31
	  stb       r0, 0x2FD(r31)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x254(r31)
	  lfs       f0, 0x30(r1)
	  lfs       f2, 0xA8(r3)
	  lfs       f1, 0xA4(r3)
	  fsubs     f3, f2, f0
	  lfs       f0, 0x2C(r1)
	  lfs       f2, 0xAC(r3)
	  fsubs     f21, f1, f0
	  lfs       f1, 0x34(r1)
	  fmuls     f0, f3, f3
	  fsubs     f22, f2, f1
	  fmadds    f0, f21, f21, f0
	  fmadds    f1, f22, f22, f0
	  bl        0x2CB2A4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x798
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f21, f21, f0
	  fmuls     f22, f22, f0
	.loc_0x798:
	  fmr       f1, f21
	  fmr       f2, f22
	  bl        0x2CB254
	  lwz       r12, 0x0(r31)
	  fmr       f21, f1
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x20(r1)
	  fmr       f1, f21
	  lfs       f3, 0x24(r1)
	  addi      r4, r1, 0xA4
	  lfs       f0, 0x28(r1)
	  addi      r5, r31, 0x200
	  stfs      f2, 0xA4(r1)
	  lfs       f2, -0x6008(r2)
	  stfs      f3, 0xA8(r1)
	  stfs      f0, 0xAC(r1)
	  lwz       r3, 0x254(r31)
	  bl        0x4EF28
	  b         .loc_0x8A4
	.loc_0x7F4:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x8A4
	  li        r0, 0
	  stb       r0, 0x30C(r31)
	  lbz       r0, 0x2FD(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x85C
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f3, 0x14(r1)
	  fmr       f1, f21
	  lfs       f2, 0x18(r1)
	  addi      r4, r1, 0x98
	  lfs       f0, 0x1C(r1)
	  addi      r5, r31, 0x200
	  stfs      f3, 0x98(r1)
	  stfs      f2, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  lwz       r3, 0x254(r31)
	  bl        0x4F81C
	  li        r0, 0
	  stb       r0, 0x2FD(r31)
	.loc_0x85C:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  fmr       f1, f21
	  lfs       f3, 0xC(r1)
	  addi      r4, r1, 0x8C
	  lfs       f0, 0x10(r1)
	  addi      r5, r31, 0x200
	  stfs      f2, 0x8C(r1)
	  lfs       f2, -0x6008(r2)
	  stfs      f3, 0x90(r1)
	  stfs      f0, 0x94(r1)
	  lwz       r3, 0x254(r31)
	  bl        0x4EC64
	.loc_0x8A4:
	  stfs      f23, 0x2E0(r31)
	  stfs      f24, 0x2E4(r31)
	  stfs      f25, 0x2E8(r31)
	  psq_l     f31,0x188(r1),0,0
	  lfd       f31, 0x180(r1)
	  psq_l     f30,0x178(r1),0,0
	  lfd       f30, 0x170(r1)
	  psq_l     f29,0x168(r1),0,0
	  lfd       f29, 0x160(r1)
	  psq_l     f28,0x158(r1),0,0
	  lfd       f28, 0x150(r1)
	  psq_l     f27,0x148(r1),0,0
	  lfd       f27, 0x140(r1)
	  psq_l     f26,0x138(r1),0,0
	  lfd       f26, 0x130(r1)
	  psq_l     f25,0x128(r1),0,0
	  lfd       f25, 0x120(r1)
	  psq_l     f24,0x118(r1),0,0
	  lfd       f24, 0x110(r1)
	  psq_l     f23,0x108(r1),0,0
	  lfd       f23, 0x100(r1)
	  psq_l     f22,0xF8(r1),0,0
	  lfd       f22, 0xF0(r1)
	  psq_l     f21,0xE8(r1),0,0
	  lfd       f21, 0xE0(r1)
	  lwz       r31, 0xDC(r1)
	  lwz       r0, 0x194(r1)
	  lwz       r30, 0xD8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x190
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146708
 * Size:	000064
 */
bool Navi::isCStickNetural()
{
	NaviParms::Parms& parms = naviMgr->m_naviParms->m_naviParms;
	return m_cStickPosition.qLength() <= parms.m_cStickNeutralThresh.m_value;
}

/*
 * --INFO--
 * Address:	8014676C
 * Size:	0002BC
 */
void Navi::findNextThrowPiki()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r5, 0x2A8(r3)
	  lis       r4, 0x804B
	  cmplwi    r5, 0
	  lfs       f29, -0x5FD8(r2)
	  lwz       r3, 0x254(r3)
	  subi      r0, r4, 0x437C
	  stw       r0, 0x20(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x78
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x26C
	.loc_0x78:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0xE4
	.loc_0x90:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	.loc_0xE4:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x90
	  b         .loc_0x26C
	.loc_0x104:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r31)
	  mr        r30, r3
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f30, f0
	  fsubs     f1, f31, f1
	  fmuls     f0, f0, f0
	  fmadds    f1, f1, f1, f0
	  bl        0x2CAF2C
	  lwz       r0, 0x2C4(r30)
	  fmr       f30, f1
	  cmplw     r0, r31
	  bne-      .loc_0x1B0
	  fcmpo     cr0, f30, f29
	  bge-      .loc_0x1B0
	  mr        r3, r30
	  bl        0x263C
	  cmpwi     r3, 0
	  bne-      .loc_0x1B0
	  mr        r3, r30
	  bl        0x2B1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  stw       r30, 0x2A8(r31)
	  fmr       f29, f30
	.loc_0x1B0:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x26C
	.loc_0x1DC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x250
	.loc_0x1FC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x26C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	.loc_0x250:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1FC
	.loc_0x26C:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x104
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146A28
 * Size:	00002C
 */
u32 Navi::ogGetNextThrowPiki()
{
	Piki* nextPiki = m_nextThrowPiki;
	if (nextPiki) {
		return 0;
	}

	return 3 * nextPiki->m_pikiKind + nextPiki->m_happaKind + 1;
	/*
	.loc_0x0:
	  lwz       r3, 0x2A8(r3)
	  cmplwi    r3, 0
	  bne-      .loc_0x14
	  li        r3, 0
	  blr
	.loc_0x14:
	  lbz       r0, 0x2B8(r3)
	  lbz       r3, 0x2B9(r3)
	  mulli     r0, r0, 0x3
	  add       r3, r0, r3
	  addi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146A54
 * Size:	0002C0
 */
void Navi::throwPiki(Piki* piki, Vector3f& destination)
{
	// wtf?
	// m_soundObj->_28.x = 0; _28 is wrong type

	Vector3f pos = getPosition();
	pos.z += -15.0f * cos(m_faceDir);
	pos.x += -15.0f * sin(m_faceDir);
	pos.y += 10.0f;
	piki->setPosition(pos, false);

	Vector3f pikiPos = piki->getPosition();
	// some bullshit

	Vector3f vec(pikiPos.x, 0.0f, pikiPos.z);
	f32 length = vec.normalise();

	m_position2 += vec * length;
	m_velocity = m_position2;
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r3, 0x26C(r3)
	  mr        r31, r5
	  li        r4, 0x806
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lfs       f1, 0x1FC(r29)
	  bl        -0x77834
	  frsp      f29, f1
	  lfs       f1, 0x1FC(r29)
	  bl        -0x772D8
	  frsp      f6, f1
	  lfs       f2, -0x5F60(r2)
	  lfs       f1, 0x24(r1)
	  mr        r3, r30
	  lfs       f0, -0x600C(r2)
	  fmuls     f3, f2, f29
	  fadds     f5, f1, f0
	  lfs       f4, 0x28(r1)
	  lfs       f0, -0x6014(r2)
	  fmuls     f1, f2, f6
	  lfs       f2, 0x20(r1)
	  fadds     f3, f4, f3
	  fadds     f1, f2, f1
	  stfs      f5, 0x24(r1)
	  fadds     f0, f5, f0
	  addi      r4, r1, 0x20
	  stfs      f3, 0x28(r1)
	  li        r5, 0
	  stfs      f1, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  bl        -0xB9A0
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r31)
	  lfs       f0, 0x10(r1)
	  lfs       f1, 0x0(r31)
	  fsubs     f29, f2, f0
	  lfs       f0, 0x8(r1)
	  fsubs     f30, f1, f0
	  fmuls     f0, f29, f29
	  fmadds    f1, f30, f30, f0
	  bl        0x2CAC80
	  fmr       f31, f1
	  fmr       f1, f30
	  fmr       f2, f29
	  bl        0x2CAC48
	  fmr       f29, f1
	  bl        0x2CB034
	  stfs      f1, 0x1FC(r30)
	  mr        r3, r30
	  lfs       f1, -0x6018(r2)
	  lwz       r4, -0x6D20(r13)
	  lwz       r4, 0xC8(r4)
	  lfs       f0, 0x638(r4)
	  fmuls     f30, f1, f0
	  bl        0x2A28
	  lbz       r0, 0x2B8(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x180
	  lfs       f0, -0x6018(r2)
	  fmuls     f30, f30, f0
	.loc_0x180:
	  fdivs     f0, f1, f30
	  lwz       r3, -0x6C10(r13)
	  lfs       f2, -0x6018(r2)
	  cmpwi     r0, 0x3
	  lfs       f3, 0x28(r3)
	  fmuls     f1, f2, f3
	  fmadds    f30, f30, f1, f0
	  fdivs     f3, f30, f3
	  bne-      .loc_0x1A8
	  fmuls     f3, f3, f2
	.loc_0x1A8:
	  lfs       f0, -0x5F5C(r2)
	  fmr       f1, f29
	  fmuls     f0, f0, f3
	  fdivs     f28, f31, f0
	  bl        0x2CAB8C
	  fmuls     f31, f28, f1
	  fmr       f1, f29
	  bl        0x2CAB18
	  fmuls     f2, f28, f1
	  lfs       f29, -0x600C(r2)
	  lfs       f1, -0x6008(r2)
	  fmuls     f0, f29, f29
	  stfs      f2, 0x200(r30)
	  stfs      f30, 0x204(r30)
	  stfs      f31, 0x208(r30)
	  lfs       f2, 0x200(r29)
	  lfs       f3, 0x208(r29)
	  fmuls     f30, f2, f1
	  fmuls     f31, f3, f1
	  fmadds    f0, f30, f30, f0
	  fmadds    f1, f31, f31, f0
	  bl        0x2CABB4
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x224
	  lfs       f0, -0x6008(r2)
	  fdivs     f0, f0, f1
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0
	  fmuls     f31, f31, f0
	  b         .loc_0x228
	.loc_0x224:
	  fmr       f1, f0
	.loc_0x228:
	  lfs       f2, 0x308(r29)
	  lfs       f0, -0x600C(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x23C
	  fmr       f1, f0
	.loc_0x23C:
	  fmuls     f2, f30, f1
	  lfs       f0, 0x200(r30)
	  fmuls     f3, f29, f1
	  fmuls     f1, f31, f1
	  fadds     f0, f0, f2
	  stfs      f0, 0x200(r30)
	  lfs       f0, 0x204(r30)
	  fadds     f0, f0, f3
	  stfs      f0, 0x204(r30)
	  lfs       f0, 0x208(r30)
	  fadds     f0, f0, f1
	  stfs      f0, 0x208(r30)
	  lfs       f0, 0x200(r30)
	  stfs      f0, 0x1E4(r30)
	  lfs       f0, 0x204(r30)
	  stfs      f0, 0x1E8(r30)
	  lfs       f0, 0x208(r30)
	  stfs      f0, 0x1EC(r30)
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146D14
 * Size:	000008
 */
bool Navi::commandOn() { return m_commandOn2; }
} // namespace Game

/*
 * --INFO--
 * Address:	80146D1C
 * Size:	00000C
 */
char* PikiAI::ActFreeArg::getName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x37C0
	  blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	80146D40
 * Size:	00000C
 */
const char* NaviDamageArg::getName()
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x3794
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146D4C
 * Size:	000038
 */
Game::Onyon* Iterator<Game::Onyon>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146D84
 * Size:	0000E4
 */
void Iterator<Game::Onyon>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0
	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4
	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146E68
 * Size:	0000DC
 */
void Iterator<Game::Onyon>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8
	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC
	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58
	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146F44
 * Size:	000038
 */
Game::BaseItem* Iterator<Game::BaseItem>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80146F7C
 * Size:	0000E4
 */
void Iterator<Game::BaseItem>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0
	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4
	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147060
 * Size:	0000DC
 */
void Iterator<Game::BaseItem>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8
	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC
	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58
	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014713C
 * Size:	000008
 */
bool GameMessage::actCommon(BaseGameSection*)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147144
 * Size:	000008
 */
bool GameMessage::actSingle(SingleGameSection*)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014714C
 * Size:	000008
 */
bool GameMessage::actVs(VsGameSection*)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

// /*
//  * --INFO--
//  * Address:	8014734C
//  * Size:	00001C
//  */
// void Navi::setVelocity(Vector3f& vel)
// {
// 	/*
// 	.loc_0x0:
// 	  lfs       f0, 0x0(r4)
// 	  stfs      f0, 0x1E4(r3)
// 	  lfs       f0, 0x4(r4)
// 	  stfs      f0, 0x1E8(r3)
// 	  lfs       f0, 0x8(r4)
// 	  stfs      f0, 0x1EC(r3)
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80147368
 * Size:	000008
 */
// char* Navi::getCreatureName()
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r2, 0x5F58
// 	  blr
// 	*/
// }

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	80147370
 * Size:	00009C
 */
bool TFueact::create(Arg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  addi      r3, r30, 0x4
	  lwz       r12, 0x4(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  lwz       r12, 0x1C(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  addi      r3, r30, 0x34
	  li        r4, 0
	  lwz       r12, 0x34(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r31, 0x1
	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014740C
 * Size:	000064
 */
void TFueact::fade()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1C
	  lwz       r12, 0x1C(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x34
	  lwz       r12, 0x34(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147470
 * Size:	00003C
 */
void TFueactCircle::fade()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x65E8(r13)
	  lwz       r4, 0x14(r31)
	  bl        0x274620
	  li        r0, 0
	  stw       r0, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801474AC
 * Size:	000064
 */
void TFueact::forceKill()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x4
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x1C
	  lwz       r12, 0x1C(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x34
	  lwz       r12, 0x34(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147510
 * Size:	00003C
 */
void TFueactCircle::forceKill()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, -0x65E8(r13)
	  lwz       r4, 0x14(r31)
	  bl        0x274554
	  li        r0, 0
	  stw       r0, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
} // namespace efx

/*
 * --INFO--
 * Address:	8014754C
 * Size:	000004
 */
void Game::StateMachine<Game::Navi>::init(Game::Navi*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147550
 * Size:	000030
 */
void Delegate1<Game::Navi, Game::CellObject*>::invoke(Game::CellObject*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x85A44
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147580
 * Size:	00009C
 */
void Game::StateMachine<Game::Navi>::transit(Game::Navi*, int, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x274(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)
	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60
	.loc_0x5C:
	  b         .loc_0x5C
	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x274(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014761C
 * Size:	000004
 */
void Game::FSMState<Game::Navi>::init(Game::Navi*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147620
 * Size:	000004
 */
void Game::FSMState<Game::Navi>::cleanup(Game::Navi*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147624
 * Size:	000038
 */
void Game::StateMachine<Game::Navi>::exec(Game::Navi*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x274(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8014765C
 * Size:	000004
 */
void Game::FSMState<Game::Navi>::exec(Game::Navi*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80147660
 * Size:	000028
 */
void __sinit_navi_cpp()
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6D70(r13)
	  stfsu     f0, 0x4E0(r3)
	  stfs      f0, -0x6D6C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}