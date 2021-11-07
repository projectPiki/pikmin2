#ifndef _J3DCOLORBLOCKNULL_H
#define _J3DCOLORBLOCKNULL_H

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

	// _00 VTBL
};

struct J3DColorBlockNull : public J3DColorBlock {
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
	virtual ~J3DColorBlockNull();                                  // _7C
	virtual void _80() = 0;                                        // _80

	// _00 VTBL
};

#endif
