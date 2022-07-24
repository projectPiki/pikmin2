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
	virtual void load();                                           // _08 (inline)
	virtual void reset(J3DColorBlock*);                            // _0C (inline)
	virtual void patch();                                          // _10 (inline)
	virtual void patchMatColor();                                  // _14 (inline)
	virtual void patchLight();                                     // _18 (inline)
	virtual void diff(unsigned long);                              // _1C (inline)
	virtual void diffMatColor();                                   // _20 (inline)
	virtual void diffLight();                                      // _24 (inline)
	virtual void countDLSize();                                    // _28 (inline)
	virtual void _2C() = 0;                                        // _2C
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _30 (inline)
	virtual void setMatColor(unsigned long, J3DGXColor);           // _34 (inline)
	virtual void getMatColor(unsigned long);                       // _38 (inline)
	virtual void setAmbColor(unsigned long, const J3DGXColor*);    // _3C (inline)
	virtual void setAmbColor(unsigned long, J3DGXColor);           // _40 (inline)
	virtual void getAmbColor(unsigned long);                       // _44 (inline)
	virtual void setColorChanNum(unsigned char);                   // _48 (inline)
	virtual void setColorChanNum(const unsigned char*);            // _4C (inline)
	virtual void getColorChanNum() const;                          // _50 (inline)
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _54 (inline)
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _58 (inline)
	virtual void getColorChan(unsigned long);                      // _5C (inline)
	virtual void setLight(unsigned long, J3DLightObj*);            // _60 (inline)
	virtual void getLight(unsigned long);                          // _64 (inline)
	virtual void setCullMode(const unsigned char*);                // _68 (inline)
	virtual void setCullMode(unsigned char);                       // _6C (inline)
	virtual void getCullMode() const;                              // _70 (inline)
	virtual void getMatColorOffset() const;                        // _74 (inline)
	virtual void getColorChanOffset() const;                       // _78 (inline)
	virtual void setMatColorOffset(unsigned long);                 // _7C (inline)
	virtual void setColorChanOffset(unsigned long);                // _80 (inline)
	virtual ~J3DColorBlock();                                      // _84 (inline)
};

#endif
