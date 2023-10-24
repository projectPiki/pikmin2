#include "stdio.h"
#include "P2JME/TReference.h"

namespace P2JME {

/*
 * --INFO--
 * Address:	8043DB18
 * Size:	000074
 */
char* TReference::do_word(u32 arg) const
{
	static u8 frm = 34;
	static char str[256];

	frm++;

	if (arg == 0) {
		return "ƒeƒXƒg";
	}
	sprintf(str, "%d", frm);
	return str;
}

} // namespace P2JME
