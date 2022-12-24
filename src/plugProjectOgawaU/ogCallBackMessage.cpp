#include "P2DScreen.h"
#include "og/Screen/callbackNodes.h"
#include "og/ogLib2D.h"
#include "og/Screen/ogScreen.h"

inline u64 J2DPane::getTagName() const { return m_tag; }

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80309614
 * Size:	000098
 */
CallBack_Message::CallBack_Message()
{
	m_message           = og::gLib2D->getMsgPtr();
	m_messageIDAsULL    = 0;
	m_messageIDAs2UL[0] = 0;
	m_messageIDAs2UL[1] = 0;
	_30                 = 0.0f;
	_34                 = 0.0f;
	m_maxY              = 1.0f;
	m_maxX              = 1.0f;
	m_minY              = 1.0f;
	m_minX              = 1.0f;
}

/*
 * --INFO--
 * Address:	803096AC
 * Size:	0001B4
 */
void CallBack_Message::draw(Graphics& gfx, J2DGrafContext& graf)
{
	Matrixf mtx;
	if (checkVisibleGlb(m_pane)) {
		u64 tag = m_pane->m_messageID;
		if (tag != m_messageIDAsULL) {
			m_messageIDAsULL = tag;
			P2JME::convertU64ToMessageID(m_messageIDAsULL, &m_messageIDAs2UL[0], &m_messageIDAs2UL[1]);
		}
		PSMTXConcat(graf.m_posMtx, m_pane->_080, mtx.m_matrix.mtxView);
		GXLoadPosMtxImm(mtx.m_matrix.mtxView, 0);

		J2DPane* pane = m_pane;
		f32 x1        = pane->_020.getWidth();
		f32 y1        = pane->_020.getHeight();
		int flag      = pane->m_basePosition % 3;

		f32 y2, x2;
		x2 = 0.0f;
		y2 = 0.0f;

		if (flag == 1) {
			x2 = x1 / 2;
		} else if (flag == 2) {
			x2 = x1;
		}

		flag = pane->m_basePosition / 3;

		if (flag == 1) {
			y2 = y1 / 2;
		} else if (flag == 2) {
			y2 = y1;
		}

		_30                              = x2;
		_34                              = y2;
		P2JME::TRenderingProcessor* proc = m_message->m_processor;
		proc->_54                        = -_30;
		proc->_58                        = -_34;
		proc->setTextBoxInfo(m_pane);

		m_message->m_processor->m_mesgBounds.set(m_minX, m_minY, m_maxX, m_maxY);

		m_message->drawMessageID(gfx, m_messageIDAs2UL[0], m_messageIDAs2UL[1]);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 * NB: this never gets used, but it has to be here to generate the weak CallBack_Message dtor in the right spot
 */
CallBack_MessageAndShadow::CallBack_MessageAndShadow(f32, f32, J2DPane*) { }

/*
 * --INFO--
 * Address:	803098E0
 * Size:	000194
 */
bool checkVisibleGlb(J2DPane* pane)
{
	if (pane->isVisible()) {
		J2DPane* parent = pane->getParentPane();
		return (parent != nullptr) ? checkVisibleGlb(parent) : true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	80309A7C
 * Size:	00031C
 */
void setCallBackMessageSub(P2DScreen::Mgr* mgr, J2DPane* pane)
{
	if ((u16)pane->getTypeID() == 0x13) {
		if (pane->getUserInfo()) {
			u64 tag = pane->getTagName();
			mgr->addCallBack(tag, new CallBack_Message);
			static_cast<J2DTextBox*>(pane)->setString("");
		}
	}

	JSUTree<J2DPane>* tree = pane->getPaneTree();
	JSUTreeIterator<J2DPane> iterator(tree->getFirstChild());

	while (iterator != tree->getEndChild()) {
		J2DPane* cPane = iterator.getObject();
		setCallBackMessageSub(mgr, cPane);
		++iterator;
	}
}

/*
 * --INFO--
 * Address:	80309E00
 * Size:	000024
 */
void setCallBackMessage(P2DScreen::Mgr* mgr) { setCallBackMessageSub(mgr, mgr); }
} // namespace Screen
} // namespace og
