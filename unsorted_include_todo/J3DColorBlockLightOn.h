#ifndef _J3DCOLORBLOCKLIGHTON_H
#define _J3DCOLORBLOCKLIGHTON_H

/*
    __vt__20J3DColorBlockLightOn:
    .4byte 0
    .4byte 0
    .4byte load__20J3DColorBlockLightOnFv
    .4byte reset__20J3DColorBlockLightOnFP13J3DColorBlock
    .4byte patch__20J3DColorBlockLightOnFv
    .4byte patchMatColor__20J3DColorBlockLightOnFv
    .4byte patchLight__20J3DColorBlockLightOnFv
    .4byte diff__20J3DColorBlockLightOnFUl
    .4byte diffMatColor__20J3DColorBlockLightOnFv
    .4byte diffLight__20J3DColorBlockLightOnFv
    .4byte countDLSize__20J3DColorBlockLightOnFv
    .4byte getType__20J3DColorBlockLightOnFv
    .4byte setMatColor__20J3DColorBlockLightOnFUlPC10J3DGXColor
    .4byte setMatColor__20J3DColorBlockLightOnFUl10J3DGXColor
    .4byte getMatColor__20J3DColorBlockLightOnFUl
    .4byte setAmbColor__20J3DColorBlockLightOnFUlPC10J3DGXColor
    .4byte setAmbColor__20J3DColorBlockLightOnFUl10J3DGXColor
    .4byte getAmbColor__20J3DColorBlockLightOnFUl
    .4byte setColorChanNum__20J3DColorBlockLightOnFUc
    .4byte setColorChanNum__20J3DColorBlockLightOnFPCUc
    .4byte getColorChanNum__20J3DColorBlockLightOnCFv
    .4byte setColorChan__20J3DColorBlockLightOnFUlRC12J3DColorChan
    .4byte setColorChan__20J3DColorBlockLightOnFUlPC12J3DColorChan
    .4byte getColorChan__20J3DColorBlockLightOnFUl
    .4byte setLight__20J3DColorBlockLightOnFUlP11J3DLightObj
    .4byte getLight__20J3DColorBlockLightOnFUl
    .4byte setCullMode__20J3DColorBlockLightOnFPCUc
    .4byte setCullMode__20J3DColorBlockLightOnFUc
    .4byte getCullMode__20J3DColorBlockLightOnCFv
    .4byte getMatColorOffset__20J3DColorBlockLightOnCFv
    .4byte getColorChanOffset__20J3DColorBlockLightOnCFv
    .4byte setMatColorOffset__20J3DColorBlockLightOnFUl
    .4byte setColorChanOffset__20J3DColorBlockLightOnFUl
    .4byte __dt__20J3DColorBlockLightOnFv
*/

struct J3DColorBlockLightOn {
	virtual void load();                                           // _08
	virtual void reset(J3DColorBlock*);                            // _0C
	virtual void patch();                                          // _10
	virtual void patchMatColor();                                  // _14
	virtual void patchLight();                                     // _18
	virtual void diff(unsigned long);                              // _1C
	virtual void diffMatColor();                                   // _20
	virtual void diffLight();                                      // _24
	virtual void countDLSize();                                    // _28
	virtual void getType();                                        // _2C (weak)
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
	virtual ~J3DColorBlockLightOn();                               // _84 (weak)
};

#endif
