#ifndef _J3DPEBLOCKTEXEDGE_H
#define _J3DPEBLOCKTEXEDGE_H

struct J3DPEBlock {
	virtual void reset(J3DPEBlock*);                // _00
	virtual void _04() = 0;                         // _04
	virtual void patch();                           // _08
	virtual void diff(unsigned long);               // _0C
	virtual void diffFog();                         // _10
	virtual void diffBlend();                       // _14
	virtual void _18() = 0;                         // _18
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

	// _00 VTBL
};

struct J3DPEBlockTexEdge : public J3DPEBlock {
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
	virtual ~J3DPEBlockTexEdge();                   // _70

	// _00 VTBL
};

#endif
