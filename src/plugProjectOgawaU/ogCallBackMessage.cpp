#include "P2DScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/ogLib2D.h"
#include "og/Screen/ogScreen.h"
#include "trig.h"

inline u64 J2DPane::getTagName() const { return mTag; }

namespace og {
namespace Screen {

/**
 * @note Address: 0x80309614
 * @note Size: 0x98
 */
CallBack_Message::CallBack_Message()
{
	mMessage           = og::gLib2D->getMsgPtr();
	mMessageIDAsULL    = 0;
	mMessageIDAs2UL[0] = 0;
	mMessageIDAs2UL[1] = 0;
	mWidth             = 0.0f;
	mHeight            = 0.0f;
	mMaxY              = 1.0f;
	mMaxX              = 1.0f;
	mMinY              = 1.0f;
	mMinX              = 1.0f;
}

/**
 * @note Address: 0x803096AC
 * @note Size: 0x1B4
 */
void CallBack_Message::draw(Graphics& gfx, J2DGrafContext& graf)
{
	Matrixf mtx;
	if (checkVisibleGlb(mPane)) {
		u64 tag = mPane->mMessageID;
		if (tag != mMessageIDAsULL) {
			mMessageIDAsULL = tag;
			P2JME::convertU64ToMessageID(mMessageIDAsULL, &mMessageIDAs2UL[0], &mMessageIDAs2UL[1]);
		}
		PSMTXConcat(graf.mPosMtx, mPane->mGlobalMtx, mtx.mMatrix.mtxView);
		GXLoadPosMtxImm(mtx.mMatrix.mtxView, 0);

		J2DPane* pane = mPane;
		f32 x1        = pane->getWidth();
		f32 y1        = pane->getHeight();
		int flag      = pane->mBasePosition % 3;

		f32 y2, x2;
		x2 = 0.0f;
		y2 = 0.0f;

		if (flag == 1) {
			x2 = x1 / 2;
		} else if (flag == 2) {
			x2 = x1;
		}

		flag = pane->mBasePosition / 3;

		if (flag == 1) {
			y2 = y1 / 2;
		} else if (flag == 2) {
			y2 = y1;
		}

		mWidth                           = x2;
		mHeight                          = y2;
		P2JME::TRenderingProcessor* proc = mMessage->mProcessor;
		proc->_54                        = -mWidth;
		proc->_58                        = -mHeight;
		proc->setTextBoxInfo(mPane);

		mMessage->mProcessor->mMesgBounds.set(mMinX, mMinY, mMaxX, mMaxY);

		mMessage->drawMessageID(gfx, mMessageIDAs2UL[0], mMessageIDAs2UL[1]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 * NB: this never gets used, but it has to be here to generate the weak CallBack_Message dtor in the right spot
 */
CallBack_MessageAndShadow::CallBack_MessageAndShadow(f32, f32, J2DPane*) { }

/**
 * @note Address: 0x803098E0
 * @note Size: 0x194
 */
bool checkVisibleGlb(J2DPane* pane)
{
	if (pane->isVisible()) {
		J2DPane* parent = pane->getParentPane();
		return (parent != nullptr) ? checkVisibleGlb(parent) : true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x80309A7C
 * @note Size: 0x31C
 */
void setCallBackMessageSub(P2DScreen::Mgr* mgr, J2DPane* pane)
{
	if ((u16)pane->getTypeID() == PANETYPE_TextBox) {
		if (pane->getUserInfo()) {
			u64 tag = pane->getTagName();
			mgr->addCallBack(tag, new CallBack_Message);
			static_cast<J2DTextBox*>(pane)->setString("");
		}
	}

	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());

	while (iterator != tree->getEndChild()) {
		J2DPane* cPane = iterator.getObject();
		setCallBackMessageSub(mgr, cPane);
		++iterator;
	}
}

/**
 * @note Address: 0x80309E00
 * @note Size: 0x24
 */
void setCallBackMessage(P2DScreen::Mgr* mgr) { setCallBackMessageSub(mgr, mgr); }
} // namespace Screen
} // namespace og
