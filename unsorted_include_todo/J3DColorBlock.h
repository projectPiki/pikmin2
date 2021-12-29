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
	virtual void load();                                           // _00
	virtual void reset(J3DColorBlock*);                            // _04
	virtual void patch();                                          // _08
	virtual void patchMatColor();                                  // _0C
	virtual void patchLight();                                     // _10
	virtual void diff(unsigned long);                              // _14
	virtual void diffMatColor();                                   // _18
	virtual void diffLight();                                      // _1C
	virtual void countDLSize();                                    // _20
	virtual void _24() = 0;                                        // _24
	virtual void setMatColor(unsigned long, const J3DGXColor*);    // _28
	virtual void setMatColor(unsigned long, J3DGXColor);           // _2C
	virtual void getMatColor(unsigned long);                       // _30
	virtual void setAmbColor(unsigned long, const J3DGXColor*);    // _34
	virtual void setAmbColor(unsigned long, J3DGXColor);           // _38
	virtual void getAmbColor(unsigned long);                       // _3C
	virtual void setColorChanNum(unsigned char);                   // _40
	virtual void setColorChanNum(const unsigned char*);            // _44
	virtual void getColorChanNum() const;                          // _48
	virtual void setColorChan(unsigned long, const J3DColorChan&); // _4C
	virtual void setColorChan(unsigned long, const J3DColorChan*); // _50
	virtual void getColorChan(unsigned long);                      // _54
	virtual void setLight(unsigned long, J3DLightObj*);            // _58
	virtual void getLight(unsigned long);                          // _5C
	virtual void setCullMode(const unsigned char*);                // _60
	virtual void setCullMode(unsigned char);                       // _64
	virtual void getCullMode() const;                              // _68
	virtual void getMatColorOffset() const;                        // _6C
	virtual void getColorChanOffset() const;                       // _70
	virtual void setMatColorOffset(unsigned long);                 // _74
	virtual void setColorChanOffset(unsigned long);                // _78
	virtual ~J3DColorBlock();                                      // _7C

	// _00 VTBL
};

#endif
