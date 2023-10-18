#ifndef _JSYSTEM_J3D_J3DCOLORBLOCK_H
#define _JSYSTEM_J3D_J3DCOLORBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DColorBlock {
	virtual void load() { }                                     // _08 (weak)
	virtual void reset(J3DColorBlock*) { }                      // _0C (weak)
	virtual void patch() { }                                    // _10 (weak)
	virtual void patchMatColor() { }                            // _14 (weak)
	virtual void patchLight() { }                               // _18 (weak)
	virtual void diff(u32) { }                                  // _1C (weak)
	virtual void diffMatColor() { }                             // _20 (weak)
	virtual void diffLight() { }                                // _24 (weak)
	virtual u32 countDLSize() { return 0; }                     // _28 (weak)
	virtual JBlockType getType() = 0;                           // _2C
	virtual void setMatColor(u32, const J3DGXColor*) { }        // _30 (weak)
	virtual void setMatColor(u32, J3DGXColor) { }               // _34 (weak)
	virtual J3DGXColor* getMatColor(u32) { return nullptr; }    // _38 (weak)
	virtual void setAmbColor(u32, const J3DGXColor*) { }        // _3C (weak)
	virtual void setAmbColor(u32, J3DGXColor) { }               // _40 (weak)
	virtual J3DGXColor* getAmbColor(u32) { return nullptr; }    // _44 (weak)
	virtual void setColorChanNum(u8) { }                        // _48 (weak)
	virtual void setColorChanNum(const u8*) { }                 // _4C (weak)
	virtual u8 getColorChanNum() const { return 0; }            // _50 (weak)
	virtual void setColorChan(u32, const J3DColorChan&) { }     // _54 (weak)
	virtual void setColorChan(u32, const J3DColorChan*) { }     // _58 (weak)
	virtual J3DColorChan* getColorChan(u32) { return nullptr; } // _5C (weak)
	virtual void setLight(u32, J3DLightObj*) { }                // _60 (weak)
	virtual J3DLightObj* getLight(u32) { return nullptr; }      // _64 (weak)
	virtual void setCullMode(const u8*) { }                     // _68 (weak)
	virtual void setCullMode(u8) { }                            // _6C (weak)
	virtual u8 getCullMode() const { return 2; }                // _70 (weak)
	virtual u32 getMatColorOffset() const { return 0; }         // _74 (weak)
	virtual u32 getColorChanOffset() const { return 0; }        // _78 (weak)
	virtual void setMatColorOffset(u32) { }                     // _7C (weak)
	virtual void setColorChanOffset(u32) { }                    // _80 (weak)
	virtual ~J3DColorBlock() { }                                // _84 (weak)

	// _00 = VTBL
};

struct J3DColorBlockLightOff : public J3DColorBlock {
	inline J3DColorBlockLightOff()
	    : J3DColorBlock()
	    , mMaterialColors()
	    , mColorChannels()
	{
		initialize();
	}

	virtual void load();                                    // _08
	virtual void reset(J3DColorBlock*);                     // _0C
	virtual void patch();                                   // _10
	virtual void patchMatColor();                           // _14
	virtual void patchLight();                              // _18
	virtual void diff(u32);                                 // _1C
	virtual void diffMatColor();                            // _20
	virtual void diffLight();                               // _24
	virtual u32 countDLSize();                              // _28
	virtual JBlockType getType() { }                        // _2C (weak)
	virtual void setMatColor(u32, const J3DGXColor*) { }    // _30 (weak)
	virtual void setMatColor(u32, J3DGXColor) { }           // _34 (weak)
	virtual J3DGXColor* getMatColor(u32) { }                // _38 (weak)
	virtual void setColorChanNum(u8) { }                    // _48 (weak)
	virtual void setColorChanNum(const u8*) { }             // _4C (weak)
	virtual u8 getColorChanNum() const { }                  // _50 (weak)
	virtual void setColorChan(u32, const J3DColorChan&) { } // _54 (weak)
	virtual void setColorChan(u32, const J3DColorChan*) { } // _58 (weak)
	virtual J3DColorChan* getColorChan(u32) { }             // _5C (weak)
	virtual void setCullMode(const u8*) { }                 // _68 (weak)
	virtual void setCullMode(u8) { }                        // _6C (weak)
	virtual u8 getCullMode() const { }                      // _70 (weak)
	virtual u32 getMatColorOffset() const { }               // _74 (weak)
	virtual u32 getColorChanOffset() const { }              // _78 (weak)
	virtual void setMatColorOffset(u32) { }                 // _7C (weak)
	virtual void setColorChanOffset(u32) { }                // _80 (weak)
	virtual ~J3DColorBlockLightOff() { }                    // _84 (weak)

