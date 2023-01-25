#include "og/Screen/callbackNodes.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/ogScreen.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
CallBack_Picture::CallBack_Picture(P2DScreen::Mgr* mgr, u64 tag)
    : CallBack_Screen(mgr, tag)
{
	mAnimGroup = nullptr;
}

/*
 * --INFO--
 * Address:	8032CE18
 * Size:	000060
 */
void CallBack_Picture::update()
{
	if (mPartsScreen) {
		if (mAnimGroup) {
			mAnimGroup->update();
		}
		mPartsScreen->animation();
		mPartsScreen->update();
	}
}

/*
 * --INFO--
 * Address:	8032CE78
 * Size:	0002BC
 */
void CallBack_Picture::draw(Graphics& gfx, J2DGrafContext& graf)
{
	if (mPartsScreen) {
		J2DPane* pane = mTextBox;
		mPane->resize(pane->mBounds.f.x - pane->mBounds.i.x, pane->mBounds.f.y - pane->mBounds.i.y);
		f32 scaleMod = mScale;
		Matrixf mtx  = mTextBox->mGlobalMtx;
		Matrixf scale;
		PSMTXScale(scale.mMatrix.mtxView, scaleMod, scaleMod, 0.0f);
		PSMTXConcat(mtx.mMatrix.mtxView, scale.mMatrix.mtxView, scale.mMatrix.mtxView);
		Matrixf trans;
		PSMTXTrans(trans.mMatrix.mtxView, mXOffs, mYOffs, 0.0f);
		PSMTXConcat(scale.mMatrix.mtxView, trans.mMatrix.mtxView, mtx.mMatrix.mtxView);
		PSMTXCopy(mtx.mMatrix.mtxView, mTextBox->mPositionMtx);

		J2DPictureEx* pane1    = static_cast<J2DPictureEx*>(mPane);
		J2DPictureEx* pane2    = static_cast<J2DPictureEx*>(mTextBox);
		JUtility::TColor color = pane1->getWhite();
		pane2->setWhite(color);
		color = pane1->getBlack();
		pane2->setBlack(color);
		pane2->mCornerColors[0] = pane1->mCornerColors[0];
		pane2->mCornerColors[1] = pane1->mCornerColors[1];
		pane2->mCornerColors[2] = pane1->mCornerColors[2];
		pane2->mCornerColors[3] = pane1->mCornerColors[3];
		mPartsScreen->draw(gfx, graf);
	}
	/*
stwu     r1, -0xd0(r1)
mflr     r0
stw      r0, 0xd4(r1)
stmw     r23, 0xac(r1)
mr       r29, r3
mr       r25, r4
mr       r24, r5
lwz      r0, 0x1c(r3)
cmplwi   r0, 0
beq      lbl_8032D120
lwz      r3, 0x20(r29)
lwz      r4, 0x24(r29)
lwz      r12, 0(r3)
lfs      f3, 0x28(r4)
lfs      f1, 0x20(r4)
lfs      f2, 0x2c(r4)
lfs      f0, 0x24(r4)
fsubs    f1, f3, f1
lwz      r12, 0x18(r12)
fsubs    f2, f2, f0
mtctr    r12
bctrl
lfs      f1, 0x28(r29)
addi     r3, r1, 0x78
lwz      r4, 0x24(r29)
fmr      f2, f1
lfs      f3, lbl_8051DF60@sda21(r2)
addi     r23, r4, 0x80
bl       PSMTXScale
addi     r4, r1, 0x78
mr       r3, r23
mr       r5, r4
bl       PSMTXConcat
lfs      f1, 0x2c(r29)
addi     r3, r1, 0x48
lfs      f2, 0x30(r29)
lfs      f3, lbl_8051DF60@sda21(r2)
bl       PSMTXTrans
mr       r5, r23
addi     r3, r1, 0x78
addi     r4, r1, 0x48
bl       PSMTXConcat
lwz      r4, 0x20(r29)
mr       r3, r23
addi     r4, r4, 0x50
bl       PSMTXCopy
lwz      r30, 0x24(r29)
addi     r3, r1, 0x20
lwz      r31, 0x20(r29)
mr       r4, r30
lwz      r12, 0(r30)
lwz      r12, 0x138(r12)
mtctr    r12
bctrl
lwz      r0, 0x20(r1)
mr       r3, r31
addi     r4, r1, 0x24
stw      r0, 0x24(r1)
lwz      r12, 0(r31)
lwz      r12, 0x12c(r12)
mtctr    r12
bctrl
mr       r4, r30
addi     r3, r1, 0x18
lwz      r12, 0(r30)
lwz      r12, 0x134(r12)
mtctr    r12
bctrl
lwz      r0, 0x18(r1)
mr       r3, r31
addi     r4, r1, 0x1c
stw      r0, 0x1c(r1)
lwz      r12, 0(r31)
lwz      r12, 0x128(r12)
mtctr    r12
bctrl
mr       r3, r31
lbz      r4, 0xb2(r30)
lwz      r12, 0(r31)
lwz      r12, 0x24(r12)
mtctr    r12
bctrl
li       r23, -1
lbz      r0, 0x150(r30)
stw      r23, 0x38(r1)
mr       r4, r25
lbz      r7, 0x151(r30)
mr       r5, r24
lbz      r6, 0x152(r30)
lbz      r3, 0x153(r30)
stb      r0, 0x38(r1)
lbz      r0, 0x154(r30)
stb      r7, 0x39(r1)
lbz      r24, 0x155(r30)
stw      r23, 0x3c(r1)
lbz      r25, 0x156(r30)
lbz      r8, 0x157(r30)
stb      r6, 0x3a(r1)
lbz      r26, 0x158(r30)
stb      r3, 0x3b(r1)
lbz      r27, 0x159(r30)
lwz      r9, 0x38(r1)
stw      r23, 0x40(r1)
lbz      r28, 0x15a(r30)
stw      r9, 8(r1)
lbz      r7, 0x15b(r30)
lbz      r12, 0x15c(r30)
lbz      r11, 0x15d(r30)
lbz      r10, 0x15e(r30)
lbz      r6, 0x15f(r30)
stw      r23, 0x44(r1)
lbz      r3, 8(r1)
stb      r0, 0x3c(r1)
lbz      r0, 9(r1)
stb      r3, 0x150(r31)
lbz      r3, 0xa(r1)
stb      r0, 0x151(r31)
lbz      r0, 0xb(r1)
stb      r3, 0x152(r31)
stb      r24, 0x3d(r1)
stb      r25, 0x3e(r1)
stb      r8, 0x3f(r1)
lwz      r8, 0x3c(r1)
stb      r0, 0x153(r31)
stw      r8, 0xc(r1)
lbz      r3, 0xc(r1)
stb      r26, 0x40(r1)
lbz      r0, 0xd(r1)
stb      r3, 0x154(r31)
lbz      r3, 0xe(r1)
stb      r0, 0x155(r31)
lbz      r0, 0xf(r1)
stb      r3, 0x156(r31)
stb      r27, 0x41(r1)
stb      r28, 0x42(r1)
stb      r7, 0x43(r1)
lwz      r7, 0x40(r1)
stb      r0, 0x157(r31)
stw      r7, 0x10(r1)
lbz      r3, 0x10(r1)
stb      r12, 0x44(r1)
lbz      r0, 0x11(r1)
stb      r3, 0x158(r31)
lbz      r3, 0x12(r1)
stb      r0, 0x159(r31)
lbz      r0, 0x13(r1)
stb      r3, 0x15a(r31)
stb      r11, 0x45(r1)
stb      r10, 0x46(r1)
stb      r6, 0x47(r1)
lwz      r6, 0x44(r1)
stb      r0, 0x15b(r31)
stw      r6, 0x14(r1)
lbz      r3, 0x14(r1)
lbz      r0, 0x15(r1)
stb      r3, 0x15c(r31)
lbz      r3, 0x16(r1)
stb      r0, 0x15d(r31)
lbz      r0, 0x17(r1)
stb      r3, 0x15e(r31)
stb      r0, 0x15f(r31)
lwz      r3, 0x1c(r29)
stw      r9, 0x28(r1)
lwz      r12, 0(r3)
stw      r8, 0x2c(r1)
lwz      r12, 0x9c(r12)
stw      r7, 0x30(r1)
stw      r6, 0x34(r1)
mtctr    r12
bctrl

lbl_8032D120:
lmw      r23, 0xac(r1)
lwz      r0, 0xd4(r1)
mtlr     r0
addi     r1, r1, 0xd0
blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
CallBack_Picture* setCallBack_Picture(JKRArchive* arc, char* name, u64 tag1, P2DScreen::Mgr* screen, u64 tag2)
{
	P2DScreen::Mgr* mgr = new P2DScreen::Mgr;
	mgr->set(name, 0x40000, arc);
	CallBack_Picture* pic = new CallBack_Picture(mgr, tag1);

	J2DPane* pane    = TagSearch(screen, tag2);
	pane->mIsVisible = false;
	pic->mTextBox    = pane;

	screen->addCallBack(tag2, pic);

	return pic;
}

/*
 * --INFO--
 * Address:	8032D134
 * Size:	00011C
 */
CallBack_Picture* setCallBack_3DStick(JKRArchive* arc, P2DScreen::Mgr* screen, u64 tag)
{
	CallBack_Picture* pic = setCallBack_Picture(arc, "tga_3d_animOtah.blo", 'ota3dl', screen, tag);
	J2DScreen* scrn       = pic->getPartsScreen();
	AnimGroup* anim       = new AnimGroup(1);
	registAnimGroupScreen(anim, arc, scrn, "tga_3d_animOtah.btp", 0.25);
	pic->mAnimGroup = anim;
	return pic;
}

/*
 * --INFO--
 * Address:	8032D250
 * Size:	00011C
 * This function is identical to setCallBack_3DStick but with a different .blo name
 */
CallBack_Picture* setCallBack_3DStickSmall(JKRArchive* arc, P2DScreen::Mgr* screen, u64 tag)
{
	CallBack_Picture* pic = setCallBack_Picture(arc, "tga_3d_animOtah_32.blo", 'ota3ds', screen, tag);
	J2DScreen* scrn       = pic->getPartsScreen();
	AnimGroup* anim       = new AnimGroup(1);
	registAnimGroupScreen(anim, arc, scrn, "tga_3d_animOtah_32.btp", 0.25f);
	pic->mAnimGroup = anim;
	return pic;
}

/*
 * --INFO--
 * Address:	8032D36C
 * Size:	000010
 */
StickAnimMgr::StickAnimMgr(og::Screen::CallBack_Picture* pic)
{
	mCallBackPicture = pic;
	mState           = STICKANIM_Disabled;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void StickAnimMgr::stickStop()
{
	// this absolutely was more involved originally, but this is just to fix the float ordering
	mCallBackPicture->mAnimGroup->reservAnim(21.0f, 0.0f, 40.0f);
}

/*
 * --INFO--
 * Address:	8032D37C
 * Size:	0000D4
 */
void StickAnimMgr::stickUp()
{
	if ((int)mState != STICKANIM_Up) {
		AnimGroup* anim = mCallBackPicture->mAnimGroup;
		f32 frame       = anim->getFrame();
		switch (mState) {
		case STICKANIM_Down:
			anim->reservAnim(20.0f, 21.0f, 40.0f);
			break;

		case STICKANIM_UpDown:
			if (frame < 21.0f) {
				anim->reservAnim(20.0f, 21.0f, 40.0f);

			} else {
				anim->reservAnim(40.0f, 21.0f, 40.0f);
			}

			break;

		default:
			anim->setArea(21.0f, 40.0f);
			anim->start();
			break;
		}
		mState = STICKANIM_Up;
	}
}

/*
 * --INFO--
 * Address:	8032D450
 * Size:	0000E8
 */
void StickAnimMgr::stickDown()
{
	if ((int)mState != STICKANIM_Down) {
		AnimGroup* anim = mCallBackPicture->mAnimGroup;
		f32 frame       = anim->getFrame();
		switch (mState) {
		case STICKANIM_Up:
			anim->reservAnim(40.0f, 0.0f, 20.0f);
			break;

		case STICKANIM_UpDown:
			if (frame < 21.0f) {
				anim->reservAnim(20.0f, 0.0f, 20.0f);

			} else {
				anim->reservAnim(40.0f, 0.0f, 20.0f);
			}

			break;

		default:
			anim->setArea(0.0f, 20.0f);
			anim->start();
			break;
		}
		mState = STICKANIM_Down;
	}
}

/*
 * --INFO--
 * Address:	8032D538
 * Size:	0000BC
 */
void StickAnimMgr::stickUpDown()
{
	if ((int)mState != STICKANIM_UpDown) {
		AnimGroup* anim = mCallBackPicture->mAnimGroup;
		anim->getFrame();
		f32 frame = mCallBackPicture->mAnimGroup->getLastFrame();
		switch (mState) {
		case STICKANIM_Up:
			anim->reservAnim(40.0f, 0.0f, frame);
			break;
		case STICKANIM_Down:
			anim->reservAnim(20.0f, 0.0f, frame);
			break;
		default:
			anim->setAllArea();
			anim->start();
			break;
		}
		mState = STICKANIM_UpDown;
	}
}

} // namespace Screen
} // namespace og
