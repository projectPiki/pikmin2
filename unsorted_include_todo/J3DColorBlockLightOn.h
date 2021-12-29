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
	virtual void load();                                           // _00
	virtual void reset(J3DColorBlock*);                            // _04
	virtual void patch();                                          // _08
	virtual void patchMatColor();                                  // _0C
	virtual void patchLight();                                     // _10
	virtual void diff(unsigned long);                              // _14
	virtual void diffMatColor();                                   // _18
	virtual void diffLight();                                      // _1C
	virtual void countDLSize();                                    // _20
	virtual void getType();                                        // _24
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
	virtual ~J3DColorBlockLightOn();                               // _7C

	// _00 VTBL
};

#endif
