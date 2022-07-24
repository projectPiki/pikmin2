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
	virtual ~TextDataBase(); // _08
	virtual void _0C() = 0;  // _0C

	TextDataBase();
	void load(const char*, JKRDvdRipper::EAllocDirection);
	void onlyLoad(const char*, JKRDvdRipper::EAllocDirection);
};
} // namespace PSSystem

#endif
