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
	virtual void reset(J3DPEBlock*);                // _08 (inline)
	virtual void _0C() = 0;                         // _0C
	virtual void patch();                           // _10 (inline)
	virtual void diff(unsigned long);               // _14 (inline)
	virtual void diffFog();                         // _18 (inline)
	virtual void diffBlend();                       // _1C (inline)
	virtual void countDLSize();                     // _20 (inline)
	virtual void _24() = 0;                         // _24
	virtual void setFog(J3DFog);                    // _28 (inline)
	virtual void setFog(J3DFog*);                   // _2C (inline)
	virtual void getFog();                          // _30 (inline)
	virtual void setAlphaComp(const J3DAlphaComp*); // _34 (inline)
	virtual void setAlphaComp(const J3DAlphaComp&); // _38 (inline)
	virtual void getAlphaComp();                    // _3C (inline)
	virtual void setBlend(const J3DBlend*);         // _40 (inline)
	virtual void setBlend(const J3DBlend&);         // _44 (inline)
	virtual void getBlend();                        // _48 (inline)
	virtual void setZMode(const J3DZMode*);         // _4C (inline)
	virtual void setZMode(J3DZMode);                // _50 (inline)
	virtual void getZMode();                        // _54 (inline)
	virtual void setZCompLoc(const unsigned char*); // _58 (inline)
	virtual void setZCompLoc(unsigned char);        // _5C (inline)
	virtual void getZCompLoc() const;               // _60 (inline)
	virtual void setDither(const unsigned char*);   // _64 (inline)
	virtual void setDither(unsigned char);          // _68 (inline)
	virtual void getDither() const;                 // _6C (inline)
	virtual void getFogOffset() const;              // _70 (inline)
	virtual void setFogOffset(unsigned long);       // _74 (inline)
	virtual ~J3DPEBlock();                          // _78 (inline)
};

#endif
