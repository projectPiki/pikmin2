#include "Game/GameSystem.h"
#include "DynamicsParms.h"
#include "CellMgrParms.h"
#include "Game/DynParticle.h"
#include "Game/AIConstants.h"
#include "Game/Stickers.h"
#include "Game/gameStat.h"
#include "Game/MoviePlayer.h"
#include "SysShape/Model.h"

static const char name[] = "gameSystem";

#define FRAMECOUNT_MAX 0x40000000

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_gameSystemCpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047FBB8
    lbl_8047FBB8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x67616D65
        .4byte 0x53797374
        .4byte 0x656D0000
    .global lbl_8047FBD0
    lbl_8047FBD0:
        .4byte 0x44796E50
        .4byte 0x61727469
        .4byte 0x636C6500
    .global lbl_8047FBDC
    lbl_8047FBDC:
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F74696D
        .4byte 0x652F7469
        .4byte 0x6D652E69
        .4byte 0x6E690000
        .4byte 0x44796E61
        .4byte 0x6D696373
        .4byte 0x00000000
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x8EF10000
        .4byte 0x8352838A
        .4byte 0x83578387
        .4byte 0x8393836F
        .4byte 0x83628374
        .4byte 0x8340974C
        .4byte 0x8CF80000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B5B50
    lbl_804B5B50:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game18OptimiseController
    __vt__Q24Game18OptimiseController:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game18OptimiseControllerFv
    .global __vt__Q24Game10GameSystem
    __vt__Q24Game10GameSystem:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10GameSystemFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__29Container<16GenericObjectMgr>FPv"
        .4byte "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte "get__33NodeObjectMgr<16GenericObjectMgr>FPv"
        .4byte "getAt__29Container<16GenericObjectMgr>Fi"
        .4byte "getTo__29Container<16GenericObjectMgr>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game10GameSystemFv"
        .4byte "@28@doEntry__Q24Game10GameSystemFv"
        .4byte "@28@doSetView__Q24Game10GameSystemFi"
        .4byte "@28@doViewCalc__Q24Game10GameSystemFv"
        .4byte "@28@doSimulation__Q24Game10GameSystemFf"
        .4byte "@28@doDirectDraw__Q24Game10GameSystemFR8Graphics"
        .4byte "@28@doSimpleDraw__Q24Game10GameSystemFP8Viewport"
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte doAnimation__Q24Game10GameSystemFv
        .4byte doEntry__Q24Game10GameSystemFv
        .4byte doSetView__Q24Game10GameSystemFi
        .4byte doViewCalc__Q24Game10GameSystemFv
        .4byte doSimulation__Q24Game10GameSystemFf
        .4byte doDirectDraw__Q24Game10GameSystemFR8Graphics
        .4byte "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
        .4byte startFrame__Q24Game10GameSystemFv
        .4byte endFrame__Q24Game10GameSystemFv
        .4byte doSimpleDraw__Q24Game10GameSystemFP8Viewport
        .4byte directDraw__Q24Game10GameSystemFR8Graphics
        .4byte startFadeout__Q24Game10GameSystemFf
        .4byte startFadein__Q24Game10GameSystemFf
        .4byte startFadeoutin__Q24Game10GameSystemFf
        .4byte startFadeblack__Q24Game10GameSystemFv
        .4byte startFadewhite__Q24Game10GameSystemFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515A60
    lbl_80515A60:
        .skip 0x4
    .global lbl_80515A64
    lbl_80515A64:
        .skip 0x4
    .global gameSystem__4Game
    gameSystem__4Game:
        .skip 0x4
    .global mInstance__Q24Game18OptimiseController
    mInstance__Q24Game18OptimiseController:
        .skip 0x4
*/

