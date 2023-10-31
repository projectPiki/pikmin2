#include "Morimura/HiScore.h"
#include "Game/Data.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Morimura/mrUtil.h"
#include "Controller.h"
#include "PSSystem/PSSystemIF.h"
#include "trig.h"

static const char name[] = "hiScore2D";

namespace Morimura {

bool THiScore::mForceClear  = false;
bool THiScore::mForceClear2 = false;
bool THiScore::mLoopDrum    = false;

f32 THiScore::mPictureOffsetY      = -8.0f;
bool THiScore::mChangeAlpha        = true;
f32 THiScore::mListOffsetY         = 25.0f;
f32 THiScore::mClearListHeightRate = 1.55f;

/*
 * --INFO--
 * Address:	........
 * Size:	000254
 */
void setScreenAlpha(J2DPane*, u8)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8037C9AC
 * Size:	000214
 */
void THiScoreIndPane::draw()
{
	GXSetColorUpdate(GX_TRUE);
	GXSetAlphaUpdate(GX_FALSE);
	GXSetDstAlpha(GX_FALSE, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
	GXSetNumTexGens(0);
	GXSetNumIndStages(0);
	GXSetNumChans(1);
	GXColor color;
	color.r = 0;
	color.g = 0;
	color.b = 0;
	color.a = 255;
	GXSetChanMatColor(GX_COLOR0A0, color);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_REG, 0, GX_DF_NONE, GX_AF_NONE);
	GXSetCullMode(GX_CULL_NONE);
	GXSetNumTevStages(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	Mtx mtx;
	PSMTXIdentity(mtx);
	GXLoadPosMtxImm(mtx, 0);
	GXSetCurrentMtx(0);
	GXClearVtxDesc();
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	// gx register stuff

	GXSetDstAlpha(GX_FALSE, 0);
	GXSetAlphaUpdate(GX_FALSE);
	TIndPane::draw();
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	li       r3, 1
	bl       GXSetColorUpdate
	li       r3, 0
	bl       GXSetAlphaUpdate
	li       r3, 0
	li       r4, 0
	bl       GXSetDstAlpha
	li       r3, 1
	li       r4, 1
	li       r5, 0
	li       r6, 0
	bl       GXSetBlendMode
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 0
	bl       GXSetNumIndStages
	li       r3, 1
	bl       GXSetNumChans
	li       r5, 0
	li       r0, 0xff
	stb      r5, 8(r1)
	addi     r4, r1, 0xc
	li       r3, 4
	stb      r5, 9(r1)
	stb      r5, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	bl       GXSetChanMatColor
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0
	bl       GXSetCullMode
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	addi     r3, r1, 0x10
	bl       PSMTXIdentity
	addi     r3, r1, 0x10
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f3, lbl_8051EC18@sda21(r2)
	lis      r0, 0x4330
	lis      r6, 0xCC008000@ha
	stw      r0, 0x40(r1)
	lfd      f2, lbl_8051EC20@sda21(r2)
	li       r3, 0
	stfs     f3, 0xCC008000@l(r6)
	li       r4, 0
	stfs     f3, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	lwz      r5, 0x20(r31)
	stw      r0, 0x48(r1)
	lwz      r5, 0x20(r5)
	stw      r0, 0x50(r1)
	lhz      r5, 2(r5)
	stw      r0, 0x58(r1)
	xoris    r0, r5, 0x8000
	stw      r0, 0x44(r1)
	lfd      f0, 0x40(r1)
	fsubs    f0, f0, f2
	stfs     f0, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	lwz      r5, 0x20(r31)
	lwz      r5, 0x20(r5)
	lhz      r0, 2(r5)
	lhz      r5, 4(r5)
	xoris    r0, r0, 0x8000
	stw      r0, 0x4c(r1)
	xoris    r0, r5, 0x8000
	stw      r0, 0x54(r1)
	lfd      f1, 0x48(r1)
	lfd      f0, 0x50(r1)
	fsubs    f1, f1, f2
	fsubs    f0, f0, f2
	stfs     f1, -0x8000(r6)
	stfs     f0, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	lwz      r5, 0x20(r31)
	lwz      r5, 0x20(r5)
	lhz      r0, 4(r5)
	xoris    r0, r0, 0x8000
	stfs     f3, -0x8000(r6)
	stw      r0, 0x5c(r1)
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	stfs     f0, -0x8000(r6)
	stfs     f3, -0x8000(r6)
	bl       GXSetDstAlpha
	li       r3, 0
	bl       GXSetAlphaUpdate
	mr       r3, r31
	bl       draw__Q28Morimura8TIndPaneFv
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void THiScoreIndPane::setRadius(s16, f32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
THiScoreListScreen::THiScoreListScreen(JKRArchive* arc, int)
    : TListScreen(arc, 0)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8037CBC0
 * Size:	00032C
 */
void THiScoreListScreen::create(char const* path, u32 screenFlags)
{
	mScreenObj = new P2DScreen::Mgr_tuning;
	mScreenObj->set(path, screenFlags, mArchive);

	TCallbackScissor* scis = new TCallbackScissor;

	JGeometry::TBox2f* bounds = mScreenObj->search('Nlist1')->getBounds();
	JGeometry::TBox2f box(bounds->i.x * mScreenObj->mstTuningScaleX, (bounds->i.y - 5.0f) * mScreenObj->mstTuningScaleY,
	                      (bounds->f.x + 5.0f) * mScreenObj->mstTuningScaleX, bounds->f.y * mScreenObj->mstTuningScaleY);
	scis->mBounds = box;
	mScreenObj->addCallBack('Nlist1', scis);

	TScissorPane* scispane = new TScissorPane;
	scispane->mBounds      = box;
	mScreenObj->search('Pmap_l')->appendChild(scispane);

	TScissorPane* scispane2 = new TScissorPane;
	scispane2->mBounds      = JGeometry::TBox2f(0.0f, 0.0f, 640.0f, 480.0f);
	mScreenObj->search('Nlist1')->appendChild(scispane2);

	og::Screen::setCallBackMessage(mScreenObj);

	TCallbackScissor* scis2 = new TCallbackScissor;
	JGeometry::TBox2f box2(0.0f, 0.0f, 640.0f, 480.0f);
	scis2->mBounds = box2;

	mScreenObj->addCallBack('Tmenu04', scis2);
	og::Screen::setAlphaScreen(mScreenObj);

	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	li       r3, 0x148
	stw      r30, 0x48(r1)
	mr       r30, r5
	stw      r29, 0x44(r1)
	mr       r29, r4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8037CBFC
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_8037CBFC:
	stw      r0, 8(r31)
	mr       r4, r29
	mr       r5, r30
	lwz      r3, 8(r31)
	lwz      r6, 0xc(r31)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8037CC68
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q28Morimura16TCallbackScissor@ha
	stw      r0, 0(r30)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q28Morimura16TCallbackScissor@l
	stw      r5, 0x18(r30)
	lfs      f0, lbl_8051EC18@sda21(r2)
	stw      r4, 0(r30)
	stw      r0, 0(r30)
	stfs     f0, 0x1c(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f0, 0x28(r30)

lbl_8037CC68:
	lwz      r3, 8(r31)
	lis      r4, 0x69737431@ha
	addi     r6, r4, 0x69737431@l
	li       r5, 0x4e6c
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	bl       getBounds__7J2DPaneFv
	lfs      f1, 4(r3)
	lis      r4, 0x69737431@ha
	lfs      f0, lbl_8051EC30@sda21(r2)
	mr       r7, r30
	lfs      f7, 8(r3)
	addi     r6, r4, 0x69737431@l
	lfs      f2, 0(r3)
	fsubs    f4, f1, f0
	lfs      f8, mstTuningScaleX__Q29P2DScreen10Mgr_tuning@sda21(r2)
	fadds    f5, f7, f0
	lfs      f0, mstTuningScaleY__Q29P2DScreen10Mgr_tuning@sda21(r2)
	li       r5, 0x4e6c
	stfs     f1, 0x34(r1)
	lfs      f6, 0xc(r3)
	fmuls    f3, f2, f8
	stfs     f2, 0x30(r1)
	fmuls    f2, f4, f0
	fmuls    f1, f5, f8
	stfs     f7, 0x38(r1)
	fmuls    f0, f6, f0
	stfs     f4, 0x34(r1)
	stfs     f3, 0x30(r1)
	stfs     f5, 0x38(r1)
	lwz      r3, 0x30(r1)
	stfs     f2, 0x34(r1)
	stfs     f6, 0x3c(r1)
	lwz      r0, 0x34(r1)
	stfs     f1, 0x38(r1)
	stw      r3, 0x1c(r30)
	lwz      r3, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stw      r0, 0x20(r30)
	lwz      r0, 0x3c(r1)
	stw      r3, 0x24(r30)
	stw      r0, 0x28(r30)
	stw      r3, 8(r1)
	lwz      r3, 8(r31)
	stw      r0, 0xc(r1)
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	li       r3, 0x1b8
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8037CD48
	bl       __ct__12J2DPictureExFv
	lis      r3, __vt__Q28Morimura12TScissorPane@ha
	addi     r0, r3, __vt__Q28Morimura12TScissorPane@l
	stw      r0, 0(r30)

lbl_8037CD48:
	lwz      r4, 0x30(r1)
	lis      r3, 0x61705F6C@ha
	lwz      r0, 0x34(r1)
	addi     r6, r3, 0x61705F6C@l
	stw      r4, 0x1a8(r30)
	li       r5, 0x506d
	lwz      r3, 8(r1)
	stw      r0, 0x1ac(r30)
	lwz      r0, 0xc(r1)
	stw      r3, 0x1b0(r30)
	stw      r0, 0x1b4(r30)
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	bl       appendChild__7J2DPaneFP7J2DPane
	li       r3, 0x1b8
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8037CDB0
	bl       __ct__12J2DPictureExFv
	lis      r3, __vt__Q28Morimura12TScissorPane@ha
	addi     r0, r3, __vt__Q28Morimura12TScissorPane@l
	stw      r0, 0(r30)

lbl_8037CDB0:
	lfs      f2, lbl_8051EC18@sda21(r2)
	lis      r3, 0x69737431@ha
	lfs      f1, lbl_8051EC34@sda21(r2)
	addi     r6, r3, 0x69737431@l
	stfs     f2, 0x20(r1)
	li       r5, 0x4e6c
	lfs      f0, lbl_8051EC38@sda21(r2)
	stfs     f2, 0x24(r1)
	lwz      r3, 0x20(r1)
	stfs     f1, 0x28(r1)
	lwz      r0, 0x24(r1)
	stw      r3, 0x1a8(r30)
	lwz      r3, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x1ac(r30)
	lwz      r0, 0x2c(r1)
	stw      r3, 0x1b0(r30)
	stw      r0, 0x1b4(r30)
	lwz      r3, 8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	bl       appendChild__7J2DPaneFP7J2DPane
	lwz      r3, 8(r31)
	bl       setCallBackMessage__Q22og6ScreenFPQ29P2DScreen3Mgr
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8037CE70
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q29P2DScreen4Node@ha
	lis      r4, __vt__Q29P2DScreen12CallBackNode@ha
	addi     r0, r3, __vt__Q29P2DScreen4Node@l
	lis      r3, __vt__Q28Morimura16TCallbackScissor@ha
	stw      r0, 0(r30)
	li       r5, 0
	addi     r4, r4, __vt__Q29P2DScreen12CallBackNode@l
	addi     r0, r3, __vt__Q28Morimura16TCallbackScissor@l
	stw      r5, 0x18(r30)
	lfs      f0, lbl_8051EC18@sda21(r2)
	stw      r4, 0(r30)
	stw      r0, 0(r30)
	stfs     f0, 0x1c(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f0, 0x28(r30)

lbl_8037CE70:
	lfs      f2, lbl_8051EC18@sda21(r2)
	lis      r4, 0x6E753034@ha
	lfs      f1, lbl_8051EC34@sda21(r2)
	lis      r3, 0x00546D65@ha
	stfs     f2, 0x10(r1)
	mr       r7, r30
	lfs      f0, lbl_8051EC38@sda21(r2)
	addi     r6, r4, 0x6E753034@l
	stfs     f2, 0x14(r1)
	addi     r5, r3, 0x00546D65@l
	lwz      r3, 0x10(r1)
	stfs     f1, 0x18(r1)
	lwz      r0, 0x14(r1)
	stw      r3, 0x1c(r30)
	lwz      r3, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stw      r0, 0x20(r30)
	lwz      r0, 0x1c(r1)
	stw      r3, 0x24(r30)
	stw      r0, 0x28(r30)
	lwz      r3, 8(r31)
	bl       addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
	lwz      r3, 8(r31)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8037CEEC
 * Size:	0001CC
 */
THiScore::THiScore()
    : TScrollList("hiscore")
    , mListScreen(nullptr)
    , mIndPane(nullptr)
    , mHighScorePic(nullptr)
    , mSelIconPane(0)
    , m3DStickPane(nullptr)
    , mStickAnimPic(nullptr)
    , mStickAnimMgr(nullptr)
    , mScaleMgrList(nullptr)
    , mIsAllTreasures(false)
    , mState(false)
    , mAlphaTimer(1.0f)
    , _184(0.0f)
    , mAngleGrowRate(0.05f)
    , mPaneAngle(0.0f)
    , mPaneAngle2(0.0f)
    , _194(0.02f)
    , _198(0.25f)
    , _19C(0.0f)
    , _1A0(0.0f)
{
	_1C4               = 0;
	_1C5               = 0;
	mErrorSoundCounter = 0;
	mDoEnd             = 0;
	mTevBlock[0]       = nullptr;
	mTevBlock[1]       = nullptr;
	mColorBlock[0]     = nullptr;
	mColorBlock[1]     = nullptr;
	_1F8               = 0.0f;
	mMaxSelect         = 5;

	mScoreCounts[0]   = 0;
	mScaleCounter1[0] = nullptr;
	mCurrScore1[0]    = 0;
	mCurrScore2[0]    = 0;
	mScaleCounter2[0] = nullptr;
	mScaleCounter3[0] = nullptr;

	mScoreCounts[1]   = 0;
	mScaleCounter1[1] = nullptr;
	mCurrScore1[1]    = 0;
	mCurrScore2[1]    = 0;
	mScaleCounter2[1] = nullptr;
	mScaleCounter3[1] = nullptr;

	mScoreCounts[2]   = 0;
	mScaleCounter1[2] = nullptr;
	mCurrScore1[2]    = 0;
	mCurrScore2[2]    = 0;
	mScaleCounter2[2] = nullptr;
	mScaleCounter3[2] = nullptr;

	mScoreCounts[3]   = 0;
	mScaleCounter1[3] = nullptr;
	mCurrScore1[3]    = 0;
	mCurrScore2[3]    = 0;
	mScaleCounter2[3] = nullptr;
	mScaleCounter3[3] = nullptr;

	mScoreCounts[4]   = 0;
	mScaleCounter1[4] = nullptr;
	mCurrScore1[4]    = 0;
	mCurrScore2[4]    = 0;
	mScaleCounter2[4] = nullptr;
	mScaleCounter3[4] = nullptr;

	mScoreCounts[5]   = 0;
	mScaleCounter1[5] = nullptr;
	mCurrScore1[5]    = 0;
	mCurrScore2[5]    = 0;
	mScaleCounter2[5] = nullptr;
	mScaleCounter3[5] = nullptr;

	mSelIconCorners[0] = 0;
	mSelIconCorners[1] = 0;
	mSelIconCorners[2] = 0;
	mSelIconCorners[3] = 0;

	mScrollParm._00 = 8.0f;
	mScrollParm._08 = 0.99f;
	mScrollParm._04 = 1.2f;
	mScrollParm._0C = 1.1f;
	mScrollParm._10 = 2.0f;
}

/*
 * --INFO--
 * Address:	8037D0BC
 * Size:	00105C
 */
void THiScore::doCreate(JKRArchive* arc)
{
	mArchive = arc;

	DispMemberHighScore* disp = static_cast<DispMemberHighScore*>(getDispMember());
	if (disp->isID(OWNER_MRMR, MEMBER_HIGH_SCORE)) {
		mDisp = disp;
		P2ASSERTLINE(287, mDisp);
		mIsAllTreasures = sys->getPlayCommonData()->mChallengeFlags.isSet(2);
	} else {
		mDisp      = new DispMemberHighScore;
		mIsSection = true;
	}

	if (mForceClear) {
		mIsAllTreasures = true;
	}

	if (!mIsAllTreasures) {
		mScaleMgrList = new og::Screen::ScaleMgr*[mMaxSelect];
		for (int i = 0; i < mMaxSelect; i++) {
			mScaleMgrList[i] = new og::Screen::ScaleMgr;
		}
	}

	mController = getGamePad();
	// clang-format off
	const char* timgname[16] = {"timg/hi_score_00.bti", "timg/hi_score_01.bti", "timg/hi_score_02.bti", "timg/hi_score_03.bti",
								"timg/hi_score_04.bti", "timg/hi_score_05.bti", "timg/hi_score_06.bti", "timg/hi_score_07.bti",
								"timg/hi_score_08.bti", "timg/hi_score_09.bti", "timg/hi_score_10.bti", "timg/hi_score_11.bti",
								"timg/hi_score_12.bti", "timg/hi_score_13.bti", "timg/hi_score_14.bti", "timg/hi_score_15.bti"};
	// clang-format on

	// if the image archive was found, use it to get the images, otherwise get default from the main screen archive
	if (mDisp->mImageArchive) {
		for (int i = 0; i < 16; i++) {
			mPicTexture[i] = static_cast<ResTIMG*>(mDisp->mImageArchive->getResource(timgname[i]));
			P2ASSERTLINE(325, mPicTexture[i]);
		}
	} else {
		for (int i = 0; i < 16; i++) {
			mPicTexture[i] = static_cast<ResTIMG*>(mArchive->getResource("timg/hi_score_00.bti"));
			P2ASSERTLINE(331, mPicTexture[i]);
		}
	}

	mMainScreen = new TScreenBase(arc, 2);
	mMainScreen->create("hi_score_main.blo", 0x20000);
	mMainScreen->addAnim("hi_score_main.bck");
	mMainScreen->addAnim("hi_score_main.bpk");

	P2DScreen::Mgr_tuning* screen = mMainScreen->mScreenObj;
	mStickAnimPic                 = og::Screen::setCallBack_3DStickSmall(mArchive, screen, 'ota3dl');
	m3DStickPane                  = screen->search('ota3dl');
	P2ASSERTLINE(347, m3DStickPane);
	P2ASSERTLINE(348, mStickAnimPic);
	mStickAnimPic->mAnimGroup->setSpeed(2.0f);
	mStickAnimPic->mAnimGroup->start();
	mStickAnimMgr = new og::Screen::StickAnimMgr(mStickAnimPic);
	P2ASSERTLINE(353, mStickAnimMgr);

	mHighScorePic = static_cast<J2DPictureEx*>(screen->search('PICT_001'));
	P2ASSERTLINE(357, mHighScorePic);

	mListScreen = new THiScoreListScreen(arc, 0);
	mListScreen->create("hi_score_list.blo", 0x20000);

	screen         = mListScreen->mScreenObj;
	mPaneListPos.x = screen->search('Nlist1')->mOffset.x;
	mPaneListPos.y = screen->search('Nlist1')->mOffset.y;
	mPaneIconPos.x = screen->search('Nselicon')->mOffset.x;
	mPaneIconPos.y = screen->search('Nselicon')->mOffset.y;
	mSelIconPane   = screen->search('Nselicon');
	if (mSelIconPane) {
		mSelIconCorners[0] = screen->search('Psel_lu');
		P2ASSERTLINE(375, mSelIconCorners[0]);
		mSelIconCorners[1] = screen->search('Psel_ru');
		P2ASSERTLINE(378, mSelIconCorners[1]);
		mSelIconCorners[2] = screen->search('Psel_ll');
		P2ASSERTLINE(381, mSelIconCorners[2]);
		mSelIconCorners[3] = screen->search('Psel_rl');
		P2ASSERTLINE(384, mSelIconCorners[3]);
	}

	_B0            = 1;
	_90            = 0;
	mCurrentSelect = 2;
	_98            = mMaxSelect - 1;

	u64 tags1[5] = { 'Nmenu00', 'Nmenu01', 'Nmenu02', 'Nmenu03', 'Nmenu04' };
	u64 tags2[5] = { 'Tmenu00', 'Tmenu01', 'Tmenu02', 'Tmenu03', 'Tmenu04' };

	J2DPane* pane = screen->search(tags1[_90]);
	P2ASSERTLINE(401, pane);
	_A0 = pane->mOffset.y;

	pane = screen->search(tags1[_98]);
	P2ASSERTLINE(405, pane);
	_A4 = pane->mOffset.y;

	mIndexPaneList = new TIndexPane*[mMaxSelect];

	for (int i = 0; i < mMaxSelect; i++) {
		mIndexPaneList[i]         = new TIndexPane(this, screen, tags1[i]);
		mIndexPaneList[i]->mPane2 = screen->search(tags2[i]);

		JUT_ASSERTLINE(415, screen->search(tags1[i]), "assertindex = %d \n", i);

		mIndexPaneList[i]->mPane->getFirstChildPane()->getFirstChildPane()->setInfluencedAlpha(false, false);

		J2DPane* cPane = mIndexPaneList[i]->mPane2;
		P2ASSERTLINE(423, cPane);
		cPane->setMsgID(getNameID(i));
		cPane = cPane->getFirstChildPane();
		P2ASSERTLINE(428, cPane);
		cPane->setInfluencedAlpha(false, false);
		cPane->setMsgID(getNameID(i));
		mIndexPaneList[i]->setIndex(i);
	}

	if (mIsAllTreasures) {
		for (int i = 0; i < mMaxSelect; i++) {
			J2DPane* cPane = mIndexPaneList[i]->mPane;
			cPane->appendChild(cPane->getFirstChildPane()->getFirstChildPane());

			cPane = mIndexPaneList[i]->mPane->getFirstChildPane();
			if (cPane->getParentPane()) {
				cPane->getParentPane()->removeChild(cPane);
			}
			mIndexPaneList[i]->mPane2->appendChild(mIndexPaneList[i]->mPane);

			J2DPictureEx* pic = static_cast<J2DPictureEx*>(mIndexPaneList[i]->mPane->getFirstChildPane());
			if (mPicTexture[i]) {
				pic->changeTexture(mPicTexture[i], 0);
			}
			J2DTevBlock* tev = pic->getMaterial()->mTevBlock;
			changeTevBlock(tev, mHighScorePic->getMaterial()->mTevBlock);
			changeColorBlock(&mHighScorePic->getMaterial()->mColorBlock, &pic->getMaterial()->mColorBlock);
		}
	}

	mIndexPaneList[0]->mPane->show();
	mIndexGroup = new TIndexGroup;
	updateLayout();
	TIndexGroup* group   = mIndexGroup;
	group->mMaxRollSpeed = mScrollParm._00;
	group->_04           = mScrollParm._04;
	group->mRollSpeedMod = mScrollParm._08;
	group->_0C           = mScrollParm._0C;
	group->_10           = mScrollParm._10;

	J2DPane* total = mMainScreen->mScreenObj->search('Tot3rds');
	P2ASSERTLINE(469, total);
	total->setMsgID('8472_00'); // 3rd

	u64 tagList0[6] = { 'Phe1st1', 'Phe2nd1', 'Phe3rd1', 'Pot1st1', 'Pot2nd1', 'Pot3rd1' };
	u64 tagList2[6] = { 'Phe1st5', 'Phe2nd5', 'Phe3rd5', 'Pot1st5', 'Pot2nd5', 'Pot3rd5' };
	u64 tagList3[6] = { 'Phe1st1', 'Phe2nd1', 'Phe3rd1', 'Pot1st1', 'Pot2nd1', 'Pot3rd1' };
	u64 tagList1[6] = { 'Phe1st4', 'Phe2nd4', 'Phe3rd4', 'Pot1st4', 'Pot2nd4', 'Pot3rd4' };
	u64 tagList4[6] = { 'Phe1st2', 'Phe2nd2', 'Phe3rd2', 'Pot1st2', 'Pot2nd2', 'Pot3rd2' };
	for (int i = 0; i < 6; i++) {
		mScaleCounter1[i] = Morimura::setScaleUpCounter(mMainScreen->mScreenObj, tagList0[i], &mScoreCounts[i], 10, mArchive);
		mScaleCounter2[i] = Morimura::setScaleUpCounter2(mMainScreen->mScreenObj, tagList1[i], tagList3[i], &mCurrScore1[i], 3, mArchive);
		mScaleCounter3[i] = Morimura::setScaleUpCounter2(mMainScreen->mScreenObj, tagList2[i], tagList4[i], &mCurrScore2[i], 3, mArchive);
		mScaleCounter3[i]->setZeroAlpha(255);
		mScaleCounter3[i]->setPuyoAnimZero(true);
	}

	paneInit();

	mIndPane = new THiScoreIndPane(mHighScorePic);
	mIndPane->createIndTexture("hi_score_00.bti");
	mIndPane->createCaptureTexture(GX_TF_I4);
	mIndPane->mTexture1->storeTIMG(mPicTexture[0], (u8)0);
	mIndPane->mTexture2->storeTIMG(mPicTexture[0], (u8)0);

	ResTIMG* img = mIndPane->mTexture3->mTexInfo;
	P2ASSERTLINE(507, img);
	img->mTransparency = 2;

	img = mIndPane->mTexture1->mTexInfo;
	P2ASSERTLINE(512, img);
	img->mTransparency = 2;

	img = mIndPane->mTexture2->mTexInfo;
	P2ASSERTLINE(516, img);
	img->mTransparency = 2;
	changePaneInfo();

	f32 yoffs = mIndexGroup->mHeight;
	for (int i = 0; i < 2; i++) {

		for (int j = 0; j < mMaxSelect; j++) {
			TIndexPane* IDPane = mIndexPaneList[j];
			IDPane->mPane->setOffset(0.0f, IDPane->_1C + yoffs);
			mIndexPaneList[j]->_1C = mIndexPaneList[j]->mPane->mOffset.y;
		}
		updateIndex(0);
		TIndexGroup* grp = mIndexGroup;
		grp->_14         = 0.0f;
		grp->mStateID    = 0;
		changePaneInfo();
	}

	/*
	stwu     r1, -0x2c0(r1)
	mflr     r0
	stw      r0, 0x2c4(r1)
	stfd     f31, 0x2b0(r1)
	psq_st   f31, 696(r1), 0, qr0
	stfd     f30, 0x2a0(r1)
	psq_st   f30, 680(r1), 0, qr0
	stfd     f29, 0x290(r1)
	psq_st   f29, 664(r1), 0, qr0
	stfd     f28, 0x280(r1)
	psq_st   f28, 648(r1), 0, qr0
	stfd     f27, 0x270(r1)
	psq_st   f27, 632(r1), 0, qr0
	stfd     f26, 0x260(r1)
	psq_st   f26, 616(r1), 0, qr0
	stfd     f25, 0x250(r1)
	psq_st   f25, 600(r1), 0, qr0
	stfd     f24, 0x240(r1)
	psq_st   f24, 584(r1), 0, qr0
	stfd     f23, 0x230(r1)
	psq_st   f23, 568(r1), 0, qr0
	stfd     f22, 0x220(r1)
	psq_st   f22, 552(r1), 0, qr0
	stfd     f21, 0x210(r1)
	psq_st   f21, 536(r1), 0, qr0
	stfd     f20, 0x200(r1)
	psq_st   f20, 520(r1), 0, qr0
	stfd     f19, 0x1f0(r1)
	psq_st   f19, 504(r1), 0, qr0
	stfd     f18, 0x1e0(r1)
	psq_st   f18, 488(r1), 0, qr0
	stfd     f17, 0x1d0(r1)
	psq_st   f17, 472(r1), 0, qr0
	stfd     f16, 0x1c0(r1)
	psq_st   f16, 456(r1), 0, qr0
	stmw     r23, 0x19c(r1)
	mr       r31, r3
	mr       r25, r4
	lis      r4, lbl_804932E0@ha
	stw      r25, 0x78(r3)
	addi     r30, r4, lbl_804932E0@l
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x4D524D52@ha
	lis      r6, 0x48495343@ha
	mr       r24, r3
	li       r5, 0
	addi     r4, r4, 0x4D524D52@l
	addi     r6, r6, 0x48495343@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037D1C4
	stw      r24, 0x17c(r31)
	lwz      r0, 0x17c(r31)
	cmplwi   r0, 0
	bne      lbl_8037D1AC
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x11f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D1AC:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	rlwinm   r0, r0, 0x1f, 0x1f, 0x1f
	stb      r0, 0x174(r31)
	b        lbl_8037D208

lbl_8037D1C4:
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8037D1FC
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q28Morimura19DispMemberHighScore@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q28Morimura19DispMemberHighScore@l
	stw      r5, 4(r3)
	stw      r0, 0(r3)
	stw      r5, 8(r3)
	stb      r5, 0xc(r3)

lbl_8037D1FC:
	stw      r3, 0x17c(r31)
	li       r0, 1
	stb      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)

lbl_8037D208:
	lbz      r0, mForceClear__Q28Morimura8THiScore@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8037D21C
	li       r0, 1
	stb      r0, 0x174(r31)

lbl_8037D21C:
	lbz      r0, 0x174(r31)
	cmplwi   r0, 0
	bne      lbl_8037D278
	lha      r0, 0x8e(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0xe0(r31)
	li       r26, 0
	li       r24, 0
	b        lbl_8037D26C

lbl_8037D244:
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8037D25C
	bl       __ct__Q32og6Screen8ScaleMgrFv
	mr       r0, r3

lbl_8037D25C:
	lwz      r3, 0xe0(r31)
	addi     r26, r26, 1
	stwx     r0, r3, r24
	addi     r24, r24, 4

lbl_8037D26C:
	lha      r0, 0x8e(r31)
	cmpw     r26, r0
	blt      lbl_8037D244

lbl_8037D278:
	mr       r3, r31
	bl       getGamePad__Q26Screen7ObjBaseCFv
	stw      r3, 0x80(r31)
	lwz      r3, 0x17c(r31)
	lwz      r29, 0x18c(r30)
	lwz      r0, 8(r3)
	lwz      r28, 0x190(r30)
	lwz      r27, 0x194(r30)
	cmplwi   r0, 0
	lwz      r26, 0x198(r30)
	lwz      r24, 0x19c(r30)
	lwz      r12, 0x1a0(r30)
	lwz      r11, 0x1a4(r30)
	lwz      r10, 0x1a8(r30)
	lwz      r9, 0x1ac(r30)
	lwz      r8, 0x1b0(r30)
	lwz      r7, 0x1b4(r30)
	lwz      r6, 0x1b8(r30)
	lwz      r5, 0x1bc(r30)
	lwz      r4, 0x1c0(r30)
	lwz      r3, 0x1c4(r30)
	lwz      r0, 0x1c8(r30)
	stw      r29, 0x150(r1)
	stw      r28, 0x154(r1)
	stw      r27, 0x158(r1)
	stw      r26, 0x15c(r1)
	stw      r24, 0x160(r1)
	stw      r12, 0x164(r1)
	stw      r11, 0x168(r1)
	stw      r10, 0x16c(r1)
	stw      r9, 0x170(r1)
	stw      r8, 0x174(r1)
	stw      r7, 0x178(r1)
	stw      r6, 0x17c(r1)
	stw      r5, 0x180(r1)
	stw      r4, 0x184(r1)
	stw      r3, 0x188(r1)
	stw      r0, 0x18c(r1)
	beq      lbl_8037D37C
	lis      r3, mPicTexture__Q28Morimura8THiScore@ha
	addi     r24, r1, 0x150
	addi     r26, r3, mPicTexture__Q28Morimura8THiScore@l
	li       r27, 0

lbl_8037D324:
	lwz      r3, 0x17c(r31)
	lwz      r4, 0(r24)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r26)
	lwz      r0, 0(r26)
	cmplwi   r0, 0
	bne      lbl_8037D364
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x145
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D364:
	addi     r27, r27, 1
	addi     r26, r26, 4
	cmpwi    r27, 0x10
	addi     r24, r24, 4
	blt      lbl_8037D324
	b        lbl_8037D3D4

lbl_8037D37C:
	lis      r3, mPicTexture__Q28Morimura8THiScore@ha
	li       r26, 0
	addi     r24, r3, mPicTexture__Q28Morimura8THiScore@l

lbl_8037D388:
	lwz      r3, 0x78(r31)
	addi     r4, r30, 0xc
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0(r24)
	lwz      r0, 0(r24)
	cmplwi   r0, 0
	bne      lbl_8037D3C4
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x14b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D3C4:
	addi     r26, r26, 1
	addi     r24, r24, 4
	cmpwi    r26, 0x10
	blt      lbl_8037D388

lbl_8037D3D4:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8037D3F4
	mr       r4, r25
	li       r5, 2
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	mr       r0, r3

lbl_8037D3F4:
	stw      r0, 0x7c(r31)
	addi     r4, r30, 0x32c
	lis      r5, 2
	lwz      r3, 0x7c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7c(r31)
	addi     r4, r30, 0x340
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r3, 0x7c(r31)
	addi     r4, r30, 0x354
	bl       addAnim__Q28Morimura11TScreenBaseFPc
	lwz      r5, 0x7c(r31)
	lis      r4, 0x6133646C@ha
	lwz      r3, 0x78(r31)
	addi     r6, r4, 0x6133646C@l
	lwz      r24, 8(r5)
	li       r5, 0x6f74
	mr       r4, r24
	bl setCallBack_3DStickSmall__Q22og6ScreenFP10JKRArchivePQ29P2DScreen3MgrUx
	stw      r3, 0xd8(r31)
	mr       r3, r24
	lis      r4, 0x6133646C@ha
	li       r5, 0x6f74
	lwz      r12, 0(r24)
	addi     r6, r4, 0x6133646C@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xd4(r31)
	lwz      r0, 0xd4(r31)
	cmplwi   r0, 0
	bne      lbl_8037D494
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x15b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D494:
	lwz      r0, 0xd8(r31)
	cmplwi   r0, 0
	bne      lbl_8037D4B4
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x15c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D4B4:
	lwz      r3, 0xd8(r31)
	lfs      f1, lbl_8051EC64@sda21(r2)
	lwz      r3, 0x34(r3)
	bl       setSpeed__Q32og6Screen9AnimGroupFf
	lwz      r3, 0xd8(r31)
	lwz      r3, 0x34(r3)
	bl       start__Q32og6Screen9AnimGroupFv
	li       r3, 8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8037D4EC
	lwz      r4, 0xd8(r31)
	bl       __ct__Q32og6Screen12StickAnimMgrFPQ32og6Screen16CallBack_Picture
	mr       r0, r3

lbl_8037D4EC:
	stw      r0, 0xdc(r31)
	lwz      r0, 0xdc(r31)
	cmplwi   r0, 0
	bne      lbl_8037D510
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x161
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D510:
	mr       r3, r24
	lis      r5, 0x5F303031@ha
	lwz      r12, 0(r24)
	lis      r4, 0x50494354@ha
	addi     r6, r5, 0x5F303031@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x50494354@l
	mtctr    r12
	bctrl
	stw      r3, 0xbc(r31)
	lwz      r0, 0xbc(r31)
	cmplwi   r0, 0
	bne      lbl_8037D558
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x165
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D558:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8037D58C
	mr       r4, r25
	li       r5, 0
	bl       __ct__Q28Morimura11TScreenBaseFP10JKRArchivei
	lis      r4, __vt__Q28Morimura11TListScreen@ha
	lis      r3, __vt__Q28Morimura18THiScoreListScreen@ha
	addi     r0, r4, __vt__Q28Morimura11TListScreen@l
	stw      r0, 0(r24)
	addi     r0, r3, __vt__Q28Morimura18THiScoreListScreen@l
	stw      r0, 0(r24)

lbl_8037D58C:
	stw      r24, 0xb4(r31)
	addi     r4, r30, 0x368
	lis      r5, 2
	lwz      r3, 0xb4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xb4(r31)
	lis      r3, 0x69737431@ha
	addi     r6, r3, 0x69737431@l
	li       r5, 0x4e6c
	lwz      r29, 8(r4)
	lwz      r12, 0(r29)
	mr       r3, r29
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xd4(r3)
	lis      r4, 0x69737431@ha
	mr       r3, r29
	li       r5, 0x4e6c
	stfs     f0, 0x200(r31)
	addi     r6, r4, 0x69737431@l
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xd8(r3)
	lis      r5, 0x69636F6E@ha
	lis      r4, 0x4E73656C@ha
	mr       r3, r29
	stfs     f0, 0x204(r31)
	addi     r6, r5, 0x69636F6E@l
	addi     r5, r4, 0x4E73656C@l
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xd4(r3)
	lis      r5, 0x69636F6E@ha
	lis      r4, 0x4E73656C@ha
	mr       r3, r29
	stfs     f0, 0x208(r31)
	addi     r6, r5, 0x69636F6E@l
	addi     r5, r4, 0x4E73656C@l
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xd8(r3)
	lis      r5, 0x69636F6E@ha
	lis      r4, 0x4E73656C@ha
	mr       r3, r29
	stfs     f0, 0x20c(r31)
	addi     r6, r5, 0x69636F6E@l
	addi     r5, r4, 0x4E73656C@l
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc0(r31)
	lwz      r0, 0xc0(r31)
	cmplwi   r0, 0
	beq      lbl_8037D7B0
	mr       r3, r29
	lis      r5, 0x6C5F6C75@ha
	lwz      r12, 0(r29)
	lis      r4, 0x00507365@ha
	addi     r6, r5, 0x6C5F6C75@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x00507365@l
	mtctr    r12
	bctrl
	stw      r3, 0xc4(r31)
	lwz      r0, 0xc4(r31)
	cmplwi   r0, 0
	bne      lbl_8037D6D8
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D6D8:
	mr       r3, r29
	lis      r5, 0x6C5F7275@ha
	lwz      r12, 0(r29)
	lis      r4, 0x00507365@ha
	addi     r6, r5, 0x6C5F7275@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x00507365@l
	mtctr    r12
	bctrl
	stw      r3, 0xc8(r31)
	lwz      r0, 0xc8(r31)
	cmplwi   r0, 0
	bne      lbl_8037D720
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x17a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D720:
	mr       r3, r29
	lis      r5, 0x6C5F6C6C@ha
	lwz      r12, 0(r29)
	lis      r4, 0x00507365@ha
	addi     r6, r5, 0x6C5F6C6C@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x00507365@l
	mtctr    r12
	bctrl
	stw      r3, 0xcc(r31)
	lwz      r0, 0xcc(r31)
	cmplwi   r0, 0
	bne      lbl_8037D768
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x17d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D768:
	mr       r3, r29
	lis      r5, 0x6C5F726C@ha
	lwz      r12, 0(r29)
	lis      r4, 0x00507365@ha
	addi     r6, r5, 0x6C5F726C@l
	lwz      r12, 0x3c(r12)
	addi     r5, r4, 0x00507365@l
	mtctr    r12
	bctrl
	stw      r3, 0xd0(r31)
	lwz      r0, 0xd0(r31)
	cmplwi   r0, 0
	bne      lbl_8037D7B0
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x180
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D7B0:
	li       r0, 1
	li       r5, 0
	stb      r0, 0xb0(r31)
	li       r4, 2
	mr       r3, r29
	addi     r0, r1, 0x128
	stw      r5, 0x90(r31)
	stw      r4, 0x94(r31)
	lha      r4, 0x8e(r31)
	addi     r4, r4, -1
	stw      r4, 0x98(r31)
	lfd      f0, 0x1d0(r30)
	lfd      f8, 0x1d8(r30)
	lfd      f7, 0x1e0(r30)
	lfd      f6, 0x1e8(r30)
	lfd      f5, 0x1f0(r30)
	stfd     f0, 0x128(r1)
	lfd      f4, 0x1f8(r30)
	lfd      f3, 0x200(r30)
	lfd      f2, 0x208(r30)
	lfd      f1, 0x210(r30)
	lfd      f0, 0x218(r30)
	stfd     f8, 0x130(r1)
	stfd     f7, 0x138(r1)
	stfd     f6, 0x140(r1)
	stfd     f5, 0x148(r1)
	lwz      r4, 0x90(r31)
	lwz      r12, 0(r29)
	slwi     r4, r4, 3
	stfd     f4, 0x100(r1)
	add      r6, r0, r4
	lwz      r12, 0x3c(r12)
	lwz      r5, 0(r6)
	stfd     f3, 0x108(r1)
	lwz      r6, 4(r6)
	stfd     f2, 0x110(r1)
	stfd     f1, 0x118(r1)
	stfd     f0, 0x120(r1)
	mtctr    r12
	bctrl
	or.      r24, r3, r3
	bne      lbl_8037D86C
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x191
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D86C:
	lfs      f0, 0xd8(r24)
	mr       r3, r29
	addi     r0, r1, 0x128
	stfs     f0, 0xa0(r31)
	lwz      r4, 0x98(r31)
	lwz      r12, 0(r29)
	slwi     r4, r4, 3
	add      r6, r0, r4
	lwz      r12, 0x3c(r12)
	lwz      r5, 0(r6)
	lwz      r6, 4(r6)
	mtctr    r12
	bctrl
	or.      r24, r3, r3
	bne      lbl_8037D8BC
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x195
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D8BC:
	lfs      f0, 0xd8(r24)
	stfs     f0, 0xa4(r31)
	lha      r0, 0x8e(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x88(r31)
	addi     r28, r1, 0x128
	addi     r26, r1, 0x100
	li       r25, 0
	li       r27, 0
	b        lbl_8037DA90

lbl_8037D8E8:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_8037D948
	mr       r3, r29
	lwz      r5, 0(r28)
	lwz      r12, 0(r29)
	lwz      r6, 4(r28)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_8051EC18@sda21(r2)
	stw      r0, 0(r24)
	stw      r3, 4(r24)
	stw      r0, 8(r24)
	stw      r0, 0xc(r24)
	stw      r0, 0x10(r24)
	stfs     f0, 0x18(r24)
	stw      r0, 0x20(r24)
	stw      r0, 0x24(r24)
	lwz      r3, 4(r24)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r24)

lbl_8037D948:
	lwz      r4, 0x88(r31)
	mr       r3, r29
	lwz      r5, 0(r26)
	stwx     r24, r4, r27
	lwz      r6, 4(r26)
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x88(r31)
	lwzx     r4, r4, r27
	stw      r3, 8(r4)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r5, 0(r28)
	lwz      r12, 0x3c(r12)
	lwz      r6, 4(r28)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8037D9B4
	mr       r6, r25
	addi     r3, r30, 0x310
	addi     r5, r30, 0x37c
	li       r4, 0x19f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D9B4:
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r27
	lwz      r3, 4(r3)
	bl       getFirstChildPane__7J2DPaneFv
	bl       getFirstChildPane__7J2DPaneFv
	li       r4, 0
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r27
	lwz      r24, 8(r3)
	cmplwi   r24, 0
	bne      lbl_8037D9FC
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x1a7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037D9FC:
	mr       r3, r31
	mr       r4, r25
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	stw      r4, 0x1c(r24)
	stw      r3, 0x18(r24)
	mr       r3, r24
	bl       getFirstChildPane__7J2DPaneFv
	or.      r24, r3, r3
	bne      lbl_8037DA40
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x1ac
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037DA40:
	mr       r3, r24
	li       r4, 0
	li       r5, 0
	bl       setInfluencedAlpha__7J2DPaneFbb
	mr       r3, r31
	mr       r4, r25
	lwz      r12, 0(r31)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	stw      r4, 0x1c(r24)
	mr       r4, r25
	stw      r3, 0x18(r24)
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r27
	bl       setIndex__Q28Morimura10TIndexPaneFi
	addi     r28, r28, 8
	addi     r27, r27, 4
	addi     r26, r26, 8
	addi     r25, r25, 1

lbl_8037DA90:
	lha      r0, 0x8e(r31)
	cmpw     r25, r0
	blt      lbl_8037D8E8
	lbz      r0, 0x174(r31)
	cmplwi   r0, 0
	beq      lbl_8037DBF0
	lis      r3, mPicTexture__Q28Morimura8THiScore@ha
	li       r25, 0
	addi     r27, r3, mPicTexture__Q28Morimura8THiScore@l
	li       r26, 0
	b        lbl_8037DBE4

lbl_8037DABC:
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r26
	lwz      r24, 4(r3)
	mr       r3, r24
	bl       getFirstChildPane__7J2DPaneFv
	bl       getFirstChildPane__7J2DPaneFv
	mr       r4, r3
	mr       r3, r24
	bl       appendChild__7J2DPaneFP7J2DPane
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r26
	lwz      r3, 4(r3)
	bl       getFirstChildPane__7J2DPaneFv
	mr       r24, r3
	bl       getParentPane__7J2DPaneFv
	cmplwi   r3, 0
	beq      lbl_8037DB10
	mr       r3, r24
	bl       getParentPane__7J2DPaneFv
	mr       r4, r24
	bl       removeChild__7J2DPaneFP7J2DPane

lbl_8037DB10:
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r26
	lwz      r4, 8(r3)
	lwz      r3, 4(r3)
	bl       appendChild__7J2DPaneFP7J2DPane
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r26
	lwz      r3, 4(r3)
	bl       getFirstChildPane__7J2DPaneFv
	lwz      r4, 0(r27)
	mr       r28, r3
	cmplwi   r4, 0
	beq      lbl_8037DB58
	lwz      r12, 0(r3)
	li       r5, 0
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl

lbl_8037DB58:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x13c(r12)
	mtctr    r12
	bctrl
	lwz      r24, 0x70(r3)
	lwz      r3, 0xbc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x13c(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	lwz      r4, 0x70(r4)
	mr       r5, r24
	bl       changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x13c(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	lwz      r3, 0xbc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x13c(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	addi     r4, r4, 0x10
	addi     r5, r28, 0x10
	bl changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock
	addi     r26, r26, 4
	addi     r27, r27, 4
	addi     r25, r25, 1

lbl_8037DBE4:
	lha      r0, 0x8e(r31)
	cmpw     r25, r0
	blt      lbl_8037DABC

lbl_8037DBF0:
	lwz      r4, 0x88(r31)
	li       r0, 1
	li       r3, 0x30
	lwz      r4, 0(r4)
	lwz      r4, 4(r4)
	stb      r0, 0xb0(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8037DC1C
	bl       __ct__Q28Morimura11TIndexGroupFv
	mr       r0, r3

lbl_8037DC1C:
	stw      r0, 0x84(r31)
	mr       r3, r31
	bl       updateLayout__Q28Morimura8THiScoreFv
	lis      r3, mScrollParm__Q28Morimura8THiScore@ha
	lis      r4, 0x33726473@ha
	addi     r7, r3, mScrollParm__Q28Morimura8THiScore@l
	lis      r3, 0x00546F74@ha
	lwz      r8, 0x84(r31)
	addi     r6, r4, 0x33726473@l
	lfs      f0, 0(r7)
	addi     r5, r3, 0x00546F74@l
	stfs     f0, 0(r8)
	lfs      f0, 4(r7)
	stfs     f0, 4(r8)
	lfs      f0, 8(r7)
	stfs     f0, 8(r8)
	lfs      f0, 0xc(r7)
	stfs     f0, 0xc(r8)
	lfs      f0, 0x10(r7)
	stfs     f0, 0x10(r8)
	lwz      r3, 0x7c(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_8037DCA0
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x1d5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037DCA0:
	lis      r4, 0x325F3030@ha
	lis      r3, 0x00383437@ha
	addi     r0, r4, 0x325F3030@l
	mr       r24, r31
	stw      r0, 0x1c(r25)
	addi     r0, r3, 0x00383437@l
	addi     r26, r1, 0xd0
	addi     r27, r1, 0x70
	stw      r0, 0x18(r25)
	addi     r25, r1, 0xa0
	addi     r28, r1, 0x10
	addi     r29, r1, 0x40
	lfd      f16, 0x220(r30)
	li       r23, 0
	lfd      f17, 0x228(r30)
	lfd      f18, 0x230(r30)
	lfd      f19, 0x238(r30)
	lfd      f20, 0x240(r30)
	lfd      f21, 0x248(r30)
	lfd      f22, 0x250(r30)
	lfd      f23, 0x258(r30)
	lfd      f24, 0x260(r30)
	lfd      f25, 0x268(r30)
	lfd      f26, 0x270(r30)
	lfd      f27, 0x278(r30)
	lfd      f28, 0x280(r30)
	lfd      f29, 0x288(r30)
	lfd      f30, 0x290(r30)
	lfd      f31, 0x298(r30)
	lfd      f13, 0x2a0(r30)
	lfd      f12, 0x2a8(r30)
	lfd      f11, 0x2b0(r30)
	lfd      f10, 0x2b8(r30)
	lfd      f9, 0x2c0(r30)
	lfd      f8, 0x2c8(r30)
	lfd      f7, 0x2d0(r30)
	lfd      f6, 0x2d8(r30)
	lfd      f5, 0x2e0(r30)
	lfd      f4, 0x2e8(r30)
	lfd      f3, 0x2f0(r30)
	lfd      f2, 0x2f8(r30)
	lfd      f1, 0x300(r30)
	lfd      f0, 0x308(r30)
	stfd     f16, 0xd0(r1)
	stfd     f17, 0xd8(r1)
	stfd     f18, 0xe0(r1)
	stfd     f19, 0xe8(r1)
	stfd     f20, 0xf0(r1)
	stfd     f21, 0xf8(r1)
	stfd     f22, 0xa0(r1)
	stfd     f23, 0xa8(r1)
	stfd     f24, 0xb0(r1)
	stfd     f25, 0xb8(r1)
	stfd     f26, 0xc0(r1)
	stfd     f27, 0xc8(r1)
	stfd     f28, 0x70(r1)
	stfd     f29, 0x78(r1)
	stfd     f30, 0x80(r1)
	stfd     f31, 0x88(r1)
	stfd     f13, 0x90(r1)
	stfd     f12, 0x98(r1)
	stfd     f11, 0x40(r1)
	stfd     f10, 0x48(r1)
	stfd     f9, 0x50(r1)
	stfd     f8, 0x58(r1)
	stfd     f7, 0x60(r1)
	stfd     f6, 0x68(r1)
	stfd     f5, 0x10(r1)
	stfd     f4, 0x18(r1)
	stfd     f3, 0x20(r1)
	stfd     f2, 0x28(r1)
	stfd     f1, 0x30(r1)
	stfd     f0, 0x38(r1)

lbl_8037DDC4:
	lwz      r3, 0x7c(r31)
	addi     r7, r24, 0xfc
	lwz      r5, 0(r26)
	li       r8, 0xa
	lwz      r3, 8(r3)
	lwz      r6, 4(r26)
	lwz      r9, 0x78(r31)
	bl       setScaleUpCounter__8MorimuraFPQ29P2DScreen3MgrUxPUlUsP10JKRArchive
	stw      r3, 0xe4(r24)
	addi     r9, r24, 0x144
	lwz      r5, 0(r25)
	li       r10, 3
	lwz      r0, 0x78(r31)
	lwz      r6, 4(r25)
	stw      r0, 8(r1)
	lwz      r7, 0(r27)
	lwz      r3, 0x7c(r31)
	lwz      r8, 4(r27)
	lwz      r3, 8(r3)
	bl setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive stw
r3, 0x114(r24) addi     r9, r24, 0x15c lwz      r5, 0(r29) li       r10, 3 lwz
r0, 0x78(r31) lwz      r6, 4(r29) stw      r0, 8(r1) lwz      r7, 0(r28) lwz r3,
0x7c(r31) lwz      r8, 4(r28) lwz      r3, 8(r3) bl
setScaleUpCounter2__8MorimuraFPQ29P2DScreen3MgrUxUxPUlUsP10JKRArchive stw r3,
0x12c(r24) li       r4, 0xff lwz      r3, 0x12c(r24) bl
setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc lwz      r3, 0x12c(r24) li r4,
1 bl       setPuyoAnimZero__Q32og6Screen18CallBack_CounterRVFb addi     r23,
r23, 1 addi     r26, r26, 8 cmpwi    r23, 6 addi     r27, r27, 8 addi     r25,
r25, 8 addi     r28, r28, 8 addi     r29, r29, 8 addi     r24, r24, 4 blt
lbl_8037DDC4 mr       r3, r31 lwz      r12, 0(r31) lwz      r12, 0x80(r12) mtctr
r12 bctrl li       r3, 0x48 bl       __nw__FUl or.      r25, r3, r3 beq
lbl_8037DED8 lwz      r5, 0xbc(r31) addi     r4, r30, 0x390 lfs      f3,
0x28(r5) lfs      f1, 0x20(r5) lfs      f2, 0x2c(r5) lfs      f0, 0x24(r5) fsubs
f1, f3, f1 fsubs    f2, f2, f0 bl       __ct__Q28Morimura8TIndPaneFPCcff lis r3,
__vt__Q28Morimura15THiScoreIndPane@ha addi     r0, r3,
__vt__Q28Morimura15THiScoreIndPane@l stw      r0, 0(r25)

lbl_8037DED8:
	stw      r25, 0xb8(r31)
	addi     r4, r30, 0x390
	lwz      r3, 0xb8(r31)
	bl       createIndTexture__Q28Morimura8TIndPaneFPCc
	lwz      r3, 0xb8(r31)
	li       r4, 0
	bl       createCaptureTexture__Q28Morimura8TIndPaneF9_GXTexFmt
	lwz      r6, 0xb8(r31)
	lis      r3, mPicTexture__Q28Morimura8THiScore@ha
	addi     r4, r3, mPicTexture__Q28Morimura8THiScore@l
	li       r5, 0
	lwz      r3, 0x18(r6)
	lwz      r4, 0(r4)
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lwz      r6, 0xb8(r31)
	lis      r3, mPicTexture__Q28Morimura8THiScore@ha
	addi     r4, r3, mPicTexture__Q28Morimura8THiScore@l
	li       r5, 0
	lwz      r3, 0x1c(r6)
	lwz      r4, 0(r4)
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lwz      r3, 0xb8(r31)
	lwz      r3, 0x20(r3)
	lwz      r23, 0x20(r3)
	cmplwi   r23, 0
	bne      lbl_8037DF54
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x1fb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037DF54:
	li       r0, 2
	stb      r0, 1(r23)
	lwz      r3, 0xb8(r31)
	lwz      r3, 0x18(r3)
	lwz      r24, 0x20(r3)
	cmplwi   r24, 0
	bne      lbl_8037DF84
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x200
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037DF84:
	li       r0, 2
	stb      r0, 1(r24)
	lwz      r3, 0xb8(r31)
	lwz      r3, 0x1c(r3)
	lwz      r24, 0x20(r3)
	cmplwi   r24, 0
	bne      lbl_8037DFB4
	addi     r3, r30, 0x310
	addi     r5, r30, 0x320
	li       r4, 0x204
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037DFB4:
	li       r0, 2
	mr       r3, r31
	stb      r0, 1(r24)
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x84(r31)
	li       r23, 0
	lfs      f31, lbl_8051EC18@sda21(r2)
	lfs      f16, 0x18(r3)

lbl_8037DFE0:
	li       r25, 0
	li       r24, 0
	b        lbl_8037E030

lbl_8037DFEC:
	lwz      r3, 0x88(r31)
	lwzx     r4, r3, r24
	lfs      f0, 0x1c(r4)
	lwz      r3, 4(r4)
	fadds    f0, f0, f16
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r31)
	addi     r25, r25, 1
	lwzx     r4, r3, r24
	addi     r24, r24, 4
	lwz      r3, 4(r4)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r4)

lbl_8037E030:
	lha      r0, 0x8e(r31)
	cmpw     r25, r0
	blt      lbl_8037DFEC
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x84(r31)
	li       r0, 0
	mr       r3, r31
	stfs     f31, 0x14(r4)
	stw      r0, 0x20(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	addi     r23, r23, 1
	cmpwi    r23, 2
	blt      lbl_8037DFE0
	psq_l    f31, 696(r1), 0, qr0
	lfd      f31, 0x2b0(r1)
	psq_l    f30, 680(r1), 0, qr0
	lfd      f30, 0x2a0(r1)
	psq_l    f29, 664(r1), 0, qr0
	lfd      f29, 0x290(r1)
	psq_l    f28, 648(r1), 0, qr0
	lfd      f28, 0x280(r1)
	psq_l    f27, 632(r1), 0, qr0
	lfd      f27, 0x270(r1)
	psq_l    f26, 616(r1), 0, qr0
	lfd      f26, 0x260(r1)
	psq_l    f25, 600(r1), 0, qr0
	lfd      f25, 0x250(r1)
	psq_l    f24, 584(r1), 0, qr0
	lfd      f24, 0x240(r1)
	psq_l    f23, 568(r1), 0, qr0
	lfd      f23, 0x230(r1)
	psq_l    f22, 552(r1), 0, qr0
	lfd      f22, 0x220(r1)
	psq_l    f21, 536(r1), 0, qr0
	lfd      f21, 0x210(r1)
	psq_l    f20, 520(r1), 0, qr0
	lfd      f20, 0x200(r1)
	psq_l    f19, 504(r1), 0, qr0
	lfd      f19, 0x1f0(r1)
	psq_l    f18, 488(r1), 0, qr0
	lfd      f18, 0x1e0(r1)
	psq_l    f17, 472(r1), 0, qr0
	lfd      f17, 0x1d0(r1)
	psq_l    f16, 456(r1), 0, qr0
	lfd      f16, 0x1c0(r1)
	lmw      r23, 0x19c(r1)
	lwz      r0, 0x2c4(r1)
	mtlr     r0
	addi     r1, r1, 0x2c0
	blr
	*/
}
/*
 * --INFO--
 * Address:	8037E178
 * Size:	00001C
 */
u64 THiScore::getNameID(int id)
{
	static u64 mNameID[16] = {
		'8502_00', // "Days Spent:"
		'8503_00', // "Total Pikmin Lost:"
		'8504_00', // "Pikmin Lost in Battle:"
		'8505_00', // "Pikmin Left Behind:"
		'8506_00', // "Pikmin Lost to Fire:"
		'8507_00', // "Pikmin Lost to Water:"
		'8508_00', // "Pikmin Lost to Electricity:"
		'8509_00', // "Pikmin Lost to Explosions:"
		'8510_00', // "Pikmin Lost to Poison:"
		'8511_00', // "Pikmin Born:"
		'8512_00', // "Red Pikmin Born:"
		'8513_00', // "Yellow Pikmin Born:"
		'8514_00', // "Blue Pikmin Born:"
		'8515_00', // "White Pikmin Born:"
		'8516_00', // "Purple Pikmin Born:"
		'8517_00'  // "Play Time:"
	};

	return mNameID[id];
}

/*
 * --INFO--
 * Address:	8037E194
 * Size:	0009F0
 */
bool THiScore::doUpdate()
{
	if (mCanInput) {
		if (mController->mButton.mButtonDown & Controller::PRESS_B) {
			if (!mIsSection) {
				P2ASSERTLINE(549, getOwner());
				getOwner()->endScene(nullptr);
				mDoEnd    = 0;
				mCanInput = false;
				changePaneInfo();
			}
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
		}
	} else {
		u32 press = mController->getButton();
		if (press & Controller::PRESS_DOWN) {
			if (mState != 1) {
				if (_184 == 0.0f) {
					_184 = 1.0f;
				}
				mIndexGroup->upIndex();
			} else {
				if (!mIndexGroup->mStateID && mErrorSoundCounter == 0) {
					mErrorSoundCounter = 1;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
				}
			}
		} else if (press & Controller::PRESS_UP) {
			if (mState != 2) {
				if (_184 == 0.0f) {
					_184 = 1.0f;
				}
				mIndexGroup->downIndex();
			} else {
				if (!mIndexGroup->mStateID && mErrorSoundCounter == 0) {
					mErrorSoundCounter = 1;
					PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_ERROR, 0);
				}
			}
		}
	}

	if (mErrorSoundCounter) {
		mErrorSoundCounter++;
		if (mErrorSoundCounter > 30)
			mErrorSoundCounter = 0;
	}

	mListScreen->update();
	mMainScreen->update();

	if (mIsAllTreasures) {
		mListScreen->mScreenObj->search('Nlist1')->setOffset(mPaneListPos.x, mPaneListPos.y + mListOffsetY);
		mListScreen->mScreenObj->search('Nselicon')->setOffset(mPaneIconPos.x, mPaneIconPos.y + mListOffsetY);
	}

	if (updateList()) {
		changePaneInfo();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CURSOR, 0);
		if (mScaleMgrList) {
			mScaleMgrList[mCurrentSelect]->up(0.1f, 20.0f, 0.5f, 0.0f);
		}
		for (int i = 0; i < 6; i++) {
			mScaleCounter1[i]->forceScaleUp(true);
			mScaleCounter2[i]->forceScaleUp(true);
			mScaleCounter3[i]->forceScaleUp(true);
		}
	}

	f32 test = mAlphaTimer;
	if (test < 0.2f) {
		test = 0.0f;
	}
	mListScreen->mScreenObj->search('Nheten')->setAlpha(test * 255.0f);
	mListScreen->mScreenObj->search('Notten')->setAlpha(test * 255.0f);

	for (int i = 0; i < 6; i++) {
		mScaleCounter1[i]->getMotherPane()->setAlpha(test * 255.0f);
		mScaleCounter2[i]->getMotherPane()->setAlpha(test * 255.0f);
		mScaleCounter3[i]->getMotherPane()->setAlpha(test * 255.0f);
	}

	if (!mIndexGroup->mStateID) {
		mAlphaTimer += 0.04f;
		if (mAlphaTimer > 1.0f) {
			mAlphaTimer = 1.0f;
			_184        = 0.0f;
		}
	} else {
		mAlphaTimer *= 0.75f;
		if (mAlphaTimer < 0.1f) {
			mAlphaTimer = 0.0f;
		}
	}

	f32 invAlpha = 1.0f - mAlphaTimer;
	mPaneAngle += mAngleGrowRate;
	if (mPaneAngle > TAU) {
		mPaneAngle -= TAU;
	}
	if (!_1C4) {
		f32 alpha = mAlphaTimer;
		if (alpha > 0.2f) {
			alpha *= 2.0f;
		}
		if (alpha > 1.0f) {
			alpha = 1.0f;
		}
		if (alpha == 0.0f) {
			if (!_1C5) {
				mIndPane->setAngleTimer(alpha);
			} else {
				mIndPane->setXY(0.0f, 0.0f);
			}
		} else {
			mIndPane->setFlag(1);
			mIndPane->setXY(alpha * _184 * 1.1f, 0.0f);
		}
		mHighScorePic->setAlpha(alpha * 255.0f);
	}

	if (mForceResetParm) {
		mForceResetParm    = false;
		TIndexGroup* grp   = mIndexGroup;
		grp->mMaxRollSpeed = mScrollParm._00;
		grp->_04           = mScrollParm._04;
		grp->mRollSpeedMod = mScrollParm._08;
		grp->_0C           = mScrollParm._0C;
		grp->_10           = mScrollParm._10;
	}

	mHighScorePic->addOffsetY(mPictureOffsetY);

	if (mScaleMgrList) {
		for (int i = 0; i < mMaxSelect; i++) {
			mIndexPaneList[i]->mPane->updateScale(mScaleMgrList[i]->calc());
		}
	} else {
		for (int i = 0; i < mMaxSelect; i++) {
			mIndexPaneList[i]->mPane->getFirstChildPane()->updateScale(1.0f, 2.0f);
		}
	}

	if (mIsAllTreasures) {
		for (int i = 0; i < mMaxSelect; i++) {
			TIndexPane* pane = mIndexPaneList[i];
			pane->mPane2->setOffset(pane->mPane->mOffset.x, 0.5f * -_1FC);
		}
	}

	if (mSelIconPane) {
		mPaneAngle2 += _198;
		if (mPaneAngle2 > TAU) {
			mPaneAngle2 -= TAU;
		}
		_19C          = _194 * sinf(mPaneAngle2) + 0.85f;
		f32 test      = 0.0f;
		J2DPane* pane = mIndexPaneList[mCurrentSelect]->mPane->getFirstChildPane();
		if (mIsAllTreasures) {
			test = -_1FC * 0.5f;
			pane = mIndexPaneList[mCurrentSelect]->mPane2;
		}
		pane->setBasePosition(J2DPOS_Center);
		for (int i = 0; i < 4; i++) {
			f32 x, y;
			switch (i) {
			case 0:
				x = -20.0f;
				y = 0.0f;
				break;
			case 1:
				x = 20.0f;
				y = 0.0f;
				break;
			case 2:
				x = -20.0f;
				y = 0.0f;
				if (mIsAllTreasures) {
					f32 zero = 0.0f;
					y        = (pane->mBounds.f.y - pane->mBounds.i.y) * 2.0f + zero;
				}
				break;
			case 3:
				x = 20.0f;
				y = 0.0f;
				if (mIsAllTreasures) {
					f32 zero = 0.0f;
					y        = (pane->mBounds.f.y - pane->mBounds.i.y) * 2.0f + zero;
				}
				break;
			}
			f32 x2 = _19C * pane->getGlbVtx(i).x - pane->mGlobalMtx[0][3] + _1A0;
			f32 y2 = _19C * test + pane->getGlbVtx(i).y - pane->mGlobalMtx[1][3];
			mSelIconCorners[i]->setOffset(x2 + x, y2 + y);
		}
	}
	return false;
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
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r31, r3
	lbz      r0, 0x45(r3)
	cmplwi   r0, 0
	beq      lbl_8037E36C
	lwz      r4, 0x80(r31)
	lwz      r0, 0x1c(r4)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8037E27C
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8037E268
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8037E22C
	lis      r3, lbl_804935F0@ha
	lis      r5, lbl_80493600@ha
	addi     r3, r3, lbl_804935F0@l
	li       r4, 0x225
	addi     r5, r5, lbl_80493600@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037E22C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       endScene__Q26Screen9SceneBaseFPQ26Screen11EndSceneArg
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x1c7(r31)
	stb      r0, 0x45(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl

lbl_8037E268:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1801
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8037E36C

lbl_8037E27C:
	lwz      r3, 0x18(r4)
	rlwinm.  r0, r3, 0, 4, 4
	bne      lbl_8037E290
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_8037E2F8

lbl_8037E290:
	lwz      r0, 0x178(r31)
	cmpwi    r0, 1
	beq      lbl_8037E2C0
	lfs      f1, lbl_8051EC18@sda21(r2)
	lfs      f0, 0x184(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8037E2B4
	lfs      f0, lbl_8051EC44@sda21(r2)
	stfs     f0, 0x184(r31)

lbl_8037E2B4:
	lwz      r3, 0x84(r31)
	bl       upIndex__Q28Morimura11TIndexGroupFv
	b        lbl_8037E36C

lbl_8037E2C0:
	lwz      r3, 0x84(r31)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_8037E36C
	lbz      r0, 0x1c6(r31)
	cmplwi   r0, 0
	bne      lbl_8037E36C
	li       r0, 1
	li       r4, 0x1807
	stb      r0, 0x1c6(r31)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	b        lbl_8037E36C

lbl_8037E2F8:
	rlwinm.  r0, r3, 0, 5, 5
	bne      lbl_8037E308
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8037E36C

lbl_8037E308:
	lwz      r0, 0x178(r31)
	cmpwi    r0, 2
	beq      lbl_8037E338
	lfs      f1, lbl_8051EC18@sda21(r2)
	lfs      f0, 0x184(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8037E32C
	lfs      f0, lbl_8051EC68@sda21(r2)
	stfs     f0, 0x184(r31)

lbl_8037E32C:
	lwz      r3, 0x84(r31)
	bl       downIndex__Q28Morimura11TIndexGroupFv
	b        lbl_8037E36C

lbl_8037E338:
	lwz      r3, 0x84(r31)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_8037E36C
	lbz      r0, 0x1c6(r31)
	cmplwi   r0, 0
	bne      lbl_8037E36C
	li       r0, 1
	li       r4, 0x1807
	stb      r0, 0x1c6(r31)
	li       r5, 0
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_8037E36C:
	lbz      r3, 0x1c6(r31)
	cmplwi   r3, 0
	beq      lbl_8037E394
	addi     r0, r3, 1
	stb      r0, 0x1c6(r31)
	lbz      r0, 0x1c6(r31)
	cmplwi   r0, 0x1e
	ble      lbl_8037E394
	li       r0, 0
	stb      r0, 0x1c6(r31)

lbl_8037E394:
	lwz      r3, 0xb4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x174(r31)
	cmplwi   r0, 0
	beq      lbl_8037E464
	lwz      r4, 0xb4(r31)
	lis      r3, 0x69737431@ha
	lfs      f1, 0x204(r31)
	addi     r6, r3, 0x69737431@l
	lwz      r3, 8(r4)
	li       r5, 0x4e6c
	lfs      f0, mListOffsetY__Q28Morimura8THiScore@sda21(r13)
	lwz      r12, 0(r3)
	fadds    f29, f1, f0
	lfs      f28, 0x200(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stfs     f28, 0xd4(r3)
	stfs     f29, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb4(r31)
	lis      r5, 0x69636F6E@ha
	lis      r4, 0x4E73656C@ha
	lfs      f1, 0x20c(r31)
	lwz      r3, 8(r3)
	addi     r6, r5, 0x69636F6E@l
	lfs      f0, mListOffsetY__Q28Morimura8THiScore@sda21(r13)
	addi     r5, r4, 0x4E73656C@l
	lwz      r12, 0(r3)
	fadds    f29, f1, f0
	lfs      f28, 0x208(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	stfs     f28, 0xd4(r3)
	stfs     f29, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8037E464:
	mr       r3, r31
	bl       updateList__Q28Morimura11TScrollListFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037E500
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x84(r12)
	mtctr    r12
	bctrl
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1802
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lwz      r3, 0xe0(r31)
	cmplwi   r3, 0
	beq      lbl_8037E4C4
	lwz      r0, 0x94(r31)
	lfs      f1, lbl_8051EC6C@sda21(r2)
	slwi     r0, r0, 2
	lfs      f2, lbl_8051EC70@sda21(r2)
	lwzx     r3, r3, r0
	lfs      f3, lbl_8051EC74@sda21(r2)
	lfs      f4, lbl_8051EC18@sda21(r2)
	bl       up__Q32og6Screen8ScaleMgrFffff

lbl_8037E4C4:
	li       r29, 0
	mr       r30, r31

lbl_8037E4CC:
	lwz      r3, 0xe4(r30)
	li       r4, 1
	bl       forceScaleUp__Q28Morimura15TScaleUpCounterFb
	lwz      r3, 0x114(r30)
	li       r4, 1
	bl       forceScaleUp__Q28Morimura15TScaleUpCounterFb
	lwz      r3, 0x12c(r30)
	li       r4, 1
	bl       forceScaleUp__Q28Morimura15TScaleUpCounterFb
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 6
	blt      lbl_8037E4CC

lbl_8037E500:
	lfs      f28, 0x180(r31)
	lfs      f0, lbl_8051EC78@sda21(r2)
	fcmpo    cr0, f28, f0
	bge      lbl_8037E514
	lfs      f28, lbl_8051EC18@sda21(r2)

lbl_8037E514:
	lwz      r4, 0x7c(r31)
	lis      r3, 0x6574656E@ha
	addi     r6, r3, 0x6574656E@l
	li       r5, 0x4e68
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051EC7C@sda21(r2)
	lwz      r12, 0(r3)
	fmuls    f28, f0, f28
	lwz      r12, 0x24(r12)
	fctiwz   f0, f28
	stfd     f0, 0x20(r1)
	lwz      r4, 0x24(r1)
	mtctr    r12
	bctrl
	lwz      r4, 0x7c(r31)
	lis      r3, 0x7474656E@ha
	addi     r6, r3, 0x7474656E@l
	li       r5, 0x4e6f
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	fctiwz   f0, f28
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	stfd     f0, 0x28(r1)
	lwz      r4, 0x2c(r1)
	mtctr    r12
	bctrl
	fctiwz   f28, f28
	mr       r30, r31
	li       r29, 0

lbl_8037E5A8:
	lwz      r3, 0xe4(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lwz      r12, 0(r3)
	stfd     f28, 0x28(r1)
	lwz      r12, 0x24(r12)
	lwz      r4, 0x2c(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lwz      r12, 0(r3)
	stfd     f28, 0x20(r1)
	lwz      r12, 0x24(r12)
	lwz      r4, 0x24(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x12c(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	lwz      r12, 0(r3)
	stfd     f28, 0x30(r1)
	lwz      r12, 0x24(r12)
	lwz      r4, 0x34(r1)
	mtctr    r12
	bctrl
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 6
	blt      lbl_8037E5A8
	lwz      r3, 0x84(r31)
	lwz      r0, 0x20(r3)
	cmpwi    r0, 0
	bne      lbl_8037E658
	lfs      f2, 0x180(r31)
	lfs      f1, lbl_8051EC80@sda21(r2)
	lfs      f0, lbl_8051EC44@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x180(r31)
	lfs      f1, 0x180(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8037E680
	stfs     f0, 0x180(r31)
	lfs      f0, lbl_8051EC18@sda21(r2)
	stfs     f0, 0x184(r31)
	b        lbl_8037E680

lbl_8037E658:
	lfs      f2, 0x180(r31)
	lfs      f1, lbl_8051EC84@sda21(r2)
	lfs      f0, lbl_8051EC6C@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x180(r31)
	lfs      f1, 0x180(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8037E680
	lfs      f0, lbl_8051EC18@sda21(r2)
	stfs     f0, 0x180(r31)

lbl_8037E680:
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x188(r31)
	lfs      f2, 0x180(r31)
	fadds    f1, f1, f0
	lfs      f3, lbl_8051EC44@sda21(r2)
	lfs      f0, lbl_8051EC2C@sda21(r2)
	fsubs    f3, f3, f2
	stfs     f1, 0x18c(r31)
	lfs      f1, 0x18c(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8037E6B4
	fsubs    f0, f1, f0
	stfs     f0, 0x18c(r31)

lbl_8037E6B4:
	lbz      r0, 0x1c4(r31)
	cmplwi   r0, 0
	bne      lbl_8037E7A0
	lfs      f4, 0x180(r31)
	lfs      f0, lbl_8051EC78@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8037E6D8
	lfs      f0, lbl_8051EC64@sda21(r2)
	fmuls    f4, f4, f0

lbl_8037E6D8:
	lfs      f0, lbl_8051EC44@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_8037E6E8
	fmr      f4, f0

lbl_8037E6E8:
	lfs      f2, lbl_8051EC18@sda21(r2)
	fcmpu    cr0, f2, f3
	bne      lbl_8037E748
	lbz      r0, 0x1c5(r31)
	cmplwi   r0, 0
	beq      lbl_8037E738
	lfs      f1, 0x18c(r31)
	li       r3, 0
	lfs      f0, lbl_8051EC28@sda21(r2)
	li       r0, -6
	lwz      r4, 0xb8(r31)
	fmuls    f1, f0, f1
	lfs      f0, lbl_8051EC2C@sda21(r2)
	stb      r3, 0x44(r4)
	fdivs    f0, f1, f0
	sth      r0, 0x3c(r4)
	stfs     f2, 0x38(r4)
	stfs     f2, 0x34(r4)
	stfs     f0, 0x40(r4)
	b        lbl_8037E778

lbl_8037E738:
	lwz      r3, 0xb8(r31)
	stfs     f2, 0x34(r3)
	stfs     f2, 0x38(r3)
	b        lbl_8037E778

lbl_8037E748:
	lwz      r4, 0xb8(r31)
	li       r3, 0
	li       r0, 1
	lfs      f1, lbl_8051EC60@sda21(r2)
	sth      r3, 0x3c(r4)
	stb      r0, 0x44(r4)
	lfs      f0, 0x184(r31)
	lwz      r3, 0xb8(r31)
	fmuls    f0, f3, f0
	fmuls    f0, f1, f0
	stfs     f0, 0x34(r3)
	stfs     f2, 0x38(r3)

lbl_8037E778:
	lfs      f0, lbl_8051EC7C@sda21(r2)
	lwz      r3, 0xbc(r31)
	fmuls    f0, f0, f4
	lwz      r12, 0(r3)
	fctiwz   f0, f0
	lwz      r12, 0x24(r12)
	stfd     f0, 0x30(r1)
	lwz      r4, 0x34(r1)
	mtctr    r12
	bctrl

lbl_8037E7A0:
	lbz      r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8037E7E4
	li       r0, 0
	lis      r3, mScrollParm__Q28Morimura8THiScore@ha
	stb      r0, mForceResetParm__Q28Morimura11TScrollList@sda21(r13)
	lfsu     f0, mScrollParm__Q28Morimura8THiScore@l(r3)
	lwz      r4, 0x84(r31)
	stfs     f0, 0(r4)
	lfs      f0, 4(r3)
	stfs     f0, 4(r4)
	lfs      f0, 8(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r4)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x10(r4)

lbl_8037E7E4:
	lwz      r3, 0xbc(r31)
	lfs      f1, mPictureOffsetY__Q28Morimura8THiScore@sda21(r13)
	lfs      f2, 0xd8(r3)
	fadds    f1, f1, f2
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xe0(r31)
	cmplwi   r0, 0
	beq      lbl_8037E868
	li       r29, 0
	li       r30, 0
	b        lbl_8037E858

lbl_8037E820:
	lwz      r3, 0xe0(r31)
	lwzx     r3, r3, r30
	bl       calc__Q32og6Screen8ScaleMgrFv
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r30
	lwz      r3, 4(r3)
	stfs     f1, 0xcc(r3)
	stfs     f1, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_8037E858:
	lha      r0, 0x8e(r31)
	cmpw     r29, r0
	blt      lbl_8037E820
	b        lbl_8037E8B8

lbl_8037E868:
	lfs      f28, lbl_8051EC44@sda21(r2)
	li       r29, 0
	lfs      f29, lbl_8051EC64@sda21(r2)
	li       r30, 0
	b        lbl_8037E8AC

lbl_8037E87C:
	lwz      r3, 0x88(r31)
	lwzx     r3, r3, r30
	lwz      r3, 4(r3)
	bl       getFirstChildPane__7J2DPaneFv
	stfs     f28, 0xcc(r3)
	stfs     f29, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_8037E8AC:
	lha      r0, 0x8e(r31)
	cmpw     r29, r0
	blt      lbl_8037E87C

lbl_8037E8B8:
	lbz      r0, 0x174(r31)
	cmplwi   r0, 0
	beq      lbl_8037E920
	lfs      f29, lbl_8051EC74@sda21(r2)
	li       r29, 0
	li       r30, 0
	b        lbl_8037E914

lbl_8037E8D4:
	lwz      r3, 0x88(r31)
	lfs      f0, 0x1fc(r31)
	lwzx     r3, r3, r30
	fneg     f1, f0
	lwz      r4, 4(r3)
	lwz      r3, 8(r3)
	lfs      f0, 0xd4(r4)
	fmuls    f1, f29, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_8037E914:
	lha      r0, 0x8e(r31)
	cmpw     r29, r0
	blt      lbl_8037E8D4

lbl_8037E920:
	lwz      r0, 0xc0(r31)
	cmplwi   r0, 0
	beq      lbl_8037EB44
	lfs      f2, 0x190(r31)
	lfs      f1, 0x198(r31)
	lfs      f0, lbl_8051EC2C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x190(r31)
	lfs      f1, 0x190(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_8037E954
	fsubs    f0, f1, f0
	stfs     f0, 0x190(r31)

lbl_8037E954:
	lfs      f1, 0x190(r31)
	lfs      f0, lbl_8051EC18@sda21(r2)
	lfs      f2, 0x194(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_8037E994
	lfs      f0, lbl_8051EC8C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_8037E9B8

lbl_8037E994:
	lfs      f0, lbl_8051EC90@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_8037E9B8:
	lfs      f0, lbl_8051EC88@sda21(r2)
	lfs      f29, lbl_8051EC18@sda21(r2)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x19c(r31)
	lwz      r0, 0x94(r31)
	lwz      r3, 0x88(r31)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lwz      r3, 4(r3)
	bl       getFirstChildPane__7J2DPaneFv
	lbz      r0, 0x174(r31)
	mr       r29, r3
	cmplwi   r0, 0
	beq      lbl_8037EA14
	lfs      f0, 0x1fc(r31)
	lwz      r0, 0x94(r31)
	fneg     f0, f0
	lwz      r3, 0x88(r31)
	slwi     r0, r0, 2
	lfs      f1, lbl_8051EC74@sda21(r2)
	lwzx     r3, r3, r0
	fmuls    f29, f1, f0
	lwz      r29, 8(r3)

lbl_8037EA14:
	mr       r3, r29
	li       r4, 4
	bl       setBasePosition__7J2DPaneF15J2DBasePosition
	li       r30, 0
	b        lbl_8037EB38

lbl_8037EA28:
	clrlwi   r0, r30, 0x18
	cmpwi    r0, 2
	beq      lbl_8037EA6C
	bge      lbl_8037EA48
	cmpwi    r0, 0
	beq      lbl_8037EA54
	bge      lbl_8037EA60
	b        lbl_8037EAC0

lbl_8037EA48:
	cmpwi    r0, 4
	bge      lbl_8037EAC0
	b        lbl_8037EA98

lbl_8037EA54:
	lfs      f31, lbl_8051EC94@sda21(r2)
	lfs      f30, lbl_8051EC18@sda21(r2)
	b        lbl_8037EAC0

lbl_8037EA60:
	lfs      f31, lbl_8051EC70@sda21(r2)
	lfs      f30, lbl_8051EC18@sda21(r2)
	b        lbl_8037EAC0

lbl_8037EA6C:
	lbz      r0, 0x174(r31)
	lfs      f31, lbl_8051EC94@sda21(r2)
	cmplwi   r0, 0
	lfs      f30, lbl_8051EC18@sda21(r2)
	beq      lbl_8037EAC0
	lfs      f1, 0x2c(r29)
	lfs      f0, 0x24(r29)
	lfs      f2, lbl_8051EC64@sda21(r2)
	fsubs    f0, f1, f0
	fmadds   f30, f2, f0, f30
	b        lbl_8037EAC0

lbl_8037EA98:
	lbz      r0, 0x174(r31)
	lfs      f31, lbl_8051EC70@sda21(r2)
	cmplwi   r0, 0
	lfs      f30, lbl_8051EC18@sda21(r2)
	beq      lbl_8037EAC0
	lfs      f1, 0x2c(r29)
	lfs      f0, 0x24(r29)
	lfs      f2, lbl_8051EC64@sda21(r2)
	fsubs    f0, f1, f0
	fmadds   f30, f2, f0, f30

lbl_8037EAC0:
	mr       r4, r29
	addi     r3, r1, 0x14
	clrlwi   r5, r30, 0x18
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f1, 0x14(r1)
	mr       r4, r29
	lfs      f0, 0x8c(r29)
	addi     r3, r1, 8
	clrlwi   r5, r30, 0x18
	fsubs    f28, f1, f0
	bl       getGlbVtx__7J2DPaneCFUc
	lfs      f2, 0xc(r1)
	rlwinm   r3, r30, 2, 0x16, 0x1d
	lfs      f1, 0x9c(r29)
	addi     r0, r3, 0xc4
	lfs      f3, 0x19c(r31)
	lfs      f0, 0x1a0(r31)
	fsubs    f1, f2, f1
	lwzx     r3, r31, r0
	fmadds   f0, f3, f28, f0
	fmadds   f1, f3, f1, f30
	fadds    f0, f31, f0
	fadds    f1, f29, f1
	stfs     f0, 0xd4(r3)
	stfs     f1, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1

lbl_8037EB38:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 4
	blt      lbl_8037EA28

lbl_8037EB44:
	li       r3, 0
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8037EB84
 * Size:	000030
 */
void THiScoreListScreen::update() { mScreenObj->update(); }

/*
 * --INFO--
 * Address:	8037EBB4
 * Size:	0001A8
 */
void THiScore::doDraw(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	if (mDoEnd) {
		gfx.mOrthoGraph.setPort();
		Graphics::dirtyInitGX();
		mIndPane->draw();
		mIndPane->mTexture3->capture(0, 0, GX_CTF_R4, false, 0);
		graf->setPort();
	}

	mListScreen->draw(gfx, graf);
	mMainScreen->draw(gfx, graf);
	graf->setColor(JUtility::TColor(0, 0, 0, 255 - mFadeAlpha));
	GXSetAlphaUpdate(GX_FALSE);

	f32 zero = 0.0f;
	u16 y    = System::getRenderModeObj()->efbHeight;
	u16 x    = System::getRenderModeObj()->fbWidth;
	graf->fillBox(JGeometry::TBox2f(0.0f, 0.0f, zero + x, zero + y));
	GXSetAlphaUpdate(GX_TRUE);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r4
	addi     r31, r30, 0x190
	stw      r29, 0x44(r1)
	mr       r29, r3
	lbz      r0, 0x1c7(r3)
	cmplwi   r0, 0
	beq      lbl_8037EC44
	addi     r3, r30, 0xbc
	lwz      r12, 0xbc(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	bl       dirtyInitGX__8GraphicsFv
	lwz      r3, 0xb8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xb8(r29)
	li       r4, 0
	li       r5, 0
	li       r6, 0x20
	lwz      r3, 0x20(r3)
	li       r7, 0
	li       r8, 0
	bl       capture__10JUTTextureFii9_GXTexFmtbUc
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8037EC44:
	lwz      r3, 0xb4(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7c(r29)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r3, 0x44(r29)
	li       r0, -1
	stw      r0, 0x1c(r1)
	li       r0, 0
	subfic   r8, r3, 0xff
	mr       r3, r31
	stb      r0, 0x1c(r1)
	addi     r4, r1, 0xc
	addi     r5, r1, 0x10
	addi     r6, r1, 0x14
	stb      r0, 0x1d(r1)
	addi     r7, r1, 0x18
	stb      r0, 0x1e(r1)
	stb      r8, 0x1f(r1)
	lwz      r0, 0x1c(r1)
	stw      r0, 8(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	li       r3, 0
	bl       GXSetAlphaUpdate
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051EC18@sda21(r2)
	mr       r3, r31
	stw      r4, 0x34(r1)
	addi     r4, r1, 0x20
	lfd      f2, lbl_8051EC98@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r30, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x20(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x24(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	li       r3, 1
	bl       GXSetAlphaUpdate
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8037ED5C
 * Size:	000358
 */
void THiScore::paneInit()
{
	mHighScorePic->changeTexture(mPicTexture[0], 0);

	J2DPictureEx* pane = static_cast<J2DPictureEx*>(mIndexPaneList[_90]->mPane2->getFirstChildPane());
	mTevBlock[0]       = new J2DTevBlock2;
	copyTevBlock(mTevBlock[0], pane->getMaterial()->mTevBlock);

	J2DGXColorS10* col = mTevBlock[0]->getTevColor(0);
	mColors[2].r       = col->r;
	mColors[2].g       = col->g;
	mColors[2].b       = col->b;
	mColors[2].a       = col->a;

	col          = mTevBlock[0]->getTevColor(1);
	mColors[3].r = col->r;
	mColors[3].g = col->g;
	mColors[3].b = col->b;
	mColors[3].a = col->a;

	pane           = static_cast<J2DPictureEx*>(mIndexPaneList[_90]->mPane2);
	mColorBlock[0] = new J2DColorBlock;
	copyColorBlock(mColorBlock[0], &pane->getMaterial()->mColorBlock);

	pane         = static_cast<J2DPictureEx*>(mIndexPaneList[_98]->mPane2->getFirstChildPane());
	mTevBlock[1] = new J2DTevBlock2;
	copyTevBlock(mTevBlock[1], pane->getMaterial()->mTevBlock);

	col          = mTevBlock[1]->getTevColor(0);
	mColors[0].r = col->r;
	mColors[0].g = col->g;
	mColors[0].b = col->b;
	mColors[0].a = col->a;

	col          = mTevBlock[1]->getTevColor(1);
	mColors[1].r = col->r;
	mColors[1].g = col->g;
	mColors[1].b = col->b;
	mColors[1].a = col->a;

	pane           = static_cast<J2DPictureEx*>(mIndexPaneList[_98]->mPane2);
	mColorBlock[1] = new J2DColorBlock;
	copyColorBlock(mColorBlock[1], &pane->getMaterial()->mColorBlock);

	mYOffset = mIndexPaneList[mCurrentSelect]->_1C - 10.0f;
	_AC      = mYOffset + 20.0f;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, mPicTexture__Q28Morimura8THiScore@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r4, r4, mPicTexture__Q28Morimura8THiScore@l
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r3, 0xbc(r3)
	lwz      r4, 0(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x90(r31)
	lwz      r3, 0x88(r31)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lwz      r3, 8(r3)
	bl       getFirstChildPane__7J2DPaneFv
	mr       r0, r3
	li       r3, 0x7c
	mr       r29, r0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8037EDD4
	bl       __ct__12J2DTevBlock2Fv
	mr       r0, r3

lbl_8037EDD4:
	stw      r0, 0x1c8(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x70(r3)
	mr       r3, r31
	lwz      r4, 0x1c8(r31)
	bl       copyTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
	lwz      r3, 0x1c8(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r0, 0(r3)
	li       r4, 1
	sth      r0, 0x1e8(r31)
	lha      r0, 2(r3)
	sth      r0, 0x1ea(r31)
	lha      r0, 4(r3)
	sth      r0, 0x1ec(r31)
	lha      r0, 6(r3)
	sth      r0, 0x1ee(r31)
	lwz      r3, 0x1c8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r0, 0(r3)
	sth      r0, 0x1f0(r31)
	lha      r0, 2(r3)
	sth      r0, 0x1f2(r31)
	lha      r0, 4(r3)
	sth      r0, 0x1f4(r31)
	lha      r0, 6(r3)
	li       r3, 0x18
	sth      r0, 0x1f6(r31)
	lwz      r0, 0x90(r31)
	lwz      r4, 0x88(r31)
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	lwz      r29, 8(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8037EED8
	lis      r5, __vt__13J2DColorBlock@ha
	lis      r4, __ct__Q28JUtility6TColorFv@ha
	addi     r0, r5, __vt__13J2DColorBlock@l
	li       r6, 4
	stw      r0, 0x14(r30)
	li       r5, 0
	addi     r4, r4, __ct__Q28JUtility6TColorFv@l
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__12J2DColorChanFv@ha
	addi     r3, r30, 0xa
	addi     r4, r4, __ct__12J2DColorChanFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 4
	bl       __construct_array
	mr       r3, r30
	bl       initialize__13J2DColorBlockFv

lbl_8037EED8:
	stw      r30, 0x1d0(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	lwz      r4, 0x1d0(r31)
	mr       r3, r31
	addi     r5, r5, 0x10
	bl copyColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock lwz
r0, 0x98(r31) lwz      r3, 0x88(r31) slwi     r0, r0, 2 lwzx     r3, r3, r0 lwz
r3, 8(r3) bl       getFirstChildPane__7J2DPaneFv mr       r29, r3 li       r3,
0x7c bl       __nw__FUl or.      r0, r3, r3 beq      lbl_8037EF38 bl
__ct__12J2DTevBlock2Fv mr       r0, r3

lbl_8037EF38:
	stw      r0, 0x1cc(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x70(r3)
	mr       r3, r31
	lwz      r4, 0x1cc(r31)
	bl       copyTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
	lwz      r3, 0x1cc(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r0, 0(r3)
	li       r4, 1
	sth      r0, 0x1d8(r31)
	lha      r0, 2(r3)
	sth      r0, 0x1da(r31)
	lha      r0, 4(r3)
	sth      r0, 0x1dc(r31)
	lha      r0, 6(r3)
	sth      r0, 0x1de(r31)
	lwz      r3, 0x1cc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r0, 0(r3)
	sth      r0, 0x1e0(r31)
	lha      r0, 2(r3)
	sth      r0, 0x1e2(r31)
	lha      r0, 4(r3)
	sth      r0, 0x1e4(r31)
	lha      r0, 6(r3)
	li       r3, 0x18
	sth      r0, 0x1e6(r31)
	lwz      r0, 0x98(r31)
	lwz      r4, 0x88(r31)
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	lwz      r29, 8(r4)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8037F03C
	lis      r5, __vt__13J2DColorBlock@ha
	lis      r4, __ct__Q28JUtility6TColorFv@ha
	addi     r0, r5, __vt__13J2DColorBlock@l
	li       r6, 4
	stw      r0, 0x14(r30)
	li       r5, 0
	addi     r4, r4, __ct__Q28JUtility6TColorFv@l
	li       r7, 2
	bl       __construct_array
	lis      r4, __ct__12J2DColorChanFv@ha
	addi     r3, r30, 0xa
	addi     r4, r4, __ct__12J2DColorChanFv@l
	li       r5, 0
	li       r6, 2
	li       r7, 4
	bl       __construct_array
	mr       r3, r30
	bl       initialize__13J2DColorBlockFv

lbl_8037F03C:
	stw      r30, 0x1d4(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	lwz      r4, 0x1d4(r31)
	mr       r3, r31
	addi     r5, r5, 0x10
	bl copyColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock lwz
r0, 0x94(r31) lwz      r3, 0x88(r31) slwi     r0, r0, 2 lfs      f1,
lbl_8051ECA0@sda21(r2) lwzx     r3, r3, r0 lfs      f0, lbl_8051EC70@sda21(r2)
	lfs      f2, 0x1c(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0xa8(r31)
	lfs      f1, 0xa8(r31)
	fadds    f0, f1, f0
	stfs     f0, 0xac(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8037F0B4
 * Size:	00005C
 */
void THiScore::doUpdateFadeinFinish()
{
	mCanInput = true;
	if (!mChangeAlpha) {
		mDoEnd = 1;
		mHighScorePic->changeTexture(mIndPane->mTexture3->mTexInfo, 0);
	}
}

/*
 * --INFO--
 * Address:	8037F110
 * Size:	00001C
 */
void THiScore::doUpdateFadeoutFinish()
{
	if (mIsSection) {
		return;
	}
	mDisp->_0C = 1;
}

/*
 * --INFO--
 * Address:	8037F12C
 * Size:	0005C4
 */
void THiScore::changePaneInfo()
{
	_1F8 = 0.0f;

	int id = mIndexPaneList[mCurrentSelect]->getIndex();

	if (mIsAllTreasures || (mIsSection && mForceClear)) {
		mHighScorePic->show();
		mMainScreen->mScreenObj->search('Notakara')->show();
	} else {
		mHighScorePic->show();
		if (!mIsSection && !(sys->getPlayCommonData()->mChallengeFlags.isSet(1))) {
			mHighScorePic->hide();
		}
		mMainScreen->mScreenObj->search('Notakara')->hide();
		if (mForceClear2) {
			mHighScorePic->show();
		}
	}

	// show the : when the current selection is play time only
	u32 id2 = mIndexPaneList[mCurrentSelect]->getIndex();
	if (id2 == 15) {
		mMainScreen->mScreenObj->search('Mheten')->show();
		if (mIsAllTreasures) {
			mMainScreen->mScreenObj->search('Motten')->show();
		}
	} else {
		P2ASSERTLINE(917, mMainScreen->mScreenObj->search('Nheten'));
		P2ASSERTLINE(918, mMainScreen->mScreenObj->search('Notten'));
		mMainScreen->mScreenObj->search('Nheten')->hide();
		mMainScreen->mScreenObj->search('Nheten')->hide();
	}

	for (int i = 0; i < 6; i++) {
		int score = getRecord(i, id);
		// use compeltely different counters for the play time versus the other scores
		if (id2 != 0) {
			mScaleCounter2[i]->getMotherPane()->show();
			mScaleCounter3[i]->getMotherPane()->show();
			mScaleCounter2[i]->setBlind(false);
			mScaleCounter3[i]->setBlind(false);
			mScaleCounter1[i]->getMotherPane()->hide();

			// if a sore is negative, assume it isnt set
			if (score <= -1) {
				score = 0;
				mScaleCounter2[i]->setBlind(true);
				mScaleCounter3[i]->setBlind(true);
			}
			mCurrScore1[i] = score % 10;
			mCurrScore2[i] = (score / 10) * 0x100;
		} else {
			mScaleCounter2[i]->getMotherPane()->hide();
			mScaleCounter3[i]->getMotherPane()->hide();
			mScaleCounter1[i]->getMotherPane()->show();
			mScaleCounter1[i]->setBlind(false);

			if (score <= -1) {
				score = 0;
				mScaleCounter1[i]->setBlind(true);
			}
			mScoreCounts[i] = score;
		}
	}

	if (mDoEnd && !mChangeAlpha) {
		mIndPane->mTexture1->storeTIMG(mPicTexture[id], (u8)0);
		mIndPane->mTexture2->storeTIMG(mPicTexture[id], (u8)0);
	} else {
		mHighScorePic->changeTexture(mPicTexture[id], 0);
	}

	if (!mLoopDrum) {
		mState = 0;
		mStickAnimMgr->stickUpDown();
		int id3 = mIndexPaneList[mCurrentSelect]->getIndex();
		f32 y1  = mIndexPaneList[mCurrentSelect]->_1C;

		if (id3 == 0) {
			mState = 1;
			mStickAnimMgr->stickDown();
		}
		if (id3 == 15) {
			mState = 2;
			mStickAnimMgr->stickUp();
		}

		if (mState == 0) {
			mErrorSoundCounter = 0;
		} else {
			mErrorSoundCounter = 1;
		}

		for (int i = 0; i < mMaxSelect; i++) {
			mIndexPaneList[i]->mPane->show();
			mIndexPaneList[i]->mPane2->show();
			if (mIndexPaneList[i]->getIndex() != id3) {
				TIndexPane* pane = mIndexPaneList[i];
				f32 y2           = pane->_1C;
				pane->getIndex();
				if (mIndexPaneList[i]->getIndex() > id3 && y1 > y2 || mIndexPaneList[i]->getIndex() < id3 && y1 < y2) {
					mIndexPaneList[i]->mPane->hide();
					mIndexPaneList[i]->mPane2->hide();
				}
			}
		}
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stmw     r26, 8(r1)
	lfs      f0, lbl_8051EC18@sda21(r2)
	mr       r26, r3
	stfs     f0, 0x1f8(r3)
	lwz      r0, 0x94(r3)
	lwz      r3, 0x88(r3)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getIndex__Q28Morimura10TIndexPaneFv
	lbz      r0, 0x174(r26)
	mr       r29, r3
	cmplwi   r0, 0
	bne      lbl_8037F194
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8037F1D4
	lbz      r0, mForceClear__Q28Morimura8THiScore@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8037F1D4

lbl_8037F194:
	lwz      r5, 0xbc(r26)
	li       r0, 0
	lis      r4, 0x6B617261@ha
	lis      r3, 0x4E6F7461@ha
	stb      r0, 0xb0(r5)
	addi     r6, r4, 0x6B617261@l
	addi     r5, r3, 0x4E6F7461@l
	lwz      r3, 0x7c(r26)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_8037F254

lbl_8037F1D4:
	lwz      r3, 0xbc(r26)
	li       r0, 1
	stb      r0, 0xb0(r3)
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8037F20C
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8037F20C
	lwz      r3, 0xbc(r26)
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_8037F20C:
	lwz      r3, 0x7c(r26)
	lis      r5, 0x6B617261@ha
	lis      r4, 0x4E6F7461@ha
	lwz      r3, 8(r3)
	addi     r6, r5, 0x6B617261@l
	addi     r5, r4, 0x4E6F7461@l
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0xb0(r3)
	lbz      r0, mForceClear2__Q28Morimura8THiScore@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8037F254
	lwz      r3, 0xbc(r26)
	li       r0, 1
	stb      r0, 0xb0(r3)

lbl_8037F254:
	lwz      r0, 0x94(r26)
	li       r31, 0
	lwz      r3, 0x88(r26)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getIndex__Q28Morimura10TIndexPaneFv
	cmpwi    r3, 0xf
	bne      lbl_8037F278
	li       r31, 1

lbl_8037F278:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8037F2E8
	lwz      r4, 0x7c(r26)
	lis      r3, 0x6574656E@ha
	addi     r6, r3, 0x6574656E@l
	li       r5, 0x4e68
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0xb0(r3)
	lbz      r0, 0x174(r26)
	cmplwi   r0, 0
	beq      lbl_8037F3D0
	lwz      r4, 0x7c(r26)
	lis      r3, 0x7474656E@ha
	addi     r6, r3, 0x7474656E@l
	li       r5, 0x4e6f
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0xb0(r3)
	b        lbl_8037F3D0

lbl_8037F2E8:
	lwz      r4, 0x7c(r26)
	lis      r3, 0x6574656E@ha
	addi     r6, r3, 0x6574656E@l
	li       r5, 0x4e68
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8037F330
	lis      r3, lbl_804935F0@ha
	lis      r5, lbl_80493600@ha
	addi     r3, r3, lbl_804935F0@l
	li       r4, 0x395
	addi     r5, r5, lbl_80493600@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037F330:
	lwz      r4, 0x7c(r26)
	lis      r3, 0x7474656E@ha
	addi     r6, r3, 0x7474656E@l
	li       r5, 0x4e6f
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	bne      lbl_8037F378
	lis      r3, lbl_804935F0@ha
	lis      r5, lbl_80493600@ha
	addi     r3, r3, lbl_804935F0@l
	li       r4, 0x396
	addi     r5, r5, lbl_80493600@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037F378:
	lwz      r4, 0x7c(r26)
	lis      r3, 0x6574656E@ha
	addi     r6, r3, 0x6574656E@l
	li       r5, 0x4e68
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lis      r4, 0x7474656E@ha
	stb      r0, 0xb0(r3)
	addi     r6, r4, 0x7474656E@l
	li       r5, 0x4e6f
	lwz      r3, 0x7c(r26)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0xb0(r3)

lbl_8037F3D0:
	mr       r30, r26
	clrlwi   r31, r31, 0x18
	li       r28, 0

lbl_8037F3DC:
	mr       r3, r26
	mr       r4, r28
	mr       r5, r29
	bl       getRecord__Q28Morimura8THiScoreFii
	cmplwi   r31, 0
	mr       r27, r3
	beq      lbl_8037F494
	lwz      r3, 0x114(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 1
	stb      r0, 0xb0(r3)
	lwz      r3, 0x12c(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 1
	li       r4, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0x114(r30)
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	lwz      r3, 0x12c(r30)
	li       r4, 0
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	lwz      r3, 0xe4(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 0
	cmpwi    r27, -1
	stb      r0, 0xb0(r3)
	bgt      lbl_8037F464
	lwz      r3, 0x114(r30)
	li       r27, 0
	li       r4, 1
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	lwz      r3, 0x12c(r30)
	li       r4, 1
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb

lbl_8037F464:
	lis      r3, 0x88888889@ha
	addi     r0, r3, 0x88888889@l
	mulhw    r0, r0, r27
	add      r0, r0, r27
	srawi    r0, r0, 5
	srwi     r3, r0, 0x1f
	add      r3, r0, r3
	mulli    r0, r3, 0x3c
	stw      r3, 0x144(r30)
	subf     r0, r0, r27
	stw      r0, 0x15c(r30)
	b        lbl_8037F4EC

lbl_8037F494:
	lwz      r3, 0x114(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0x12c(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0xe4(r30)
	bl       getMotherPane__Q32og6Screen18CallBack_CounterRVFv
	li       r0, 1
	li       r4, 0
	stb      r0, 0xb0(r3)
	lwz      r3, 0xe4(r30)
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb
	cmpwi    r27, -1
	bgt      lbl_8037F4E8
	lwz      r3, 0xe4(r30)
	li       r27, 0
	li       r4, 1
	bl       setBlind__Q32og6Screen18CallBack_CounterRVFb

lbl_8037F4E8:
	stw      r27, 0xfc(r30)

lbl_8037F4EC:
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 6
	blt      lbl_8037F3DC
	lbz      r0, 0x1c7(r26)
	cmplwi   r0, 0
	beq      lbl_8037F54C
	lbz      r0, mChangeAlpha__Q28Morimura8THiScore@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8037F54C
	lwz      r4, 0xb8(r26)
	lis      r3, mPicTexture__Q28Morimura8THiScore@ha
	slwi     r28, r29, 2
	li       r5, 0
	addi     r27, r3, mPicTexture__Q28Morimura8THiScore@l
	lwz      r3, 0x18(r4)
	lwzx     r4, r27, r28
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	lwz      r3, 0xb8(r26)
	li       r5, 0
	lwzx     r4, r27, r28
	lwz      r3, 0x1c(r3)
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_8037F574

lbl_8037F54C:
	lwz      r3, 0xbc(r26)
	lis      r4, mPicTexture__Q28Morimura8THiScore@ha
	slwi     r0, r29, 2
	li       r5, 0
	lwz      r12, 0(r3)
	addi     r4, r4, mPicTexture__Q28Morimura8THiScore@l
	lwzx     r4, r4, r0
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl

lbl_8037F574:
	lbz      r0, mLoopDrum__Q28Morimura8THiScore@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8037F6CC
	li       r0, 0
	stw      r0, 0x178(r26)
	lwz      r3, 0xdc(r26)
	bl       stickUpDown__Q32og6Screen12StickAnimMgrFv
	lwz      r0, 0x94(r26)
	lwz      r3, 0x88(r26)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       getIndex__Q28Morimura10TIndexPaneFv
	lwz      r0, 0x94(r26)
	or.      r31, r3, r3
	lwz      r3, 0x88(r26)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lfs      f31, 0x1c(r3)
	bne      lbl_8037F5D0
	li       r0, 1
	stw      r0, 0x178(r26)
	lwz      r3, 0xdc(r26)
	bl       stickDown__Q32og6Screen12StickAnimMgrFv

lbl_8037F5D0:
	cmpwi    r31, 0xf
	bne      lbl_8037F5E8
	li       r0, 2
	stw      r0, 0x178(r26)
	lwz      r3, 0xdc(r26)
	bl       stickUp__Q32og6Screen12StickAnimMgrFv

lbl_8037F5E8:
	lwz      r0, 0x178(r26)
	cmpwi    r0, 0
	bne      lbl_8037F600
	li       r0, 0
	stb      r0, 0x1c6(r26)
	b        lbl_8037F608

lbl_8037F600:
	li       r0, 1
	stb      r0, 0x1c6(r26)

lbl_8037F608:
	li       r27, 0
	li       r30, 0
	b        lbl_8037F6C0

lbl_8037F614:
	lwz      r3, 0x88(r26)
	li       r0, 1
	lwzx     r3, r3, r30
	lwz      r3, 4(r3)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x88(r26)
	lwzx     r3, r3, r30
	lwz      r3, 8(r3)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x88(r26)
	lwzx     r3, r3, r30
	bl       getIndex__Q28Morimura10TIndexPaneFv
	cmpw     r3, r31
	beq      lbl_8037F6B8
	lwz      r3, 0x88(r26)
	lwzx     r3, r3, r30
	lfs      f30, 0x1c(r3)
	bl       getIndex__Q28Morimura10TIndexPaneFv
	lwz      r3, 0x88(r26)
	lwzx     r3, r3, r30
	bl       getIndex__Q28Morimura10TIndexPaneFv
	cmpw     r3, r31
	ble      lbl_8037F678
	fcmpo    cr0, f31, f30
	bgt      lbl_8037F694

lbl_8037F678:
	lwz      r3, 0x88(r26)
	lwzx     r3, r3, r30
	bl       getIndex__Q28Morimura10TIndexPaneFv
	cmpw     r3, r31
	bge      lbl_8037F6B8
	fcmpo    cr0, f31, f30
	bge      lbl_8037F6B8

lbl_8037F694:
	lwz      r3, 0x88(r26)
	li       r0, 0
	lwzx     r3, r3, r30
	lwz      r3, 4(r3)
	stb      r0, 0xb0(r3)
	lwz      r3, 0x88(r26)
	lwzx     r3, r3, r30
	lwz      r3, 8(r3)
	stb      r0, 0xb0(r3)

lbl_8037F6B8:
	addi     r30, r30, 4
	addi     r27, r27, 1

lbl_8037F6C0:
	lha      r0, 0x8e(r26)
	cmpw     r27, r0
	blt      lbl_8037F614

lbl_8037F6CC:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lmw      r26, 8(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8037F6F0
 * Size:	000124
 */
void THiScore::setPaneCharacter(int id)
{
	int index = mIndexPaneList[id]->getIndex();
	u64 tag   = getNameID(index);
	mIndexPaneList[id]->mPane2->setMsgID(tag);

	J2DPane* pane = mIndexPaneList[id]->mPane2->getFirstChildPane();
	P2ASSERTLINE(1031, pane);
	pane->setMsgID(getNameID(index));

	if (mIsAllTreasures && mPicTexture[index]) {
		static_cast<J2DPictureEx*>(mIndexPaneList[id]->mPane->getFirstChildPane())->changeTexture(mPicTexture[index], 0);
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	slwi     r31, r4, 2
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r3, 0x88(r3)
	lwzx     r3, r3, r31
	bl       getIndex__Q28Morimura10TIndexPaneFv
	mr       r0, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	mr       r29, r0
	mr       r4, r29
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x88(r30)
	lwzx     r5, r5, r31
	lwz      r5, 8(r5)
	stw      r4, 0x1c(r5)
	stw      r3, 0x18(r5)
	lwz      r3, 0x88(r30)
	lwzx     r3, r3, r31
	lwz      r3, 8(r3)
	bl       getFirstChildPane__7J2DPaneFv
	or.      r28, r3, r3
	bne      lbl_8037F788
	lis      r3, lbl_804935F0@ha
	lis      r5, lbl_80493600@ha
	addi     r3, r3, lbl_804935F0@l
	li       r4, 0x407
	addi     r5, r5, lbl_80493600@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037F788:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	stw      r4, 0x1c(r28)
	stw      r3, 0x18(r28)
	lbz      r0, 0x174(r30)
	cmplwi   r0, 0
	beq      lbl_8037F7F4
	lis      r3, mPicTexture__Q28Morimura8THiScore@ha
	slwi     r28, r29, 2
	addi     r29, r3, mPicTexture__Q28Morimura8THiScore@l
	lwzx     r0, r29, r28
	cmplwi   r0, 0
	beq      lbl_8037F7F4
	lwz      r3, 0x88(r30)
	lwzx     r3, r3, r31
	lwz      r3, 4(r3)
	bl       getFirstChildPane__7J2DPaneFv
	lwz      r12, 0(r3)
	li       r5, 0
	lwzx     r4, r29, r28
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl

lbl_8037F7F4:
	lwz      r0, 0x24(r1)
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
 * Address:	8037F814
 * Size:	00044C
 */
int THiScore::getRecord(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	cmplwi   r3, 0
	bne      lbl_8037F85C
	lis      r3, lbl_804935F0@ha
	lis      r5, lbl_80493600@ha
	addi     r3, r3, lbl_804935F0@l
	li       r4, 0x417
	addi     r5, r5, lbl_80493600@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037F85C:
	lis      r3, mHiscoreDataOrder__Q28Morimura8THiScore@ha
	slwi     r0, r31, 2
	addi     r3, r3, mHiscoreDataOrder__Q28Morimura8THiScore@l
	lwzx     r31, r3, r0
	cmpwi    r31, 0x10
	ble      lbl_8037F890
	lis      r3, lbl_804935F0@ha
	lis      r5, lbl_80493600@ha
	addi     r3, r3, lbl_804935F0@l
	li       r4, 0x419
	addi     r5, r5, lbl_80493600@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8037F890:
	lbz      r0, mIsSection__Q28Morimura9TTestBase@sda21(r13)
	li       r3, 0
	cmplwi   r0, 0
	beq      lbl_8037F8A4
	li       r3, 1

lbl_8037F8A4:
	cmpwi    r30, 3
	beq      lbl_8037FAA0
	bge      lbl_8037F8C8
	cmpwi    r30, 1
	beq      lbl_8037F95C
	bge      lbl_8037F9E0
	cmpwi    r30, 0
	bge      lbl_8037F8D8
	b        lbl_8037FC2C

lbl_8037F8C8:
	cmpwi    r30, 5
	beq      lbl_8037FBA8
	bge      lbl_8037FC2C
	b        lbl_8037FB24

lbl_8037F8D8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037F924
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051EC20@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051ECA4@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051ECA0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051EC44@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	b        lbl_8037FC48

lbl_8037F924:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8037F954
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r31
	bl       getHighscore_clear__Q24Game14PlayCommonDataFi
	li       r4, 0
	bl       getScore__Q24Game9HighscoreFi
	b        lbl_8037FC48

lbl_8037F954:
	li       r3, -1
	b        lbl_8037FC48

lbl_8037F95C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037F9A8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EC20@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051ECA4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051ECA8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051ECA0@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	b        lbl_8037FC48

lbl_8037F9A8:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8037F9D8
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r31
	bl       getHighscore_clear__Q24Game14PlayCommonDataFi
	li       r4, 1
	bl       getScore__Q24Game9HighscoreFi
	b        lbl_8037FC48

lbl_8037F9D8:
	li       r3, -1
	b        lbl_8037FC48

lbl_8037F9E0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037FA68
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EC20@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_8051ECA4@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_8051EC74@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8037FA24
	li       r3, -1
	b        lbl_8037FC48

lbl_8037FA24:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EC20@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051ECA4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051ECB0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051ECAC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	b        lbl_8037FC48

lbl_8037FA68:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8037FA98
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r31
	bl       getHighscore_clear__Q24Game14PlayCommonDataFi
	li       r4, 2
	bl       getScore__Q24Game9HighscoreFi
	b        lbl_8037FC48

lbl_8037FA98:
	li       r3, -1
	b        lbl_8037FC48

lbl_8037FAA0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037FAEC
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EC20@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051ECA4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051ECA8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051ECA0@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	b        lbl_8037FC48

lbl_8037FAEC:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8037FB1C
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r31
	bl       getHighscore_complete__Q24Game14PlayCommonDataFi
	li       r4, 0
	bl       getScore__Q24Game9HighscoreFi
	b        lbl_8037FC48

lbl_8037FB1C:
	li       r3, -1
	b        lbl_8037FC48

lbl_8037FB24:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037FB70
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EC20@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051ECA4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051ECA8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051ECAC@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	b        lbl_8037FC48

lbl_8037FB70:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8037FBA0
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r31
	bl       getHighscore_complete__Q24Game14PlayCommonDataFi
	li       r4, 1
	bl       getScore__Q24Game9HighscoreFi
	b        lbl_8037FC48

lbl_8037FBA0:
	li       r3, -1
	b        lbl_8037FC48

lbl_8037FBA8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8037FBF4
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051EC20@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051ECA4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051ECB8@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051ECB4@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	b        lbl_8037FC48

lbl_8037FBF4:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8037FC24
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r31
	bl       getHighscore_complete__Q24Game14PlayCommonDataFi
	li       r4, 2
	bl       getScore__Q24Game9HighscoreFi
	b        lbl_8037FC48

lbl_8037FC24:
	li       r3, -1
	b        lbl_8037FC48

lbl_8037FC2C:
	lis      r3, lbl_804935F0@ha
	li       r4, 0x446
	addi     r3, r3, lbl_804935F0@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_8037FC48:
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
 * Address:	8037FC60
 * Size:	00043C
 */
void THiScore::changeTextTevBlock(int)
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stmw     r25, 0xe4(r1)
	mr       r27, r3
	slwi     r25, r4, 2
	lwz      r3, 0x88(r3)
	lwzx     r3, r3, r25
	lwz      r3, 8(r3)
	bl       getFirstChildPane__7J2DPaneFv
	lwz      r4, 0x88(r27)
	mr       r29, r3
	lwz      r5, 0x84(r27)
	lwzx     r4, r4, r25
	lwz      r0, 0x20(r5)
	lfs      f1, 0x14(r5)
	lfs      f0, 0x1c(r4)
	cmpwi    r0, 0
	lwz      r28, 8(r4)
	fadds    f1, f0, f1
	bne      lbl_8038003C
	lfs      f0, 0xac(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_8038003C
	lfs      f0, 0xa8(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_8038003C
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x70(r3)
	mr       r3, r27
	lwz      r4, 0x1c8(r27)
	bl       changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
	lfs      f2, 0x1f8(r27)
	lfs      f1, lbl_8051EC6C@sda21(r2)
	lfs      f0, lbl_8051EC2C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x1f8(r27)
	lfs      f1, 0x1f8(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_8037FD14
	fsubs    f0, f1, f0
	stfs     f0, 0x1f8(r27)

lbl_8037FD14:
	lfs      f2, 0x1f8(r27)
	lfs      f0, lbl_8051EC18@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8037FD28
	fneg     f2, f2

lbl_8037FD28:
	lfs      f1, lbl_8051EC90@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, lbl_8051EC18@sda21(r2)
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_8037FD60
	fmr      f1, f0

lbl_8037FD60:
	lha      r4, 0x1da(r27)
	lis      r0, 0x4330
	lha      r3, 0x1dc(r27)
	lha      r5, 0x1de(r27)
	xoris    r11, r4, 0x8000
	lha      r4, 0x1e0(r27)
	xoris    r9, r3, 0x8000
	lha      r3, 0x1e2(r27)
	xoris    r7, r5, 0x8000
	xoris    r5, r4, 0x8000
	lha      r6, 0x1ea(r27)
	xoris    r3, r3, 0x8000
	lha      r4, 0x1ec(r27)
	lha      r8, 0x1ee(r27)
	xoris    r12, r6, 0x8000
	lha      r6, 0x1f0(r27)
	xoris    r10, r4, 0x8000
	lha      r4, 0x1f2(r27)
	xoris    r8, r8, 0x8000
	xoris    r6, r6, 0x8000
	lfs      f2, lbl_8051EC44@sda21(r2)
	xoris    r4, r4, 0x8000
	stw      r11, 0x2c(r1)
	lfd      f0, lbl_8051EC20@sda21(r2)
	fsubs    f2, f2, f1
	stw      r0, 0x28(r1)
	lfd      f3, 0x28(r1)
	stw      r9, 0x44(r1)
	fsubs    f4, f3, f0
	stw      r0, 0x40(r1)
	lfd      f3, 0x40(r1)
	fmuls    f8, f1, f4
	stw      r7, 0x5c(r1)
	fsubs    f4, f3, f0
	stw      r0, 0x58(r1)
	lfd      f3, 0x58(r1)
	fmuls    f7, f1, f4
	stw      r5, 0x74(r1)
	fsubs    f4, f3, f0
	stw      r0, 0x70(r1)
	lfd      f3, 0x70(r1)
	fmuls    f5, f1, f4
	stw      r3, 0x8c(r1)
	fsubs    f4, f3, f0
	stw      r0, 0x88(r1)
	lfd      f3, 0x88(r1)
	fmuls    f4, f1, f4
	stw      r12, 0x24(r1)
	fsubs    f3, f3, f0
	stw      r0, 0x20(r1)
	lfd      f6, 0x20(r1)
	fmuls    f3, f1, f3
	stw      r10, 0x3c(r1)
	fsubs    f9, f6, f0
	stw      r0, 0x38(r1)
	lfd      f6, 0x38(r1)
	fmadds   f9, f2, f9, f8
	stw      r8, 0x54(r1)
	fsubs    f8, f6, f0
	stw      r0, 0x50(r1)
	fctiwz   f9, f9
	lfd      f6, 0x50(r1)
	fmadds   f7, f2, f8, f7
	stfd     f9, 0x30(r1)
	fsubs    f6, f6, f0
	fctiwz   f7, f7
	stw      r6, 0x6c(r1)
	lwz      r9, 0x34(r1)
	stw      r0, 0x68(r1)
	fmadds   f6, f2, f6, f5
	lfd      f5, 0x68(r1)
	fctiwz   f6, f6
	stfd     f7, 0x48(r1)
	fsubs    f5, f5, f0
	stw      r4, 0x84(r1)
	lwz      r10, 0x4c(r1)
	stw      r0, 0x80(r1)
	fmadds   f5, f2, f5, f4
	lfd      f4, 0x80(r1)
	fctiwz   f5, f5
	stfd     f6, 0x60(r1)
	fsubs    f4, f4, f0
	lwz      r11, 0x64(r1)
	stfd     f5, 0x78(r1)
	fmadds   f3, f2, f4, f3
	lwz      r31, 0x7c(r1)
	fctiwz   f3, f3
	stfd     f3, 0x90(r1)
	lwz      r30, 0x94(r1)
	lha      r4, 0x1d8(r27)
	mr       r3, r29
	lha      r5, 0x1e8(r27)
	xoris    r4, r4, 0x8000
	lha      r6, 0x1e4(r27)
	stw      r4, 0xd4(r1)
	xoris    r4, r5, 0x8000
	lha      r5, 0x1e6(r27)
	xoris    r7, r6, 0x8000
	stw      r0, 0xd0(r1)
	xoris    r5, r5, 0x8000
	lha      r6, 0x1f4(r27)
	lfd      f3, 0xd0(r1)
	stw      r4, 0xcc(r1)
	xoris    r8, r6, 0x8000
	fsubs    f3, f3, f0
	lha      r4, 0x1f6(r27)
	stw      r0, 0xc8(r1)
	xoris    r6, r4, 0x8000
	lfd      f4, 0xc8(r1)
	fmuls    f3, f1, f3
	stw      r7, 0xa4(r1)
	fsubs    f4, f4, f0
	stw      r0, 0xa0(r1)
	fmadds   f3, f2, f4, f3
	lfd      f4, 0xa0(r1)
	stw      r5, 0xbc(r1)
	fsubs    f5, f4, f0
	stw      r0, 0xb8(r1)
	fctiwz   f3, f3
	lfd      f4, 0xb8(r1)
	fmuls    f5, f1, f5
	stfd     f3, 0xd8(r1)
	fsubs    f3, f4, f0
	lwz      r4, 0xdc(r1)
	stw      r8, 0x9c(r1)
	fmuls    f1, f1, f3
	stw      r0, 0x98(r1)
	lfd      f3, 0x98(r1)
	stw      r6, 0xb4(r1)
	fsubs    f4, f3, f0
	stw      r0, 0xb0(r1)
	lfd      f3, 0xb0(r1)
	fmadds   f4, f2, f4, f5
	sth      r4, 0x10(r1)
	fsubs    f0, f3, f0
	fctiwz   f3, f4
	sth      r9, 0x12(r1)
	fmadds   f0, f2, f0, f1
	sth      r10, 0x14(r1)
	sth      r11, 0x16(r1)
	fctiwz   f0, f0
	lwz      r12, 0(r29)
	stfd     f3, 0xa8(r1)
	lwz      r12, 0xb8(r12)
	stfd     f0, 0xc0(r1)
	lwz      r26, 0xac(r1)
	lwz      r25, 0xc4(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r3)
	addi     r5, r1, 0x10
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	sth      r31, 8(r1)
	mr       r3, r29
	sth      r30, 0xa(r1)
	sth      r26, 0xc(r1)
	sth      r25, 0xe(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r3)
	addi     r5, r1, 8
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	lwz      r4, 0x1d0(r27)
	mr       r3, r27
	addi     r5, r5, 0x10
	bl changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock
	b        lbl_80380088

lbl_8038003C:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x70(r3)
	mr       r3, r27
	lwz      r4, 0x1cc(r27)
	bl       changeTevBlock__Q28Morimura8THiScoreFP11J2DTevBlockP11J2DTevBlock
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	mr       r5, r3
	lwz      r4, 0x1d4(r27)
	mr       r3, r27
	addi     r5, r5, 0x10
	bl changeColorBlock__Q28Morimura8THiScoreFP13J2DColorBlockP13J2DColorBlock

lbl_80380088:
	lmw      r25, 0xe4(r1)
	lwz      r0, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	8038009C
 * Size:	00021C
 */
void THiScore::copyTevBlock(J2DTevBlock*, J2DTevBlock*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r5
	mr       r3, r30
	stw      r29, 0x34(r1)
	mr       r29, r4
	lwz      r12, 0(r30)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r29)
	mr       r4, r3
	mr       r3, r29
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	li       r31, 0
	b        lbl_8038027C

lbl_803800F0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	mr       r3, r29
	mr       r4, r31
	addi     r5, r1, 0x14
	stw      r0, 0x14(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r0, 0(r3)
	mr       r4, r31
	addi     r5, r1, 0x20
	sth      r0, 0x20(r1)
	lha      r0, 2(r3)
	sth      r0, 0x22(r1)
	lha      r0, 4(r3)
	sth      r0, 0x24(r1)
	lha      r0, 6(r3)
	mr       r3, r29
	sth      r0, 0x26(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	mr       r3, r29
	mr       r4, r31
	addi     r5, r1, 0x10
	stw      r0, 0x10(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0(r3)
	mr       r4, r31
	lwz      r0, 4(r3)
	mr       r3, r29
	addi     r5, r1, 0x18
	stw      r6, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	mr       r3, r29
	mr       r4, r31
	addi     r5, r1, 0xc
	stw      r0, 0xc(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	mr       r3, r29
	mr       r4, r31
	addi     r5, r1, 8
	stb      r0, 8(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_8038027C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplw    r31, r0
	blt      lbl_803800F0
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803802B8
 * Size:	00021C
 */
void THiScore::changeTevBlock(J2DTevBlock*, J2DTevBlock*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r5
	stw      r29, 0x34(r1)
	mr       r29, r4
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r30)
	mr       r4, r3
	mr       r3, r30
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	li       r31, 0
	b        lbl_80380498

lbl_8038030C:
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 0x14
	stw      r0, 0x14(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lha      r0, 0(r3)
	mr       r4, r31
	addi     r5, r1, 0x20
	sth      r0, 0x20(r1)
	lha      r0, 2(r3)
	sth      r0, 0x22(r1)
	lha      r0, 4(r3)
	sth      r0, 0x24(r1)
	lha      r0, 6(r3)
	mr       r3, r30
	sth      r0, 0x26(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 0x10
	stw      r0, 0x10(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0(r3)
	mr       r4, r31
	lwz      r0, 4(r3)
	mr       r3, r30
	addi     r5, r1, 0x18
	stw      r6, 0x18(r1)
	stw      r0, 0x1c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 0xc
	stw      r0, 0xc(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0(r3)
	mr       r3, r30
	mr       r4, r31
	addi     r5, r1, 8
	stb      r0, 8(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_80380498:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplw    r31, r0
	blt      lbl_8038030C
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803804D4
 * Size:	000080
 */
void THiScore::copyColorBlock(J2DColorBlock*, J2DColorBlock*)
{
	/*
	stwu     r1, -0x10(r1)
	mr       r6, r5
	mr       r7, r5
	mr       r8, r4
	lbz      r0, 8(r5)
	li       r9, 0
	stb      r0, 8(r4)
	lbz      r0, 0x12(r5)
	stb      r0, 0x12(r4)
	b        lbl_80380540

lbl_803804FC:
	lhz      r0, 0xa(r6)
	addi     r6, r6, 2
	addi     r9, r9, 1
	sth      r0, 0xa(r4)
	addi     r4, r4, 2
	lwz      r0, 0(r7)
	addi     r7, r7, 4
	stw      r0, 8(r1)
	lbz      r3, 8(r1)
	lbz      r0, 9(r1)
	stb      r3, 0(r8)
	lbz      r3, 0xa(r1)
	stb      r0, 1(r8)
	lbz      r0, 0xb(r1)
	stb      r3, 2(r8)
	stb      r0, 3(r8)
	addi     r8, r8, 4

lbl_80380540:
	lbz      r0, 8(r5)
	cmplw    r9, r0
	blt      lbl_803804FC
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80380554
 * Size:	000080
 */
void THiScore::changeColorBlock(J2DColorBlock*, J2DColorBlock*)
{
	/*
	stwu     r1, -0x10(r1)
	mr       r6, r4
	mr       r7, r4
	mr       r8, r5
	lbz      r0, 8(r4)
	li       r9, 0
	stb      r0, 8(r5)
	lbz      r0, 0x12(r4)
	stb      r0, 0x12(r5)
	b        lbl_803805C0

lbl_8038057C:
	lhz      r0, 0xa(r6)
	addi     r6, r6, 2
	addi     r9, r9, 1
	sth      r0, 0xa(r5)
	addi     r5, r5, 2
	lwz      r0, 0(r7)
	addi     r7, r7, 4
	stw      r0, 8(r1)
	lbz      r3, 8(r1)
	lbz      r0, 9(r1)
	stb      r3, 0(r8)
	lbz      r3, 0xa(r1)
	stb      r0, 1(r8)
	lbz      r0, 0xb(r1)
	stb      r3, 2(r8)
	stb      r0, 3(r8)
	addi     r8, r8, 4

lbl_803805C0:
	lbz      r0, 8(r4)
	cmplw    r9, r0
	blt      lbl_8038057C
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803805D4
 * Size:	000180
 */
void THiScore::updateLayout()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r31, r3
	lfs      f0, lbl_8051EC64@sda21(r2)
	lwz      r3, 0x88(r3)
	lwz      r4, 0(r3)
	lwz      r3, 4(r3)
	lwz      r4, 4(r4)
	lwz      r3, 4(r3)
	lfs      f1, 0xd8(r4)
	lfs      f2, 0xd8(r3)
	fsubs    f30, f2, f1
	fmuls    f0, f0, f30
	stfs     f0, 0x1fc(r31)
	lbz      r0, 0x174(r31)
	cmplwi   r0, 0
	beq      lbl_8038071C
	lfd      f31, lbl_8051EC20@sda21(r2)
	li       r28, 0
	li       r29, 0
	lis      r30, 0x4330
	b        lbl_803806BC

lbl_80380650:
	lwz      r0, 0x94(r31)
	lfs      f0, mClearListHeightRate__Q28Morimura8THiScore@sda21(r13)
	subf     r0, r0, r28
	lwz      r3, 0x88(r31)
	xoris    r0, r0, 0x8000
	stw      r30, 8(r1)
	lwzx     r4, r3, r29
	fmuls    f1, f30, f0
	stw      r0, 0xc(r1)
	lfs      f2, 0x1c(r4)
	lfd      f0, 8(r1)
	lwz      r3, 4(r4)
	fsubs    f0, f0, f31
	fmuls    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0xd8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x88(r31)
	addi     r28, r28, 1
	lwzx     r4, r3, r29
	addi     r29, r29, 4
	lwz      r3, 4(r4)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0x1c(r4)

lbl_803806BC:
	lha      r0, 0x8e(r31)
	cmpw     r28, r0
	blt      lbl_80380650
	lwz      r0, 0x90(r31)
	lwz      r3, 0x88(r31)
	slwi     r0, r0, 2
	lwz      r5, 0(r3)
	lwz      r4, 4(r3)
	lwzx     r3, r3, r0
	lwz      r5, 4(r5)
	lwz      r4, 4(r4)
	lwz      r3, 4(r3)
	lfs      f2, 0xd8(r4)
	lfs      f1, 0xd8(r5)
	lfs      f0, 0xd8(r3)
	fsubs    f30, f2, f1
	stfs     f0, 0xa0(r31)
	lwz      r0, 0x98(r31)
	lwz      r3, 0x88(r31)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lwz      r3, 4(r3)
	lfs      f0, 0xd8(r3)
	stfs     f0, 0xa4(r31)

lbl_8038071C:
	lwz      r3, 0x84(r31)
	stfs     f30, 0x18(r3)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x44(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80380754
 * Size:	000050
 */
THiScoreScene::THiScoreScene() { }

/*
 * --INFO--
 * Address:	803807B0
 * Size:	000068
 */
void THiScoreScene::doCreateObj(JKRArchive* arc)
{
	THiScore* obj = new THiScore;
	registObj(obj, arc);
	mObject = obj;
}

THiScore::StaticValues THiScore::mScrollParm;

} // namespace Morimura
