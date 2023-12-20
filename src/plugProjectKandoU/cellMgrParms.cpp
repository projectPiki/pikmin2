#include "types.h"
#include "Dolphin/os.h"
#include "CellMgrParms.h"

CellMgrParms* CellMgrParms::mInstance;

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* format, ...) { OSReport(format, "CellMgrParms"); }

/**
 * @note Address: N/A
 * @note Size: 0x15C
 */
CellMgrParms::CellMgrParms()
    : Parameters(nullptr, "CellMgr")
    , JKRDisposer()
    , mCellParms(this)
{
}

/**
 * @note Address: 0x8022E188
 * @note Size: 0x74
 */
CellMgrParms::~CellMgrParms() { mInstance = nullptr; }

/**
 * @note Address: 0x8022E1FC
 * @note Size: 0x168
 */
void CellMgrParms::globalInstance()
{
	if (mInstance == nullptr) {
		mInstance = new CellMgrParms();
	}
}
