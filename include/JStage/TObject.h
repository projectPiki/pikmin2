#ifndef _JSTAGE_TOBJECT_H
#define _JSTAGE_TOBJECT_H
#include "Dolphin/gx.h"
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
	virtual u32 JSGGetFlag() const;                                 // _18
	virtual void JSGSetFlag(u32);                                   // _1C
	virtual void* JSGGetData(u32, void*, u32) const;                // _20
	virtual void JSGSetData(u32, const void*, u32);                 // _24
	virtual void JSGGetParent(TObject**, u32*) const;               // _28
	virtual void JSGSetParent(TObject*, u32);                       // _2C
	virtual void JSGSetRelation(bool, TObject*, u32);               // _30
	virtual int JSGFindNodeID(const char*) const;                   // _34
	virtual bool JSGGetNodeTransformation(u32, float (*)[4]) const; // _38

	/** @fabricated */
	inline void setFlagOff(u32 flag) { JSGSetFlag(JSGGetFlag() & ~flag); }
	/** @fabricated */
	inline void setFlagOn(u32 flag) { JSGSetFlag(JSGGetFlag() | flag); }

	// _00 VTBL
};

// this cannot generate a vtable. There isn't even an unused vtable in the link map. And yet it definitely has one. Hmm.
// There also aren't any unused funcs for this type at all.
// It's not a typedef. Typedefs don't show on the link map.
// Unless... maybe it's just a POD type that just has a pointer to a JStage::TObject?
// But then there still needs to be a subclass of that somewhere. And that doesn't look right at all.
struct TAmbientLight : public TObject {
	inline virtual GXColor JSGGetColor() const { return GXColor(); } // _3C
	inline virtual void JSGSetColor(GXColor) const { }               // _40
};

//  None of these should generate bodies. The vtbl should never be generated. Ever.
struct TFog : public TObject {
	inline virtual void virtual_3C() { }                                 // _3C
	inline virtual void virtual_40() { }                                 // _40
	inline virtual f32 virtual_44() const { return _04; }                // _44
	inline virtual void virtual_48(f32 p1) { _04 = p1; }                 // _48
	inline virtual f32 virtual_4C() const { return _04; }                // _4C
	inline virtual void virtual_50(f32 p1) { _04 = p1; }                 // _50
	inline virtual _GXColor JSGGetColor() const { return m_color; }      // _54
	inline virtual void JSGSetColor(_GXColor color) { m_color = color; } // _58

	f32 _04;
	_GXColor m_color;
};

struct TLight : public TObject {
};
} // namespace JStage

#endif
