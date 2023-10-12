#include "ebi/E2DGraph.h"
#include "ebi/Utility.h"
#include "JSystem/J2D/J2DPane.h"
#include "P2Macros.h"
#include "P2DScreen.h"
#include "og/Screen/callbackNodes.h"
#include "Vector3.h"

// necessary for weak function generation unfortunately
inline u64 J2DPane::getTagName() const { return mTag; }

namespace ebi {

const f32 E2DFader::kFadeTime = 0.5f;

/*
 * --INFO--
 * Address:	803CA358
 * Size:	00008C
 */
J2DPane* E2DScreen_searchAssert(J2DScreen* screen, u64 tag)
{
	char name[16];
	J2DPane* result = screen->search(tag);
	P2ASSERTLINE(20, (result != nullptr || (EUTDebug_Tag64ToName(tag, name), result != nullptr)));
	return result;
}

/*
 * --INFO--
 * Address:	803CA3E4
 * Size:	0001D8
 */
void E2DPane_setTreeInfluencedAlpha(J2DPane* pane, bool check)
{
	pane->setInfluencedAlpha(check, false);
	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iter(tree->getFirstChild());
	while (iter != tree->getEndChild()) {
		J2DPane* nextPane = iter.getObject();
		E2DPane_setTreeInfluencedAlpha(nextPane, check);
		++iter;
	}
}

/*
 * --INFO--
 * Address:	803CA5BC
 * Size:	0001A4
 */
void E2DPane_setTreeShow(J2DPane* pane)
{
	pane->show();
	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iter(tree->getFirstChild());
	while (iter != tree->getEndChild()) {
		J2DPane* nextPane = iter.getObject();
		E2DPane_setTreeShow(nextPane);
		++iter;
	}
}

/*
 * --INFO--
 * Address:	803CA76C
 * Size:	0001A4
 */
void E2DPane_setTreeHide(J2DPane* pane)
{
	pane->hide();
	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iter(tree->getFirstChild());
	while (iter != tree->getEndChild()) {
		J2DPane* nextPane = iter.getObject();
		E2DPane_setTreeHide(nextPane);
		++iter;
	}
}

/*
 * --INFO--
 * Address:	803CA91C
 * Size:	0003DC
 */
void E2DPane_setTreeCallBackMessage(P2DScreen::Mgr* mgr, J2DPane* pane)
{
	if (pane->getTypeID() == PANETYPE_TextBox) {
		u64 messageID = pane->getUserInfo();
		if (messageID != '00000000' && messageID != '\0') {
			u64 tag                                = pane->getTagName();
			og::Screen::CallBack_Message* callback = new og::Screen::CallBack_Message;
			P2ASSERTLINE(79, callback);

			mgr->addCallBack(tag, callback);
		}
	}

	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iter(tree->getFirstChild());
	while (iter != tree->getEndChild()) {
		J2DPane* nextPane = iter.getObject();
		E2DPane_setTreeCallBackMessage(mgr, nextPane);
		++iter;
	}
}

/*
 * --INFO--
 * Address:	803CACF8
 * Size:	0000D0
 */
Vector2f E2DPane_getGlbCenter(J2DPane* pane)
{
	P2ASSERTLINE(115, pane);
	Vector3f vtx0 = pane->getGlbVtx(0);
	Vector3f vtx3 = pane->getGlbVtx(3);
	Vector2f diff((vtx0.x + vtx3.x) / 2, (vtx0.y + vtx3.y) / 2);

	return diff;

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	or.      r31, r4, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	bne      lbl_803CAD34
	lis      r3, lbl_80496428@ha
	lis      r5, lbl_80496438@ha
	addi     r3, r3, lbl_80496428@l
	li       r4, 0x73
	addi     r5, r5, lbl_80496438@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803CAD34:
	mr       r4, r31
	addi     r3, r1, 0x14
	li       r5, 0
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r5, 0x14(r1)
	mr       r4, r31
	lwz      r6, 0x18(r1)
	addi     r3, r1, 8
	lwz      r0, 0x1c(r1)
	stw      r5, 0x2c(r1)
	li       r5, 3
	stw      r6, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       getGlbVtx__7J2DPaneCFUc
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stw      r0, 0x20(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x24(r1)
	lfs      f3, 0x2c(r1)
	lfs      f2, 0x20(r1)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x24(r1)
	fadds    f2, f3, f2
	lfs      f3, lbl_8051F9FC@sda21(r2)
	fadds    f0, f1, f0
	stw      r0, 0x28(r1)
	fmuls    f1, f3, f2
	fmuls    f0, f3, f0
	stfs     f1, 0(r30)
	stfs     f0, 4(r30)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace ebi
