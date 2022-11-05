#include "JSystem/JKR/JKRHeap.h"
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
	m_currentSection = nullptr;
	_3C              = false;
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
		_34 = true;
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

	JKRExpHeap* expHeap  = JKRExpHeap::create(_1C->getFreeSize(), _1C, true);
	JKRHeap* currentHeap = expHeap->becomeCurrentHeap();

	m_currentSection = (Section*)setChildSection(expHeap);

	if (m_currentSection) {
		sys->heapStatusStart("ChildSection::init", nullptr);
		m_currentSection->init();

		sys->heapStatusEnd("ChildSection::init");
		sys->m_deltaTime = sys->m_fpsFactor / 60.0f;
		m_currentSection->run();
		m_currentSection->exit();

		delete m_currentSection;
		m_currentSection = nullptr;
	}

	expHeap->destroy();
	currentHeap->becomeCurrentHeap();
	JKRHeap::sCurrentHeap->getFreeSize();

	return (m_currentSection != 0);
}
