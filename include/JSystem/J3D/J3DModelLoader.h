#ifndef _JSYSTEM_J3D_J3DMODELLOADER_H
#define _JSYSTEM_J3D_J3DMODELLOADER_H

#include "types.h"
#include "JSystem/J3D/J3DFileBlock.h"

struct J3DMaterialTable;
struct J3DModelData;
struct J3DModelHierarchy;

struct J3DModelLoaderDataBase {
	static J3DModelData* load(const void*, u32);
	static J3DModelData* loadBinaryDisplayList(const void*, u32);
};

struct J3DModelLoader {
	inline J3DModelLoader()
	    : mModelData(nullptr)
	    , mMaterialTable(nullptr)
	    , mShapeBlock(nullptr)
	    , mMaterialBlock(nullptr)
	    , mHierarchy(nullptr)
	    , _18(0)
	    , _1A(0)
	{
	}

	virtual J3DModelData* load(const void*, u32);                                    // _08
	virtual J3DMaterialTable* loadMaterialTable(const void*);                        // _0C
	virtual J3DModelData* loadBinaryDisplayList(const void*, u32);                   // _10
	virtual int calcLoadSize(const void*, u32);                                      // _14
	virtual int calcLoadMaterialTableSize(const void*);                              // _18
	virtual int calcLoadBinaryDisplayListSize(const void*, u32);                     // _1C
	virtual u16 countMaterialNum(const void*);                                       // _20
	virtual void setupBBoardInfo();                                                  // _24
	virtual ~J3DModelLoader() { }                                                    // _28 (weak)
	virtual void readMaterial(const J3DMaterialBlock*, u32) { }                      // _2C (weak)
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*, u32) { }              // _30 (weak)
	virtual void readMaterialTable(const J3DMaterialBlock*, u32) { }                 // _34 (weak)
	virtual void readMaterialTable_v21(const J3DMaterialBlock_v21*, u32) { }         // _38 (weak)
	virtual size_t calcSizeMaterial(const J3DMaterialBlock*, u32) { return 0; }      // _3C (weak)
	virtual size_t calcSizeMaterialTable(const J3DMaterialBlock*, u32) { return 0; } // _40 (weak)

	void readInformation(const J3DModelInfoBlock*, u32);
	void readVertex(const J3DVertexBlock*);
	void readEnvelop(const J3DEnvelopeBlock*);
	void readDraw(const J3DDrawBlock*);
	void readJoint(const J3DJointBlock*);
	void readShape(const J3DShapeBlock*, u32);
	void readTexture(const J3DTextureBlock*);
	void readTextureTable(const J3DTextureBlock*);
	void readPatchedMaterial(const J3DMaterialBlock*, u32);
	void readMaterialDL(const J3DMaterialDLBlock*, u32);
	void modifyMaterial(u32);
	int calcSizeInformation(const J3DModelInfoBlock*, u32);
	int calcSizeJoint(const J3DJointBlock*);
	int calcSizeEnvelope(const J3DEnvelopeBlock*);
	int calcSizeDraw(const J3DDrawBlock*);
	int calcSizeShape(const J3DShapeBlock*, u32);
	int calcSizeTexture(const J3DTextureBlock*);
	int calcSizeTextureTable(const J3DTextureBlock*);
	int calcSizePatchedMaterial(const J3DMaterialBlock*, u32);
	int calcSizeMaterialDL(const J3DMaterialDLBlock*, u32);

	// VT _00
	J3DModelData* mModelData;               // _04
	J3DMaterialTable* mMaterialTable;       // _08
	const J3DShapeBlock* mShapeBlock;       // _0C
	const J3DMaterialBlock* mMaterialBlock; // _10
	J3DModelHierarchy* mHierarchy;          // _14
	u8 _18;                                 // _18
	u16 _1A;                                // _1A
};

struct J3DModelLoader_v21 : public J3DModelLoader {
	inline J3DModelLoader_v21() { }

	/**
	 * @reifiedAddress{8006FA44}
	 * @reifiedFile{JSystem/J3D/J3DModelLoader.cpp}
	 */
	virtual ~J3DModelLoader_v21() {};                                     // _28 (weak)
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*, u32);      // _30
	virtual void readMaterialTable_v21(const J3DMaterialBlock_v21*, u32); // _38
};

struct J3DModelLoader_v26 : public J3DModelLoader {
	inline J3DModelLoader_v26() { }

	/**
	 * @reifiedAddress{8006F9E8}
	 * @reifiedFile{JSystem/J3D/J3DModelLoader.cpp}
	 */
	virtual ~J3DModelLoader_v26() {};                                   // _28 (weak)
	virtual void readMaterial(const J3DMaterialBlock*, u32);            // _2C
	virtual void readMaterialTable(const J3DMaterialBlock*, u32);       // _34
	virtual size_t calcSizeMaterial(const J3DMaterialBlock*, u32);      // _3C
	virtual size_t calcSizeMaterialTable(const J3DMaterialBlock*, u32); // _40
};

inline u32 getMdlDataFlag_TevStageNum(u32 flag) { return (flag >> 16) & 0x1F; }
inline u32 getMdlDataFlag_TexGenFlag(u32 flag) { return flag & 0x0C000000; }
inline u32 getMdlDataFlag_PEFlag(u32 flag) { return flag & 0x30000000; }
inline u32 getMdlDataFlag_ColorFlag(u32 flag) { return flag & 0xC0000000; }
inline u32 getMdlDataFlag_MtxLoadType(u32 flag) { return flag & 0x10; }

inline u32 getBdlFlag_MaterialType(u32 flag) { return flag & 0x3000; }

#endif
