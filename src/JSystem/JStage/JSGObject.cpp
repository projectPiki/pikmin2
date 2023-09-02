#include "types.h"
#include "JSystem/JStage/TObject.h"

namespace JStage {

/*
 * --INFO--
 * Address:	800988D4
 * Size:	000048
 */
TObject::~TObject() { }

/*
 * --INFO--
 * Address:	8009891C
 * Size:	000008
 */
char const* TObject::JSGGetName() const { return nullptr; }

/*
 * --INFO--
 * Address:	80098924
 * Size:	000004
 */
void TObject::JSGUpdate() { }

/*
 * --INFO--
 * Address:	80098928
 * Size:	000008
 */
u32 TObject::JSGGetFlag() const { return 0; }

/*
 * --INFO--
 * Address:	80098930
 * Size:	000004
 */
void TObject::JSGSetFlag(u32) { }

/*
 * --INFO--
 * Address:	80098934
 * Size:	000008
 */
void* TObject::JSGGetData(u32, void*, u32) const { return nullptr; }

/*
 * --INFO--
 * Address:	8009893C
 * Size:	000004
 */
void TObject::JSGSetData(u32, void const*, u32) { }

/*
 * --INFO--
 * Address:	80098940
 * Size:	000004
 */
void TObject::JSGGetParent(TObject**, u32*) const { }

/*
 * --INFO--
 * Address:	80098944
 * Size:	000004
 */
void TObject::JSGSetParent(TObject*, u32) { }

/*
 * --INFO--
 * Address:	80098948
 * Size:	000004
 */
void TObject::JSGSetRelation(bool, TObject*, u32) { }

/*
 * --INFO--
 * Address:	8009894C
 * Size:	000008
 */
int TObject::JSGFindNodeID(const char*) const { return -1; }

/*
 * --INFO--
 * Address:	80098954
 * Size:	00003C
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
