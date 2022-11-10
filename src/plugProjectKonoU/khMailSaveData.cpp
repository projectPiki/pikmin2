#include "kh/DayEndResult.h"
#include "types.h"
#include "stream.h"

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
		_00[i] = 0;
	}

	for (int i = 0; i < 0x14; i++) {
		_10[i] = -1;
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
		_00[i] = stream.readByte();
	}

	for (s32 i = 0; i < 0x14; i++) {
		_10[i] = stream.readByte();
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
		stream.writeByte(_00[i]);
	}

	for (s32 i = 0; i < 0x14; i++) {
		stream.writeByte(_10[i]);
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
		_00[i + 16] = _00[i + 15];
	}
	_10[0] = history;
}
} // namespace Screen
} // namespace kh
