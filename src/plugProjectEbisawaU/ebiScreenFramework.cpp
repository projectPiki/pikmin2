#include "ebi/Screen/TScreenBase.h"

namespace ebi {
namespace Screen {
/*
 * --INFO--
 * Address:	803D3850
 * Size:	00003C
 */
void TScreenBase::setArchive(JKRArchive* newArchive)
{
	if (m_archive == nullptr) {
		m_archive = newArchive;
		doSetArchive(newArchive);
	}
}

/*
 * --INFO--
 * Address:	803D388C
 * Size:	000004
 */
void TScreenBase::doSetArchive(JKRArchive*) { }

/*
 * --INFO--
 * Address:	803D3890
 * Size:	000058
 */
bool TScreenBase::openScreen(ArgOpen* arg)
{
	if (m_state == TSB_US_Finish) {
		doOpenScreen(arg);
		m_state = TSB_US_Open;
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	803D38E8
 * Size:	000004
 */
void TScreenBase::doOpenScreen(ArgOpen*) { }

/*
 * --INFO--
 * Address:	803D38EC
 * Size:	000058
 */
bool TScreenBase::closeScreen(ArgClose* arg)
{
	if (m_state == TSB_US_Wait) {
		doCloseScreen(arg);
		m_state = TSB_US_Close;
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	803D3944
 * Size:	000004
 */
void TScreenBase::doCloseScreen(ArgClose*) { }

/*
 * --INFO--
 * Address:	803D3948
 * Size:	000040
 */
void TScreenBase::killScreen(void)
{
	doKillScreen();
	m_state = TSB_US_Finish;
}

/*
 * --INFO--
 * Address:	803D3988
 * Size:	000010
 */
u8 TScreenBase::isFinishScreen(void) { return m_state == TSB_US_Finish; }

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// unused function
u8 TScreenBase::isOpenScreen(void) { return m_state == TSB_US_Open; }

/*
 * --INFO--
 * Address:	803D3998
 * Size:	000014
 */
u8 TScreenBase::isWaitScreen(void) { return m_state == TSB_US_Wait; }

/*
 * --INFO--
 * Address:	803D39AC
 * Size:	000014
 */
u8 TScreenBase::isCloseScreen(void) { return m_state == TSB_US_Close; }

/*
 * --INFO--
 * Address:	803D39C0
 * Size:	0000EC
 */
void TScreenBase::update(void)
{
	switch (m_state) {
	case TSB_US_Open:
		if (doUpdateStateOpen()) {
			doInitWaitState();
			m_state = TSB_US_Wait;
		}
		break;
	case TSB_US_Wait:
		if (doUpdateStateWait()) {
			closeScreen(nullptr);
		}
		break;
	case TSB_US_Close:
		if (doUpdateStateClose()) {
			killScreen();
		}
		break;
	case TSB_US_Finish:
	default:
		break;
	}
}

/*
 * --INFO--
 * Address:	803D3AAC
 * Size:	000008
 */
bool TScreenBase::doUpdateStateClose(void) { return true; }

/*
 * --INFO--
 * Address:	803D3AB4
 * Size:	000008
 */
bool TScreenBase::doUpdateStateWait(void) { return true; }

/*
 * --INFO--
 * Address:	803D3ABC
 * Size:	000004
 */
void TScreenBase::doInitWaitState(void) { }

/*
 * --INFO--
 * Address:	803D3AC0
 * Size:	000008
 */
bool TScreenBase::doUpdateStateOpen(void) { return true; }

/*
 * --INFO--
 * Address:	803D3AC8
 * Size:	000038
 */
void TScreenBase::draw(void)
{
	if (m_state != TSB_US_Finish) {
		doDraw();
	}
}

/*
 * --INFO--
 * Address:	803D3B00
 * Size:	000004
 */
void TScreenBase::doDraw(void) { }

/*
 * --INFO--
 * Address:	803D3B04
 * Size:	00000C
 */
char* TScreenBase::getName(void) { return "NoNameScreen"; }
} // namespace Screen
} // namespace ebi
