#ifndef _JSYSTEM_J3D_J3DMATERIAL_H
#define _JSYSTEM_J3D_J3DMATERIAL_H

#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/J3D/J3DTevColorAnm.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DTexture.h"
#include "types.h"

struct J3DAnmColor;
struct J3DAnmTevRegKey;
struct J3DAnmTextureSRTKey;
struct J3DColorBlock;
struct J3DDisplayListObj;
struct J3DIndBlock;
struct J3DJoint;
struct J3DMaterialAnm;
struct J3DPEBlock;
struct J3DShape;
struct J3DTexGenBlock;
struct J3DTexMtxAnm;
struct J3DTexture;
struct JUTNameTab;

/**
 * @size{0x4C}
 */
struct J3DMaterial {
	/**
	 * @reifiedAddress{80070C54}
	 * @reifiedFile{JSystem/J3D/J3DModelLoader.cpp}
	 */
	inline J3DMaterial()
	    : _40(0x3CF3CF00)
	    , _44(0x00F3CF3C)
	{
		initialize();
	}

	~J3DMaterial();

	virtual void calc(const float (*)[4]);           // _08
	virtual void calcDiffTexMtx(const float (*)[4]); // _0C
	virtual void makeDisplayList();                  // _10
	virtual void makeSharedDisplayList();            // _14
	virtual void load();                             // _18
	virtual void loadSharedDL();                     // _1C
	virtual void patch();                            // _20
	virtual void diff(u32);                          // _24
	virtual void reset();                            // _28
	virtual void change();                           // _2C

	void calcCurrentMtx();
	static u32 calcSizeColorBlock(u32);
	static u32 calcSizeIndBlock(int);
	static u32 calcSizePEBlock(J3DModelLoaderFlags, u32);
	static u32 calcSizeTexGenBlock(u32);
	static u32 calcSizeTevBlock(int);
	u32 countDLSize();
	static J3DColorBlock* createColorBlock(u32);
	static J3DIndBlock* createIndBlock(int);
	static J3DPEBlock* createPEBlock(u32, u32);
	static J3DTevBlock* createTevBlock(int);
	static J3DTexGenBlock* createTexGenBlock(u32);
	void initialize();
	J3DErrType newSharedDisplayList(u32);
	J3DErrType newSingleSharedDisplayList(u32);
	void setCurrentMtx();

	// VTBL _00
	J3DMaterial* _04;  // _04
	J3DShape* m_shape; // _08
	J3DJoint* m_joint; // _0C
	u32 _10;           // _10
	u16 _14;           // _14
	u32 _18;           // _18
	u8 _1C[4];         // _1C
	/* RAM address of display list divided by 16? */
	u32 _20;                       // _20
	J3DColorBlock* m_colorBlock;   // _24
	J3DTexGenBlock* m_texGenBlock; // _28
	J3DTevBlock* m_tevBlock;       // _2C
	J3DIndBlock* m_indBlock;       // _30
	J3DPEBlock* m_peBlock;         // _34
	J3DMaterial* _38;              // _38
	J3DMaterialAnm* _3C;           // _3C
	u32 _40;                       // _40
	u32 _44;                       // _44
	J3DDisplayListObj* _48;        // _48
};

/**
 * m_*Block are all the *Null variants of their respective types.
 * @size{0x4C}
 */
struct J3DLockedMaterial : public J3DMaterial {
	inline J3DLockedMaterial()
	    : J3DMaterial()
	{
		initialize();
	}

	virtual void calc(const float (*)[4]); // _08
	virtual void makeDisplayList();        // _10
	virtual void makeSharedDisplayList();  // _14
	virtual void load();                   // _18
	virtual void loadSharedDL();           // _1C
	virtual void patch();                  // _20
	virtual void diff(u32);                // _24
	virtual void reset();                  // _28
	virtual void change();                 // _2C

	void initialize();
};

/**
 * m_texGenBlock and m_tevBlock are the *Patched variants of their respective
 * types.
 * @size{0x4C}
 */
struct J3DPatchedMaterial : public J3DMaterial {
	virtual void makeDisplayList();       // _10
	virtual void makeSharedDisplayList(); // _14
	virtual void load();                  // _18
	virtual void loadSharedDL();          // _1C
	virtual void reset();                 // _28
	virtual void change();                // _2C

	void initialize();
};

/**
 * @size{0x20}
 */
struct J3DMaterialTable {
	J3DMaterialTable();

	virtual ~J3DMaterialTable(); // _08

	void clear();

	J3DErrType allocTexMtxAnimator(J3DAnmTextureSRTKey*, J3DTexMtxAnm**);
	void entryTexMtxAnimator(J3DAnmTextureSRTKey*);
	void removeTexMtxAnimator(J3DAnmTextureSRTKey*);

	J3DErrType allocTevRegAnimator(J3DAnmTevRegKey*, J3DTevColorAnm**, J3DTevKColorAnm**);
	void entryTevRegAnimator(J3DAnmTevRegKey*);
	void removeTevRegAnimator(J3DAnmTevRegKey*);

	void entryMatColorAnimator(J3DAnmColor*);

	// VTBL _00
	u16 m_count1;               // _04
	u16 m_count2;               // _06
	J3DMaterial** m_materials1; // _08
	JUTNameTab* _0C;            // _0C
	J3DMaterial* m_materials2;  // _10
	J3DTexture* m_texture;      // _14
	JUTNameTab* _18;            // _18
	u16 _1C;                    // _1C
};

#endif
