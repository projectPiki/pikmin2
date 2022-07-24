#ifndef _J3DPEBLOCKFOGOFF_H
#define _J3DPEBLOCKFOGOFF_H

/*
    __vt__16J3DPEBlockFogOff:
    .4byte 0
    .4byte 0
    .4byte reset__16J3DPEBlockFogOffFP10J3DPEBlock
    .4byte load__16J3DPEBlockFogOffFv
    .4byte patch__10J3DPEBlockFv
    .4byte diff__16J3DPEBlockFogOffFUl
    .4byte diffFog__10J3DPEBlockFv
    .4byte diffBlend__16J3DPEBlockFogOffFv
    .4byte countDLSize__16J3DPEBlockFogOffFv
    .4byte getType__16J3DPEBlockFogOffFv
    .4byte setFog__10J3DPEBlockF6J3DFog
    .4byte setFog__10J3DPEBlockFP6J3DFog
    .4byte getFog__10J3DPEBlockFv
    .4byte setAlphaComp__16J3DPEBlockFogOffFPC12J3DAlphaComp
    .4byte setAlphaComp__16J3DPEBlockFogOffFRC12J3DAlphaComp
    .4byte getAlphaComp__16J3DPEBlockFogOffFv
    .4byte setBlend__16J3DPEBlockFogOffFPC8J3DBlend
    .4byte setBlend__16J3DPEBlockFogOffFRC8J3DBlend
    .4byte getBlend__16J3DPEBlockFogOffFv
    .4byte setZMode__16J3DPEBlockFogOffFPC8J3DZMode
    .4byte setZMode__16J3DPEBlockFogOffF8J3DZMode
    .4byte getZMode__16J3DPEBlockFogOffFv
    .4byte setZCompLoc__16J3DPEBlockFogOffFPCUc
    .4byte setZCompLoc__16J3DPEBlockFogOffFUc
    .4byte getZCompLoc__16J3DPEBlockFogOffCFv
    .4byte setDither__16J3DPEBlockFogOffFPCUc
    .4byte setDither__16J3DPEBlockFogOffFUc
    .4byte getDither__16J3DPEBlockFogOffCFv
    .4byte getFogOffset__10J3DPEBlockCFv
    .4byte setFogOffset__10J3DPEBlockFUl
    .4byte __dt__16J3DPEBlockFogOffFv
*/

struct J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _08
	virtual void load();                            // _0C
	virtual void patch();                           // _10 (inline)
	virtual void diff(unsigned long);               // _14 (inline)
	virtual void diffFog();                         // _18 (inline)
	virtual void diffBlend();                       // _1C
	virtual void countDLSize();                     // _20
	virtual void getType();                         // _24 (inline)
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
};

struct J3DPEBlockFogOff : public J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _08
	virtual void load();                            // _0C
	virtual void diff(unsigned long);               // _14 (inline)
	virtual void diffBlend();                       // _1C
	virtual void countDLSize();                     // _20
	virtual void getType();                         // _24 (inline)
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
	virtual ~J3DPEBlockFogOff();                    // _78 (inline)
};

#endif
