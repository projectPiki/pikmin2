#include "types.h"
#include "JStage/TObject.h"
#include "JStage/TSystem.h"

namespace JStage {

/*
 * --INFO--
 * Address:	8009876C
 * Size:	000060
 */
TSystem::~TSystem(void) { }

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
int TSystem::JSGCreateObject(char const*, TEObject, unsigned long) { return 0; }

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
int TSystem::JSGGetSystemData(unsigned long) { return 0; }

/*
 * --INFO--
 * Address:	800987F0
 * Size:	000004
 */
void TSystem::JSGSetSystemData(unsigned long, unsigned long) { }
} // namespace JStage
