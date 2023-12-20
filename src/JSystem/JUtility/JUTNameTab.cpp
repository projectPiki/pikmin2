#include "string.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "types.h"

/**
 * @note Address: 0x8002ECCC
 * @note Size: 0x40
 */
JUTNameTab::JUTNameTab() { setResource(nullptr); }

/**
 * @note Address: 0x8002ED0C
 * @note Size: 0x3C
 */
JUTNameTab::JUTNameTab(const ResNTAB* pNameTable) { setResource(pNameTable); }

/**
 * @note Address: 0x8002ED48
 * @note Size: 0x3C
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

/**
 * @note Address: 0x8002ED84
 * @note Size: 0x98
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

/**
 * @note Address: 0x8002EE1C
 * @note Size: 0x30
 */
const char* JUTNameTab::getName(u16 index) const
{
	if (index < mNameNum)
		return mNameTable->getName(index);
	return nullptr;
}

/**
 * @note Address: 0x8002EE4C
 * @note Size: 0x30
 */
u16 JUTNameTab::calcKeyCode(const char* pName) const
{
	u32 keyCode = 0;
	while (*pName)
		keyCode = (keyCode * 3) + *pName++;
	return keyCode;
}
