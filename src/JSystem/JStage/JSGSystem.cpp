#include "types.h"
#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"

namespace JStage {

/*
 * --INFO--
 * Address:	8009876C
 * Size:	000060
 */
TSystem::~TSystem() { }

/*
 * --INFO--
 * Address:	800987CC
 * Size:	000008
 */
int TSystem::JSGFGetType() const { return 1; }

/*
 * --INFO--
 * Address:	800987D4
 * Size:	000008
 */
int TSystem::JSGFindObject(TObject**, char const*, TEObject) const { return 1; }

/*
 * --INFO--
 * Address:	800987DC
 * Size:	000008
 */
int TSystem::JSGCreateObject(char const*, TEObject, u32) { return 0; }

/*
 * --INFO--
 * Address:	800987E4
 * Size:	000004
 */
void TSystem::JSGDestroyObject(TObject*) { }

/*
 * --INFO--
 * Address:	800987E8
 * Size:	000008
 */
int TSystem::JSGGetSystemData(u32) { return 0; }

/*
 * --INFO--
 * Address:	800987F0
 * Size:	000004
 */
void TSystem::JSGSetSystemData(u32, u32) { }
} // namespace JStage
