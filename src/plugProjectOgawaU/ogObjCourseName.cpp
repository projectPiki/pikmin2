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
	const char* path  = bloFileNameCourse[owner->mCourseIndex];

	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set(path, 0x1040000, arc);

	mAnims         = new og::Screen::AnimGroup(5);
	char** list    = animFileTableCourse[owner->mCourseIndex];
	char* listItem = list[0];
	for (int i = 0; listItem != nullptr; listItem = list[i + 1], i++) {
		og::Screen::registAnimGroupScreen(mAnims, arc, mScreen, listItem, 1.0f);
	}

	og::Screen::setAlphaScreen(mScreen);

	J2DBlend info = J2DBlend(1, 7, 6, 0);
	u64 tags[4]   = { 'nuki_tex', 'efect_00', 'efect_01', 0 };
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
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, lbl_8048E700@ha
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r3
	mr       r30, r4
	addi     r31, r5, lbl_8048E700@l
	bl       getDispMember__Q26Screen7ObjBaseFv
	lis      r4, 0x004F4741@ha
	lis      r6, 0x55525345@ha
	li       r5, 0x434f
	mr       r27, r3
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x55525345@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_803175C0
	stw      r27, 0x38(r29)
	b        lbl_8031763C

lbl_803175C0:
	lis      r4, 0x004F4741@ha
	lis      r6, 0x554D4D59@ha
	mr       r3, r27
	li       r5, 0x44
	addi     r4, r4, 0x004F4741@l
	addi     r6, r6, 0x554D4D59@l
	bl       isID__Q32og6Screen14DispMemberBaseFUlUx
	clrlwi.  r0, r3, 0x18
	beq      lbl_80317628
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80317620
	lis      r5, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r4, __vt__Q32og6Screen20DispMemberCourseName@ha
	addi     r0, r5, __vt__Q32og6Screen14DispMemberBase@l
	li       r5, 0
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q32og6Screen20DispMemberCourseName@l
	stw      r5, 4(r3)
	stw      r0, 0(r3)
	stw      r5, 8(r3)
	stb      r5, 0xc(r3)
	stb      r5, 0xd(r3)

lbl_80317620:
	stw      r3, 0x38(r29)
	b        lbl_8031763C

lbl_80317628:
	addi     r3, r31, 0
	addi     r5, r31, 0x38
	li       r4, 0x65
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8031763C:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	lis      r3, bloFileNameCourse__Q22og9newScreen@ha
	lwz      r0, 0x220(r28)
	addi     r4, r3, bloFileNameCourse__Q22og9newScreen@l
	li       r3, 0x148
	slwi     r0, r0, 2
	lwzx     r27, r4, r0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80317680
	bl       __ct__Q29P2DScreen10Mgr_tuningFv
	mr       r0, r3

lbl_80317680:
	stw      r0, 0x3c(r29)
	mr       r4, r27
	mr       r6, r30
	lis      r5, 0x104
	lwz      r3, 0x3c(r29)
	bl       set__9J2DScreenFPCcUlP10JKRArchive
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_803176B4
	li       r4, 5
	bl       __ct__Q32og6Screen9AnimGroupFi
	mr       r0, r3

lbl_803176B4:
	stw      r0, 0x40(r29)
	lis      r3, animFileTableCourse__Q22og9newScreen@ha
	addi     r3, r3, animFileTableCourse__Q22og9newScreen@l
	lwz      r0, 0x220(r28)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	lwz      r6, 0(r3)
	mr       r27, r3
	b        lbl_803176F0

lbl_803176D8:
	lwz      r3, 0x40(r29)
	mr       r4, r30
	lwz      r5, 0x3c(r29)
	lfs      f1, lbl_8051D8D4@sda21(r2)
	bl
registAnimGroupScreen__Q22og6ScreenFPQ32og6Screen9AnimGroupP10JKRArchiveP9J2DScreenPcf
	lwzu     r6, 4(r27)

lbl_803176F0:
	cmplwi   r6, 0
	bne      lbl_803176D8
	lwz      r3, 0x3c(r29)
	bl       setAlphaScreen__Q22og6ScreenFP7J2DPane
	li       r5, 1
	li       r4, 7
	li       r3, 6
	li       r0, 0
	stb      r5, 0x14(r1)
	addi     r30, r1, 0x18
	lfd      f3, 0x18(r31)
	stb      r4, 0x15(r1)
	lfd      f2, 0x20(r31)
	stb      r3, 0x16(r1)
	lfd      f1, 0x28(r31)
	stb      r0, 0x17(r1)
	lfd      f0, 0x30(r31)
	lwz      r0, 0x14(r1)
	stfd     f3, 0x18(r1)
	lwz      r31, 0x3c(r29)
	stw      r0, 0x10(r1)
	lbz      r5, 0x10(r1)
	lbz      r4, 0x11(r1)
	lbz      r3, 0x12(r1)
	lbz      r0, 0x13(r1)
	stfd     f2, 0x20(r1)
	stfd     f1, 0x28(r1)
	stfd     f0, 0x30(r1)
	stb      r5, 8(r1)
	stb      r4, 9(r1)
	stb      r3, 0xa(r1)
	stb      r0, 0xb(r1)

lbl_80317770:
	lwz      r5, 0(r30)
	li       r3, 0
	lwz      r6, 4(r30)
	xor      r0, r5, r3
	xor      r3, r6, r3
	or.      r0, r3, r0
	beq      lbl_803177E8
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x3c(r12)
	mtctr    r12
	addi     r30, r30, 8
	bctrl
	cmplwi   r3, 0
	beq      lbl_80317770
	lwz      r12, 0(r3)
	lwz      r0, 8(r1)
	lwz      r12, 0x13c(r12)
	stw      r0, 0xc(r1)
	mtctr    r12
	bctrl
	lbz      r4, 0xc(r1)
	lbz      r0, 0xd(r1)
	stb      r4, 0x7c(r3)
	lbz      r4, 0xe(r1)
	stb      r0, 0x7d(r3)
	lbz      r0, 0xf(r1)
	stb      r4, 0x7e(r3)
	stb      r0, 0x7f(r3)
	b        lbl_80317770

lbl_803177E8:
	lwz      r3, 0x3c(r29)
	lis      r5, 0x5F746578@ha
	lis      r4, 0x6E756B69@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x5F746578@l
	addi     r5, r4, 0x6E756B69@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	or.      r27, r3, r3
	beq      lbl_80317890
	lwz      r3, 0x3c(r29)
	lis      r5, 0x745F3030@ha
	lis      r4, 0x65666563@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x745F3030@l
	addi     r5, r4, 0x65666563@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r3, 0x3c(r29)
	lis      r5, 0x745F3031@ha
	lis      r4, 0x65666563@ha
	lwz      r12, 0(r3)
	addi     r6, r5, 0x745F3031@l
	addi     r5, r4, 0x65666563@l
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	lwz      r3, 0x3c(r29)
	mr       r4, r27
	bl       prependChild__7J2DPaneFP7J2DPane
	cmplwi   r31, 0
	beq      lbl_80317880
	li       r0, 0
	stb      r0, 0xb0(r31)

lbl_80317880:
	cmplwi   r30, 0
	beq      lbl_80317890
	li       r0, 0
	stb      r0, 0xb0(r30)

lbl_80317890:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
