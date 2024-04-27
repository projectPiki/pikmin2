#include "kh/khDayEndResult.h"

namespace kh {
namespace Screen {
/**
 * @note Address: 0x80410FE0
 * @note Size: 0x9C
 */
void MailSaveData::clear()
{
	for (int i = 0; i < 16; i++) {
		mPastLogs.byteView[i] = 0;
	}

	for (int i = 0; i < 20; i++) {
		mHistory.byteView[i] = -1;
	}
}

/**
 * @note Address: 0x8041107C
 * @note Size: 0x88
 */
void MailSaveData::read(Stream& stream)
{
	for (u32 i = 0; i < 16; i++) {
		mPastLogs.byteView[i] = stream.readByte();
	}

	for (s32 i = 0; i < 20; i++) {
		mHistory.byteView[i] = stream.readByte();
	}
}

/**
 * @note Address: 0x80411104
 * @note Size: 0x88
 */
void MailSaveData::write(Stream& stream)
{
	for (u32 i = 0; i < 0x10; i++) {
		stream.writeByte(mPastLogs.byteView[i]);
	}

	for (s32 i = 0; i < 0x14; i++) {
		stream.writeByte(mHistory.byteView[i]);
	}
}

/**
 * @note Address: 0x8041118C
 * @note Size: 0x28
 */
void MailSaveData::set_history(s8 history)
{
	for (int i = 19; i; i--) {
		mPastLogs.byteView[i + 16] = mPastLogs.byteView[i + 15];
	}
	mHistory.byteView[0] = history;
}
} // namespace Screen
} // namespace kh
