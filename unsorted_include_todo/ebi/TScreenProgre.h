#ifndef _EBI_TSCREENPROGRE_H
#define _EBI_TSCREENPROGRE_H

namespace ebi {
struct TScreenProgre {
	virtual void setArchive(JKRArchive*); // _00
	virtual void _04() = 0;               // _04

	// _00 VTBL
};
} // namespace ebi

#endif
