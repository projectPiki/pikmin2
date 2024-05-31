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

/**
 * @note Address: 0x803CA358
 * @note Size: 0x8C
 */
J2DPane* E2DScreen_searchAssert(J2DScreen* screen, u64 tag)
{
	char name[16];
	J2DPane* result = screen->search(tag);
	P2ASSERTLINE(20, (result != nullptr || (EUTDebug_Tag64ToName(tag, name), result != nullptr)));
	return result;
}

/**
 * @note Address: 0x803CA3E4
 * @note Size: 0x1D8
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

/**
 * @note Address: 0x803CA5BC
 * @note Size: 0x1A4
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

/**
 * @note Address: 0x803CA76C
 * @note Size: 0x1A4
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

/**
 * @note Address: 0x803CA91C
 * @note Size: 0x3DC
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

/**
 * @note Address: 0x803CACF8
 * @note Size: 0xD0
 */
Vector2f E2DPane_getGlbCenter(J2DPane* pane)
{
	P2ASSERTLINE(115, pane);
	JGeometry::TVec3f pos1 = pane->getGlbVtx(GLBVTX_BtmLeft);
	JGeometry::TVec3f pos2 = pane->getGlbVtx(GLBVTX_TopRight);
	Vector2f argVec((pos1.x + pos2.x) * 0.5f, (pos1.y + pos2.y) * 0.5f);
	return argVec;
}

} // namespace ebi
