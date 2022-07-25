#ifndef _J3DPEBLOCK_H
#define _J3DPEBLOCK_H

/*
    __vt__10J3DPEBlock:
    .4byte 0
    .4byte 0
    .4byte reset__10J3DPEBlockFP10J3DPEBlock
    .4byte 0
    .4byte patch__10J3DPEBlockFv
    .4byte diff__10J3DPEBlockFUl
    .4byte diffFog__10J3DPEBlockFv
    .4byte diffBlend__10J3DPEBlockFv
    .4byte countDLSize__10J3DPEBlockFv
    .4byte 0
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
    .4byte __dt__10J3DPEBlockFv
*/

struct J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _08 (weak)
	virtual void _0C() = 0;                         // _0C
	virtual void patch();                           // _10 (weak)
	virtual void diff(unsigned long);               // _14 (weak)
	virtual void diffFog();                         // _18 (weak)
	virtual void diffBlend();                       // _1C (weak)
	virtual void countDLSize();                     // _20 (weak)
	virtual void _24() = 0;                         // _24
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
	virtual ~J3DPEBlock();                          // _78 (weak)
};

#endif
