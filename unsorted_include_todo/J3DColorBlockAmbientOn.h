#ifndef _J3DCOLORBLOCKAMBIENTON_H
#define _J3DCOLORBLOCKAMBIENTON_H

/*
    __vt__22J3DColorBlockAmbientOn:
    .4byte 0
    .4byte 0
    .4byte load__22J3DColorBlockAmbientOnFv
    .4byte reset__22J3DColorBlockAmbientOnFP13J3DColorBlock
    .4byte patch__21J3DColorBlockLightOffFv
    .4byte patchMatColor__21J3DColorBlockLightOffFv
    .4byte patchLight__21J3DColorBlockLightOffFv
    .4byte diff__21J3DColorBlockLightOffFUl
    .4byte diffMatColor__21J3DColorBlockLightOffFv
    .4byte diffLight__21J3DColorBlockLightOffFv
    .4byte countDLSize__22J3DColorBlockAmbientOnFv
    .4byte getType__22J3DColorBlockAmbientOnFv
    .4byte setMatColor__21J3DColorBlockLightOffFUlPC10J3DGXColor
    .4byte setMatColor__21J3DColorBlockLightOffFUl10J3DGXColor
    .4byte getMatColor__21J3DColorBlockLightOffFUl
    .4byte setAmbColor__22J3DColorBlockAmbientOnFUlPC10J3DGXColor
    .4byte setAmbColor__22J3DColorBlockAmbientOnFUl10J3DGXColor
    .4byte getAmbColor__22J3DColorBlockAmbientOnFUl
    .4byte setColorChanNum__21J3DColorBlockLightOffFUc
    .4byte setColorChanNum__21J3DColorBlockLightOffFPCUc
    .4byte getColorChanNum__21J3DColorBlockLightOffCFv
    .4byte setColorChan__21J3DColorBlockLightOffFUlRC12J3DColorChan
    .4byte setColorChan__21J3DColorBlockLightOffFUlPC12J3DColorChan
    .4byte getColorChan__21J3DColorBlockLightOffFUl
    .4byte setLight__13J3DColorBlockFUlP11J3DLightObj
    .4byte getLight__13J3DColorBlockFUl
    .4byte setCullMode__21J3DColorBlockLightOffFPCUc
    .4byte setCullMode__21J3DColorBlockLightOffFUc
    .4byte getCullMode__21J3DColorBlockLightOffCFv
    .4byte getMatColorOffset__21J3DColorBlockLightOffCFv
    .4byte getColorChanOffset__21J3DColorBlockLightOffCFv
    .4byte setMatColorOffset__21J3DColorBlockLightOffFUl
    .4byte setColorChanOffset__21J3DColorBlockLightOffFUl
    .4byte __dt__22J3DColorBlockAmbientOnFv
*/

struct J3DColorBlockLightOff {
	virtual void _08() = 0;                                        // _08
	virtual void _0C() = 0;                                        // _0C
	virtual void patch();                                          // _10
	virtual void patchMatColor();                                  // _14
	virtual void patchLight();                                     // _18
	virtual void diff(unsigned long);                              // _1C
	virtual void diffMatColor();                                   // _20
	virtual void diffLight();                                      // _24
	virtual void _28() = 0;                                        // _28
	virtual void _2C() = 0;                                        // _2C
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _30
	virtual void setMatColor(unsigned long, J3DGXColor);           // _34
	virtual void getMatColor(unsigned long);                       // _38
	virtual void _3C() = 0;                                        // _3C
	virtual void _40() = 0;                                        // _40
	virtual void _44() = 0;                                        // _44
	virtual void setColorChanNum(unsigned char);                   // _48
	virtual void setColorChanNum(const unsigned char*);            // _4C
	virtual void getColorChanNum() const;                          // _50
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _54
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _58
	virtual void getColorChan(unsigned long);                      // _5C
	virtual void _60() = 0;                                        // _60
	virtual void _64() = 0;                                        // _64
	virtual void setCullMode(const unsigned char*);                // _68
	virtual void setCullMode(unsigned char);                       // _6C
	virtual void getCullMode() const;                              // _70
	virtual void getMatColorOffset() const;                        // _74
	virtual void getColorChanOffset() const;                       // _78
	virtual void setMatColorOffset(unsigned long);                 // _7C
	virtual void setColorChanOffset(unsigned long);                // _80

	// _00 VTBL
};

struct J3DColorBlock {
	virtual void _08() = 0;                             // _08
	virtual void _0C() = 0;                             // _0C
	virtual void _10() = 0;                             // _10
	virtual void _14() = 0;                             // _14
	virtual void _18() = 0;                             // _18
	virtual void _1C() = 0;                             // _1C
	virtual void _20() = 0;                             // _20
	virtual void _24() = 0;                             // _24
	virtual void _28() = 0;                             // _28
	virtual void _2C() = 0;                             // _2C
	virtual void _30() = 0;                             // _30
	virtual void _34() = 0;                             // _34
	virtual void _38() = 0;                             // _38
	virtual void _3C() = 0;                             // _3C
	virtual void _40() = 0;                             // _40
	virtual void _44() = 0;                             // _44
	virtual void _48() = 0;                             // _48
	virtual void _4C() = 0;                             // _4C
	virtual void _50() = 0;                             // _50
	virtual void _54() = 0;                             // _54
	virtual void _58() = 0;                             // _58
	virtual void _5C() = 0;                             // _5C
	virtual void setLight(unsigned long, J3DLightObj*); // _60
	virtual void getLight(unsigned long);               // _64

	// _00 VTBL
};

struct J3DColorBlockAmbientOn : public J3DColorBlockLightOff, public J3DColorBlock {
	virtual void load();                                        // _08
	virtual void reset(J3DColorBlock*);                         // _0C
	virtual void countDLSize();                                 // _28
	virtual void getType();                                     // _2C
	virtual void setAmbColor(unsigned long, const J3DGXColor*); // _3C
	virtual void setAmbColor(unsigned long, J3DGXColor);        // _40
	virtual void getAmbColor(unsigned long);                    // _44
	virtual ~J3DColorBlockAmbientOn();                          // _84

	// _00 VTBL
};

#endif
