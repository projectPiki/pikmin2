#ifndef _EBI_CARDEREADER_TMGR_H
#define _EBI_CARDEREADER_TMGR_H

namespace ebi {
namespace CardEReader {
	struct TMgr {
		virtual ~TMgr();        // _00
		virtual void _04() = 0; // _04

		// _00 VTBL
	};
} // namespace CardEReader
} // namespace ebi

#endif
