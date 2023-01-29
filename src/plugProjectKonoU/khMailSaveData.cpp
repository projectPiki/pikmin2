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
		m_pastLogs[i] = 0;
	}

	for (int i = 0; i < 0x14; i++) {
		m_history[i] = -1;
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
		m_pastLogs[i] = stream.readByte();
	}

	for (s32 i = 0; i < 0x14; i++) {
		m_history[i] = stream.readByte();
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
		stream.writeByte(m_pastLogs[i]);
	}

	for (s32 i = 0; i < 0x14; i++) {
		stream.writeByte(m_history[i]);
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
		m_pastLogs[i + 16] = m_pastLogs[i + 15];
	}
	m_history[0] = history;
}
} // namespace Screen
} // namespace kh
