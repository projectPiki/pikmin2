#include "types.h"
#include "JSystem/JStage/TObject.h"
#include "JSystem/JStage/TSystem.h"

namespace JStage {

/**
 * @note Address: 0x8009876C
 * @note Size: 0x60
 */
TSystem::~TSystem() { }

/**
 * @note Address: 0x800987CC
 * @note Size: 0x8
 */
int TSystem::JSGFGetType() const { return 1; }

/**
 * @note Address: 0x800987D4
 * @note Size: 0x8
 */
int TSystem::JSGFindObject(TObject**, char const*, TEObject) const { return 1; }

/**
 * @note Address: 0x800987DC
 * @note Size: 0x8
 */
int TSystem::JSGCreateObject(char const*, TEObject, u32) { return 0; }

/**
 * @note Address: 0x800987E4
 * @note Size: 0x4
 */
void TSystem::JSGDestroyObject(TObject*) { }

/**
 * @note Address: 0x800987E8
 * @note Size: 0x8
 */
int TSystem::JSGGetSystemData(u32) { return 0; }

/**
 * @note Address: 0x800987F0
 * @note Size: 0x4
 */
void TSystem::JSGSetSystemData(u32, u32) { }
} // namespace JStage
