#ifndef _PSSYSTEM_TEXTDATABASE_H
#define _PSSYSTEM_TEXTDATABASE_H

namespace PSSystem {
struct TextDataBase {
	virtual ~TextDataBase(); // _00
	virtual void _04() = 0;  // _04

	// _00 VTBL
};
} // namespace PSSystem

#endif
