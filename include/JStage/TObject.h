#ifndef _JSTAGE_TOBJECT_H
#define _JSTAGE_TOBJECT_H

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
	virtual void _00()              = 0;                                      // _00
	virtual u32 JSGFGetType() const = 0;                                      // _04
	virtual char* JSGGetName() const;                                         // _08
	virtual void JSGUpdate();                                                 // _0C
	virtual u32 JSGGetFlag() const;                                           // _10
	virtual void JSGSetFlag(unsigned long);                                   // _14
	virtual void* JSGGetData(unsigned long, void*, unsigned long) const;      // _18
	virtual void JSGSetData(unsigned long, const void*, unsigned long);       // _1C
	virtual void JSGGetParent(TObject**, unsigned long*) const;               // _20
	virtual void JSGSetParent(TObject*, unsigned long);                       // _24
	virtual void JSGSetRelation(bool, TObject*, unsigned long);               // _28
	virtual int JSGFindNodeID(const char*) const;                             // _2C
	virtual bool JSGGetNodeTransformation(unsigned long, float (*)[4]) const; // _30

	~TObject();

	// _00 VTBL
};
} // namespace JStage

#endif
