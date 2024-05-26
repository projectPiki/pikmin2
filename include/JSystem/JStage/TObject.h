#ifndef _JSTAGE_TOBJECT_H
#define _JSTAGE_TOBJECT_H
#include "Dolphin/gx.h"
#include "JSystem/JStudio/TObject.h"
#include "types.h"

namespace JStage {
struct TObject {

	virtual ~TObject()              = 0;                   // _08
	virtual int JSGFGetType() const = 0;                   // _0C
	virtual char const* JSGGetName() const;                // _10
	virtual void JSGUpdate();                              // _14
	virtual u32 JSGGetFlag() const;                        // _18
	virtual void JSGSetFlag(u32);                          // _1C
	virtual void* JSGGetData(u32, void*, u32) const;       // _20
	virtual void JSGSetData(u32, const void*, u32);        // _24
	virtual void JSGGetParent(TObject**, u32*) const;      // _28
	virtual void JSGSetParent(TObject*, u32);              // _2C
	virtual void JSGSetRelation(bool, TObject*, u32);      // _30
	virtual int JSGFindNodeID(const char*) const;          // _34
	virtual bool JSGGetNodeTransformation(u32, Mtx) const; // _38

	/** @fabricated */
	inline void setFlagOff(u32 flag) { JSGSetFlag(JSGGetFlag() & ~flag); }
	/** @fabricated */
	inline void setFlagOn(u32 flag) { JSGSetFlag(JSGGetFlag() | flag); }

	// _00 = VTBL
};

// these are all from TP debug, ours are all mega stripped.
// my BEST guess atm is these get spawned in some stripped JStage/JSGLight.cpp, JStage/JSGFog.cpp etc files
// along with the vtables, but they never get actually hit, so the files gets stripped
// idk, it's mega weird and I'm Not A Fan - HP
struct TAmbientLight : public TObject {
	typedef JStudio::TObject_ambientLight StudioObject;

	inline virtual int JSGFGetType() const { return 4; }             // _0C
	inline virtual GXColor JSGGetColor() const { return GXColor(); } // _3C
	inline virtual void JSGSetColor(GXColor) const { }               // _40

	// _00 = VTBL
};

//  None of these should generate bodies. The vtbl should never be generated. Ever.
struct TFog : public TObject {
	typedef JStudio::TObject_fog StudioObject;

	inline virtual int JSGFGetType() const { return 6; }                       // _0C
	inline virtual GXFogType JSGGetFogFunction() const { return GX_FOG_NONE; } // _3C
	inline virtual void JSGSetFogFunction(GXFogType) { }                       // _40
	inline virtual f32 JSGGetStartZ() const { return mZ; }                     // _44
	inline virtual void JSGSetStartZ(f32 z) { mZ = z; }                        // _48
	inline virtual f32 JSGGetEndZ() const { return mZ; }                       // _4C
	inline virtual void JSGSetEndZ(f32 z) { mZ = z; }                          // _50
	inline virtual GXColor JSGGetColor() const { return mColor; }              // _54
	inline virtual void JSGSetColor(GXColor color) { mColor = color; }         // _58

	// _00 = VTBL
	f32 mZ;         // _04
	GXColor mColor; // _08
};

enum TELight {
	TELIGHT_Unk0 = 0,
	TELIGHT_Unk1 = 1,
	TELIGHT_Unk2 = 2,
	TELIGHT_Unk3 = 3,
};

struct TLight : public TObject {
	typedef JStudio::TObject_light StudioObject;

	inline virtual int JSGFGetType() const { return 5; }                               // _0C
	inline virtual int JSGGetLightType() const { return TELIGHT_Unk1; }                // _3C
	inline virtual void JSGSetLightType(TELight) { }                                   // _40
	inline virtual void JSGGetPosition(Vec*) const { }                                 // _44
	inline virtual void JSGSetPosition(Vec&) { }                                       // _48
	inline virtual GXColor JSGGetColor() const { return GXColor(); }                   // _4C
	inline virtual void JSGSetColor(GXColor color) { }                                 // _50
	inline virtual void JSGGetDistanceAttenuation(f32*, f32*, GXDistAttnFn*) const { } // _54
	inline virtual void JSGSetDistanceAttenuation(f32, f32, GXDistAttnFn) { }          // _58
	inline virtual void JSGGetAngleAttenuation(f32*, GXSpotFn*) const { }              // _5C
	inline virtual void JSGSetAngleAttenuation(f32, GXSpotFn) { }                      // _60
	inline virtual void JSGGetDirection(Vec*) const { }                                // _64
	inline virtual void JSGSetDirection(Vec&) { }                                      // _68
};
} // namespace JStage

#endif
