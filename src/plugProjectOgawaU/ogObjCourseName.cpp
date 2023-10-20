#include "og/newScreen/CourseName.h"
#include "P2DScreen.h"
#include "og/Screen/anime.h"
#include "og/Screen/ogScreen.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "System.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8031741C
 * Size:	0000A8
 */
ObjCourseName::ObjCourseName(char const* name)
    : mFadeLevel(0.0f)
    , mAlpha(0.0f)
{
	mName = name;

	mDisp   = nullptr;
	mScreen = nullptr;
	mAnims  = nullptr;

	mTimer = msVal._0C;
	mState = 0;

	mColor.set(0, 0, 0, 255);
	mDoEnd           = 0;
	mBackgroundAlpha = 0.0f;
}

/*
 * --INFO--
 * Address:	803174C4
 * Size:	0000AC
 */
ObjCourseName::~ObjCourseName() { }

/*
 * --INFO--
 * Address:	80317570
 * Size:	000334
 */
void ObjCourseName::doCreate(JKRArchive* arc)
{
	og::Screen::DispMemberCourseName* disp = static_cast<og::Screen::DispMemberCourseName*>(getDispMember());
	if (disp->isID(OWNER_OGA, MEMBER_COURSE_NAME)) {
		mDisp = disp;

	} else if (disp->isID(OWNER_OGA, MEMBER_DUMMY)) {
		mDisp = new og::Screen::DispMemberCourseName;

	} else {
		JUT_PANICLINE(101, "ERR! in ObjCourseName Createé∏îsÅI\n");
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
	J2DBlendInfo info(1, 7, 6, 0);
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
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

/*
 * --INFO--
 * Address:	803178A4
 * Size:	0000F0
 */
bool ObjCourseName::doUpdate() { return commonUpdate(); }

/*
 * --INFO--
 * Address:	80317994
 * Size:	000170
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

/*
 * --INFO--
 * Address:	80317B04
 * Size:	000014
 */
bool ObjCourseName::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel = 0.0f;
	mAlpha     = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	80317B18
 * Size:	000010
 */
bool ObjCourseName::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	80317B28
 * Size:	000004
 */
void ObjCourseName::doUpdateFadeinFinish() { }

/*
 * --INFO--
 * Address:	80317B2C
 * Size:	00000C
 */
void ObjCourseName::doUpdateFinish() { mFadeLevel = 0.0f; }

/*
 * --INFO--
 * Address:	80317B38
 * Size:	000004
 */
void ObjCourseName::doUpdateFadeoutFinish() { }

/*
 * --INFO--
 * Address:	80317B3C
 * Size:	000120
 */
bool ObjCourseName::doUpdateFadein()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal._04) {
		mFadeLevel = msVal._04;
		check      = true;
	}
	mAlpha = mFadeLevel / msVal._04;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	80317C5C
 * Size:	000134
 */
bool ObjCourseName::doUpdateFadeout()
{
	bool check = false;
	mFadeLevel += sys->mDeltaTime;
	if (mFadeLevel > msVal._08) {
		mFadeLevel = msVal._08;
		if (!mDoEnd) {
			check = true;
		}
	}
	mAlpha = 1.0f - mFadeLevel / msVal._08;
	commonUpdate();
	return check;
}

/*
 * --INFO--
 * Address:	80317D90
 * Size:	000168
 */
void ObjCourseName::drawBG(Graphics& gfx)
{
	J2DPerspGraph* graf = &gfx.mPerspGraph;
	if (mDoEnd) {
		mBackgroundAlpha += sys->mDeltaTime;
		f32 temp = 1.0f - mBackgroundAlpha / msVal._00;
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