namespace Game {

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
	mTimeMgr->mFlags |= 1;
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
		u8 flag = SysShape::Model::viewCalcMode;
		Iterator<GenericObjectMgr> it(this);
		CI_LOOP(it)
		{
			GenericObjectMgr* obj = *it;
			if ((u8)flag || (int)obj->getMatrixLoadType() != 1) {
				obj->doViewCalc();
			}
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	lbz      r0, sOptDraw__Q24Game15BaseGameSection@sda21(r13)
	cmplwi   r0, 1
	bgt      lbl_801B58B0
	li       r0, 0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r0, 0x24(r1)
	cmplwi   r0, 0
	stw      r4, 0x18(r1)
	stw      r0, 0x1c(r1)
	stw      r3, 0x20(r1)
	bne      lbl_801B5720
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B588C

lbl_801B5720:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B578C

lbl_801B5738:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B588C
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_801B578C:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5738
	b        lbl_801B588C

lbl_801B57AC:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	cmplwi   r0, 0
	bne      lbl_801B57FC
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B588C

lbl_801B57FC:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_801B5870

lbl_801B581C:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801B588C
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_801B5870:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B581C

lbl_801B588C:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r1)
	cmplw    r4, r3
	bne      lbl_801B57AC
	b        lbl_801B5AB0

lbl_801B58B0:
	li       r0, 0
	lbz      r5, viewCalcMode__Q28SysShape5Model@sda21(r13)
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	cntlzw   r5, r5
	cmplwi   r0, 0
	stw      r4, 8(r1)
	srwi     r30, r5, 5
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801B58F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5980

lbl_801B58F8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5964

lbl_801B5910:
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
	bne      lbl_801B5980
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5964:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5910

lbl_801B5980:
	clrlwi   r31, r30, 0x18
	b        lbl_801B5A90

lbl_801B5988:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	mr       r30, r3
	bne      lbl_801B59C0
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 1
	beq      lbl_801B59D4

lbl_801B59C0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801B59D4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B5A00
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5A90

lbl_801B5A00:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B5A74

lbl_801B5A20:
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
	bne      lbl_801B5A90
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B5A74:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B5A20

lbl_801B5A90:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801B5988

lbl_801B5AB0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
	if (!mInstance && mInstance) {
		mInstance->~OptimiseController();
	}
	mInstance = nullptr;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, mInstance__Q24Game18OptimiseController@sda21(r13)
	cmplwi   r3, 0
	bne      lbl_801B61F4
	beq      lbl_801B61F4
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801B61F4:
	li       r0, 0
	stw      r0, mInstance__Q24Game18OptimiseController@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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

/*
 * --INFO--
 * Address:	801B6250
 * Size:	000028
 */
void __sinit_gameSystemCpp()
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B5B50@ha
	stw      r0, lbl_80515A60@sda21(r13)
	stfsu    f0, lbl_804B5B50@l(r3)
	stfs     f0, lbl_80515A64@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801B6278
 * Size:	000008
 */
// void @28 @Game::GameSystem::doSimpleDraw(Viewport*)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSimpleDraw__Q24Game10GameSystemFP8Viewport
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6280
 * Size:	000008
 */
// void @28 @Game::GameSystem::doDirectDraw(Graphics&)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doDirectDraw__Q24Game10GameSystemFR8Graphics
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6288
 * Size:	000008
 */
// void @28 @Game::GameSystem::doSimulation(float)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSimulation__Q24Game10GameSystemFf
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6290
 * Size:	000008
 */
// void @28 @Game::GameSystem::doViewCalc()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doViewCalc__Q24Game10GameSystemFv
// 	*/
// }

/*
 * --INFO--
 * Address:	801B6298
 * Size:	000008
 */
// void @28 @Game::GameSystem::doSetView(int)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSetView__Q24Game10GameSystemFi
// 	*/
// }

/*
 * --INFO--
 * Address:	801B62A0
 * Size:	000008
 */
// void @28 @Game::GameSystem::doEntry()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doEntry__Q24Game10GameSystemFv
// 	*/
// }

/*
 * --INFO--
 * Address:	801B62A8
 * Size:	000008
 */
// void @28 @Game::GameSystem::doAnimation()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doAnimation__Q24Game10GameSystemFv
// 	*/
// }
