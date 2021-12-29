#ifndef _EBI_CARDEREADER_TMGR_H
#define _EBI_CARDEREADER_TMGR_H

/*
    __vt__Q33ebi11CardEReader4TMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q33ebi11CardEReader4TMgrFv
    .4byte 0
*/

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
