#ifndef _J3DCOLORBLOCK_H
#define _J3DCOLORBLOCK_H

/*
    __vt__13J3DColorBlock:
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
    .4byte 0
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
    .4byte __dt__13J3DColorBlockFv
*/

struct J3DColorBlock {
	virtual void load();                                           // _08 (weak)
	virtual void reset(J3DColorBlock*);                            // _0C (weak)
	virtual void patch();                                          // _10 (weak)
	virtual void patchMatColor();                                  // _14 (weak)
	virtual void patchLight();                                     // _18 (weak)
	virtual void diff(unsigned long);                              // _1C (weak)
	virtual void diffMatColor();                                   // _20 (weak)
	virtual void diffLight();                                      // _24 (weak)
	virtual void countDLSize();                                    // _28 (weak)
	virtual void _2C() = 0;                                        // _2C
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _30 (weak)
	virtual void setMatColor(unsigned long, J3DGXColor);           // _34 (weak)
	virtual void getMatColor(unsigned long);                       // _38 (weak)
	virtual void setAmbColor(unsigned long, const J3DGXColor*);    // _3C (weak)
	virtual void setAmbColor(unsigned long, J3DGXColor);           // _40 (weak)
	virtual void getAmbColor(unsigned long);                       // _44 (weak)
	virtual void setColorChanNum(unsigned char);                   // _48 (weak)
	virtual void setColorChanNum(const unsigned char*);            // _4C (weak)
	virtual void getColorChanNum() const;                          // _50 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _54 (weak)
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _58 (weak)
	virtual void getColorChan(unsigned long);                      // _5C (weak)
	virtual void setLight(unsigned long, J3DLightObj*);            // _60 (weak)
	virtual void getLight(unsigned long);                          // _64 (weak)
	virtual void setCullMode(const unsigned char*);                // _68 (weak)
	virtual void setCullMode(unsigned char);                       // _6C (weak)
	virtual void getCullMode() const;                              // _70 (weak)
	virtual void getMatColorOffset() const;                        // _74 (weak)
	virtual void getColorChanOffset() const;                       // _78 (weak)
	virtual void setMatColorOffset(unsigned long);                 // _7C (weak)
	virtual void setColorChanOffset(unsigned long);                // _80 (weak)
	virtual ~J3DColorBlock();                                      // _84 (weak)
};

#endif
