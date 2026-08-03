#include "P2JME/messageObj.h"
#include "P2JME/P2JME.h"
#include "System.h"
#include "Game/MoviePlayer.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSSystemIF.h"
#include "nans.h"

namespace P2JME {
namespace Window {

static void strippedFunc()
{
	OSReport("\0\0\0\0\0\0\0\0\0\0\0");
}

/**
 * @note Address: 0x8043F188
 * @note Size: 0x50
 */
DrawInfo::DrawInfo()
    : CNode("")
{
	mIndex     = -1;
	mTimer     = 0.0f;
	mTimeLimit = 0.5f;
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
void DrawInfoMgr::init(u32 count)
{
	P2ASSERTLINE(158, !mInfoList2.getChildCount());
	P2ASSERTLINE(159, !mInfoList1.getChildCount());

	sys->heapStatusStart("DrawInfoMgr::init", nullptr);

	DrawInfo* info = new DrawInfo[count];
	for (int i = 0; i < count; i++) {
		mInfoList2.add(&info[i]);
	}

	sys->heapStatusEnd("DrawInfoMgr::init");
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void DrawInfoMgr::update()
{
	FOREACH_NODE(DrawInfo, mInfoList1.mChild, node)
	{
		node->mTimer += sys->mDeltaTime;
		if (node->mTimer > node->mTimeLimit) {
			node->mTimer = node->mTimeLimit;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void DrawInfoMgr::reset()
{
	DrawInfo* node = (DrawInfo*)mInfoList1.mChild;
	while (node) {
		DrawInfo* next = (DrawInfo*)node->mNext;
		P2ASSERTLINE(253, node);
		node->mIndex = -1;
		node->mTimer = 0.0f;
		node->del();
		mInfoList2.add(node);
		node = next;
	}
}

/**
 * @note Address: 0x8043F238
 * @note Size: 0x30
 */
DrawInfo* DrawInfoMgr::searchDrawInfo(int id)
{
	DrawInfo* ret = nullptr;
	FOREACH_NODE(DrawInfo, mInfoList1.mChild, node)
	{
		if (id == (int)node->mIndex) {
			ret = node;
			break;
		}
	}
	return ret;
}

/**
 * @note Address: 0x8043F268
 * @note Size: 0x60
 */
DrawInfo* DrawInfoMgr::getDrawInfo(int id)
{
	DrawInfo* node = static_cast<DrawInfo*>(mInfoList2.mChild);
	if (node) {
		node->mIndex = id;
		node->mTimer = 0.0f;
		node->del();
		mInfoList1.add(node);
	}
	return node;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void DrawInfoMgr::releaseDrawInfo(DrawInfo* info)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8043F2C8
 * @note Size: 0x3C
 */
TSequenceProcessor::TSequenceProcessor(JMessage::TReference* ref, JMessage::TControl* owner)
    : P2JME::TSequenceProcessor(ref, owner)
{
}

/**
 * @note Address: 0x8043F304
 * @note Size: 0xA4
 */
void TSequenceProcessor::doCharacterSE(int)
{
	if ((!Game::moviePlayer || (Game::moviePlayer && !Game::moviePlayer->isFlag(Game::MVP_IsFinished))) && !isFlag(SeqProc_IsForceFinish)) {
		bool isfast        = isFastSE();
		PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
		mgr->playMessageVoice(PSSE_MP_VOX_BODY_MN, isfast);
	}
}

/**
 * @note Address: 0x8043F3A8
 * @note Size: 0x7C
 */
void TSequenceProcessor::doCharacterSEStart()
{
	if ((!Game::moviePlayer || (Game::moviePlayer && !Game::moviePlayer->isFlag(Game::MVP_IsFinished))) && !isFlag(SeqProc_IsForceFinish)) {
		PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
		mgr->playMessageVoice(PSSE_MP_VOX_HEAD_A_FLAT, false);
	}
}

/**
 * @note Address: 0x8043F424
 * @note Size: 0x7C
 */
void TSequenceProcessor::doCharacterSEEnd()
{
	if ((!Game::moviePlayer || (Game::moviePlayer && !Game::moviePlayer->isFlag(Game::MVP_IsFinished))) && !isFlag(SeqProc_IsForceFinish)) {
		PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
		mgr->playMessageVoice(PSSE_MP_VOX_FOOT_A_UP, false);
	}
}

/**
 * @note Address: 0x8043F4A0
 * @note Size: 0x5C
 */
void TSequenceProcessor::doFastForwardSE()
{
	PSGame::SeMgr* mgr = PSSystem::getSeMgrInstance();
	mgr->stopMessageVoice();
	PSSystem::spSysIF->playSystemSe(PSSE_MP_VOX_CANCEL, 0);
}

/**
 * @note Address: 0x8043F4FC
 * @note Size: 0x60
 */
TRenderingProcessor::TRenderingProcessor(JMessage::TReference* ref)
    : P2JME::TRenderingProcessor(ref)
{
	mSpeed = 30.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
void TRenderingProcessor::initDrawInfoMgr(u32 count)
{
	mDrawInfo.init(count);
}

/**
 * @note Address: 0x8043F55C
 * @note Size: 0x344
 */
BOOL TRenderingProcessor::doDrawCommon(f32 x0, f32 y0, Matrixf* mtx1, Matrixf* mtx2)
{
	u8 ret = 255;

	DrawInfo* info = mDrawInfo.searchDrawInfo(mInfoIndex);
	if (y0 >= -mSpeed && y0 < mTextBoxHeight + mSpeed) {
		f32 y;
		f32 delta;
		f32 zPos;
		f32 angle;
		if (y0 >= 0.0f && y0 < mTextBoxHeight) {
			zPos  = 0.0f;
			angle = 0.0f;
		} else {
			if (y0 < 0.0f) {
				delta = y0;
			} else {
				delta = y0 - mTextBoxHeight;
			}
			f32 deltaSq = delta;
			deltaSq *= deltaSq;
			f32 radicand = mSpeed * mSpeed - deltaSq;
			y            = -_sqrtf(radicand);
			angle        = HALF_PI + JMAAtan2Radian(y, delta);
			zPos         = y + mSpeed;
			f64 ratio    = fabs(delta / mSpeed);
			f32 alpha    = 255.0f * (f32)ratio;
			alpha        = ROUND_F32_TO_U8(alpha);
			ret          = 255 - (u8)alpha;
		}

		if (!info) {
			info = mDrawInfo.getDrawInfo(mInfoIndex);
			doGetDrawInfo(info);
		}

		Matrixf mtx;
		if (info) {
			Vector3f pos(x0, y0, zPos);
			makeMatrix(&mtx, info, angle, pos);
		} else {
			Vector3f pos(x0, y0, zPos);
			mtx.makeT(pos);
		}

		if (mtx2) {
			PSMTXCopy(mtx.mMatrix.mtxView, mtx2->mMatrix.mtxView);
			Vector3f translation = mtx2->getTranslation();
			translation.x += 10.0f;
			translation.y += 5.0f;
			mtx2->setTranslation(translation);
			PSMTXConcat(mMtx1->mMatrix.mtxView, mtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView);
			PSMTXConcat(mMtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView, mtx2->mMatrix.mtxView);
		}
		PSMTXConcat(mMtx1->mMatrix.mtxView, mtx.mMatrix.mtxView, mtx.mMatrix.mtxView);
		PSMTXConcat(mMtx2->mMatrix.mtxView, mtx.mMatrix.mtxView, mtx.mMatrix.mtxView);
		if (mtx1) {
			PSMTXCopy(mtx.mMatrix.mtxView, mtx1->mMatrix.mtxView);
		} else {
			GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);
		}
	} else {
		ret = 0;
	}

	return (int)(ret * mBaseAlphaModifier);
}

/**
 * @note Address: 0x8043F8A4
 * @note Size: 0x284
 */
void TRenderingProcessor::makeMatrix(Matrixf* mtx, DrawInfo* info, f32 angle, Vector3f pos)
{
	switch (mMatrixType) {
	case 0: {
		f32 t = info->mTimer / info->mTimeLimit;
		Vector3f scale(1.0f, -(0.8f * (1.0f - t) * cosf((TAU * 2.0f) * t) - 1.0f), 1.0f);
		t = info->mTimer / info->mTimeLimit;
		Vector3f rotate(angle, 0.0f, -(HALF_PI * (1.0f - t) * cosf((TAU * 2.0f) * t)));
		mtx->makeSRT(scale, rotate, pos);
		break;
	}
	case 1: {
		f32 t    = info->mTimer / info->mTimeLimit;
		f32 wave = 2.0f * cosf(2.0f * (TAU * (info->mTimer / info->mTimeLimit)));
		Vector3f scale(1.0f + (f32)fabs((1.0f - t) * (wave * (1.0f - (info->mTimer / info->mTimeLimit)))));
		Vector3f rotate(angle, 0.0f, 0.0f);
		mtx->makeSRT(scale, rotate, pos);
		break;
	}
	case 2: {
		f32 t      = info->mTimer / info->mTimeLimit;
		f32 theta  = 2.0f * (TAU * t);
		f32 wave   = 4.0f * cosf(theta);
		f32 offset = (f32)fabs((1.0f - (f32)t) * (wave * (1.0f - t)));
		Vector3f scale(1.0f);
		Vector3f rotate(angle, 0.0f, 0.0f);
		pos.y -= 15.0f * offset;
		mtx->makeSRT(scale, rotate, pos);
		break;
	}
	}
}

/**
 * @note Address: 0x8043FB28
 * @note Size: 0x188
 */
f32 TRenderingProcessor::doDrawLetter(f32 x0, f32 y0, f32 x, f32 y, int a1, bool flag)
{
	f32 wid;
	Matrixf mtx1;
	Matrixf mtx2;
	int ret = doDrawCommon(x0, y0, &mtx1, &mtx2);
	if ((u8)ret) {
		GXLoadPosMtxImm(mtx2.mMatrix.mtxView, 0);
		JUtility::TColor color;
		color.b = 0; // This actually assigns in BGRA order, weird!
		color.g = 0;
		color.r = 0;
		color.a = (u8)ret >> 1;
		mMainFont->setGradColor(color, color);
		mMainFont->drawChar_scale(0.0f, 0.0f, x, y, a1, flag);

		GXLoadPosMtxImm(mtx1.mMatrix.mtxView, 0);
		mColorData1.a = ret;
		mColorData2.a = ret;

		mMainFont->setGradColor(mColorData1, mColorData2);
		wid = mMainFont->drawChar_scale(0.0f, 0.0f, x, y, a1, flag);
	} else {
		wid = calcWidth(mMainFont, a1, x, flag);
	}
	return wid;
}

/**
 * @note Address: 0x8043FCB0
 * @note Size: 0x17C
 */
f32 TRenderingProcessor::doDrawRuby(f32 x0, f32 y0, f32 x, f32 y, int a1, bool flag)
{
	f32 wid;
	Matrixf mtx1;
	Matrixf mtx2;
	int ret = doDrawCommon(x0, y0, nullptr, nullptr);
	if ((u8)ret) {
		JUtility::TColor color(mColorData3);
		color.a = ret;
		mRubyFont->setCharColor(color);

		GXColor col(mDefaultBlack);
		col.r /= 2;
		col.g /= 2;
		col.b /= 2;
		col.a /= 2;
		GXSetTevColor(GX_TEVREG0, col);
		wid = mRubyFont->drawChar_scale(0.0f, 0.0f, x, y, a1, flag);

		GXColor col2(mDefaultBlack);
		GXSetTevColor(GX_TEVREG0, col2);
	} else {
		wid = calcWidth(mRubyFont, a1, x, flag);
	}
	return wid;
}

/**
 * @note Address: 0x8043FE2C
 * @note Size: 0x1DC
 */
void TRenderingProcessor::doDrawImage(JUTTexture* tex, f32 x0, f32 y0, f32 x, f32 y)
{
	Matrixf mtx1;
	Matrixf mtx2;
	u8 ret = doDrawCommon(x0, y0, &mtx1, &mtx2);
	if (ret) {
		JUtility::TColor color, color2;
		mColorData4.a = (mColorData4.a * ret) / 255;
		mColorData5.a = (mColorData5.a * ret) / 255;
		color         = (mColorData4);
		color2        = (mColorData5);

		setImageGX();
		GXLoadPosMtxImm(mtx2.mMatrix.mtxView, 0);

		mColorData4.set(0, 0, 0, (mColorData4.a >> 1) & 0xFF);
		mColorData5.set(0, 0, 0, (mColorData5.a >> 1) & 0xFF);

		P2JME::TRenderingProcessor::drawImage(tex, 0.0f, 0.0f, x, y);
		GXLoadPosMtxImm(mtx1.mMatrix.mtxView, 0);

		mColorData4 = color;
		mColorData5 = color2;
		P2JME::TRenderingProcessor::drawImage(tex, 0.0f, 0.0f, x, y);
	}
}

/**
 * @note Address: 0x80440008
 * @note Size: 0x40
 */
void TRenderingProcessor::update()
{
	mDrawInfo.update();
}

/**
 * @note Address: 0x80440048
 * @note Size: 0xA4
 */
void TRenderingProcessor::reset()
{
	P2JME::TRenderingProcessor::reset();
	mDrawInfo.reset();
}

/**
 * @note Address: 0x804400EC
 * @note Size: 0x50
 */
TControl::TControl()
{
	_50     = 4.0f;
	mTimer1 = 0.0f;
	mTimer2 = 0.0f;
}

/**
 * @note Address: 0x8044013C
 * @note Size: 0x100
 */
void TControl::initRenderingProcessor(u32 count)
{
	static_cast<Window::TRenderingProcessor*>(mTextRenderProc)->initDrawInfoMgr(count);
}

/**
 * @note Address: 0x8044023C
 * @note Size: 0x188
 */
bool TControl::update(Controller* control1, Controller* control2)
{
	setController(control1, control2);
	bool ret = P2JME::TControl::update();

	P2JME::TSequenceProcessor* proc = mSequenceProc;
	if (proc) {
		u32 flag = proc->mFlags.typeView;
		if (flag & P2JME::TSequenceProcessor::SeqProc_IsWriting) {
			if (!(flag & P2JME::TSequenceProcessor::SeqProc_IsActive)) {
				proc->setFlag(P2JME::TSequenceProcessor::SeqProc_IsActive);
				mTimer1 = mTextRenderProc->mYOffset;
				mTimer2 = mTimer1 - mTextRenderProc->mTextBoxHeight;
				mTimer  = 0.0f;
			} else {
				f32 calc  = 1.0f;
				f32 calc2 = mTimer / 0.5f;
				if (calc2 > 1.0f) {
					proc->resetFlag(P2JME::TSequenceProcessor::SeqProc_IsActive);
					mSequenceProc->resetFlag(P2JME::TSequenceProcessor::SeqProc_IsWriting);
				} else {
					calc = (1.0f - cosf(calc2 * PI)) * 0.5f;
				}
				mTextRenderProc->mYOffset = calc * (mTimer2 - mTimer1) + mTimer1;

				// I would imagine the second of these was supposed to be for controller 2, but very cool
				if ((control1 && control1->getButton() & Controller::PRESS_B)
				    || (control1 && control1->getButton() & Controller::PRESS_B)) {
					mTimer += sys->mDeltaTime * 2.0f;
				} else {
					mTimer += sys->mDeltaTime;
				}
			}
		}
	}
	return ret;
}

/**
 * @note Address: 0x804403C4
 * @note Size: 0x20
 */
void TControl::reset()
{
	P2JME::TControl::reset();
}

/**
 * @note Address: 0x804403E4
 * @note Size: 0x7C
 */
void TControl::draw(Graphics& gfx)
{
	Matrixf mtx;
	Vector3f t(50.0f, 232.0f, 0.0f);
	mtx.makeT(t);
	gfx.mPerspGraph.setPort();
	P2JME::TControl::draw(mtx.mMatrix.mtxView, gfx.mPerspGraph.mPosMtx);
}

/**
 * @note Address: 0x80440460
 * @note Size: 0x50
 */
bool TControl::onInit()
{
	if (gP2JMEMgr) {
		setFont(gP2JMEMgr->mFont);
		setRubyFont(gP2JMEMgr->mFont);
	}
	return true;
}

} // namespace Window
} // namespace P2JME