	void initialize();

	// _00 = VTBL
	J3DGXColor mMaterialColors[2];  // _04
	u8 mColorChannelNum;            // _0C
	u8 _0D;                         // _0D
	J3DColorChan mColorChannels[4]; // _0E
	u8 mCullMode;                   // _16
	u32 mMaterialColorOffset;       // _18
	u32 mColorChannelOffset;        // _1C
};

struct J3DColorBlockAmbientOn : public J3DColorBlockLightOff {
	inline J3DColorBlockAmbientOn()
	    : J3DColorBlockLightOff()
	    , mAmbientColors()
	{
		initialize();
	}

	virtual void load();                              // _08
	virtual void reset(J3DColorBlock*);               // _0C
	virtual u32 countDLSize();                        // _28
	virtual JBlockType getType();                     // _2C (weak)
	virtual void setAmbColor(u32, const J3DGXColor*); // _3C (weak)
	virtual void setAmbColor(u32, J3DGXColor);        // _40 (weak)
	virtual J3DGXColor* getAmbColor(u32);             // _44 (weak)
	virtual ~J3DColorBlockAmbientOn() {};             // _84 (weak)

	void initialize();

	// _00     = VTBL
	// _00-_20 = J3DColorBlockLightOff
	J3DGXColor mAmbientColors[2]; // _20
};

struct J3DColorBlockLightOn : public J3DColorBlock {
	inline J3DColorBlockLightOn()
	    : J3DColorBlock()
	    , mMaterialColors()
	    , mAmbientColors()
	    , mColorChannels()
	{
		initialize();
	}

	virtual void load();                                 // _08
	virtual void reset(J3DColorBlock*);                  // _0C
	virtual void patch();                                // _10
	virtual void patchMatColor();                        // _14
	virtual void patchLight();                           // _18
	virtual void diff(u32);                              // _1C
	virtual void diffMatColor();                         // _20
	virtual void diffLight();                            // _24
	virtual u32 countDLSize();                           // _28
	virtual JBlockType getType();                        // _2C (weak)
	virtual void setMatColor(u32, const J3DGXColor*);    // _30 (weak)
	virtual void setMatColor(u32, J3DGXColor);           // _34 (weak)
	virtual J3DGXColor* getMatColor(u32);                // _38 (weak)
	virtual void setAmbColor(u32, const J3DGXColor*);    // _3C (weak)
	virtual void setAmbColor(u32, J3DGXColor);           // _40 (weak)
	virtual J3DGXColor* getAmbColor(u32);                // _44 (weak)
	virtual void setColorChanNum(u8);                    // _48 (weak)
	virtual void setColorChanNum(const u8*);             // _4C (weak)
	virtual u8 getColorChanNum() const;                  // _50 (weak)
	virtual void setColorChan(u32, const J3DColorChan&); // _54 (weak)
	virtual void setColorChan(u32, const J3DColorChan*); // _58 (weak)
	virtual J3DColorChan* getColorChan(u32);             // _5C (weak)
	virtual void setLight(u32, J3DLightObj*);            // _60 (weak)
	virtual J3DLightObj* getLight(u32);                  // _64 (weak)
	virtual void setCullMode(const u8*);                 // _68 (weak)
	virtual void setCullMode(u8);                        // _6C (weak)
	virtual u8 getCullMode() const;                      // _70 (weak)
	virtual u32 getMatColorOffset() const;               // _74 (weak)
	virtual u32 getColorChanOffset() const;              // _78 (weak)
	virtual void setMatColorOffset(u32);                 // _7C (weak)
	virtual void setColorChanOffset(u32);                // _80 (weak)
	virtual ~J3DColorBlockLightOn() {};                  // _84 (weak)

	void initialize();

	// _00 = VTBL
	J3DGXColor mMaterialColors[2];  // _04
	J3DGXColor mAmbientColors[2];   // _0C
	u8 mColorChannelNum;            // _14
	u8 _15;                         // _15
	J3DColorChan mColorChannels[4]; // _16
	J3DLightObj* mLights[8];        // _20
	u8 mCullMode;                   // _40
	u32 mMaterialColorOffset;       // _44
	u32 mColorChannelOffset;        // _48
};

struct J3DColorBlockNull : public J3DColorBlock {
	virtual JBlockType getType();    // _2C (weak)
	virtual ~J3DColorBlockNull() { } // _84 (weak)

	// _00 = VTBL
};

#endif
