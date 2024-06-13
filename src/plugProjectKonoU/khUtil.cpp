#include "kh/khUtil.h"
#include "Vector3.h"

namespace kh {
namespace Screen {

/**
 * @note Address: 0x8040B3F4
 * @note Size: 0x4C
 */
u64 getSerialTagName(u64 tag, int offs) { return tag + (offs / 10 * 0x100) + offs % 10; }

/**
 * @note Address: 0x8040B440
 * @note Size: 0x50
 */
void setTex(J2DScreen* screen, u64 tag, const ResTIMG* tex) { static_cast<J2DPicture*>(screen->search(tag))->changeTexture(tex, '\0'); }

/**
 * @note Address: 0x8040B490
 * @note Size: 0x50
 */
void setTex(J2DScreen* screen, u64 tag, const char* str) { static_cast<J2DPicture*>(screen->search(tag))->changeTexture(str, '\0'); }

/**
 * @note Address: 0x8040B4E0
 * @note Size: 0x210
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

/**
 * @note Address: 0x8040B6F0
 * @note Size: 0x21C
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

/**
 * @note Address: 0x8040B90C
 * @note Size: 0xEC
 */
f32 getPaneCenterX(J2DPane* pane)
{
	JGeometry::TVec3f vec1 = pane->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f vec2 = pane->getGlbVtx(GLBVTX_BtmRight);
	JGeometry::TVec3f vec3 = pane->getGlbVtx(GLBVTX_TopLeft);
	JGeometry::TVec3f vec4 = pane->getGlbVtx(GLBVTX_TopRight);

	return (vec1.x + vec2.x + vec3.x + vec4.x) * 0.25f;
}

/**
 * @note Address: 0x8040B9F8
 * @note Size: 0xEC
 */
f32 getPaneCenterY(J2DPane* pane)
{
	JGeometry::TVec3f vec1 = pane->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f vec2 = pane->getGlbVtx(GLBVTX_BtmRight);
	JGeometry::TVec3f vec3 = pane->getGlbVtx(GLBVTX_TopLeft);
	JGeometry::TVec3f vec4 = pane->getGlbVtx(GLBVTX_TopRight);

	return (vec1.y + vec2.y + vec3.y + vec4.y) * 0.25f;
}

/**
 * @note Address: 0x8040BAE4
 * @note Size: 0xA4
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

/**
 * @note Address: 0x8040BB88
 * @note Size: 0x88
 */
khUtilFadePane::khUtilFadePane(u8 c)
    : CallBackNode()
    , mPaneNode(nullptr)
    , mState(0)
    , mCurrentAlpha('\0')
    , mChangeAlpha(c)
{
}

/**
 * @note Address: 0x8040BC10
 * @note Size: 0x104
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

/**
 * @note Address: 0x8040BD18
 * @note Size: 0xB8
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

/**
 * @note Address: 0x8040BDD0
 * @note Size: 0x20
 */
void khUtilFadePane::fadein()
{
	if (mState == 2 || mState == 3)
		mState = 0;
}

/**
 * @note Address: 0x8040BDF0
 * @note Size: 0x20
 */
void khUtilFadePane::fadeout()
{
	if (mState == 0 || mState == 1)
		mState = 2;
}

/**
 * @note Address: 0x8040BE10
 * @note Size: 0x60
 */
void khUtilFadePane::set_init_alpha(u8 a)
{
	mCurrentAlpha = a;
	FOREACH_NODE(khPaneNode, mPaneNode.mNext, node) { node->mPane->setAlpha(mCurrentAlpha); }
}

/**
 * @note Address: 0x8040BE70
 * @note Size: 0x158
 */
khUtilColorAnm::khUtilColorAnm(P2DScreen::Mgr* screen, u64 tag, int panes, int frames)
{
	mPaneNum = panes;
	mLength  = frames;
	mFrame   = 0;
	mColor.set(0, 0, 0, 0);
	mColorList = new JUtility::TColor[mPaneNum];
	for (int i = 0; i < mPaneNum; i++) {
		mColorList[i].set(0, 0, 0, 0);
	}
	mDisabledColor.setRGBA(mColor);
	mUpdateMode = false;
	if (screen) {
		screen->addCallBack(tag, this);
	}
}

/**
 * @note Address: 0x8040BFC8
 * @note Size: 0x21C
 *
 * This function updates the color animation based on the current frame and update mode.
 * If update mode is true, calculate new color by interpolating between two colors
 * based on the current frame. If the update mode is false, it sets the color to mColor2 and
 * resets the frame counter.
 */
void khUtilColorAnm::update()
{
	if (mUpdateMode) {
		f32 inverseT;

		// Calculate the animation position between start and end
		f32 t = (mFrame * (mPaneNum - 1)) / (f32)mLength;

		// Get the two colors to interpolate between
		JUtility::TColor src  = getColor((int)t);
		JUtility::TColor dest = getColor(((int)t) + 1);

		// t is the current position between the two colors based on the frame
		// inverseT is used to determine how much each color should be weighted in the animation
		t -= (int)t;
		inverseT = 1.0f - t;

		mColor.r = (f32)src.r * inverseT + (f32)dest.r * t;
		mColor.g = (f32)src.g * inverseT + (f32)dest.g * t;
		mColor.b = (f32)src.b * inverseT + (f32)dest.b * t;
		mColor.a = (f32)src.a * inverseT + (f32)dest.a * t;

		// Increment current frame, reset if exceeding the animation length
		if (++mFrame >= mLength) {
			mFrame = 0;
		}
	} else {
		// Not updating, so reset color and reset the frame counter
		mColor.setRGBA(mDisabledColor);
		mFrame = 0;
	}

	// Call the do_update() function to finalize the animation update
	do_update();
}

} // namespace Screen
} // namespace kh
