#include "stdio.h"
#include "P2JME/TReference.h"

namespace P2JME {

/**
 * @note Address: 0x8043DB18
 * @note Size: 0x74
 */
char* TReference::do_word(u32 arg) const
{
	static u8 frm = 34;
	static char str[256];

	frm++;

	if (arg == 0) {
		return "テスト";
	}
	sprintf(str, "%d", frm);
	return str;
}

} // namespace P2JME
