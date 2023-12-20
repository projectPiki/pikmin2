#include "types.h"
#include "JSystem/JStage/TObject.h"

namespace JStage {

/**
 * @note Address: 0x800988D4
 * @note Size: 0x48
 */
TObject::~TObject() { }

/**
 * @note Address: 0x8009891C
 * @note Size: 0x8
 */
char const* TObject::JSGGetName() const { return nullptr; }

/**
 * @note Address: 0x80098924
 * @note Size: 0x4
 */
void TObject::JSGUpdate() { }

/**
 * @note Address: 0x80098928
 * @note Size: 0x8
 */
u32 TObject::JSGGetFlag() const { return 0; }

/**
 * @note Address: 0x80098930
 * @note Size: 0x4
 */
void TObject::JSGSetFlag(u32) { }

/**
 * @note Address: 0x80098934
 * @note Size: 0x8
 */
void* TObject::JSGGetData(u32, void*, u32) const { return nullptr; }

/**
 * @note Address: 0x8009893C
 * @note Size: 0x4
 */
void TObject::JSGSetData(u32, void const*, u32) { }

/**
 * @note Address: 0x80098940
 * @note Size: 0x4
 */
void TObject::JSGGetParent(TObject**, u32*) const { }

/**
 * @note Address: 0x80098944
 * @note Size: 0x4
 */
void TObject::JSGSetParent(TObject*, u32) { }

/**
 * @note Address: 0x80098948
 * @note Size: 0x4
 */
void TObject::JSGSetRelation(bool, TObject*, u32) { }

/**
 * @note Address: 0x8009894C
 * @note Size: 0x8
 */
int TObject::JSGFindNodeID(const char*) const { return -1; }

/**
 * @note Address: 0x80098954
 * @note Size: 0x3C
 */
bool TObject::JSGGetNodeTransformation(u32, Mtx mtx) const
{
	mtx[0][0] = 0.0f;
	mtx[0][1] = 0.0f;
	mtx[0][2] = 0.0f;
	mtx[0][3] = 0.0f;
	mtx[1][0] = 0.0f;
	mtx[1][1] = 0.0f;
	mtx[1][2] = 0.0f;
	mtx[1][3] = 0.0f;
	mtx[2][0] = 0.0f;
	mtx[2][1] = 0.0f;
	mtx[2][2] = 0.0f;
	mtx[2][3] = 0.0f;
	return false;
}
} // namespace JStage
