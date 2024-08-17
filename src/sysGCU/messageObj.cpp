#include "P2JME/messageObj.h"
#include "System.h"

namespace P2JME {

/**
 * @note Address: 0x80438A34
 * @note Size: 0x74
 */
TControl::TControl()
    : mSequenceProc(nullptr)
    , mTextRenderProc(nullptr)
    , mResContainer(nullptr)
    , mTimer(0.0f)
{
	mStatus.clear();
}

/**
 * @note Address: 0x80438AA8
 * @note Size: 0x24
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

/**
 * @note Address: 0x80438ACC
 * @note Size: 0x6C
 */
bool TControl::setFont(JUTFont* font)
{
	P2ASSERTLINE(77, mTextRenderProc);
	mTextRenderProc->setFont(font);
	return true;
}

/**
 * @note Address: 0x80438B38
 * @note Size: 0x9C
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

/**
 * @note Address: 0x80438BD4
 * @note Size: 0x104
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

/**
 * @note Address: 0x80438DDC
 * @note Size: 0x70
 */
void TControl::reset()
{
	JMessage::TControl::reset();
	mTimer = 0.0f;
	mStatus.clear();
	mSequenceProc->reset();
	mTextRenderProc->reset();
}

/**
 * @note Address: 0x80438E4C
 * @note Size: 0x8C
 */
bool TControl::update()
{
	bool ret = JMessage::TControl::update();
	if (mTextRenderProc) {
		mTextRenderProc->update();
	}
	if (mStatus.isSet(1)) {
		if (!ret)
			mStatus.set(2);
	} else {
		if (ret)
			mStatus.set(1);
	}
	return ret;
}

/**
 * @note Address: 0x80438ED8
 * @note Size: 0x4
 */
void TRenderingProcessor::update() { }

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void TControl::drawCommon()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80438EDC
 * @note Size: 0x20
 */
void TControl::draw(Graphics& gfx) { JMessage::TControl::render(); }

/**
 * @note Address: 0x80438EFC
 * @note Size: 0x80
 */
void TControl::draw(Mtx a, Mtx b)
{
	P2ASSERTLINE(257, mTextRenderProc);
	mTextRenderProc->mMtx1 = (Matrixf*)a;
	mTextRenderProc->mMtx2 = (Matrixf*)b;
	JMessage::TControl::render();
}

/**
 * @note Address: 0x80438F7C
 * @note Size: 0x50
 */
void TControl::setLocate(int x, int y) { mTextRenderProc->setLocate(x, y); }

/**
 * @note Address: 0x80438FCC
 * @note Size: 0x54
 */
void TControl::setMessageID(char* mesg)
{
	u32 part1, part2;
	convertCharToMessageID(mesg, &part1, &part2);
	setMessageID(part1, part2);
}

/**
 * @note Address: 0x80439020
 * @note Size: 0x84
 */
BOOL TControl::setMessageID(u32 lowerHalf, u32 upperHalf)
{
	reset();
	bool ret = JMessage::TControl::setMessageID(lowerHalf, upperHalf, nullptr);
	mTextRenderProc->preProcID(lowerHalf, upperHalf);
	return ret;
}

/**
 * @note Address: 0x804390A4
 * @note Size: 0x7C
 */
BOOL TControl::setMessageCode(u16 id1, u16 id2)
{
	reset();
	bool ret = JMessage::TControl::setMessageCode(id1, id2);
	mTextRenderProc->preProcCode(mMessageCode << 16 | mMessageIndex);
	return ret;
}

/**
 * @note Address: 0x80439120
 * @note Size: 0x70
 */
BOOL TControl::setMessageCode(u32 id)
{
	reset();
	bool ret = JMessage::TControl::setMessageCode(id >> 16, id);
	mTextRenderProc->preProcCode(id);
	return ret;
}

} // namespace P2JME
