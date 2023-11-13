#include "P2JME/messageObj.h"
#include "System.h"

namespace P2JME {

/*
 * --INFO--
 * Address:	80438A34
 * Size:	000074
 */
TControl::TControl()
{
	mSequenceProc   = nullptr;
	mTextRenderProc = nullptr;
	mResContainer   = nullptr;
	mTimer          = 0.0f;
	for (int i = 0; i < sizeof(mStatus); i++) {
		mStatus.byteView[i] = 0;
	}
	for (int i = 0; i < sizeof(mStatus); i++) {
		mStatus.byteView[i] = 0;
	}
}

/*
 * --INFO--
 * Address:	80438AA8
 * Size:	000024
 */
bool TControl::setController(Controller* control1, Controller* control2)
{
	TSequenceProcessor* proc = mSequenceProc;
	if (proc) {
		proc->mController1 = control1;
		proc->mController2 = control2;
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80438ACC
 * Size:	00006C
 */
bool TControl::setFont(JUTFont* font)
{
	P2ASSERTLINE(77, mTextRenderProc);
	mTextRenderProc->setFont(font);
	return true;
}

/*
 * --INFO--
 * Address:	80438B38
 * Size:	00009C
 */
bool TControl::setRubyFont(JUTFont* font)
{
	P2ASSERTLINE(88, mTextRenderProc);

	if (!font) {
		font = gP2JMEMgr->mRubyFont;
	} else {
		P2ASSERTLINE(98, font);
	}
	mTextRenderProc->mRubyFont = font;
	return true;
}

/*
 * --INFO--
 * Address:	80438BD4
 * Size:	000104
 */
bool TControl::init()
{
	sys->heapStatusStart("JMessage実装クラス", nullptr);
	createReference();
	createResourceContainer();
	createSequenceProcessor();
	createRenderingProcessor();
	sys->heapStatusEnd("JMessage実装クラス");

	mReference->mResource = mResContainer;
	mBaseProcSeq          = mSequenceProc;
	mBaseProcRender       = mTextRenderProc;

	sys->heapStatusStart("個別初期化", nullptr); // "Individual Initialization"
	bool ret = false;
	if (onInit()) {
		ret = true;
	}
	sys->heapStatusEnd("個別初期化");
	return ret;
}

/*
 * --INFO--
 * Address:	80438DDC
 * Size:	000070
 */
void TControl::reset()
{
	JMessage::TControl::reset();
	mTimer = 0.0f;
	for (int i = 0; i < sizeof(mStatus); i++) {
		mStatus.byteView[i] = 0;
	}
	mSequenceProc->reset();
	mTextRenderProc->reset();
}

/*
 * --INFO--
 * Address:	80438E4C
 * Size:	00008C
 */
bool TControl::update()
{
	bool ret = JMessage::TControl::update();
	if (mTextRenderProc) {
		mTextRenderProc->update();
	}
	if (IS_FLAG(mStatus.typeView, 1)) {
		if (!ret)
			SET_FLAG(mStatus.typeView, 2);
	} else {
		if (ret)
			SET_FLAG(mStatus.typeView, 1);
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80438ED8
 * Size:	000004
 */
void TRenderingProcessor::update() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void TControl::drawCommon()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80438EDC
 * Size:	000020
 */
void TControl::draw(Graphics& gfx) { JMessage::TControl::render(); }

/*
 * --INFO--
 * Address:	80438EFC
 * Size:	000080
 */
void TControl::draw(Mtx a, Mtx b)
{
	P2ASSERTLINE(257, mTextRenderProc);
	mTextRenderProc->mMtx1 = (Matrixf*)a;
	mTextRenderProc->mMtx2 = (Matrixf*)b;
	JMessage::TControl::render();
}

/*
 * --INFO--
 * Address:	80438F7C
 * Size:	000050
 */
void TControl::setLocate(int x, int y) // JGeometry::TBox2f shenanigans
{
	f32 xpos                  = x;
	f32 ypos                  = y;
	TRenderingProcessor* proc = mTextRenderProc;
	proc->mLocate.i.x         = xpos;
	proc->mLocate.f.x         = xpos;
	proc->mLocate.i.y         = ypos;
	proc->mLocate.f.y         = ypos;
}

/*
 * --INFO--
 * Address:	80438FCC
 * Size:	000054
 */
void TControl::setMessageID(char* mesg)
{
	u32 part1, part2;
	convertCharToMessageID(mesg, &part1, &part2);
	setMessageID(part1, part2);
}

/*
 * --INFO--
 * Address:	80439020
 * Size:	000084
 */
BOOL TControl::setMessageID(u32 part1, u32 part2)
{
	reset();
	bool ret = JMessage::TControl::setMessageID(part1, part2, nullptr);
	mTextRenderProc->preProcID(part1, part2);
	return ret;
}

/*
 * --INFO--
 * Address:	804390A4
 * Size:	00007C
 */
BOOL TControl::setMessageCode(u16 id1, u16 id2)
{
	reset();
	bool ret = JMessage::TControl::setMessageCode(id1, id2);
	mTextRenderProc->preProcCode(_0C << 16 | _0E);
	return ret;
}

/*
 * --INFO--
 * Address:	80439120
 * Size:	000070
 */
BOOL TControl::setMessageCode(u32 id)
{
	reset();
	bool ret = JMessage::TControl::setMessageCode(id >> 16, id);
	mTextRenderProc->preProcCode(id);
	return ret;
}

} // namespace P2JME
