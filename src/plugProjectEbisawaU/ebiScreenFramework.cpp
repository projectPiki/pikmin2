#include "ebi/screen/TScreenBase.h"

namespace ebi {
namespace Screen {
	/*
	 * --INFO--
	 * Address:	803D3850
	 * Size:	00003C
	 */
	void TScreenBase::setArchive(JKRArchive* new_archive)
	{
		if (this->m_archive == nullptr) {
			this->m_archive = new_archive;
			doSetArchive(new_archive);
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
	bool TScreenBase::openScreen(ArgOpen* open_screen)
	{
		if (this->m_state == US_Finish) {
			doOpenScreen(open_screen);
			this->m_state = US_Open;
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
	bool TScreenBase::closeScreen(ArgClose* close_screen)
	{
		if (this->m_state == US_Wait) {
			doCloseScreen(close_screen);
			this->m_state = US_Close;
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
		this->m_state = US_Finish;
	}

	/*
	 * --INFO--
	 * Address:	803D3988
	 * Size:	000010
	 */
	u8 TScreenBase::isFinishScreen(void) { return this->m_state == US_Finish; }

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000014
	 */
	// unused function
	u8 TScreenBase::isOpenScreen(void) { return this->m_state == US_Open; }

	/*
	 * --INFO--
	 * Address:	803D3998
	 * Size:	000014
	 */
	u8 TScreenBase::isWaitScreen(void) { return this->m_state == US_Wait; }

	/*
	 * --INFO--
	 * Address:	803D39AC
	 * Size:	000014
	 */
	u8 TScreenBase::isCloseScreen(void) { return this->m_state == US_Close; }

	/*
	 * --INFO--
	 * Address:	803D39C0
	 * Size:	0000EC
	 */
	void TScreenBase::update(void)
	{
		switch (this->m_state) {
		case US_Open:
			if (doUpdateStateOpen()) {
				doInitWaitState();
				this->m_state = US_Wait;
			}
			break;
		case US_Wait:
			if (doUpdateStateWait()) {
				closeScreen(nullptr);
			}
			break;
		case US_Close:
			if (doUpdateStateClose()) {
				killScreen();
			}
			break;
		case US_Finish:
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
		if (this->m_state != US_Finish) {
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
