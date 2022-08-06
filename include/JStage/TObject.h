#ifndef _JSTAGE_TOBJECT_H
#define _JSTAGE_TOBJECT_H
#include "types.h"
/*
    __vt__Q26JStage7TObject:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte JSGGetName__Q26JStage7TObjectCFv
    .4byte JSGUpdate__Q26JStage7TObjectFv
    .4byte JSGGetFlag__Q26JStage7TObjectCFv
    .4byte JSGSetFlag__Q26JStage7TObjectFUl
    .4byte JSGGetData__Q26JStage7TObjectCFUlPvUl
    .4byte JSGSetData__Q26JStage7TObjectFUlPCvUl
    .4byte JSGGetParent__Q26JStage7TObjectCFPPQ26JStage7TObjectPUl
    .4byte JSGSetParent__Q26JStage7TObjectFPQ26JStage7TObjectUl
    .4byte JSGSetRelation__Q26JStage7TObjectFbPQ26JStage7TObjectUl
    .4byte JSGFindNodeID__Q26JStage7TObjectCFPCc
    .4byte JSGGetNodeTransformation__Q26JStage7TObjectCFUlPA4_f
*/

namespace JStage {
struct TObject {
	virtual ~TObject()              = 0;                            // _08
	virtual int JSGFGetType() const = 0;                            // _0C
	virtual char* JSGGetName() const;                               // _10
	virtual void JSGUpdate();                                       // _14
	virtual int JSGGetFlag() const;                                 // _18
	virtual void JSGSetFlag(u32);                                   // _1C
	virtual void* JSGGetData(u32, void*, u32) const;                // _20
	virtual void JSGSetData(u32, const void*, u32);                 // _24
	virtual void JSGGetParent(TObject**, u32*) const;               // _28
	virtual void JSGSetParent(TObject*, u32);                       // _2C
	virtual void JSGSetRelation(bool, TObject*, u32);               // _30
	virtual int JSGFindNodeID(const char*) const;                   // _34
	virtual bool JSGGetNodeTransformation(u32, float (*)[4]) const; // _38

	// _00 VTBL
};
} // namespace JStage

#endif
