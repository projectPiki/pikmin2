#include "ebi/screen/TScreenBase.h"

namespace ebi {
namespace screen {
	/*
	 * --INFO--
	 * Address:	803D3850
	 * Size:	00003C
	 */
	void TScreenBase::setArchive(JKRArchive* new_archive)
	{
		if (this->pArchive == nullptr) {
			this->pArchive = new_archive;
			doSetArchive(new_archive);
		}
		return;
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
		bool is_zero;

		is_zero = (this->_08 == 0);
		if (is_zero) {
			doOpenScreen(open_screen);
			is_zero   = 1;
			this->_08 = 1;
			return is_zero;
		} else {
			return 0;
		}
		return is_zero;
	}

	/*
	 * --INFO--
	 * Address:	803D38E8
	 * Size:	000004
	 */
	void TScreenBase::doOpenScreen(ArgOpen*)
	{
		/*
		.loc_0x0:
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803D38EC
	 * Size:	000058
	 */
	uint TScreenBase::closeScreen(ArgClose* close_screen)
	{

		uint is_zero;

		is_zero = (this->_08 == 2);
		if (is_zero) {
			doCloseScreen(close_screen);
			is_zero   = 1;
			this->_08 = 3;
			return is_zero;
		} else {
			return 0;
		}
		return is_zero;
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
		this->_08 = 0;
	}

	/*
	 * --INFO--
	 * Address:	803D3988
	 * Size:	000010
	 */
	uchar TScreenBase::isFinishScreen(void) { return (this->_08 == 0); }

	/*
	 * --INFO--
	 * Address:	........
	 * Size:	000014
	 */
	// unused function
	uchar TScreenBase::isOpenScreen(void) { return (this->_08 == 1); }

	/*
	 * --INFO--
	 * Address:	803D3998
	 * Size:	000014
	 */
	uchar TScreenBase::isWaitScreen(void) { return (this->_08 == 2); }

	/*
	 * --INFO--
	 * Address:	803D39AC
	 * Size:	000014
	 */
	uchar TScreenBase::isCloseScreen(void) { return (this->_08 == 3); }

	/*
	 * --INFO--
	 * Address:	803D39C0
	 * Size:	0000EC
	 */
	uchar TScreenBase::update(void)
	{
		int screen_state;
		screen_state = this->_08;
		uchar update_state;

		if (screen_state == 2) {
			update_state = doUpdateStateWait();
			if (update_state == 0) {
				update_state = closeScreen(nullptr);
			}
		}else if (screen_state < 2) {
			// update_state = this;
			if ((screen_state != 0) && (-1 < screen_state)) {
				update_state = doUpdateStateOpen();
				if (update_state == 0) {
					doInitWaitState();
					this->_08 = 2;
				}
			}
		} else {
			if ((screen_state < 4)
			    && (update_state = doUpdateStateClose(), (update_state == 0))) {
				killScreen();
			}
		}
		return update_state;
	}

	/*
	 * --INFO--
	 * Address:	803D3AAC
	 * Size:	000008
	 */
	bool TScreenBase::doUpdateStateClose(void)
	{
		return true;
	}

	/*
	 * --INFO--
	 * Address:	803D3AB4
	 * Size:	000008
	 */
	bool TScreenBase::doUpdateStateWait(void)
	{
		return true;
	}

	/*
	 * --INFO--
	 * Address:	803D3ABC
	 * Size:	000004
	 */
	void TScreenBase::doInitWaitState(void)
	{
	}

	/*
	 * --INFO--
	 * Address:	803D3AC0
	 * Size:	000008
	 */
	bool TScreenBase::doUpdateStateOpen(void)
	{
		return true;
	}

	/*
	 * --INFO--
	 * Address:	803D3AC8
	 * Size:	000038
	 */
	void TScreenBase::draw(void)
	{
		if (this->_08 != 0) {
			doDraw();
		}
	}

	/*
	 * --INFO--
	 * Address:	803D3B00
	 * Size:	000004
	 */
	void TScreenBase::doDraw(void)
	{
	}

	/*
	 * --INFO--
	 * Address:	803D3B04
	 * Size:	00000C
	 */
	char* TScreenBase::getName(void)
	{
		return "NoNameScreen";
	}
} // namespace screen
} // namespace ebi