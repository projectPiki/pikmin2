#include "JSystem/JKernel/JKRHeap.h"
#include "RootMenuSection.h"
#include "System.h"

/**
 * @note Address: 0x804245CC
 * @note Size: 0x48
 */
MenuSection::MenuSection(JFWDisplay* display, JKRHeap* heap, bool b)
    : Section(display, heap, b)
{
	mCurrentSection = nullptr;
	mIsDone         = false;
}

/**
 * @note Address: 0x80424614
 * @note Size: 0x54
 */
void MenuSection::run()
{
	mIsDone = false;
	do {
		mIsMainActive = true;
		MenuSection::runChildSection();
	} while (!mIsDone);
}

/**
 * @note Address: 0x80424668
 * @note Size: 0x148
 */
bool MenuSection::runChildSection()
{
	JKRHeap::sCurrentHeap->getFreeSize();

	JKRExpHeap* expHeap  = JKRExpHeap::create(mDisplayHeap->getFreeSize(), mDisplayHeap, true);
	JKRHeap* currentHeap = expHeap->becomeCurrentHeap();

	mCurrentSection = (Section*)setChildSection(expHeap);

	if (mCurrentSection) {
		sys->heapStatusStart("ChildSection::init", nullptr);
		mCurrentSection->init();

		sys->heapStatusEnd("ChildSection::init");
		sys->mDeltaTime = sys->mFrameRate / 60.0f;
		mCurrentSection->run();
		mCurrentSection->exit();

		delete mCurrentSection;
		mCurrentSection = nullptr;
	}

	expHeap->destroy();
	currentHeap->becomeCurrentHeap();
	JKRHeap::sCurrentHeap->getFreeSize();

	return (mCurrentSection != 0);
}
