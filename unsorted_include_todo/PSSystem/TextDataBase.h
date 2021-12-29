#ifndef _PSSYSTEM_TEXTDATABASE_H
#define _PSSYSTEM_TEXTDATABASE_H

/*
    __vt__Q28PSSystem12TextDataBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem12TextDataBaseFv
    .4byte 0
*/

namespace PSSystem {
struct TextDataBase {
	virtual ~TextDataBase(); // _00
	virtual void _04() = 0;  // _04

	// _00 VTBL
};
} // namespace PSSystem

#endif
