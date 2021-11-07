#ifndef _JSTAGE_TOBJECT_H
#define _JSTAGE_TOBJECT_H

namespace JStage {
struct TObject {
	virtual void _00() = 0;                                             // _00
	virtual void _04() = 0;                                             // _04
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
	virtual void _34() = 0;                                    // _34

	// _00 VTBL
};
} // namespace JStage

#endif
