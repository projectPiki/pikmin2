#ifndef _EBI_TSCREENPROGRE_H
#define _EBI_TSCREENPROGRE_H

/*
    __vt__Q23ebi13TScreenProgre:
    .4byte 0
    .4byte 0
    .4byte setArchive__Q23ebi13TScreenProgreFP10JKRArchive
    .4byte 0
*/

namespace ebi {
struct TScreenProgre {
	virtual void setArchive(JKRArchive*); // _00
	virtual void _04() = 0;               // _04

	// _00 VTBL
};
} // namespace ebi

#endif
