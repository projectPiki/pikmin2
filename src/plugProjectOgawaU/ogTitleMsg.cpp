#include "og/newScreen/TitleMsg.h"
#include "og/Screen/ogScreen.h"
#include "P2JME/Analyzer.h"
#include "efx2d/T2DCvname.h"
#include "Dolphin/rand.h"
#include "og/ogLib2D.h"
#include "og/Sound.h"
#include "System.h"

namespace og {
namespace newScreen {

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
TitleMessageAnalyzer::TitleMessageAnalyzer(const JMessage::TReference* ref)
    : Analyzer(ref)
{
	mCurrCharIndex = 0;

	for (int i = 0; i < 256; i++) {
		mCharBuffer[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void TitleMessageAnalyzer::set2ByteString(char* data, int value)
{
	data[0] = (value & 0xff00) >> 8;
	data[1] = value;
	data[2] = 0;
}

/**
 * @note Address: 0x8032EAC8
 * @note Size: 0x228
 */
void TitleMessageAnalyzer::do_character(int data)
{
	u8 c          = data;
	char cChar[3] = { 0, 0, 0 };
	bool valid    = false;
	if (data == 0) {
		mCharBuffer[mCurrCharIndex] = 0;
	} else if ((u16)data != 0) {
		set2ByteString(cChar, data);
		valid = true;
	} else if (c >= 'A' && c <= 'Z') {
		set2ByteString(cChar, data + 0x821f);
		valid = true;
	} else if (c >= 'a' && c <= 'z') {
		set2ByteString(cChar, data + 0x8220);
		valid = true;
	} else if (c >= 0xbf && c <= 0xff) {
		set2ByteString(cChar, data - 0x1bf);
		valid = true;
	} else if (c == ' ') {
		set2ByteString(cChar, 0x8140);
		valid = true;
	} else if (c == '!') {
		set2ByteString(cChar, 0x8149);
		valid = true;
	} else if (c == '?') {
		set2ByteString(cChar, 0x8148);
		valid = true;
	} else if (u8(c - '&') <= 1 || c == '-') {
		set2ByteString(cChar, data - 0x100);
		valid = true;
	}

	if (valid) {
		mCharBuffer[mCurrCharIndex] = cChar[0];
		mCurrCharIndex++;
		if (mCurrCharIndex >= 254) {
			mCurrCharIndex = 254;
		}

		mCharBuffer[mCurrCharIndex] = cChar[1];
		mCurrCharIndex++;
		if (mCurrCharIndex >= 254) {
			mCurrCharIndex = 254;
		}
		mCharBuffer[mCurrCharIndex] = 0;
	}
	/*
	stwu     r1, -0x10(r1)
	cmpwi    r4, 0
	clrlwi   r6, r4, 0x18
	li       r7, 0
	lhz      r5, lbl_80520EB8@sda21(r2)
	lbz      r0, lbl_80520EBA@sda21(r2)
	sth      r5, 8(r1)
	stb      r0, 0xa(r1)
	bne      lbl_8032EB00
	lwz      r0, 0x38(r3)
	li       r5, 0
	add      r4, r3, r0
	stb      r5, 0x3c(r4)
	b        lbl_8032EC70

lbl_8032EB00:
	rlwinm.  r0, r4, 0, 0x10, 0x17
	beq      lbl_8032EB24
	srawi    r4, r0, 8
	li       r0, 0
	stb      r4, 8(r1)
	li       r7, 1
	stb      r6, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EB24:
	cmpwi    r6, 0x41
	blt      lbl_8032EB58
	cmpwi    r6, 0x5a
	bgt      lbl_8032EB58
	addis    r4, r4, 1
	li       r0, 0
	addi     r4, r4, -32225
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)
	b        lbl_8032EC70

lbl_8032EB58:
	cmpwi    r6, 0x61
	blt      lbl_8032EB8C
	cmpwi    r6, 0x7a
	bgt      lbl_8032EB8C
	addis    r4, r4, 1
	li       r0, 0
	addi     r4, r4, -32224
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)
	b        lbl_8032EC70

lbl_8032EB8C:
	cmplwi   r6, 0xbf
	blt      lbl_8032EBC0
	cmplwi   r6, 0xff
	bgt      lbl_8032EBC0
	addis    r4, r4, 1
	li       r0, 0
	addi     r4, r4, -447
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)
	b        lbl_8032EC70

lbl_8032EBC0:
	cmpwi    r6, 0x20
	bne      lbl_8032EBE8
	li       r5, -127
	li       r4, 0x40
	li       r0, 0
	stb      r5, 8(r1)
	li       r7, 1
	stb      r4, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EBE8:
	cmpwi    r6, 0x21
	bne      lbl_8032EC10
	li       r5, -127
	li       r4, 0x49
	li       r0, 0
	stb      r5, 8(r1)
	li       r7, 1
	stb      r4, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EC10:
	cmpwi    r6, 0x3f
	bne      lbl_8032EC38
	li       r5, -127
	li       r4, 0x48
	li       r0, 0
	stb      r5, 8(r1)
	li       r7, 1
	stb      r4, 9(r1)
	stb      r0, 0xa(r1)
	b        lbl_8032EC70

lbl_8032EC38:
	addi     r0, r6, -38
	clrlwi   r0, r0, 0x18
	cmplwi   r0, 1
	ble      lbl_8032EC50
	cmplwi   r6, 0x2d
	bne      lbl_8032EC70

lbl_8032EC50:
	addis    r4, r6, 1
	li       r0, 0
	addi     r4, r4, -256
	stb      r0, 0xa(r1)
	rlwinm   r0, r4, 0x18, 0x18, 0x1f
	li       r7, 1
	stb      r0, 8(r1)
	stb      r4, 9(r1)

lbl_8032EC70:
	clrlwi.  r0, r7, 0x18
	beq      lbl_8032ECE8
	lwz      r0, 0x38(r3)
	lbz      r5, 8(r1)
	add      r4, r3, r0
	stb      r5, 0x3c(r4)
	lwz      r4, 0x38(r3)
	addi     r0, r4, 1
	stw      r0, 0x38(r3)
	lwz      r0, 0x38(r3)
	cmpwi    r0, 0xfe
	blt      lbl_8032ECA8
	li       r0, 0xfe
	stw      r0, 0x38(r3)

lbl_8032ECA8:
	lwz      r0, 0x38(r3)
	lbz      r5, 9(r1)
	add      r4, r3, r0
	stb      r5, 0x3c(r4)
	lwz      r4, 0x38(r3)
	addi     r0, r4, 1
	stw      r0, 0x38(r3)
	lwz      r0, 0x38(r3)
	cmpwi    r0, 0xfe
	blt      lbl_8032ECD8
	li       r0, 0xfe
	stw      r0, 0x38(r3)

lbl_8032ECD8:
	lwz      r0, 0x38(r3)
	li       r4, 0
	add      r3, r3, r0
	stb      r4, 0x3c(r3)

lbl_8032ECE8:
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8032ECF0
 * @note Size: 0x28C
 */
TitleMsg::TitleMsg(J2DScreen* screen, J2DPane* root, char* str)
    : mAnalyzer(og::gLib2D->mMessage->mProcessor->mReference)
{
	mAnalyzer.exec(str);
	char* string  = mAnalyzer.mCharBuffer;
	mRootPane     = root;
	mStringLength = strlen(string) >> 1;
	mCurrXpos     = 0.0f;
	mPanes1White.set(0, 0, 0, 255);
	mPanes2White.set(255, 255, 0, 255);
	mPanes2Black.set(255, 0, 0, 0);

	for (int i = 0; i < mStringLength; i++) {
		u64 tag = og::Screen::CharCodeToTag(string + (i * 2));
		char buf[16];
		og::Screen::TagToName(tag, buf);
		J2DPictureEx* pane = static_cast<J2DPictureEx*>(screen->search(tag));
		if (pane) {
			setFontPane(pane, i);
		} else {
			pane = static_cast<J2DPictureEx*>(screen->search('err'));
			if (pane)
				setFontPane(pane, i);
		}
	}

	setCentering(ECM_0);

	for (int i = 0; i < mStringLength; i++) {
		mDropFlags[i] = false;
		mTimers[i]    = 0.0f;
	}
	mYOffset = 0.0f;
	mXScale  = 1.0f;
}

/**
 * @note Address: 0x8032EFFC
 * @note Size: 0x154
 */
void TitleMsg::setFontPane(J2DPictureEx* pic, int id)
{
	mPanes1[id] = og::Screen::CopyPictureToPane(pic, mRootPane, mCurrXpos, -10.0f, 'tFont000' + id);
	mPanes1[id]->setBasePosition(J2DPOS_BottomCenter);
	mPanes1[id]->setWhite(mPanes1White);

	mPanes2[id] = og::Screen::CopyPictureToPane(pic, mPanes1[id], (pic->mBounds.getWidth() / 2) - 3.0f,
	                                            (pic->mBounds.getHeight() / 2) - 3.0f, 'tBody000' + id);
	mPanes2[id]->setBasePosition(J2DPOS_BottomCenter);
	mPanes2[id]->setWhite(mPanes2White);
	mPanes2[id]->setBlack(mPanes2Black);

	mCurrXpos += (mPanes1[id]->mBounds.getWidth());
}

/**
 * @note Address: 0x8032F150
 * @note Size: 0x164
 */
void TitleMsg::setCentering(EnumCentering center)
{
	f32 temp   = 1.0f;
	mCentering = center;

	f32 cx   = mCurrXpos;
	f32 size = mRootPane->mBounds.f.x - mRootPane->mBounds.i.x;
	if (cx > size) {
		temp = size / cx;
	}
	f32 scaleX = temp;

	switch (mCentering) {
	case ECM_0:
		size = 0.0f;
		break;
	case ECM_1:
		size = -(mCurrXpos * scaleX - size);
		break;
	case ECM_2:
		size = -(mCurrXpos * scaleX - size) / 2;
		break;
	default:
		size = 0.0f;
	}

	// this part seems to be different in demo 1?
	f32 scaleY = 1.0f;
	f32 currX  = 0.0f;
	for (int i = 0; i < mStringLength; i++) {
		J2DPane* pane = mPanes1[i];
		pane->move(size + currX * scaleX, 0.0f);

		mPanes1[i]->updateScale(scaleX, scaleY);
		currX += mPanes1[i]->mBounds.getWidth();
	}
	mXScale = scaleX;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TitleMsg::drawMsgArea(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8032F2B4
 * @note Size: 0xD0
 */
void TitleMsg::setColor(JUtility::TColor& col1, JUtility::TColor& col2)
{
	mPanes2White.setRGBA(col1);
	mPanes2Black.setRGBA(col2);
	for (int i = 0; i < mStringLength; i++) {
		mPanes2[i]->setWhite(col1);
		mPanes2[i]->setBlack(col2);
	}
}

/**
 * @note Address: 0x8032F384
 * @note Size: 0xF0
 */
TitleMsgDrop::TitleMsgDrop(J2DScreen* screen, J2DPane* pane, char* str)
    : TitleMsg(screen, pane, str)
{
	for (int i = 0; i < mStringLength; i++) {
		mEffects[i] = new efx2d::T2DCvnameCave;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
// TitleMsg::~TitleMsg()
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: 0x8032F4CC
 * @note Size: 0x128
 */
void TitleMsgDrop::init()
{
	f32 mod        = 5.0f;
	f32 yoffs      = 200.0f;
	Motion* motion = &mMotions[0];
	for (int i = 0; i < mStringLength; i++) {
		motion->mRandTime = randFloat() * mod;
		motion->mYOffset  = yoffs;
		motion->mPos.x    = mPanes1[i]->mOffset.x;
		motion->mPos.y    = mPanes1[i]->mOffset.y;
		motion->mTimer    = i / (f32)mStringLength;
		motion++;
	}
}

/**
 * @note Address: 0x8032F5F4
 * @note Size: 0x230
 */
void TitleMsgDrop::update()
{
	Motion* motion = &mMotions[0];
	for (u32 i = 0; i < mStringLength; i++) {
		J2DPane* pane = mPanes1[i];
		if (motion->mTimer > 0.0f) {
			motion->mTimer -= sys->mDeltaTime;
		} else {
			motion->mRandTime -= 1.0f;
			motion->mYOffset += motion->mRandTime;
			if (motion->mYOffset < 0.0f) {
				motion->mRandTime *= -0.3f;
				motion->mYOffset = motion->mRandTime;
				if (!mDropFlags[i]) {
					mDropFlags[i] = true;
					mTimers[i]    = 1.0f;

					Vector3f pos1 = pane->getGlbVtx(0);
					Vector3f pos2 = pane->getGlbVtx(3);
					Vector2f sum((pos1.x + pos2.x) / 2, (pos1.y + pos2.y) / 2 + mYOffset);
					efx2d::Arg arg(sum);
					mEffects[i]->setGroup(2);
					mEffects[i]->create(&arg);

					ogSound->setFloorTitle();
				}
			}
		}

		if (mDropFlags[i]) {
			mTimers[i] -= sys->mDeltaTime;
			if (mTimers[i] < 0.0f) {
				mTimers[i] = 0.0f;
			}
		}
		pane->setOffset(motion->mPos.x, motion->mPos.y - motion->mYOffset);
		motion++;
	}
}

/**
 * @note Address: 0x8032F824
 * @note Size: 0x6C
 */
void TitleMsgDrop::end()
{
	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]->fade();
	}
}

/**
 * @note Address: 0x8032F890
 * @note Size: 0x18C
 */
TitleMsgWave::TitleMsgWave(J2DScreen* screen, J2DPane* pane, char* str)
    : TitleMsg(screen, pane, str)
{
	mDelayTimer = 1.0f;
	mScaleup1   = 0.12f;
	mScaleup2   = 7.0f;
	mScaleup3   = 1.5f;
	mScaleup4   = 0.07f;

	for (int i = 0; i < 128; i++) {
		if ((u32)i < mStringLength) {
			mScaleMgrs[i] = new og::Screen::ScaleMgr;
		} else {
			mScaleMgrs[i] = nullptr;
		}
	}

	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]   = new efx2d::T2DCvnameChal;
		mDropFlags[i] = false;
		mTimers[i]    = 0.0f;
	}
}

/**
 * @note Address: 0x8032FA1C
 * @note Size: 0x4
 */
void TitleMsgWave::init() { }

/**
 * @note Address: 0x8032FA20
 * @note Size: 0xB0
 */
void TitleMsgWave::start()
{
	for (int i = 0; i < mStringLength; i++) {
		mScaleMgrs[i]->up(mScaleup1, mScaleup2, mScaleup3, (f32)i * mScaleup4);
	}
	mDelayTimer = 3.0f;
}

/**
 * @note Address: 0x8032FAD0
 * @note Size: 0x2E0
 */
void TitleMsgWave::update()
{
	static f32 sFrame = 0.0f;

	for (u32 i = 0; i < mStringLength; i++) {

		f32 calc = mScaleMgrs[i]->calc();
		f32 mod  = 0.2f * (mStringLength - i) + sFrame;
		if (mod >= TAU) {
			mod -= TAU;
		}
		mod = sin(mod);
		mod = 1.0f + mod;
		mod /= 8;
		mPanes1[i]->updateScale(mXScale * ((mod / 4 + 1.0f) * calc), (1.0f + mod) * calc);

		if (!mDropFlags[i]) {
			mTimers[i] += sys->mDeltaTime;
			if (mTimers[i] > 0.1f) {
				mDropFlags[i] = true;
				J2DPane* pane = mPanes1[i];
				Vector3f pos1 = pane->getGlbVtx(0);
				Vector3f pos2 = pane->getGlbVtx(3);
				Vector2f sum((pos1.x + pos2.x) / 2, (pos1.y + pos2.y) / 2 + mYOffset);
				efx2d::Arg arg(sum);

				mEffects[i]->setGroup(2);
				mEffects[i]->create(&arg);
				mEffects[i]->setGlobalAlpha(100);
			}
		}
	}

	mDelayTimer -= sys->mDeltaTime;
	if (mDelayTimer < 0.0f) {
		start();
	}
	sFrame += 0.1f;
}

/**
 * @note Address: 0x8032FDB0
 * @note Size: 0x6C
 */
void TitleMsgWave::end()
{
	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]->fade();
	}
}

/**
 * @note Address: 0x8032FE1C
 * @note Size: 0x14
 */
void TitleMsgWave::setParam(f32 s1, f32 s2, f32 s3, f32 s4)
{
	mScaleup1 = s1;
	mScaleup2 = s2;
	mScaleup3 = s3;
	mScaleup4 = s4;
}

/**
 * @note Address: 0x8032FE30
 * @note Size: 0xF8
 */
TitleMsgClash::TitleMsgClash(J2DScreen* screen, J2DPane* pane, char* str)
    : TitleMsg(screen, pane, str)
{
	f32 time   = 0.0f;
	mScaleMod  = 0.0f;
	mCurrScale = 50.0f;

	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]   = new efx2d::T2DCvnameVs;
		mDropFlags[i] = false;
		mTimers[i]    = time;
	}
}

/**
 * @note Address: 0x8032FF28
 * @note Size: 0x14
 */
void TitleMsgClash::init()
{
	mScaleMod  = 0.0f;
	mCurrScale = 50.0f;
}

/**
 * @note Address: 0x8032FF3C
 * @note Size: 0x214
 */
void TitleMsgClash::update()
{
	mScaleMod -= 0.5f;
	mCurrScale += mScaleMod;
	if (1.0f < mCurrScale) {
		mCurrScale = 1.0f;
		mScaleMod  = -mScaleMod * 0.4f;
	}
	ogSound->setVsTitle();

	for (u32 i = 0; i < mStringLength; i++) {
		mPanes1[i]->updateScale(mCurrScale * mXScale, 1.0f);
		if (!mDropFlags[i]) {
			mTimers[i] += sys->mDeltaTime;
			if (mTimers[i] > 1.0f) {
				mDropFlags[i] = true;
				J2DPane* pane = mPanes1[i];
				Vector3f pos1 = pane->getGlbVtx(0);
				Vector3f pos2 = pane->getGlbVtx(3);
				Vector2f sum((pos1.x + pos2.x) / 2, (pos1.y + pos2.y) / 2 + mYOffset);
				efx2d::Arg arg(sum);
				mEffects[i]->setGroup(2);
				mEffects[i]->create(&arg);
				mEffects[i]->setGlobalAlpha(130);
			}
		}
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	lfs      f0, lbl_8051E014@sda21(r2)
	mr       r29, r3
	lfs      f1, 0x7e4(r3)
	lfs      f2, lbl_8051E00C@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x7e4(r3)
	lfs      f1, 0x7e8(r3)
	lfs      f0, 0x7e4(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x7e8(r3)
	lfs      f0, 0x7e8(r3)
	fcmpo    cr0, f0, f2
	bge      lbl_8032FFAC
	stfs     f2, 0x7e8(r29)
	lfs      f1, lbl_8051E06C@sda21(r2)
	lfs      f0, 0x7e4(r29)
	fneg     f0, f0
	fmuls    f0, f1, f0
	stfs     f0, 0x7e4(r29)

lbl_8032FFAC:
	lwz      r3, ogSound__2og@sda21(r13)
	bl       setVsTitle__Q22og5SoundFv
	lfs      f31, lbl_8051E00C@sda21(r2)
	mr       r31, r29
	li       r30, 0
	b        lbl_8033011C

lbl_8032FFC4:
	lfs      f1, 0x7e8(r29)
	lfs      f0, 0x7e0(r29)
	lwz      r3, 0x140(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0xcc(r3)
	stfs     f31, 0xd0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	addi     r4, r30, 0x55c
	lbzx     r0, r29, r4
	cmplwi   r0, 0
	bne      lbl_80330114
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x5dc(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051E00C@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x5dc(r31)
	lfs      f1, 0x5dc(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_80330114
	li       r0, 1
	addi     r3, r1, 0x24
	stbx     r0, r29, r4
	li       r5, 0
	lwz      r28, 0x140(r31)
	mr       r4, r28
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r5, 0x24(r1)
	mr       r4, r28
	lwz      r6, 0x28(r1)
	addi     r3, r1, 0x18
	lwz      r0, 0x2c(r1)
	stw      r5, 0x48(r1)
	li       r5, 3
	stw      r6, 0x4c(r1)
	stw      r0, 0x50(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r4, 0x18(r1)
	lis      r3, __vt__Q25efx2d3Arg@ha
	lwz      r5, 0x1c(r1)
	addi     r0, r3, __vt__Q25efx2d3Arg@l
	stw      r4, 0x3c(r1)
	li       r4, 2
	lfs      f0, 0x7dc(r29)
	stw      r5, 0x40(r1)
	lfs      f4, 0x48(r1)
	lfs      f3, 0x3c(r1)
	lfs      f2, 0x4c(r1)
	lfs      f1, 0x40(r1)
	fadds    f4, f4, f3
	lfs      f3, lbl_8051E014@sda21(r2)
	fadds    f1, f2, f1
	lwz      r3, 0x20(r1)
	fmuls    f2, f4, f3
	stw      r0, 0x38(r1)
	fmadds   f0, f1, f3, f0
	stw      r3, 0x44(r1)
	stfs     f2, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x10(r1)
	lwz      r0, 0x14(r1)
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x7ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7ec(r31)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x7ec(r31)
	li       r4, 0x82
	bl       setGlobalAlpha__Q25efx2d9TForeverNFUc

lbl_80330114:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_8033011C:
	lwz      r0, 0x540(r29)
	cmplw    r30, r0
	blt      lbl_8032FFC4
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x80330150
 * @note Size: 0x6C
 */
void TitleMsgClash::end()
{
	for (u32 i = 0; i < mStringLength; i++) {
		mEffects[i]->fade();
	}
}

} // namespace newScreen
} // namespace og
