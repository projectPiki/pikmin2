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
	virtual void reset(J3DPEBlock*);                // _08
	virtual void load();                            // _0C
	virtual void patch();                           // _10
	virtual void diff(unsigned long);               // _14
	virtual void diffFog();                         // _18
	virtual void diffBlend();                       // _1C
	virtual void countDLSize();                     // _20
	virtual void getType();                         // _24 (weak)
	virtual void setFog(J3DFog);                    // _28 (weak)
	virtual void setFog(J3DFog*);                   // _2C (weak)
	virtual void getFog();                          // _30 (weak)
	virtual void setAlphaComp(const J3DAlphaComp*); // _34 (weak)
	virtual void setAlphaComp(const J3DAlphaComp&); // _38 (weak)
	virtual void getAlphaComp();                    // _3C (weak)
	virtual void setBlend(const J3DBlend*);         // _40 (weak)
	virtual void setBlend(const J3DBlend&);         // _44 (weak)
	virtual void getBlend();                        // _48 (weak)
	virtual void setZMode(const J3DZMode*);         // _4C (weak)
	virtual void setZMode(J3DZMode);                // _50 (weak)
	virtual void getZMode();                        // _54 (weak)
	virtual void setZCompLoc(const unsigned char*); // _58 (weak)
	virtual void setZCompLoc(unsigned char);        // _5C (weak)
	virtual void getZCompLoc() const;               // _60 (weak)
	virtual void setDither(const unsigned char*);   // _64 (weak)
	virtual void setDither(unsigned char);          // _68 (weak)
	virtual void getDither() const;                 // _6C (weak)
	virtual void getFogOffset() const;              // _70 (weak)
	virtual void setFogOffset(unsigned long);       // _74 (weak)
	virtual ~J3DPEBlockFull();                      // _78 (weak)

	void initialize();
};

#endif
