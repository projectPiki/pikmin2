#ifndef _PSSYSTEM_ARCMGR_H
#define _PSSYSTEM_ARCMGR_H

#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

namespace PSSystem {

template <typename T> struct ArcMgr : public JKRDisposer {
	virtual ~ArcMgr(); // _08

	static T* sInstance;

	// _00      = VTABLE
	// _04-_18  = JKRDisposer
	JKRArchive* m_archive; // _18
};

} // namespace PSSystem

#endif
