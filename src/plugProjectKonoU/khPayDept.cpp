#include "kh/khPayDept.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRArchive.h"
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
	m_payDeptType  = type;
	m_percentLevel = level;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ObjPayDept::ObjPayDept()
{
	m_screen    = nullptr;
	m_anim1     = nullptr;
	m_anim2     = nullptr;
	m_animTime2 = 0.0f;
	m_animTime1 = 0.0f;
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
	switch (disp->m_payDeptType) {
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

	m_screen = new P2DScreen::Mgr_tuning;
	m_screen->set(paths[0], 0x40000, arc);
	void* file = JKRFileLoader::getGlbResource(paths[1], arc);
	m_anim1    = static_cast<J2DAnmTransform*>(J2DAnmLoaderDataBase::load(file));
	file       = JKRFileLoader::getGlbResource(paths[2], arc);
	m_anim2    = static_cast<J2DAnmColor*>(J2DAnmLoaderDataBase::load(file));
	m_screen->setAnimation(m_anim1);
	m_screen->setAnimation(m_anim2);

	if (disp->m_payDeptType == DispPayDept::PAYDEPT_Percent) {
		searchNumPane(m_screen->search('ROOT'), disp->m_percentLevel / 10, disp->m_percentLevel % 10);
	}

	switch (disp->m_payDeptType) {
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
	switch (disp->m_payDeptType) {
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
	if (disp->m_payDeptType == DispPayDept::PAYDEPT_Percent) {
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
	gfx.m_orthoGraph.setPort();
	m_screen->draw(gfx, gfx.m_orthoGraph);
}

/*
 * --INFO--
 * Address:	8040F678
 * Size:	0000DC
 */
bool ObjPayDept::updateAnimation()
{
	bool ret                = false;
	m_anim1->m_currentFrame = m_animTime1;
	m_anim2->m_currentFrame = m_animTime2;
	m_screen->animation();
	m_animTime1 += msVal.m_animSpeed;
	m_animTime2 += msVal.m_animSpeed;
	if (m_animTime1 >= m_anim1->m_maxFrame || m_animTime2 >= m_anim2->m_maxFrame) {
		ret = true;
	}
	return ret;
}

inline u64 J2DPane::getTagName() const { return m_tag; }

/*
 * --INFO--
 * Address:	8040F754
 * Size:	00031C
 */
void ObjPayDept::searchNumPane(J2DPane* pane, int id1, int id2)
{
	if (pane->getUserInfo() == '2keta') {
		setTex(m_screen, pane->getTagName(), cpNumTexLargeName[id1]);
	} else if (pane->getUserInfo() == '1keta') {
		setTex(m_screen, pane->getTagName(), cpNumTexLargeName[id2]);
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
	if (!m_dispMember->isID(OWNER_KH, MEMBER_PAY_DEBT)) {
		JUT_PANICLINE(259, "disp member err");
	}

	DispPayDept* disp = static_cast<DispPayDept*>(m_dispMember);
	switch (disp->m_payDeptType) {
	case DispPayDept::PAYDEPT_Percent:
		og::newScreen::makeLanguageResName(m_name, "hensai_demo_parsent.szs");
		break;
	case DispPayDept::PAYDEPT_DebtPayed:
		og::newScreen::makeLanguageResName(m_name, "hensai_demo_kanryo.szs");
		break;
	case DispPayDept::PAYDEPT_Complete:
		og::newScreen::makeLanguageResName(m_name, "hensai_demo_otakara.szs");
		break;
	}
	LoadResource::Arg arg(m_name);
	LoadResource::Node* node = gLoadResourceMgr->mountArchive(arg);
	if (node) {
		registObj(new ObjPayDept, node->m_archive);
	} else {
		JUT_PANICLINE(277, "failed");
	}
}

ObjPayDept::StaticValues ObjPayDept::msVal;

} // namespace Screen
} // namespace kh
