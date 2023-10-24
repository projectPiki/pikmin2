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

/*
 * --INFO--
 * Address:	80164BF0
 * Size:	0000C0
 */
BaseHIOSection::BaseHIOSection(JKRHeap* heap)
    : Section(nullptr, heap, false)
{
	System::assert_fragmentation("BaseHIOSection");
	mRootNode         = nullptr;
	u32 freeSize      = JKRHeap::sCurrentHeap->getFreeSize();
	u32 totalFreeSize = JKRHeap::sCurrentHeap->getTotalFreeSize();

	JUT_ASSERTLINE(314, freeSize == totalFreeSize, "fragmentation occurred : after sound\n");
	mPlayer4Controller = new Controller(Controller::PORT_3);
}

/*
 * --INFO--
 * Address:	80164CB0
 * Size:	0000C4
 */
BaseHIOSection::~BaseHIOSection()
{
	if (mRootNode) {
		mRootNode->del();
		delete mRootNode;
	}

	mRootNode = nullptr;

	delete mPlayer4Controller;
	mPlayer4Controller = nullptr;
}

/*
 * --INFO--
 * Address:	80164DD4
 * Size:	000150
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

/*
 * --INFO--
 * Address:	80164F24
 * Size:	000080
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

/*
 * --INFO--
 * Address:	80164FA4
 * Size:	000004
 */
void BaseHIOSection::createScreenRootNode() { }

/*
 * --INFO--
 * Address:	80164FA8
 * Size:	000008
 */
bool BaseHIOSection::doUpdate() { return true; }

/*
 * --INFO--
 * Address:	80164FB0
 * Size:	000024
 */
void BaseHIOSection::addGenNode(CNode* node) { mRootNode->add(node); }

/*
 * --INFO--
 * Address:	80164FD4
 * Size:	000004
 */
void BaseHIOSection::refreshHIO() { }

/*
 * --INFO--
 * Address:	80164FD8
 * Size:	000054
 */
HIORootNode::HIORootNode(Section* section)
    : CNode()
{
	mSection = section;
	setName("system");
}

} // namespace Game
