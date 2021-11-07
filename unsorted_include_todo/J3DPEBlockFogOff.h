#ifndef _J3DPEBLOCKFOGOFF_H
#define _J3DPEBLOCKFOGOFF_H

struct J3DPEBlock {
	virtual void _00() = 0;                   // _00
	virtual void _04() = 0;                   // _04
	virtual void patch();                     // _08
	virtual void _0C() = 0;                   // _0C
	virtual void diffFog();                   // _10
	virtual void _14() = 0;                   // _14
	virtual void _18() = 0;                   // _18
	virtual void _1C() = 0;                   // _1C
	virtual void setFog(J3DFog);              // _20
	virtual void setFog(J3DFog*);             // _24
	virtual void getFog();                    // _28
	virtual void _2C() = 0;                   // _2C
	virtual void _30() = 0;                   // _30
	virtual void _34() = 0;                   // _34
	virtual void _38() = 0;                   // _38
	virtual void _3C() = 0;                   // _3C
	virtual void _40() = 0;                   // _40
	virtual void _44() = 0;                   // _44
	virtual void _48() = 0;                   // _48
	virtual void _4C() = 0;                   // _4C
	virtual void _50() = 0;                   // _50
	virtual void _54() = 0;                   // _54
	virtual void _58() = 0;                   // _58
	virtual void _5C() = 0;                   // _5C
	virtual void _60() = 0;                   // _60
	virtual void _64() = 0;                   // _64
	virtual void getFogOffset() const;        // _68
	virtual void setFogOffset(unsigned long); // _6C

	// _00 VTBL
};

struct J3DPEBlockFogOff : public J3DPEBlock {
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
	virtual ~J3DPEBlockFogOff();                    // _70

	// _00 VTBL
};

#endif
