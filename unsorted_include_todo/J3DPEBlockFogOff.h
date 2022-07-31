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
	virtual void patch();                           // _10 (weak)
	virtual void diff(unsigned long);               // _14 (weak)
	virtual void diffFog();                         // _18 (weak)
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
};

struct J3DPEBlockFogOff : public J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _08
	virtual void load();                            // _0C
	virtual void diff(unsigned long);               // _14 (weak)
	virtual void diffBlend();                       // _1C
	virtual void countDLSize();                     // _20
	virtual void getType();                         // _24 (weak)
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
	virtual ~J3DPEBlockFogOff();                    // _78 (weak)

	void initialize();
};

#endif
