#ifndef _J3DPEBLOCKOPA_H
#define _J3DPEBLOCKOPA_H

/*
    __vt__13J3DPEBlockOpa:
    .4byte 0
    .4byte 0
    .4byte reset__10J3DPEBlockFP10J3DPEBlock
    .4byte load__13J3DPEBlockOpaFv
    .4byte patch__10J3DPEBlockFv
    .4byte diff__10J3DPEBlockFUl
    .4byte diffFog__10J3DPEBlockFv
    .4byte diffBlend__10J3DPEBlockFv
    .4byte countDLSize__13J3DPEBlockOpaFv
    .4byte getType__13J3DPEBlockOpaFv
    .4byte setFog__10J3DPEBlockF6J3DFog
    .4byte setFog__10J3DPEBlockFP6J3DFog
    .4byte getFog__10J3DPEBlockFv
    .4byte setAlphaComp__10J3DPEBlockFPC12J3DAlphaComp
    .4byte setAlphaComp__10J3DPEBlockFRC12J3DAlphaComp
    .4byte getAlphaComp__10J3DPEBlockFv
    .4byte setBlend__10J3DPEBlockFPC8J3DBlend
    .4byte setBlend__10J3DPEBlockFRC8J3DBlend
    .4byte getBlend__10J3DPEBlockFv
    .4byte setZMode__10J3DPEBlockFPC8J3DZMode
    .4byte setZMode__10J3DPEBlockF8J3DZMode
    .4byte getZMode__10J3DPEBlockFv
    .4byte setZCompLoc__10J3DPEBlockFPCUc
    .4byte setZCompLoc__10J3DPEBlockFUc
    .4byte getZCompLoc__10J3DPEBlockCFv
    .4byte setDither__10J3DPEBlockFPCUc
    .4byte setDither__10J3DPEBlockFUc
    .4byte getDither__10J3DPEBlockCFv
    .4byte getFogOffset__10J3DPEBlockCFv
    .4byte setFogOffset__10J3DPEBlockFUl
    .4byte __dt__13J3DPEBlockOpaFv
*/

struct J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _08
	virtual void load();                            // _0C
	virtual void patch();                           // _10
	virtual void diff(unsigned long);               // _14
	virtual void diffFog();                         // _18
	virtual void diffBlend();                       // _1C
	virtual void countDLSize();                     // _20
	virtual void getType();                         // _24
	virtual void setFog(J3DFog);                    // _28
	virtual void setFog(J3DFog*);                   // _2C
	virtual void getFog();                          // _30
	virtual void setAlphaComp(const J3DAlphaComp*); // _34
	virtual void setAlphaComp(const J3DAlphaComp&); // _38
	virtual void getAlphaComp();                    // _3C
	virtual void setBlend(const J3DBlend*);         // _40
	virtual void setBlend(const J3DBlend&);         // _44
	virtual void getBlend();                        // _48
	virtual void setZMode(const J3DZMode*);         // _4C
	virtual void setZMode(J3DZMode);                // _50
	virtual void getZMode();                        // _54
	virtual void setZCompLoc(const unsigned char*); // _58
	virtual void setZCompLoc(unsigned char);        // _5C
	virtual void getZCompLoc() const;               // _60
	virtual void setDither(const unsigned char*);   // _64
	virtual void setDither(unsigned char);          // _68
	virtual void getDither() const;                 // _6C
	virtual void getFogOffset() const;              // _70
	virtual void setFogOffset(unsigned long);       // _74

	// _00 VTBL
};

struct J3DPEBlockOpa : public J3DPEBlock {
	virtual void load();        // _0C
	virtual void countDLSize(); // _20
	virtual void getType();     // _24
	virtual ~J3DPEBlockOpa();   // _78

	// _00 VTBL
};

#endif
