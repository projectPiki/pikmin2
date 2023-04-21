#include "string.h"
#include "JSystem/JUtility/JUTNameTab.h"
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
 * Address:	8002ED48
 * Size:	00003C
 */
void JUTNameTab::setResource(const ResNTAB* pNameTable)
{
	mNameTable = pNameTable;

	if (pNameTable) {
		mNameNum = pNameTable->mEntryNum;
		mStrData = (const char*)(pNameTable->mEntries + mNameNum);
	} else {
		mNameNum = 0;
		mStrData = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8002ED84
 * Size:	000098
 */
s32 JUTNameTab::getIndex(const char* pName) const
{
	const ResNTAB::Entry* pEntry = mNameTable->mEntries;
	u16 keyCode                  = calcKeyCode(pName);

	for (u16 i = 0; i < mNameNum; pEntry++, i++)
		if (pEntry->mKeyCode == keyCode && strcmp((mNameTable->mEntries[i].mOffs + ((const char*)mNameTable)), pName) == 0)
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
		return mNameTable->getName(index);
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
