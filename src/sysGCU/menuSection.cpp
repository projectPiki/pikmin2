#include "JSystem/JKernel/JKRHeap.h"
#include "RootMenuSection.h"
#include "System.h"

/*
 * --INFO--
 * Address:	804245CC
 * Size:	000048
 */
MenuSection::MenuSection(JFWDisplay* display, JKRHeap* heap, bool b)
    : Section(display, heap, b)
{
	mCurrentSection = nullptr;
	_3C             = false;
}

/*
 * --INFO--
 * Address:	80424614
 * Size:	000054
 */
void MenuSection::run()
{
	_3C = false;
	do {
		mIsMainActive = true;
		MenuSection::runChildSection();
	} while (!_3C);
}

/*
 * --INFO--
 * Address:	80424668
 * Size:	000148
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
		sys->mDeltaTime = sys->mFpsFactor / 60.0f;
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
