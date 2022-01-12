#ifndef _JSYSTEM_JUT_JUTNAMEPAD_H
#define _JSYSTEM_JUT_JUTNAMEPAD_H

#include "types.h"

// Size: 0x10

struct ResNTAB {
	u16 mEntryNum;
	u16 mPad0;
	struct Entry {
		u16 mKeyCode;
		u16 mOffs;
	} mEntries[1];

	inline const char* getName(u32 index) const { return ((const char*)mEntries) + mEntries[index].mOffs - 4; }
};

class JUTNameTab {
public:
	JUTNameTab();
	JUTNameTab(const ResNTAB* pNameTable);
	virtual ~JUTNameTab() { }

	void setResource(const ResNTAB* pNameTable);
	s32 getIndex(const char*) const;
	const char* getName(u16 index) const;
	u16 calcKeyCode(const char* pName) const;
	const ResNTAB* getResNameTable() const { return mpNameTable; }

private:
	// _00 VTBL
	const ResNTAB* mpNameTable; // _04
	const char* mpStrData;      // _08
	u16 mNameNum;               // _0C
};

#endif /* JUTNAMETAB_H */
