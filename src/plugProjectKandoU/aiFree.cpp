#include "Dolphin/string.h"
#include "Dolphin/rand.h"

#include "JSystem/JUT/JUTException.h"

#include "Game/Piki.h"
#include "PikiAI.h"

/*
 * --INFO--
 * Address:	8019FF38
 * Size:	0000D0
 */
PikiAI::ActFree::ActFree(Game::Piki* parent)
    : Action(parent)
    , m_actGather(new ActGather(parent))
    , m_actBore(new ActBore(parent))
{
	m_info = "Free";
}

/*
 * --INFO--
 * Address:	801A0008
 * Size:	000190
 */
void PikiAI::ActFree::init(PikiAI::ActionArg* arg)
{
	m_parent->m_navi = nullptr;
	m_parent->m_soundObj->becomeFree();

	PikiAI::ActFreeArg* freeArg = (PikiAI::ActFreeArg*)arg;

	m_currentAction = PIKI_ACT_FREE_DEFAULT;
	if (freeArg) {
		char* name     = arg->getName();
		bool isFreeArg = strcmp("ActFreeArg", name) == 0;
		P2ASSERTLINE(119, !isFreeArg);

		freeArg = (PikiAI::ActFreeArg*)arg;
		if (freeArg->_04) {
			m_currentAction = PIKI_ACT_FREE_GATHER;
		}
	}

	switch (m_currentAction) {
	case PIKI_ACT_FREE_GATHER:
		GatherActionArg gatherArg(freeArg);
		m_actGather->init(&gatherArg);
		break;
	default:
		m_parent->startMotion(31, 31, 0, 0);
		m_parent->m_velocity = Vector3f(0, 0, 0);
		break;
	}

	m_parent->setPastel(true);
	m_parent->setFreeLightEffect(true);
	m_parent->attachRadar(true);

	m_delayTimer = 0;
}

/*
 * --INFO--
 * Address:	801A0198
 * Size:	0001D0
 */
s32 PikiAI::ActFree::exec(void)
{
	switch (m_currentAction) {
	case PIKI_ACT_FREE_GATHER: {
		// If we finished the gather state
		if (m_actGather->exec() == 0) {
			m_currentAction = PIKI_ACT_FREE_DEFAULT;

			// Wait for a bit of time to cool off
			u16 frameDelay = 30 * randFloat();
			m_delayTimer   = frameDelay + 150;
		}
		break;
	}

	case PIKI_ACT_FREE_BORE: {
		s32 status = m_actBore->exec();

		// Let's try invoke the AI, and finish the boredom if we succeed
		Game::Piki::InvokeAIFreeArg invokeArg(0, 0);
		invokeArg._01 = 1;
		if (m_parent->invokeAIFree(invokeArg)) {
			m_actBore->finish();
		}

		// Assuming we finished or failed being bored, we'll be free again
		if (status == 0 || status == 2) {
			m_currentAction = PIKI_ACT_FREE_DEFAULT;
			m_delayTimer    = 90;
		}
		break;
	}

	default: {
		// We aren't moving anywhere anymore
		m_parent->m_velocity = Vector3f(0, 0, 0);

		Game::Piki::InvokeAIFreeArg invokeArg(0, 0);
		if (m_parent->invokeAIFree(invokeArg)) {
			return 0;
		}

		// If the delay timer is done we have a 50/50 chance of starting a boredom state
		if (m_delayTimer) {
			m_delayTimer--;
		} else if (randFloat() > 0.5f) {
			m_actBore->init(nullptr);
			m_currentAction = PIKI_ACT_FREE_BORE;
		}

		break;
	}
	}

	return 1;
}

/*
 * --INFO--
 * Address:	801A0368
 * Size:	00004C
 */
void PikiAI::ActFree::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	bl       setFreeLightEffect__Q24Game4PikiFb
	lwz      r3, 4(r31)
	li       r4, 0
	bl       attachRadar__Q24Game4PikiFb
	lwz      r3, 4(r31)
	lwz      r3, 0x250(r3)
	bl       becomeNotFree__Q23PSM4PikiFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A03B4
 * Size:	000004
 */
void PikiAI::ActFree::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801A03B8
 * Size:	0000EC
 */
void PikiAI::ActFree::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r3, 0(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0488
	lwz      r31, 0(r30)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0488
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_801A0488
	mr       r3, r31
	bl       formationable__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0488
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r31)
	bl       startRumble__Q24Game9RumbleMgrFii
	lwz      r4, 0(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game11InteractFue@ha
	stw      r0, 8(r1)
	addi     r6, r3, __vt__Q24Game11InteractFue@l
	li       r5, 0
	li       r0, 1
	stw      r4, 0xc(r1)
	mr       r3, r29
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_801A0488:
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
 * Address:	801A04A4
 * Size:	00000C
 */
char* PikiAI::GatherActionArg::getName() { return "GatherActionArg"; }

/*
 * --INFO--
 * Address:	801A04B0
 * Size:	000008
 */
u32 PikiAI::ActFree::getNextAIType() { return 2; }

/*
 * --INFO--
 * Address:	801A04B8
 * Size:	000014
 */
// void @32 @4 @PikiAI::ActFree::onKeyEvent(SysShape::KeyEvent const&)
