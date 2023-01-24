#include "kh/khPayDept.h"
#include "JSystem/JKR/JKRFileLoader.h"
#include "JSystem/JKR/JKRArchive.h"
#include "utilityU.h"
#include "PSSystem/PSSystemIF.h"
#include "og/newScreen/ogUtil.h"
#include "LoadResource.h"
#include "kh/khUtil.h"

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
		u32 level     = disp->m_percentLevel;
		J2DPane* pane = m_screen->search('ROOT');
		searchNumPane(pane, level / 10, level % 10);
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

	/*
stwu     r1, -0x40(r1)
mflr     r0
lis      r5, lbl_80499160@ha
stw      r0, 0x44(r1)
stw      r31, 0x3c(r1)
addi     r31, r5, lbl_80499160@l
stw      r30, 0x38(r1)
mr       r30, r4
stw      r29, 0x34(r1)
mr       r29, r3
stw      r28, 0x30(r1)
lwz      r11, 0xd0(r31)
lwz      r10, 0xd4(r31)
lwz      r9, 0xd8(r31)
lwz      r8, 0x124(r31)
lwz      r7, 0x128(r31)
lwz      r6, 0x12c(r31)
lwz      r5, 0x178(r31)
lwz      r4, 0x17c(r31)
lwz      r0, 0x180(r31)
stw      r11, 0x20(r1)
stw      r10, 0x24(r1)
stw      r9, 0x28(r1)
stw      r8, 0x14(r1)
stw      r7, 0x18(r1)
stw      r6, 0x1c(r1)
stw      r5, 8(r1)
stw      r4, 0xc(r1)
stw      r0, 0x10(r1)
bl       getDispMember__Q26Screen7ObjBaseFv
lis      r4, 0x44455054@ha
lis      r5, 0x5041595F@ha
addi     r6, r4, 0x44455054@l
li       r4, 0x4b48
addi     r5, r5, 0x5041595F@l
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040F2B8
addi     r3, r31, 0
addi     r5, r31, 0x184
li       r4, 0x5b
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040F2B8:
mr       r3, r29
bl       getDispMember__Q26Screen7ObjBaseFv
mr       r31, r3
li       r28, 0
lwz      r0, 8(r3)
cmpwi    r0, 1
beq      lbl_8040F2F8
bge      lbl_8040F2E4
cmpwi    r0, 0
bge      lbl_8040F2F0
b        lbl_8040F304

lbl_8040F2E4:
cmpwi    r0, 3
bge      lbl_8040F304
b        lbl_8040F300

lbl_8040F2F0:
addi     r28, r1, 0x20
b        lbl_8040F304

lbl_8040F2F8:
addi     r28, r1, 0x14
b        lbl_8040F304

lbl_8040F300:
addi     r28, r1, 8

lbl_8040F304:
li       r3, 0x148
bl       __nw__FUl
or.      r0, r3, r3
beq      lbl_8040F31C
bl       __ct__Q29P2DScreen10Mgr_tuningFv
mr       r0, r3

lbl_8040F31C:
stw      r0, 0x38(r29)
mr       r6, r30
lis      r5, 4
lwz      r3, 0x38(r29)
lwz      r4, 0(r28)
bl       set__9J2DScreenFPCcUlP10JKRArchive
lwz      r3, 4(r28)
mr       r4, r30
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x3c(r29)
mr       r4, r30
lwz      r3, 8(r28)
bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
bl       load__20J2DAnmLoaderDataBaseFPCv
stw      r3, 0x40(r29)
lwz      r3, 0x38(r29)
lwz      r4, 0x3c(r29)
lwz      r12, 0(r3)
lwz      r12, 0x60(r12)
mtctr    r12
bctrl
lwz      r3, 0x38(r29)
lwz      r4, 0x40(r29)
lwz      r12, 0(r3)
lwz      r12, 0x64(r12)
mtctr    r12
bctrl
lwz      r0, 8(r31)
cmpwi    r0, 0
bne      lbl_8040F3F4
lwz      r3, 0x38(r29)
lis      r4, 0x524F4F54@ha
addi     r6, r4, 0x524F4F54@l
lwz      r30, 0xc(r31)
lwz      r12, 0(r3)
li       r5, 0
lwz      r12, 0x3c(r12)
mtctr    r12
bctrl
lis      r5, 0x66666667@ha
mr       r4, r3
addi     r0, r5, 0x66666667@l
mr       r3, r29
mulhw    r0, r0, r30
srawi    r6, r0, 2
srawi    r0, r0, 2
srwi     r5, r0, 0x1f
srwi     r7, r6, 0x1f
add      r0, r0, r5
mulli    r0, r0, 0xa
add      r5, r6, r7
subf     r6, r0, r30
bl       searchNumPane__Q32kh6Screen10ObjPayDeptFP7J2DPaneii

lbl_8040F3F4:
lwz      r0, 8(r31)
cmpwi    r0, 1
beq      lbl_8040F42C
bge      lbl_8040F410
cmpwi    r0, 0
bge      lbl_8040F41C
b        lbl_8040F448

lbl_8040F410:
cmpwi    r0, 3
bge      lbl_8040F448
b        lbl_8040F43C

lbl_8040F41C:
lis      r3, 0xC0011021@ha
addi     r3, r3, 0xC0011021@l
bl       PSStart2DStream__FUl
b        lbl_8040F448

lbl_8040F42C:
lis      r3, 0xC0011020@ha
addi     r3, r3, 0xC0011020@l
bl       PSStart2DStream__FUl
b        lbl_8040F448

lbl_8040F43C:
lis      r3, 0xC0011020@ha
addi     r3, r3, 0xC0011020@l
bl       PSStart2DStream__FUl

lbl_8040F448:
lwz      r0, 0x44(r1)
lwz      r31, 0x3c(r1)
lwz      r30, 0x38(r1)
lwz      r29, 0x34(r1)
lwz      r28, 0x30(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
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
