#include "og/Screen/callbackNodes.h"
#include "og/Screen/StickAnimMgr.h"
#include "og/Screen/anime.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
CallBack_Picture::CallBack_Picture(P2DScreen::Mgr* mgr, u64 tag)
    : CallBack_Screen(mgr, tag)
{
	mAnimGroup = nullptr;
}

/**
 * @note Address: 0x8032CE18
 * @note Size: 0x60
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

/**
 * @note Address: 0x8032CE78
 * @note Size: 0x2BC
 */
void CallBack_Picture::draw(Graphics& gfx, J2DGrafContext& graf)
{
	if (mPartsScreen) {
		J2DPane* pane = mTextBox;
		mPane->resize(pane->getWidth(), pane->getHeight());
		f32 scaleMod = mScale;
		Matrixf* mtx = (Matrixf*)mTextBox->mGlobalMtx;
		Matrixf scale;
		PSMTXScale(scale.mMatrix.mtxView, scaleMod, scaleMod, 0.0f);
		PSMTXConcat(mtx->mMatrix.mtxView, scale.mMatrix.mtxView, scale.mMatrix.mtxView);
		Matrixf trans;
		PSMTXTrans(trans.mMatrix.mtxView, mXOffs, mYOffs, 0.0f);
		PSMTXConcat(scale.mMatrix.mtxView, trans.mMatrix.mtxView, mtx->mMatrix.mtxView);
		PSMTXCopy(mtx->mMatrix.mtxView, mPane->mPositionMtx);

		J2DPictureEx* pane2 = static_cast<J2DPictureEx*>(mPane);
		J2DPictureEx* pane1 = static_cast<J2DPictureEx*>(mTextBox);

		pane2->setWhite(pane1->getWhite());
		pane2->setBlack(pane1->getBlack());
		pane2->setAlpha(pane1->mAlpha);

		J2DPicture::TCornerColor cornerColor;
		pane1->getCornerColor(cornerColor);
		pane2->setCornerColor(cornerColor);
		mPartsScreen->draw(gfx, graf);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
CallBack_Picture* setCallBack_Picture(JKRArchive* arc, char* name, u64 tag1, P2DScreen::Mgr* screen, u64 tag2)
{
	P2DScreen::Mgr* mgr = new P2DScreen::Mgr;
	mgr->set(name, 0x40000, arc);
	CallBack_Picture* pic = new CallBack_Picture(mgr, tag1);

	J2DPane* pane = TagSearch(screen, tag2);
	pane->hide();
	pic->mTextBox = pane;

	screen->addCallBack(tag2, pic);

	return pic;
}

/**
 * @note Address: 0x8032D134
 * @note Size: 0x11C
 */
CallBack_Picture* setCallBack_3DStick(JKRArchive* arc, P2DScreen::Mgr* screen, u64 tag)
{
	CallBack_Picture* pic = setCallBack_Picture(arc, "tga_3d_anim_otah.blo", 'ota3dl', screen, tag);
	J2DScreen* scrn       = pic->getPartsScreen();
	AnimGroup* anim       = new AnimGroup(1);
	registAnimGroupScreen(anim, arc, scrn, "tga_3d_anim_otah.btp", 0.25);
	pic->mAnimGroup = anim;
	return pic;
}

/**
 * @note Address: 0x8032D250
 * @note Size: 0x11C
 * This function is identical to setCallBack_3DStick but with a different .blo name
 */
CallBack_Picture* setCallBack_3DStickSmall(JKRArchive* arc, P2DScreen::Mgr* screen, u64 tag)
{
	CallBack_Picture* pic = setCallBack_Picture(arc, "tga_3d_anim_otah_32.blo", 'ota3ds', screen, tag);
	J2DScreen* scrn       = pic->getPartsScreen();
	AnimGroup* anim       = new AnimGroup(1);
	registAnimGroupScreen(anim, arc, scrn, "tga_3d_anim_otah_32.btp", 0.25f);
	pic->mAnimGroup = anim;
	return pic;
}

/**
 * @note Address: 0x8032D36C
 * @note Size: 0x10
 */
StickAnimMgr::StickAnimMgr(og::Screen::CallBack_Picture* pic)
{
	mCallBackPicture = pic;
	mState           = STICKANIM_Disabled;
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void StickAnimMgr::stickStop()
{
	// this absolutely was more involved originally, but this is just to fix the float ordering
	mCallBackPicture->mAnimGroup->reservAnim(21.0f, 0.0f, 40.0f);
}

/**
 * @note Address: 0x8032D37C
 * @note Size: 0xD4
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

/**
 * @note Address: 0x8032D450
 * @note Size: 0xE8
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

/**
 * @note Address: 0x8032D538
 * @note Size: 0xBC
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
