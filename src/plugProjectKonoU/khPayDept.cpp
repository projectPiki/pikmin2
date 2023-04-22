#include "kh/khPayDept.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "utilityU.h"
#include "PSSystem/PSSystemIF.h"
#include "og/newScreen/ogUtil.h"
#include "LoadResource.h"
#include "kh/khUtil.h"
#include "JSystem/J2D/J2DAnmLoader.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace kh {
namespace Screen {

const char* cpNumTexLargeName[]
    = { "0_48.bti", "1_48.bti", "2_48.bti", "3_48.bti", "4_48.bti", "5_48.bti", "6_48.bti", "7_48.bti", "8_48.bti", "9_48.bti" };

/*
 * --INFO--
 * Address:	8040F1E0
 * Size:	00002C
 */
DispPayDept::DispPayDept(PayDeptType type, int level)
{
	mPayDeptType  = type;
	mPercentLevel = level;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ObjPayDept::ObjPayDept()
{
	mScreen    = nullptr;
	mAnim1     = nullptr;
	mAnim2     = nullptr;
	mAnimTime2 = 0.0f;
	mAnimTime1 = 0.0f;
}

/*
 * --INFO--
 * Address:	8040F20C
 * Size:	00025C
 */
void ObjPayDept::doCreate(JKRArchive* arc)
{
	char* paths1[3] = { "hensai_demo_parsent.blo", "hensai_demo_parsent.bck", "hensai_demo_parsent.bpk" };
	char* paths2[3] = { "hensai_demo_kanryo.blo", "hensai_demo_kanryo.bck", "hensai_demo_kanryo.bpk" };
	char* paths3[3] = { "hensai_demo_otakara.blo", "hensai_demo_otakara.bck", "hensai_demo_otakara.bpk" };

	if (!getDispMember()->isID(OWNER_KH, MEMBER_PAY_DEBT)) {
		JUT_PANICLINE(91, "disp member err");
	}

	DispPayDept* disp = static_cast<DispPayDept*>(getDispMember());
	char** paths      = nullptr;
	switch (disp->mPayDeptType) {
	case DispPayDept::PAYDEPT_Percent:
		paths = paths1;
		break;
	case DispPayDept::PAYDEPT_DebtPayed:
		paths = paths2;
		break;
	case DispPayDept::PAYDEPT_Complete:
		paths = paths3;
		break;
	}

	mScreen = new P2DScreen::Mgr_tuning;
	mScreen->set(paths[0], 0x40000, arc);
	void* file = JKRFileLoader::getGlbResource(paths[1], arc);
	mAnim1     = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	file       = JKRFileLoader::getGlbResource(paths[2], arc);
	mAnim2     = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
	mScreen->setAnimation(mAnim1);
	mScreen->setAnimation(mAnim2);

	if (disp->mPayDeptType == DispPayDept::PAYDEPT_Percent) {
		searchNumPane(mScreen->search('ROOT'), disp->mPercentLevel / 10, disp->mPercentLevel % 10);
	}

	switch (disp->mPayDeptType) {
	case DispPayDept::PAYDEPT_Percent:
		PSStart2DStream(0xc0011021);
		break;
	case DispPayDept::PAYDEPT_DebtPayed:
		PSStart2DStream(0xc0011020);
		break;
	case DispPayDept::PAYDEPT_Complete:
		PSStart2DStream(0xc0011020);
		break;
	}
}

/*
 * --INFO--
 * Address:	8040F468
 * Size:	0000CC
 */
bool ObjPayDept::doUpdateFadein()
{
	if (!getDispMember()->isID(OWNER_KH, MEMBER_PAY_DEBT)) {
		JUT_PANICLINE(150, "disp member err");
	}

	DispPayDept* disp = static_cast<DispPayDept*>(getDispMember());
	u32 soundID       = -1;
	switch (disp->mPayDeptType) {
	case DispPayDept::PAYDEPT_Percent:
		soundID = PSSE_PAY_COME;
		break;
	case DispPayDept::PAYDEPT_DebtPayed:
		soundID = PSSE_PAY_COMPLETE;
		break;
	case DispPayDept::PAYDEPT_Complete:
		soundID = PSSE_OTAKARA_COMPLETE;
		break;
	}

	if (soundID != -1) {
		PSSystem::spSysIF->playSystemSe(soundID, 0);
	}
	return true;
}

/*
 * --INFO--
 * Address:	8040F534
 * Size:	000020
 */
bool ObjPayDept::doUpdate() { return updateAnimation(); }

/*
 * --INFO--
 * Address:	8040F554
 * Size:	0000C0
 */
void ObjPayDept::doUpdateFadeoutFinish()
{
	PSStop2DStream();

	if (!getDispMember()->isID(OWNER_KH, MEMBER_PAY_DEBT)) {
		JUT_PANICLINE(183, "disp member err");
	}

	DispPayDept* disp = static_cast<DispPayDept*>(getDispMember());
	if (disp->mPayDeptType == DispPayDept::PAYDEPT_Percent) {
		if (getOwner()->setBackupScene()) {
			getOwner()->startScene(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8040F614
 * Size:	000064
 */
void ObjPayDept::doDraw(Graphics& gfx)
{
	gfx.mOrthoGraph.setPort();
	mScreen->draw(gfx, gfx.mOrthoGraph);
}

/*
 * --INFO--
 * Address:	8040F678
 * Size:	0000DC
 */
bool ObjPayDept::updateAnimation()
{
	bool ret              = false;
	mAnim1->mCurrentFrame = mAnimTime1;
	mAnim2->mCurrentFrame = mAnimTime2;
	mScreen->animation();
	mAnimTime1 += msVal.mAnimSpeed;
	mAnimTime2 += msVal.mAnimSpeed;
	if (mAnimTime1 >= mAnim1->mFrameLength || mAnimTime2 >= mAnim2->mFrameLength) {
		ret = true;
	}
	return ret;
}

inline u64 J2DPane::getTagName() const { return mTag; }

/*
 * --INFO--
 * Address:	8040F754
 * Size:	00031C
 */
void ObjPayDept::searchNumPane(J2DPane* pane, int id1, int id2)
{
	if (pane->getUserInfo() == '2keta') {
		setTex(mScreen, pane->getTagName(), cpNumTexLargeName[id1]);
	} else if (pane->getUserInfo() == '1keta') {
		setTex(mScreen, pane->getTagName(), cpNumTexLargeName[id2]);
	}

	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iter(tree->getFirstChild());
	while (iter != tree->getEndChild()) {
		searchNumPane(iter.getObject(), id1, id2);
		++iter;
	}
}

/*
 * --INFO--
 * Address:	8040FA70
 * Size:	00015C
 */
void ScenePayDept::doUserCallBackFunc(Resource::MgrCommand*)
{
	if (!mDispMember->isID(OWNER_KH, MEMBER_PAY_DEBT)) {
		JUT_PANICLINE(259, "disp member err");
	}

	DispPayDept* disp = static_cast<DispPayDept*>(mDispMember);
	switch (disp->mPayDeptType) {
	case DispPayDept::PAYDEPT_Percent:
		og::newScreen::makeLanguageResName(mName, "hensai_demo_parsent.szs");
		break;
	case DispPayDept::PAYDEPT_DebtPayed:
		og::newScreen::makeLanguageResName(mName, "hensai_demo_kanryo.szs");
		break;
	case DispPayDept::PAYDEPT_Complete:
		og::newScreen::makeLanguageResName(mName, "hensai_demo_otakara.szs");
		break;
	}
	LoadResource::Arg arg(mName);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	if (node) {
		registObj(new ObjPayDept, node->mArchive);
	} else {
		JUT_PANICLINE(277, "failed");
	}
}

ObjPayDept::StaticValues ObjPayDept::msVal;

} // namespace Screen
} // namespace kh
