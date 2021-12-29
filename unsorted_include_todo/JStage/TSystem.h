#ifndef _JSTAGE_TSYSTEM_H
#define _JSTAGE_TSYSTEM_H

/*
    __vt__Q26JStage7TSystem:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte JSGFGetType__Q26JStage7TSystemCFv
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
    .4byte
   JSGFindObject__Q26JStage7TSystemCFPPQ26JStage7TObjectPCcQ26JStage8TEObject
    .4byte JSGCreateObject__Q26JStage7TSystemFPCcQ26JStage8TEObjectUl
    .4byte JSGDestroyObject__Q26JStage7TSystemFPQ26JStage7TObject
    .4byte JSGGetSystemData__Q26JStage7TSystemFUl
    .4byte JSGSetSystemData__Q26JStage7TSystemFUlUl
*/

namespace JStage {
struct TObject {
	virtual void _00() = 0;                                             // _00
	virtual void JSGFGetType() const;                                   // _04
	virtual void JSGGetName() const;                                    // _08
	virtual void JSGUpdate();                                           // _0C
	virtual void JSGGetFlag() const;                                    // _10
	virtual void JSGSetFlag(unsigned long);                             // _14
	virtual void JSGGetData(unsigned long, void*, unsigned long) const; // _18
	virtual void JSGSetData(unsigned long, const void*, unsigned long); // _1C
	virtual void JSGGetParent(TObject**, unsigned long*) const;         // _20
	virtual void JSGSetParent(TObject*, unsigned long);                 // _24
	virtual void JSGSetRelation(bool, TObject*, unsigned long);         // _28
	virtual void JSGFindNodeID(const char*) const;                      // _2C
	virtual void JSGGetNodeTransformation(unsigned long,
	                                      float (*)[4]) const; // _30

	// _00 VTBL
};
} // namespace JStage

namespace JStage {
struct TSystem : public TObject {
	virtual void _00() = 0;                                             // _00
	virtual void JSGFGetType() const;                                   // _04
	virtual void JSGGetName() const;                                    // _08
	virtual void JSGUpdate();                                           // _0C
	virtual void JSGGetFlag() const;                                    // _10
	virtual void JSGSetFlag(unsigned long);                             // _14
	virtual void JSGGetData(unsigned long, void*, unsigned long) const; // _18
	virtual void JSGSetData(unsigned long, const void*, unsigned long); // _1C
	virtual void JSGGetParent(TObject**, unsigned long*) const;         // _20
	virtual void JSGSetParent(TObject*, unsigned long);                 // _24
	virtual void JSGSetRelation(bool, TObject*, unsigned long);         // _28
	virtual void JSGFindNodeID(const char*) const;                      // _2C
	virtual void JSGGetNodeTransformation(unsigned long,
	                                      float (*)[4]) const;          // _30
	virtual void JSGFindObject(TObject**, const char*, TEObject) const; // _34
	virtual void JSGCreateObject(const char*, TEObject, unsigned long); // _38
	virtual void JSGDestroyObject(TObject*);                            // _3C
	virtual void JSGGetSystemData(unsigned long);                       // _40
	virtual void JSGSetSystemData(unsigned long, unsigned long);        // _44

	// _00 VTBL
};
} // namespace JStage

#endif
