#ifndef _JSYSTEM_J3D_J3DCOLORBLOCK_H
#define _JSYSTEM_J3D_J3DCOLORBLOCK_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"

struct J3DColorBlock {
	virtual void load();                                           // _08 (weak)
	virtual void reset(J3DColorBlock*);                            // _0C (weak)
	virtual void patch();                                          // _10 (weak)
	virtual void patchMatColor();                                  // _14 (weak)
	virtual void patchLight();                                     // _18 (weak)
	virtual void diff(unsigned long);                              // _1C (weak)
	virtual void diffMatColor();                                   // _20 (weak)
	virtual void diffLight();                                      // _24 (weak)
	virtual u32 countDLSize();                                     // _28 (weak)
	virtual JBlockType getType() = 0;                              // _2C
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _30 (weak)
	virtual void setMatColor(unsigned long, J3DGXColor);           // _34 (weak)
	virtual J3DGXColor* getMatColor(unsigned long);                // _38 (weak)
	virtual void setAmbColor(unsigned long, const J3DGXColor*);    // _3C (weak)
	virtual void setAmbColor(unsigned long, J3DGXColor);           // _40 (weak)
	virtual J3DGXColor* getAmbColor(unsigned long);                // _44 (weak)
	virtual void setColorChanNum(unsigned char);                   // _48 (weak)
	virtual void setColorChanNum(const unsigned char*);            // _4C (weak)
	virtual u8 getColorChanNum() const;                            // _50 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _54 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _58 (weak)
	virtual J3DColorChan* getColorChan(unsigned long);             // _5C (weak)
	virtual void setLight(unsigned long, J3DLightObj*);            // _60 (weak)
	virtual J3DLightObj* getLight(unsigned long);                  // _64 (weak)
	virtual void setCullMode(const unsigned char*);                // _68 (weak)
	virtual void setCullMode(unsigned char);                       // _6C (weak)
	virtual u8 getCullMode() const;                                // _70 (weak)
	virtual u32 getMatColorOffset() const;                         // _74 (weak)
	virtual u32 getColorChanOffset() const;                        // _78 (weak)
	virtual void setMatColorOffset(unsigned long);                 // _7C (weak)
	virtual void setColorChanOffset(unsigned long);                // _80 (weak)
	/**
	 * @reifiedAddress{800617F4}
	 * @reifiedFile{JSystem/J3D/J3DMaterial.cpp}
	 */
	virtual ~J3DColorBlock() {}; // _84 (weak)
};

struct J3DColorBlockLightOff : public J3DColorBlock {
	inline J3DColorBlockLightOff()
	    : J3DColorBlock()
	    , _04()
	    , m_colorChannels()
	{
		initialize();
	}

	virtual void load();                                           // _08
	virtual void reset(J3DColorBlock*);                            // _0C
	virtual void patch();                                          // _10
	virtual void patchMatColor();                                  // _14
	virtual void patchLight();                                     // _18
	virtual void diff(unsigned long);                              // _1C
	virtual void diffMatColor();                                   // _20
	virtual void diffLight();                                      // _24
	virtual u32 countDLSize();                                     // _28
	virtual JBlockType getType();                                  // _2C (weak)
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _30 (weak)
	virtual void setMatColor(unsigned long, J3DGXColor);           // _34 (weak)
	virtual J3DGXColor* getMatColor(unsigned long);                // _38 (weak)
	virtual void setColorChanNum(unsigned char);                   // _48 (weak)
	virtual void setColorChanNum(const unsigned char*);            // _4C (weak)
	virtual u8 getColorChanNum() const;                            // _50 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _54 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _58 (weak)
	virtual J3DColorChan* getColorChan(unsigned long);             // _5C (weak)
	virtual void setCullMode(const unsigned char*);                // _68 (weak)
	virtual void setCullMode(unsigned char);                       // _6C (weak)
	virtual u8 getCullMode() const;                                // _70 (weak)
	virtual u32 getMatColorOffset() const;                         // _74 (weak)
	virtual u32 getColorChanOffset() const;                        // _78 (weak)
	virtual void setMatColorOffset(unsigned long);                 // _7C (weak)
	virtual void setColorChanOffset(unsigned long);                // _80 (weak)
	/**
	 * @reifiedAddress{800616E0}
	 * @reifiedFile{JSystem/J3D/J3DMaterial.cpp}
	 */
	virtual ~J3DColorBlockLightOff() {}; // _84 (weak)

