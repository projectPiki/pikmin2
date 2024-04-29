#include "Game/BaseHIO.h"
#include "CNode.h"
#include "Controller.h"
#include "Dolphin/os.h"
#include "JSystem/JFramework/JFWDisplay.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTXfb.h"
#include "JSystem/JUtility/JUTProcBar.h"
#include "nans.h"
#include "P2Macros.h"
#include "System.h"

namespace Game {

static const int unusedBaseHIOArray[] = { 0, 0, 0 };
static const char unusedBaseHIOName[] = "baseHIOSection";

/**
 * @note Address: 0x80164BF0
 * @note Size: 0xC0
 */
BaseHIOSection::BaseHIOSection(JKRHeap* heap)
    : Section(nullptr, heap, false)
{
	System::assert_fragmentation("BaseHIOSection");
	mRootNode         = nullptr;
	u32 freeSize      = JKRHeap::sCurrentHeap->getFreeSize();
	u32 totalFreeSize = JKRHeap::sCurrentHeap->getTotalFreeSize();

	JUT_ASSERTLINE(314, freeSize == totalFreeSize, "fragmentation occurred : after sound\n");
	mDebugController = new Controller(Controller::PORT_3);
}

/**
 * @note Address: 0x80164CB0
 * @note Size: 0xC4
 */
BaseHIOSection::~BaseHIOSection()
{
	if (mRootNode) {
		mRootNode->del();
		delete mRootNode;
	}

	mRootNode = nullptr;

	delete mDebugController;
	mDebugController = nullptr;
}

/**
 * @note Address: 0x80164DD4
 * @note Size: 0x150
 */
void BaseHIOSection::setDisplay(JFWDisplay* display, int secondsPer60Frames)
{
	// Check if display is being set for the first time
	P2ASSERTBOOLLINE(333, !mDisplay && display);

	// Assign the new display and create a new JUTFader object for it
	mDisplay = display;
	mFader   = new JUTFader(0, 0, JUTVideo::sManager->mRenderModeObj->fbWidth, JUTVideo::sManager->mRenderModeObj->efbHeight,
                          JUtility::TColor(0, 0, 0, 0));

	// Assign the new fader to the display's mFader member
	mDisplay->mFader = mFader;

	// Indicate that a new display has been set
	mIsDisplayNew = true;

	// Set the current display and frame rate
	sys->setCurrentDisplay(mDisplay);
	sys->setFrameRate(secondsPer60Frames);

	// Invalidate the display buffer ranges
	DCInvalidateRange(JFWDisplay::getManager()->mXfb->getBufferPtr(0), JUTXfb::accumeXfbSize());
	DCInvalidateRange(JFWDisplay::getManager()->mXfb->getBufferPtr(1), JUTXfb::accumeXfbSize());

	// Hide the progress bar and heap bar
	JUTProcBar::getManager()->setVisible(false);
	JUTProcBar::getManager()->setVisibleHeapBar(false);
}

/**
 * @note Address: 0x80164F24
 * @note Size: 0x80
 */
void BaseHIOSection::initHIO(Game::HIORootNode* node)
{
	if (node == nullptr) {
		mRootNode = new HIORootNode(this);
	} else {
		mRootNode = node;
	}

	sys->addGenNode(mRootNode);

	// Hide the process bar if it exists.
	if (JUTProcBar::getManager()) {
		JUTProcBar::getManager()->setVisible(false);
		JUTProcBar::getManager()->setVisibleHeapBar(false);
	}
}

/**
 * @note Address: 0x80164FA4
 * @note Size: 0x4
 */
void BaseHIOSection::createScreenRootNode() { }

/**
 * @note Address: 0x80164FA8
 * @note Size: 0x8
 */
bool BaseHIOSection::doUpdate() { return true; }

/**
 * @note Address: 0x80164FB0
 * @note Size: 0x24
 */
void BaseHIOSection::addGenNode(CNode* node) { mRootNode->add(node); }

/**
 * @note Address: 0x80164FD4
 * @note Size: 0x4
 */
void BaseHIOSection::refreshHIO() { }

/**
 * @note Address: 0x80164FD8
 * @note Size: 0x54
 */
HIORootNode::HIORootNode(Section* section)
    : CNode()
{
	mSection = section;
	setName("system");
}

} // namespace Game
