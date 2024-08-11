#include "og/newScreen/CourseName.h"
#include "P2DScreen.h"
#include "og/Screen/anime.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "System.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace og {
namespace newScreen {

/**
 * @note Address: 0x8031741C
 * @note Size: 0xA8
 */
ObjCourseName::ObjCourseName(char const* name)
    : mFadeLevel(0.0f)
    , mAlpha(0.0f)
{
	mName = name;

	mDisp   = nullptr;
	mScreen = nullptr;
	mAnims  = nullptr;

	mTimer = msVal.mFinishWaitTime;
	mState = 0;

	mColor.set(0, 0, 0, 255);
	mDoEnd           = 0;
	mBackgroundAlpha = 0.0f;
}

/**
 * @note Address: 0x803174C4
 * @note Size: 0xAC
 */
ObjCourseName::~ObjCourseName() { }

/**
 * @note Address: 0x80317570
 * @note Size: 0x334
 */
void ObjCourseName::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_COURSE_NAME)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberCourseName;

	} else {
		JUT_PANICLINE(101, "ERR! in ObjCourseName Create失敗！\n");
	}

	CourseName* owner = static_cast<CourseName*>(getOwner());
	const char* path  = owner->getCourseBloName();

	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set(path, 0x1040000, arc);

	mAnims         = new og::Screen::AnimGroup(5);
	char** list    = animFileTableCourse[owner->mCourseIndex];
	char* listItem = list[0];
	for (int i = 0; listItem; i++) {
		og::Screen::registAnimGroupScreen(mAnims, arc, mScreen, listItem, 1.0f);
		listItem = list[i + 1];
	}

	og::Screen::setAlphaScreen(mScreen);

	u64 tags[4] = { 'nuki_tex', 'efect_00', 'efect_01', 0 };
	J2DBlend info(1, 7, 6, 0);
	mScreen->setBlendInfo(info, tags);

	J2DPane* pane = mScreen->search('nuki_tex');
	if (pane) {
		J2DPane* pane1 = mScreen->search('efect_00');
		J2DPane* pane2 = mScreen->search('efect_01');
		mScreen->prependChild(pane);
		if (pane1)
			pane1->hide();
		if (pane2)
			pane2->hide();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
bool ObjCourseName::commonUpdate()
{
	bool check = false;
	mAnims->update();
	mScreen->animation();
	mScreen->update();

	if (mState != 0) {
		mTimer -= sys->mDeltaTime;
		if (mTimer < 0.0f) {
			check = true;
		}
	} else {
		og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(getDispMember());
		if (disp->isID(OWNER_OGA, MEMBER_COURSE_NAME)) {
			if (disp->mIsCounting) {
				mState = 1;
			}
			if (disp->mIsExiting) {
				mDoEnd = true;
			}
		}
	}
	return check;
}

/**
 * @note Address: 0x803178A4
 * @note Size: 0xF0
 */
bool ObjCourseName::doUpdate() { return commonUpdate(); }

/**
 * @note Address: 0x80317994
 * @note Size: 0x170
 */
void ObjCourseName::doDraw(Graphics& gfx)
{
	drawBG(gfx);

	J2DPerspGraph* graf = &gfx.mPerspGraph;
	graf->setPort();

	u16 w = sys->getRenderModeObj()->fbWidth;
	u16 h = sys->getRenderModeObj()->efbHeight;
	JUtility::TColor color(255, 255, 255, 255);
	graf->setColor(color);
	GXSetColorUpdate(GX_FALSE);
	GXSetAlphaUpdate(GX_TRUE);

	JGeometry::TVec2f vec(0.0f, 0.0f);
	JGeometry::TBox2f box(vec.x, vec.y, vec.x + w, vec.y + h);
	graf->fillBox(box);
	GXSetColorUpdate(GX_TRUE);
	graf->setPort();

	f32 alpha = mAlpha * 255.0f;
	mScreen->setAlpha(alpha);
	mScreen->draw(gfx, *graf);
	graf->setPort();
}

/**
 * @note Address: 0x80317B04
 * @note Size: 0x14
 */
bool ObjCourseName::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel = 0.0f;
	mAlpha     = 0.0f;
	return true;
}

/**
 * @note Address: 0x80317B18
 * @note Size: 0x10
 */
bool ObjCourseName::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/**
 * @note Address: 0x80317B28
 * @note Size: 0x4
 */
void ObjCourseName::doUpdateFadeinFinish() { }

/**
 * @note Address: 0x80317B2C
 * @note Size: 0xC
 */
void ObjCourseName::doUpdateFinish() { mFadeLevel = 0.0f; }

/**
 * @note Address: 0x80317B38
 * @note Size: 0x4
 */
void ObjCourseName::doUpdateFadeoutFinish() { }

/**
 * @note Address: 0x80317B3C
 * @note Size: 0x120
 */
bool ObjCourseName::doUpdateFadein()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal.mFadeinTime) {
		mFadeLevel = msVal.mFadeinTime;
		check      = true;
	}
	mAlpha = mFadeLevel / msVal.mFadeinTime;
	commonUpdate();
	return check;
}

/**
 * @note Address: 0x80317C5C
 * @note Size: 0x134
 */
bool ObjCourseName::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal.mFadeoutTime) {
		mFadeLevel = msVal.mFadeoutTime;
		if (!mDoEnd) {
			check = true;
		}
	}
	mAlpha = 1.0f - mFadeLevel / msVal.mFadeoutTime;
	commonUpdate();
	return check;
}

/**
 * @note Address: 0x80317D90
 * @note Size: 0x168
 */
void ObjCourseName::drawBG(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	if (mDoEnd) {
		mBackgroundAlpha += sys->mDeltaTime;
		f32 temp = 1.0f - mBackgroundAlpha / msVal.mBgAlphaFadeTime;
		if (temp > 0.0f) {
			mColor.a = temp * 255.0f;
		} else {
			mColor.a = 0;
			mDoEnd   = 0;
		}
	}

	if (mColor.a != 0) {
		graf->setPort();
		u16 w = sys->getRenderModeObj()->fbWidth;
		u16 h = sys->getRenderModeObj()->efbHeight;
		graf->setColor(mColor);
		GXSetAlphaUpdate(GX_FALSE);

		JGeometry::TVec2f vec(0.0f, 0.0f);
		JGeometry::TBox2f box(vec.x, vec.y, vec.x + w, vec.y + h);
		graf->fillBox(box);
	}
}

ObjCourseName::StaticValues ObjCourseName::msVal;

} // namespace newScreen
} // namespace og
