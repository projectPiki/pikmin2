#ifndef _J3DPEBLOCKFULL_H
#define _J3DPEBLOCKFULL_H

/*
    __vt__14J3DPEBlockFull:
    .4byte 0
    .4byte 0
    .4byte reset__14J3DPEBlockFullFP10J3DPEBlock
    .4byte load__14J3DPEBlockFullFv
    .4byte patch__14J3DPEBlockFullFv
    .4byte diff__14J3DPEBlockFullFUl
    .4byte diffFog__14J3DPEBlockFullFv
    .4byte diffBlend__14J3DPEBlockFullFv
    .4byte countDLSize__14J3DPEBlockFullFv
    .4byte getType__14J3DPEBlockFullFv
    .4byte setFog__14J3DPEBlockFullF6J3DFog
    .4byte setFog__14J3DPEBlockFullFP6J3DFog
    .4byte getFog__14J3DPEBlockFullFv
    .4byte setAlphaComp__14J3DPEBlockFullFPC12J3DAlphaComp
    .4byte setAlphaComp__14J3DPEBlockFullFRC12J3DAlphaComp
    .4byte getAlphaComp__14J3DPEBlockFullFv
    .4byte setBlend__14J3DPEBlockFullFPC8J3DBlend
    .4byte setBlend__14J3DPEBlockFullFRC8J3DBlend
    .4byte getBlend__14J3DPEBlockFullFv
    .4byte setZMode__14J3DPEBlockFullFPC8J3DZMode
    .4byte setZMode__14J3DPEBlockFullF8J3DZMode
    .4byte getZMode__14J3DPEBlockFullFv
    .4byte setZCompLoc__14J3DPEBlockFullFPCUc
    .4byte setZCompLoc__14J3DPEBlockFullFUc
    .4byte getZCompLoc__14J3DPEBlockFullCFv
    .4byte setDither__14J3DPEBlockFullFPCUc
    .4byte setDither__14J3DPEBlockFullFUc
    .4byte getDither__14J3DPEBlockFullCFv
    .4byte getFogOffset__14J3DPEBlockFullCFv
    .4byte setFogOffset__14J3DPEBlockFullFUl
    .4byte __dt__14J3DPEBlockFullFv
*/

struct J3DPEBlockFull {
	virtual void reset(J3DPEBlock*);                // _00
	virtual void load();                            // _04
	virtual void patch();                           // _08
	virtual void diff(unsigned long);               // _0C
	virtual void diffFog();                         // _10
	virtual void diffBlend();                       // _14
	virtual void countDLSize();                     // _18
	virtual void getType();                         // _1C
	virtual void setFog(J3DFog);                    // _20
	virtual void setFog(J3DFog*);                   // _24
	virtual void getFog();                          // _28
	virtual void setAlphaComp(const J3DAlphaComp*); // _2C
	virtual void setAlphaComp(const J3DAlphaComp&); // _30
	virtual void getAlphaComp();                    // _34
	virtual void setBlend(const J3DBlend*);         // _38
	virtual void setBlend(const J3DBlend&);         // _3C
	virtual void getBlend();                        // _40
	virtual void setZMode(const J3DZMode*);         // _44
	virtual void setZMode(J3DZMode);                // _48
	virtual void getZMode();                        // _4C
	virtual void setZCompLoc(const unsigned char*); // _50
	virtual void setZCompLoc(unsigned char);        // _54
	virtual void getZCompLoc() const;               // _58
	virtual void setDither(const unsigned char*);   // _5C
	virtual void setDither(unsigned char);          // _60
	virtual void getDither() const;                 // _64
	virtual void getFogOffset() const;              // _68
	virtual void setFogOffset(unsigned long);       // _6C
	virtual ~J3DPEBlockFull();                      // _70

	// _00 VTBL
};

#endif
