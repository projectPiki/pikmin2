#include "kh/PayDept.h"
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

/*
 * --INFO--
 * Address:	8040F754
 * Size:	00031C
 */
#pragma dont_inline on
void ObjPayDept::searchNumPane(J2DPane* pane, int id1, int id2)
{
	if (pane->m_messageID == '2keta') {
		setTex(m_screen, pane->m_tag, cpNumTexLargeName[id1]);
	} else if (pane->m_messageID == '1keta') {
		setTex(m_screen, pane->m_tag, cpNumTexLargeName[id2]);
	}

	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iter(tree->getFirstChild());
	while (iter != tree->getEndChild()) {
		J2DPane* cPane = iter.getObject();
		if (cPane->m_messageID == '2keta') {
			setTex(m_screen, cPane->m_tag, cpNumTexLargeName[id1]);
		} else if (cPane->m_messageID == '2keta') {
			setTex(m_screen, cPane->m_tag, cpNumTexLargeName[id2]);
		}

		JSUTree<J2DPane>* tree2 = pane->getPaneTree();
		JSUTreeIterator<J2DPane> iter2(tree->getFirstChild());
		while (iter2 != tree2->getEndChild()) {
			J2DPane* cPane2 = iter2.getObject();
			if (cPane2->m_messageID == '2keta') {
				setTex(m_screen, cPane2->m_tag, cpNumTexLargeName[id1]);
			} else if (cPane2->m_messageID == '2keta') {
				setTex(m_screen, cPane2->m_tag, cpNumTexLargeName[id2]);
			}

			JSUTree<J2DPane>* tree3 = cPane2->m_tree.getFirstChild();
			while (tree3 != cPane2->m_tree.getEndChild()) {
				J2DPane* cPane3 = tree3->getObject();
				if (cPane3->getUserInfo() == '2keta') {
					setTex(m_screen, cPane3->getTagName(), cpNumTexLargeName[id1]);
				} else if (cPane3->getUserInfo() == '1keta') {
					setTex(m_screen, cPane3->getTagName(), cpNumTexLargeName[id2]);
				}

				JSUTree<J2DPane>* tree4 = cPane3->getPaneTree();
				JSUTreeIterator<J2DPane> iter4(tree->getFirstChild());
				while (iter4 != tree4->getEndChild()) {
					searchNumPane(iter4.getObject(), id1, id2);
					iter4++;
				}
				tree3 = tree3->getNextChild();
			}
			++iter2;
		}
		++iter;
	}
	/*
stwu     r1, -0x40(r1)
mflr     r0
stw      r0, 0x44(r1)
li       r0, 0x32
stmw     r22, 0x18(r1)
mr       r22, r4
lis      r4, 0x6B657461@ha
mr       r30, r3
addi     r4, r4, 0x6B657461@l
mr       r31, r5
mr       r29, r6
lwz      r7, 0x18(r22)
lwz      r8, 0x1c(r22)
xor      r0, r7, r0
xor      r3, r8, r4
or.      r0, r3, r0
bne      lbl_8040F7BC
lis      r3, cpNumTexLargeName__Q22kh6Screen@ha
slwi     r0, r31, 2
addi     r4, r3, cpNumTexLargeName__Q22kh6Screen@l
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwzx     r7, r4, r0
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F7EC

lbl_8040F7BC:
li       r0, 0x31
xor      r0, r7, r0
or.      r0, r3, r0
bne      lbl_8040F7EC
lis      r3, cpNumTexLargeName__Q22kh6Screen@ha
slwi     r0, r29, 2
addi     r4, r3, cpNumTexLargeName__Q22kh6Screen@l
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwzx     r7, r4, r0
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F7EC:
lwz      r23, 0xdc(r22)
cmplwi   r23, 0
beq      lbl_8040F7FC
addi     r23, r23, -12

lbl_8040F7FC:
lis      r4, cpNumTexLargeName__Q22kh6Screen@ha
lis      r3, 0x6B657461@ha
slwi     r5, r31, 2
slwi     r0, r29, 2
addi     r4, r4, cpNumTexLargeName__Q22kh6Screen@l
addi     r26, r3, 0x6B657461@l
add      r27, r4, r5
add      r28, r4, r0
b        lbl_8040FA54

lbl_8040F820:
lwz      r22, 0xc(r23)
li       r0, 0x32
lwz      r4, 0x18(r22)
lwz      r5, 0x1c(r22)
xor      r0, r4, r0
xor      r3, r5, r26
or.      r0, r3, r0
bne      lbl_8040F858
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r27)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F888

lbl_8040F858:
lis      r3, 0x6B657461@ha
li       r0, 0x31
addi     r3, r3, 0x6B657461@l
xor      r3, r5, r3
xor      r0, r4, r0
or.      r0, r3, r0
bne      lbl_8040F888
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r28)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F888:
addi     r3, r22, 0xdc
bl       getFirstLink__10JSUPtrListCFv
cmplwi   r3, 0
beq      lbl_8040F89C
addi     r3, r3, -12

lbl_8040F89C:
mr       r24, r3
b        lbl_8040FA3C

lbl_8040F8A4:
mr       r3, r24
bl       "getObject__17JSUTree<7J2DPane>CFv"
lwz      r4, 0x18(r3)
li       r0, 0x32
lwz      r5, 0x1c(r3)
mr       r22, r3
xor      r0, r4, r0
xor      r3, r5, r26
or.      r0, r3, r0
bne      lbl_8040F8E4
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r27)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F914

lbl_8040F8E4:
lis      r3, 0x6B657461@ha
li       r0, 0x31
addi     r3, r3, 0x6B657461@l
xor      r3, r5, r3
xor      r0, r4, r0
or.      r0, r3, r0
bne      lbl_8040F914
lwz      r3, 0x38(r30)
lwz      r5, 0x10(r22)
lwz      r6, 0x14(r22)
lwz      r7, 0(r28)
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F914:
addi     r25, r22, 0xdc
mr       r3, r25
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)
b        lbl_8040FA18

lbl_8040F928:
addi     r3, r1, 0xc
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r22, r3
bl       getUserInfo__7J2DPaneCFv
li       r0, 0x32
xor      r4, r4, r26
xor      r0, r3, r0
or.      r0, r4, r0
bne      lbl_8040F96C
mr       r3, r22
bl       getTagName__7J2DPaneCFv
mr       r5, r3
lwz      r3, 0x38(r30)
lwz      r7, 0(r27)
mr       r6, r4
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc
b        lbl_8040F9AC

lbl_8040F96C:
mr       r3, r22
bl       getUserInfo__7J2DPaneCFv
lis      r5, 0x6B657461@ha
li       r0, 0x31
addi     r5, r5, 0x6B657461@l
xor      r4, r4, r5
xor      r0, r3, r0
or.      r0, r4, r0
bne      lbl_8040F9AC
mr       r3, r22
bl       getTagName__7J2DPaneCFv
mr       r5, r3
lwz      r3, 0x38(r30)
lwz      r7, 0(r28)
mr       r6, r4
bl       setTex__Q22kh6ScreenFP9J2DScreenUxPCc

lbl_8040F9AC:
mr       r3, r22
bl       getPaneTree__7J2DPaneFv
mr       r22, r3
bl       "getFirstChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ct__25JSUTreeIterator<7J2DPane>FP17JSUTree<7J2DPane>"
b        lbl_8040F9F0

lbl_8040F9CC:
addi     r3, r1, 8
bl       "getObject__25JSUTreeIterator<7J2DPane>CFv"
mr       r4, r3
mr       r3, r30
mr       r5, r31
mr       r6, r29
bl       searchNumPane__Q32kh6Screen10ObjPayDeptFP7J2DPaneii
addi     r3, r1, 8
bl       "__pp__25JSUTreeIterator<7J2DPane>Fv"

lbl_8040F9F0:
mr       r3, r22
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
mr       r4, r3
addi     r3, r1, 8
bl       "__ne__25JSUTreeIterator<7J2DPane>CFPC17JSUTree<7J2DPane>"
clrlwi.  r0, r3, 0x18
bne      lbl_8040F9CC
lwz      r3, 0xc(r1)
bl       "getNextChild__17JSUTree<7J2DPane>CFv"
stw      r3, 0xc(r1)

lbl_8040FA18:
mr       r3, r25
bl       "getEndChild__17JSUTree<7J2DPane>CFv"
lwz      r0, 0xc(r1)
cmplw    r0, r3
bne      lbl_8040F928
lwz      r24, 0x18(r24)
cmplwi   r24, 0
beq      lbl_8040FA3C
addi     r24, r24, -12

lbl_8040FA3C:
cmplwi   r24, 0
bne      lbl_8040F8A4
lwz      r23, 0x18(r23)
cmplwi   r23, 0
beq      lbl_8040FA54
addi     r23, r23, -12

lbl_8040FA54:
cmplwi   r23, 0
bne      lbl_8040F820
lmw      r22, 0x18(r1)
lwz      r0, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x40
blr
	*/
}
#pragma dont_inline off

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
	/*
stwu     r1, -0x50(r1)
mflr     r0
lis      r6, lbl_80499160@ha
lis      r5, 0x44455054@ha
stw      r0, 0x54(r1)
lis      r4, 0x5041595F@ha
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
addi     r30, r6, lbl_80499160@l
addi     r6, r5, 0x44455054@l
addi     r5, r4, 0x5041595F@l
stw      r29, 0x44(r1)
mr       r29, r3
li       r4, 0x4b48
lwz      r3, 0x21c(r3)
bl       isID__Q32og6Screen14DispMemberBaseFUlUx
clrlwi.  r0, r3, 0x18
bne      lbl_8040FACC
addi     r3, r30, 0
addi     r5, r30, 0x184
li       r4, 0x103
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040FACC:
lwz      r3, 0x21c(r29)
lwz      r0, 8(r3)
cmpwi    r0, 1
beq      lbl_8040FB08
bge      lbl_8040FAEC
cmpwi    r0, 0
bge      lbl_8040FAF8
b        lbl_8040FB24

lbl_8040FAEC:
cmpwi    r0, 3
bge      lbl_8040FB24
b        lbl_8040FB18

lbl_8040FAF8:
addi     r3, r29, 4
addi     r4, r30, 0x194
bl       makeLanguageResName__Q22og9newScreenFPcPCc
b        lbl_8040FB24

lbl_8040FB08:
addi     r3, r29, 4
addi     r4, r30, 0x1ac
bl       makeLanguageResName__Q22og9newScreenFPcPCc
b        lbl_8040FB24

lbl_8040FB18:
addi     r3, r29, 4
addi     r4, r30, 0x1c4
bl       makeLanguageResName__Q22og9newScreenFPcPCc

lbl_8040FB24:
addi     r3, r1, 8
addi     r4, r29, 4
bl       __ct__Q212LoadResource3ArgFPCc
lwz      r3, gLoadResourceMgr@sda21(r13)
addi     r4, r1, 8
bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
or.      r31, r3, r3
beq      lbl_8040FB9C
li       r3, 0x4c
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_8040FB88
bl       __ct__Q26Screen7ObjBaseFv
lis      r3, __vt__Q32kh6Screen10ObjPayDept@ha
li       r0, 0
addi     r3, r3, __vt__Q32kh6Screen10ObjPayDept@l
lfs      f0, lbl_805201E8@sda21(r2)
stw      r3, 0(r30)
addi     r3, r3, 0x10
stw      r3, 0x18(r30)
stw      r0, 0x38(r30)
stw      r0, 0x3c(r30)
stw      r0, 0x40(r30)
stfs     f0, 0x48(r30)
stfs     f0, 0x44(r30)

lbl_8040FB88:
lwz      r5, 0x34(r31)
mr       r3, r29
mr       r4, r30
bl       registObj__Q26Screen9SceneBaseFPQ26Screen7ObjBaseP10JKRArchive
b        lbl_8040FBB0

lbl_8040FB9C:
addi     r3, r30, 0
li       r4, 0x115
addi     r5, r2, lbl_805201F8@sda21
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_8040FBB0:
lwz      r0, 0x54(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0x50
blr
	*/
}

ObjPayDept::StaticValues ObjPayDept::msVal;

} // namespace Screen
} // namespace kh
