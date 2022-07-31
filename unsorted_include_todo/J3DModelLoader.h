#ifndef _J3DMODELLOADER_H
#define _J3DMODELLOADER_H

/*
    __vt__14J3DModelLoader:
    .4byte 0
    .4byte 0
    .4byte load__14J3DModelLoaderFPCvUl
    .4byte loadMaterialTable__14J3DModelLoaderFPCv
    .4byte loadBinaryDisplayList__14J3DModelLoaderFPCvUl
    .4byte calcLoadSize__14J3DModelLoaderFPCvUl
    .4byte calcLoadMaterialTableSize__14J3DModelLoaderFPCv
    .4byte calcLoadBinaryDisplayListSize__14J3DModelLoaderFPCvUl
    .4byte countMaterialNum__14J3DModelLoaderFPCv
    .4byte setupBBoardInfo__14J3DModelLoaderFv
    .4byte __dt__14J3DModelLoaderFv
    .4byte readMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl
    .4byte readMaterial_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul
    .4byte readMaterialTable__14J3DModelLoaderFPC16J3DMaterialBlockUl
    .4byte readMaterialTable_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul
    .4byte calcSizeMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl
    .4byte calcSizeMaterialTable__14J3DModelLoaderFPC16J3DMaterialBlockUl
*/

struct J3DModelLoader {
	virtual void load(const void*, unsigned long);                                  // _08
	virtual void loadMaterialTable(const void*);                                    // _0C
	virtual void loadBinaryDisplayList(const void*, unsigned long);                 // _10
	virtual void calcLoadSize(const void*, unsigned long);                          // _14
	virtual void calcLoadMaterialTableSize(const void*);                            // _18
	virtual void calcLoadBinaryDisplayListSize(const void*, unsigned long);         // _1C
	virtual void countMaterialNum(const void*);                                     // _20
	virtual void setupBBoardInfo();                                                 // _24
	virtual ~J3DModelLoader();                                                      // _28 (weak)
	virtual void readMaterial(const J3DMaterialBlock*, unsigned long);              // _2C (weak)
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*, unsigned long);      // _30 (weak)
	virtual void readMaterialTable(const J3DMaterialBlock*, unsigned long);         // _34 (weak)
	virtual void readMaterialTable_v21(const J3DMaterialBlock_v21*, unsigned long); // _38 (weak)
	virtual void calcSizeMaterial(const J3DMaterialBlock*, unsigned long);          // _3C (weak)
	virtual void calcSizeMaterialTable(const J3DMaterialBlock*, unsigned long);     // _40 (weak)

	void readInformation(const J3DModelInfoBlock*, unsigned long);
	void readVertex(const J3DVertexBlock*);
	void readEnvelop(const J3DEnvelopeBlock*);
	void readDraw(const J3DDrawBlock*);
	void readJoint(const J3DJointBlock*);
	void readShape(const J3DShapeBlock*, unsigned long);
	void readTexture(const J3DTextureBlock*);
	void readTextureTable(const J3DTextureBlock*);
	void readPatchedMaterial(const J3DMaterialBlock*, unsigned long);
	void readMaterialDL(const J3DMaterialDLBlock*, unsigned long);
	void modifyMaterial(unsigned long);
	void calcSizeInformation(const J3DModelInfoBlock*, unsigned long);
	void calcSizeJoint(const J3DJointBlock*);
	void calcSizeEnvelope(const J3DEnvelopeBlock*);
	void calcSizeDraw(const J3DDrawBlock*);
	void calcSizeShape(const J3DShapeBlock*, unsigned long);
	void calcSizeTexture(const J3DTextureBlock*);
	void calcSizeTextureTable(const J3DTextureBlock*);
	void calcSizePatchedMaterial(const J3DMaterialBlock*, unsigned long);
	void calcSizeMaterialDL(const J3DMaterialDLBlock*, unsigned long);
};

#endif
