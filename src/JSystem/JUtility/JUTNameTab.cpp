#include "Dolphin/string.h"
#include "JSystem/JUT/JUTNameTab.h"
#include "types.h"

/*
 * --INFO--
 * Address:	8002ECCC
 * Size:	000040
 */
JUTNameTab::JUTNameTab() { setResource(nullptr); }

/*
 * --INFO--
 * Address:	8002ED0C
 * Size:	00003C
 */
JUTNameTab::JUTNameTab(const ResNTAB* pNameTable) { setResource(pNameTable); }

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
// JUTNameTab::JUTNameTab(const JUTNameTab&)
// {
// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8002ED48
 * Size:	00003C
 */
void JUTNameTab::setResource(const ResNTAB* pNameTable)
{
	mpNameTable = pNameTable;

	if (pNameTable) {
		mNameNum  = pNameTable->mEntryNum;
		mpStrData = (const char*)(pNameTable->mEntries + mNameNum);
	} else {
		mNameNum  = 0;
		mpStrData = 0;
	}
}

/*
 * --INFO--
 * Address:	8002ED84
 * Size:	000098
 */
s32 JUTNameTab::getIndex(const char* pName) const
{
	const ResNTAB::Entry* pEntry = mpNameTable->mEntries;
	u16 keyCode                  = calcKeyCode(pName);

	for (u16 i = 0; i < mNameNum; pEntry++, i++)
		if (pEntry->mKeyCode == keyCode && strcmp((mpNameTable->mEntries[i].mOffs + ((const char*)mpNameTable)), pName) == 0)
			return i;

	return -1;
}

/*
 * --INFO--
 * Address:	8002EE1C
 * Size:	000030
 */
const char* JUTNameTab::getName(u16 index) const
{
	if (index < mNameNum)
		return mpNameTable->getName(index);
	return nullptr;
}

/*
 * --INFO--
 * Address:	8002EE4C
 * Size:	000030
 */
u16 JUTNameTab::calcKeyCode(const char* pName) const
{
	u32 keyCode = 0;
	while (*pName)
		keyCode = (keyCode * 3) + *pName++;
	return keyCode;
}
