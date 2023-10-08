#include "Game/GameSystem.h"
#include "DynamicsParms.h"
#include "CellMgrParms.h"
#include "Game/DynParticle.h"
#include "Game/AIConstants.h"
#include "Game/Stickers.h"
#include "Game/gameStat.h"
#include "Game/MoviePlayer.h"
#include "SysShape/Model.h"
#include "nans.h"

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "gameSystem";

#define FRAMECOUNT_MAX 0x40000000

namespace Game {

GameSystem* gameSystem;
OptimiseController* OptimiseController::mInstance;

/*
 * --INFO--
 * Address:	801B4A80
 * Size:	000100
 */
GameSystem::GameSystem(BaseGameSection* section)
{
	mFlags      = 0;
	mSection    = section;
	mMode       = GSM_STORY_MODE;
	mXfbTexture = nullptr;
	DynamicsParms::globalInstance();
	CellMgrParms::globalInstance();
	mFlags = 0;
	OptimiseController::globalInstance();
	mIsMoviePause = false;
}

/*
 * --INFO--
 * Address:	801B4B80
 * Size:	0000E8
 */
GameSystem::~GameSystem() { OptimiseController::deleteInstance(); }

/*
 * --INFO--
 * Address:	801B4C68
 * Size:	0000F0
 */
void GameSystem::init()
{
	mIsMoviePause = false;
	mFlags        = 0;
	mFrameTimer   = 0;
	sys->heapStatusStart("DynParticle", nullptr);
	dynParticleMgr = new DynParticleMgr(512);
	sys->heapStatusEnd("DynParticle");
	_aiConstants = new AIConstants;
	Stickers::initialise();
	GameStat::clear();
	mIsFrozen     = false;
	_49           = 0;
	mIsPaused     = 0;
	mIsPausedSoft = false;

	mTimeMgr = new TimeMgr;
	mTimeMgr->loadSettingFile("user/Abe/time/time.ini");
	mTimeMgr->setFlag(TIMEFLAG_Stopped);
}

/*
 * --INFO--
 * Address:	801B4D58
 * Size:	000020
 */
s32 GameSystem::calcFrameDist(int time)
{
	int test = (FRAMECOUNT_MAX - time);
	if ((int)mFrameTimer >= time) {
		return mFrameTimer - time;
	}
	return test + mFrameTimer;
}

/*
 * --INFO--
 * Address:	801B4D78
 * Size:	0000DC
 */
void GameSystem::startFrame()
{
	if (mIsPaused) {
		mIsPaused--;
	}
	mFrameTimer++;
	if ((int)mFrameTimer > FRAMECOUNT_MAX) {
		mFrameTimer = 0;
	}
	cellMgr->initFrame();
	collisionUpdateMgr->update();

	if (!paused() && !mIsFrozen && !(mFlags & 8) && !paused_soft() && (!moviePlayer || moviePlayer->mDemoState == 0)
	    && (int)gameSystem->mTimeMgr->mDayCount != 0) {
		mTimeMgr->update();
	}
}

/*
 * --INFO--
 * Address:	801B4E54
 * Size:	000018
 */
void GameSystem::endFrame()
{
	if (mIsPaused)
		mIsPaused--;
}

/*
 * --INFO--
 * Address:	801B4E6C
 * Size:	000038
 */
void GameSystem::startFadeout(f32 speed)
{
	if (mSection) {
		mSection->startFadeout(speed);
	}
}

/*
 * --INFO--
 * Address:	801B4EA4
 * Size:	000038
 */
void GameSystem::startFadein(f32 speed)
{
	if (mSection) {
		mSection->startFadein(speed);
	}
}

/*
 * --INFO--
 * Address:	801B4EDC
 * Size:	000038
 */
void GameSystem::startFadeoutin(f32 speed)
{
	if (mSection) {
		mSection->startFadeoutin(speed);
	}
}

/*
 * --INFO--
 * Address:	801B4F14
 * Size:	000038
 */
void GameSystem::startFadeblack()
{
	if (mSection) {
		mSection->startFadeblack();
	}
}

/*
 * --INFO--
 * Address:	801B4F4C
 * Size:	000038
 */
void GameSystem::startFadewhite()
{
	if (mSection) {
		mSection->startFadewhite();
	}
}

/*
 * --INFO--
 * Address:	801B4F84
 * Size:	000008
 */
void GameSystem::setMoviePause(bool flag, char*) { mIsMoviePause = flag; }

/*
 * --INFO--
 * Address:	801B4F8C
 * Size:	000008
 */
void GameSystem::setFrozen(bool flag, char*) { mIsFrozen = flag; }

/*
 * --INFO--
 * Address:	801B4F94
 * Size:	00002C
 */
u32 GameSystem::setPause(bool toggle, char* str, int id) { startPause(toggle, id, str); }

/*
 * --INFO--
 * Address:	801B4FC0
 * Size:	000008
 */
bool GameSystem::paused_soft() { return mIsPausedSoft; }

/*
 * --INFO--
 * Address:	801B4FC8
 * Size:	000028
 */
bool GameSystem::paused()
{
	if (!mIsPaused && mIsPausedSoft) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	801B4FF0
 * Size:	000050
 */
int GameSystem::startPause(bool toggle, int id, char* str)
{
	if (toggle) {
		if (paused()) {
			return 1;
		}
	}
	mIsPaused     = id;
	int prev      = mIsPausedSoft;
	mIsPausedSoft = toggle;
	return prev;
}

/*
 * --INFO--
 * Address:	801B5040
 * Size:	00002C
 */
void GameSystem::setDrawBuffer(int id)
{
	if (mSection) {
		mSection->setDrawBuffer(id);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_801B505C
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi

lbl_801B505C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B506C
 * Size:	00000C
 */
GameLightMgr* GameSystem::getLightMgr() { return mSection->mLightMgr; }

/*
 * --INFO--
 * Address:	801B5078
 * Size:	000274
 */
void GameSystem::doAnimation()
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;

		if ((!paused() || !obj->pausable()) && (!mIsFrozen || !obj->frozenable())) {
			obj->doAnimation();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	cmplwi   r0, 0
	stw      r30, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r31, 0x10(r1)
	bne      lbl_801B50CC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B52B4

lbl_801B50CC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5138

lbl_801B50E4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B52B4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5138:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B50E4
	b        lbl_801B52B4

lbl_801B5158:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x4b(r31)
	mr       r30, r3
	cmplwi   r0, 0
	bne      lbl_801B5190
	lbz      r0, 0x4c(r31)
	cmplwi   r0, 0
	beq      lbl_801B5190
	li       r0, 1
	b        lbl_801B5194

lbl_801B5190:
	li       r0, 0

lbl_801B5194:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801B51BC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B51F8
	b        lbl_801B51E4

lbl_801B51BC:
	lbz      r0, 0x4a(r31)
	cmplwi   r0, 0
	beq      lbl_801B51E4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B51F8

lbl_801B51E4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801B51F8:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5224
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B52B4

lbl_801B5224:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5298

lbl_801B5244:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B52B4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5298:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5244

lbl_801B52B4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B5158
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B52EC
 * Size:	0001E4
 */
void GameSystem::doEntry()
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;
		obj->doEntry();
	}
}

/*
 * --INFO--
 * Address:	801B54D0
 * Size:	0001F4
 */
void GameSystem::doSetView(int viewportNumber)
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;
		obj->doSetView(viewportNumber);
	}
}

/*
 * --INFO--
 * Address:	801B56C4
 * Size:	000404
 */
void GameSystem::doViewCalc()
{
	if (BaseGameSection::sOptDraw <= 1) {
		Iterator<GenericObjectMgr> it(this);
		CI_LOOP(it)
		{
			GenericObjectMgr* obj = *it;
			obj->doViewCalc();
		}
	} else {
		bool flag = SysShape::Model::viewCalcMode == 0;
		Iterator<GenericObjectMgr> it(this);
		CI_LOOP(it)
		{
			GenericObjectMgr* obj = *it;
			if ((u8)flag || (int)obj->getMatrixLoadType() != 1) {
				obj->doViewCalc();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801B5AC8
 * Size:	000284
 */
void GameSystem::doSimulation(f32 speed)
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;

		if ((!paused() || !obj->pausable()) && (!mIsFrozen || !obj->frozenable())) {
			obj->doSimulation(speed);
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	stfd     f31, 0x28(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r31, 0x24(r1)
	mr       r31, r3
	stw      r30, 0x20(r1)
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r31, 0x10(r1)
	bne      lbl_801B5B24
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5D10

lbl_801B5B24:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5B90

lbl_801B5B3C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5D10
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5B90:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5B3C
	b        lbl_801B5D10

lbl_801B5BB0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x4b(r31)
	mr       r30, r3
	cmplwi   r0, 0
	bne      lbl_801B5BE8
	lbz      r0, 0x4c(r31)
	cmplwi   r0, 0
	beq      lbl_801B5BE8
	li       r0, 1
	b        lbl_801B5BEC

lbl_801B5BE8:
	li       r0, 0

lbl_801B5BEC:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801B5C14
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5C54
	b        lbl_801B5C3C

lbl_801B5C14:
	lbz      r0, 0x4a(r31)
	cmplwi   r0, 0
	beq      lbl_801B5C3C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5C54

lbl_801B5C3C:
	mr       r3, r30
	fmr      f1, f31
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_801B5C54:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5C80
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5D10

lbl_801B5C80:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5CF4

lbl_801B5CA0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B5D10
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5CF4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5CA0

lbl_801B5D10:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B5BB0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x28(r1)
	lwz      r31, 0x24(r1)
	lwz      r30, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B5D4C
 * Size:	0001F4
 */
void GameSystem::doSimpleDraw(Viewport* vp)
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;
		obj->doSimpleDraw(vp);
	}
}

/*
 * --INFO--
 * Address:	801B5F40
 * Size:	000004
 */
void GameSystem::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B5F44
 * Size:	000004
 */
void GameSystem::directDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B5F48
 * Size:	00006C
 */
void GameSystem::addObjectMgr(GenericObjectMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>;
	node->mContents                     = mgr;
	mNode.add(node);
}

/*
 * --INFO--
 * Address:	801B5FB4
 * Size:	000020
 */
void GameSystem::detachObjectMgr(GenericObjectMgr* mgr) { delNode(mgr); }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GameSystem::detachAllMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B5FD4
 * Size:	000024
 */
void GameSystem::addObjectMgr_reuse(TObjectNode<GenericObjectMgr>* obj) { mNode.add(obj); }

/*
 * --INFO--
 * Address:	801B5FF8
 * Size:	000058
 */
TObjectNode<GenericObjectMgr>* GameSystem::detachObjectMgr_reuse(GenericObjectMgr* obj)
{
	FOREACH_NODE(TObjectNode<GenericObjectMgr>, mNode.mChild, node)
	{
		if (node->mContents == obj) {
			node->del();
			return node;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
// OptimiseController::OptimiseController()
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	801B6050
 * Size:	000068
 */
// OptimiseController::~OptimiseController()
//{
//}

/*
 * --INFO--
 * Address:	801B60B8
 * Size:	00010C
 */
void OptimiseController::globalInstance()
{
	if (!mInstance)
		mInstance = new OptimiseController;
}

/*
 * --INFO--
 * Address:	801B61C4
 * Size:	000048
 */
void OptimiseController::deleteInstance()
{
	if (!mInstance) {
		delete mInstance;
	}
	mInstance = nullptr;
}

} // namespace Game

/*
 * --INFO--
 * Address:	801B620C
 * Size:	000044
 */
void NodeObjectMgr<GenericObjectMgr>::delNode(GenericObjectMgr* obj)
{
	FOREACH_NODE(TObjectNode<GenericObjectMgr>, mNode.mChild, node)
	{
		if (node->mContents == obj) {
			node->del();
			return;
		}
	}
}
