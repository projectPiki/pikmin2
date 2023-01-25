#include "types.h"
#include "Dolphin/os.h"
#include "CellMgrParms.h"

CellMgrParms* CellMgrParms::mInstance;

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
static void _Print(char* format, ...) { OSReport(format, "CellMgrParms"); }

/*
 * --INFO--
 * Address:	........
 * Size:	00015C
 */
CellMgrParms::CellMgrParms()
    : Parameters(nullptr, "CellMgr")
    , JKRDisposer()
    , mCellParms(this)
{
}

/*
 * --INFO--
 * Address:	8022E188
 * Size:	000074
 */
CellMgrParms::~CellMgrParms() { mInstance = nullptr; }

/*
 * --INFO--
 * Address:	8022E1FC
 * Size:	000168
 */
void CellMgrParms::globalInstance()
{
	if (mInstance == nullptr) {
		mInstance = new CellMgrParms();
	}
}
