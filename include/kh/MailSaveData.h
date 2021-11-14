#ifndef _KH_MAILSAVEDATA_H
#define _KH_MAILSAVEDATA_H

#include "types.h"

struct Stream;

namespace kh {
namespace Screen {
	struct MailSaveData {
		void clear();
		void read(Stream&);
		void write(Stream&);
		void set_history(s8);

		u8 _00[0x10]; // _00
		s8 _10[0x14]; // _10
	};
} // namespace Screen
} // namespace kh

#endif
