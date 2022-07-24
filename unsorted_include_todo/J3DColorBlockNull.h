#ifndef _J3DCOLORBLOCKNULL_H
#define _J3DCOLORBLOCKNULL_H

/*
    __vt__17J3DColorBlockNull:
    .4byte 0
    .4byte 0
    .4byte load__13J3DColorBlockFv
    .4byte reset__13J3DColorBlockFP13J3DColorBlock
    .4byte patch__13J3DColorBlockFv
    .4byte patchMatColor__13J3DColorBlockFv
    .4byte patchLight__13J3DColorBlockFv
    .4byte diff__13J3DColorBlockFUl
    .4byte diffMatColor__13J3DColorBlockFv
    .4byte diffLight__13J3DColorBlockFv
    .4byte countDLSize__13J3DColorBlockFv
    .4byte getType__17J3DColorBlockNullFv
    .4byte setMatColor__13J3DColorBlockFUlPC10J3DGXColor
    .4byte setMatColor__13J3DColorBlockFUl10J3DGXColor
    .4byte getMatColor__13J3DColorBlockFUl
    .4byte setAmbColor__13J3DColorBlockFUlPC10J3DGXColor
    .4byte setAmbColor__13J3DColorBlockFUl10J3DGXColor
    .4byte getAmbColor__13J3DColorBlockFUl
    .4byte setColorChanNum__13J3DColorBlockFUc
    .4byte setColorChanNum__13J3DColorBlockFPCUc
    .4byte getColorChanNum__13J3DColorBlockCFv
    .4byte setColorChan__13J3DColorBlockFUlRC12J3DColorChan
    .4byte setColorChan__13J3DColorBlockFUlPC12J3DColorChan
    .4byte getColorChan__13J3DColorBlockFUl
    .4byte setLight__13J3DColorBlockFUlP11J3DLightObj
    .4byte getLight__13J3DColorBlockFUl
    .4byte setCullMode__13J3DColorBlockFPCUc
    .4byte setCullMode__13J3DColorBlockFUc
    .4byte getCullMode__13J3DColorBlockCFv
    .4byte getMatColorOffset__13J3DColorBlockCFv
    .4byte getColorChanOffset__13J3DColorBlockCFv
    .4byte setMatColorOffset__13J3DColorBlockFUl
    .4byte setColorChanOffset__13J3DColorBlockFUl
    .4byte __dt__17J3DColorBlockNullFv
    .4byte 0
*/

struct J3DColorBlock {
	virtual void load();                                           // _08
	virtual void reset(J3DColorBlock*);                            // _0C
	virtual void patch();                                          // _10
	virtual void patchMatColor();                                  // _14
	virtual void patchLight();                                     // _18
	virtual void diff(unsigned long);                              // _1C
	virtual void diffMatColor();                                   // _20
	virtual void diffLight();                                      // _24
	virtual void countDLSize();                                    // _28
	virtual void getType();                                        // _2C
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _30
	virtual void setMatColor(unsigned long, J3DGXColor);           // _34
	virtual void getMatColor(unsigned long);                       // _38
	virtual void setAmbColor(unsigned long, const J3DGXColor*);    // _3C
	virtual void setAmbColor(unsigned long, J3DGXColor);           // _40
	virtual void getAmbColor(unsigned long);                       // _44
	virtual void setColorChanNum(unsigned char);                   // _48
	virtual void setColorChanNum(const unsigned char*);            // _4C
	virtual void getColorChanNum() const;                          // _50
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _54
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _58
	virtual void getColorChan(unsigned long);                      // _5C
	virtual void setLight(unsigned long, J3DLightObj*);            // _60
	virtual void getLight(unsigned long);                          // _64
	virtual void setCullMode(const unsigned char*);                // _68
	virtual void setCullMode(unsigned char);                       // _6C
	virtual void getCullMode() const;                              // _70
	virtual void getMatColorOffset() const;                        // _74
	virtual void getColorChanOffset() const;                       // _78
	virtual void setMatColorOffset(unsigned long);                 // _7C
	virtual void setColorChanOffset(unsigned long);                // _80

	// _00 VTBL
};

struct J3DColorBlockNull : public J3DColorBlock {
	virtual void getType();       // _2C
	virtual ~J3DColorBlockNull(); // _84
	virtual void _88() = 0;       // _88

	// _00 VTBL
};

#endif
