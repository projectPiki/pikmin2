#include "kh/khDayEndResult.h"

namespace kh {
namespace Screen {
/*
 * --INFO--
 * Address:	80410FE0
 * Size:	00009C
 */
void MailSaveData::clear()
{
	for (int i = 0; i < 0x10; i++) {
		mPastLogs[i] = 0;
	}

	for (int i = 0; i < 0x14; i++) {
		mHistory[i] = -1;
	}
}

/*
 * --INFO--
 * Address:	8041107C
 * Size:	000088
 */
void MailSaveData::read(Stream& stream)
{
	for (u32 i = 0; i < 0x10; i++) {
		mPastLogs[i] = stream.readByte();
	}

	for (s32 i = 0; i < 0x14; i++) {
		mHistory[i] = stream.readByte();
	}
}

/*
 * --INFO--
 * Address:	80411104
 * Size:	000088
 */
void MailSaveData::write(Stream& stream)
{
	for (u32 i = 0; i < 0x10; i++) {
		stream.writeByte(mPastLogs[i]);
	}

	for (s32 i = 0; i < 0x14; i++) {
		stream.writeByte(mHistory[i]);
	}
}

/*
 * --INFO--
 * Address:	8041118C
 * Size:	000028
 */
void MailSaveData::set_history(s8 history)
{
	for (int i = 19; i; i--) {
		mPastLogs[i + 16] = mPastLogs[i + 15];
	}
	mHistory[0] = history;
}
} // namespace Screen
} // namespace kh
