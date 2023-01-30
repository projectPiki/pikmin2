#include "kh/khUtil.h"
#include "Vector3.h"

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8040B3F4
 * Size:	00004C
 */
u64 getSerialTagName(u64 tag, int offs) { return tag + (offs / 10 * 0x100) + offs % 10; }

/*
 * --INFO--
 * Address:	8040B440
 * Size:	000050
 */
void setTex(J2DScreen* screen, u64 tag, const ResTIMG* tex) { static_cast<J2DPicture*>(screen->search(tag))->changeTexture(tex, '\0'); }

/*
 * --INFO--
 * Address:	8040B490
 * Size:	000050
 */
void setTex(J2DScreen* screen, u64 tag, const char* str) { static_cast<J2DPicture*>(screen->search(tag))->changeTexture(str, '\0'); }

/*
 * --INFO--
 * Address:	8040B4E0
 * Size:	000210
 */
void setMatAnm(J2DPane* pane, J2DAnmBase* anm)
{
	pane->setAnimation(anm);
	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());
	while (iterator != tree->getEndChild()) {
		setMatAnm(iterator.getObject(), anm);
		++iterator;
	}
}

/*
 * --INFO--
 * Address:	8040B6F0
 * Size:	00021C
 */
void setInfAlpha(J2DPane* pane)
{
	pane->setInfluencedAlpha(true, false);
	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());
	while (iterator != tree->getEndChild()) {
		setInfAlpha(iterator.getObject());
		++iterator;
	}
}

/*
 * --INFO--
 * Address:	8040B90C
 * Size:	0000EC
 */
f32 getPaneCenterX(J2DPane* pane)
{
	Vector3f vec1 = pane->getGlbVtx(0);
	Vector3f vec2 = pane->getGlbVtx(1);
	Vector3f vec3 = pane->getGlbVtx(2);
	Vector3f vec4 = pane->getGlbVtx(3);

	return (vec1.x + vec2.x + vec3.x + vec4.x) * 0.25f;
}

/*
 * --INFO--
 * Address:	8040B9F8
 * Size:	0000EC
 */
f32 getPaneCenterY(J2DPane* pane)
{
	Vector3f vec1 = pane->getGlbVtx(0);
	Vector3f vec2 = pane->getGlbVtx(1);
	Vector3f vec3 = pane->getGlbVtx(2);
	Vector3f vec4 = pane->getGlbVtx(3);

	return (vec1.y + vec2.y + vec3.y + vec4.y) * 0.25f;
}

/*
 * --INFO--
 * Address:	8040BAE4
 * Size:	0000A4
 */
khUtilFadePane* khUtilFadePane::create(P2DScreen::Mgr* mgr, u64 tag, u8 c)
{
	if (mgr == nullptr) {
		return nullptr;
	}
	khUtilFadePane* pane = new khUtilFadePane(c);
	P2ASSERTLINE(146, pane != nullptr);
	pane->add(mgr->addCallBack(tag, pane));
	return pane;
}

/*
 * --INFO--
 * Address:	8040BB88
 * Size:	000088
 */
khUtilFadePane::khUtilFadePane(u8 c)
    : CallBackNode()
    , mPaneNode(nullptr)
    , mState(0)
    , mCurrentAlpha('\0')
    , mChangeAlpha(c)
{
}

/*
 * --INFO--
 * Address:	8040BC10
 * Size:	000104
 */
void khUtilFadePane::update()
{
	switch (mState) {
	case 0:
		if (mCurrentAlpha > 255 - mChangeAlpha) {
			mCurrentAlpha = 255;
			mState        = 1;
			fadein_finish();
		} else {
			mCurrentAlpha += mChangeAlpha;
		}
		break;
	case 2:
		if (mCurrentAlpha < mChangeAlpha) {
			mCurrentAlpha = 0;
			mState        = 3;
			fadeout_finish();
		} else {
			mCurrentAlpha -= mChangeAlpha;
		}
		break;
	}

	FOREACH_NODE(khPaneNode, mPaneNode.mNext, node) { node->mPane->setAlpha(mCurrentAlpha); }
}

/*
 * --INFO--
 * Address:	8040BD18
 * Size:	0000B8
 */
bool khUtilFadePane::add(J2DPane* pane)
{
	bool result = false;
	if (pane) {
		createNode(pane);
		result = true;
		setInfAlpha(pane);
	}
	return result;
}

/*
 * --INFO--
 * Address:	8040BDD0
 * Size:	000020
 */
void khUtilFadePane::fadein()
{
	if (mState == 2 || mState == 3)
		mState = 0;
}

/*
 * --INFO--
 * Address:	8040BDF0
 * Size:	000020
 */
void khUtilFadePane::fadeout()
{
	if (mState == 0 || mState == 1)
		mState = 2;
}

/*
 * --INFO--
 * Address:	8040BE10
 * Size:	000060
 */
void khUtilFadePane::set_init_alpha(u8 a)
{
	mCurrentAlpha = a;
	FOREACH_NODE(khPaneNode, mPaneNode.mNext, node) { node->mPane->setAlpha(mCurrentAlpha); }
}

/*
 * --INFO--
 * Address:	8040BE70
 * Size:	000158
 */
khUtilColorAnm::khUtilColorAnm(P2DScreen::Mgr* screen, u64 tag, int panes, int frames)
{
	mPaneNum  = panes;
	mMaxFrame = frames;
	mCounter  = 0;
	mColor1.set(0, 0, 0, 0);
	mColorList = new JUtility::TColor[mPaneNum];
	for (int i = 0; i < mPaneNum; i++) {
		mColorList[i].set(0, 0, 0, 0);
	}
	mColor2.setRGBA(mColor1);
	mUpdateMode = 0;
	if (screen) {
		screen->addCallBack(tag, this);
	}
}

/*
 * --INFO--
 * Address:	8040BFC8
 * Size:	00021C
 */
void khUtilColorAnm::update()
{
	if (mUpdateMode) {
		f32 calc2, calc;
		calc                  = (mCounter * (mPaneNum - 1)) / (f32)mMaxFrame;
		JUtility::TColor col1 = getColor((int)calc);
		JUtility::TColor col2 = getColor(((int)calc) + 1);
		calc -= (int)calc;
		calc2 = 1.0f - calc;

		mColor1.r = (f32)col1.r * calc2 + (f32)col2.r * calc;
		mColor1.g = (f32)col1.g * calc2 + (f32)col2.g * calc;
		mColor1.b = (f32)col1.b * calc2 + (f32)col2.b * calc;
		mColor1.a = (f32)col1.a * calc2 + (f32)col2.a * calc;

		if (++mCounter >= mMaxFrame) {
			mCounter = 0;
		}
	} else {
		mColor1.setRGBA(mColor2);
		mCounter = 0;
	}
	do_update();
}

} // namespace Screen
} // namespace kh
