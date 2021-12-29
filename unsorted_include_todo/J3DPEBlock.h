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
	virtual void reset(J3DPEBlock*);                // _00
	virtual void _04() = 0;                         // _04
	virtual void patch();                           // _08
	virtual void diff(unsigned long);               // _0C
	virtual void diffFog();                         // _10
	virtual void diffBlend();                       // _14
	virtual void countDLSize();                     // _18
	virtual void _1C() = 0;                         // _1C
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
	virtual ~J3DPEBlock();                          // _70

	// _00 VTBL
};

#endif
