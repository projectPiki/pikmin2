#ifndef _PSGAME_CONDUCTORLIST_H
#define _PSGAME_CONDUCTORLIST_H

#include "types.h"
#include "stream.h"

namespace PSGame {
// as far as I can tell, should inherit one thing, then inherit
// PSSystem::SingletonBase<ConductorList> which is at _1C
struct ConductorList {
	struct CaveInfo {
		u8 m_fileNameCount; // _00, num file names in _04
		char** m_fileNames; // _04, array of file names
	};

	virtual ~ConductorList();   // _08 (weak)
	virtual void read(Stream&); // _0C
	// dtor thunk at _18, so something is getting smushed together here

	void getSeqAndWaveFromConductor(const char*, u8*, char**);

	// _00 = VTBL
	u8 _04[0x1C];          // _04, probably from inheritances?
	u8 m_caveCount;        // _20
	CaveInfo* m_caveInfos; // _24
};
} // namespace PSGame

#endif