	void initialize();

	J3DGXColor _04[2];               // _04
	u8 m_colorChannelNum;            // _0C
	u8 _0D;                          // _0D
	J3DColorChan m_colorChannels[4]; // _0E
	u8 m_cullMode;                   // _16
	u32 m_materialColorOffset;       // _18
	u32 m_colorChannelOffset;        // _1C
};

struct J3DColorBlockAmbientOn : public J3DColorBlockLightOff {
	inline J3DColorBlockAmbientOn()
	    : J3DColorBlockLightOff()
	    , _20()
	{
		initialize();
	}

	virtual void load();                                        // _08
	virtual void reset(J3DColorBlock*);                         // _0C
	virtual u32 countDLSize();                                  // _28
	virtual JBlockType getType();                               // _2C (weak)
	virtual void setAmbColor(unsigned long, const J3DGXColor*); // _3C (weak)
	virtual void setAmbColor(unsigned long, J3DGXColor);        // _40 (weak)
	virtual J3DGXColor* getAmbColor(unsigned long);             // _44 (weak)
	virtual ~J3DColorBlockAmbientOn() {};                       // _84 (weak)

	void initialize();

	J3DGXColor _20[2]; // _20
};

struct J3DColorBlockLightOn : public J3DColorBlock {
	inline J3DColorBlockLightOn()
	    : J3DColorBlock()
	    , _04()
	    , _0C()
	    , m_colorChannels()
	{
		initialize();
	}

	virtual void load();                                           // _08
	virtual void reset(J3DColorBlock*);                            // _0C
	virtual void patch();                                          // _10
	virtual void patchMatColor();                                  // _14
	virtual void patchLight();                                     // _18
	virtual void diff(unsigned long);                              // _1C
	virtual void diffMatColor();                                   // _20
	virtual void diffLight();                                      // _24
	virtual u32 countDLSize();                                     // _28
	virtual JBlockType getType();                                  // _2C (weak)
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _30 (weak)
	virtual void setMatColor(unsigned long, J3DGXColor);           // _34 (weak)
	virtual J3DGXColor* getMatColor(unsigned long);                // _38 (weak)
	virtual void setAmbColor(unsigned long, const J3DGXColor*);    // _3C (weak)
	virtual void setAmbColor(unsigned long, J3DGXColor);           // _40 (weak)
	virtual J3DGXColor* getAmbColor(unsigned long);                // _44 (weak)
	virtual void setColorChanNum(unsigned char);                   // _48 (weak)
	virtual void setColorChanNum(const unsigned char*);            // _4C (weak)
	virtual u8 getColorChanNum() const;                            // _50 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _54 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _58 (weak)
	virtual J3DColorChan* getColorChan(unsigned long);             // _5C (weak)
	virtual void setLight(unsigned long, J3DLightObj*);            // _60 (weak)
	virtual J3DLightObj* getLight(unsigned long);                  // _64 (weak)
	virtual void setCullMode(const unsigned char*);                // _68 (weak)
	virtual void setCullMode(unsigned char);                       // _6C (weak)
	virtual u8 getCullMode() const;                                // _70 (weak)
	virtual u32 getMatColorOffset() const;                         // _74 (weak)
	virtual u32 getColorChanOffset() const;                        // _78 (weak)
	virtual void setMatColorOffset(unsigned long);                 // _7C (weak)
	virtual void setColorChanOffset(unsigned long);                // _80 (weak)
	virtual ~J3DColorBlockLightOn() {};                            // _84 (weak)

	void initialize();

	J3DGXColor _04[2];               // _04
	J3DGXColor _0C[2];               // _0C
	u8 m_colorChannelNum;            // _14
	u8 _15;                          // _15
	J3DColorChan m_colorChannels[4]; // _16
	J3DLightObj* _20;                // _20
	u8 _24[0x1C];                    // _24
	u8 m_cullMode;                   // _40
	u32 m_materialColorOffset;       // _44
	u32 m_colorChannelOffset;        // _48
};

struct J3DColorBlockNull : public J3DColorBlock {
	virtual JBlockType getType(); // _2C (weak)
	/**
	 * @reifiedAddress{8006F664}
	 * @reifiedFile{JSystem/J3D/J3DMaterialFactory.cpp}
	 */
	virtual ~J3DColorBlockNull() {}; // _84 (weak)
};

#endif
