#ifndef _J3DMODELLOADER_V26_H
#define _J3DMODELLOADER_V26_H

/*
    __vt__18J3DModelLoader_v26:
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
    .4byte __dt__18J3DModelLoader_v26Fv
    .4byte readMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
    .4byte readMaterial_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul
    .4byte readMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
    .4byte readMaterialTable_v21__14J3DModelLoaderFPC20J3DMaterialBlock_v21Ul
    .4byte calcSizeMaterial__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
    .4byte calcSizeMaterialTable__18J3DModelLoader_v26FPC16J3DMaterialBlockUl
*/

struct J3DModelLoader {
	virtual void load(const void*, unsigned long);                  // _00
	virtual void loadMaterialTable(const void*);                    // _04
	virtual void loadBinaryDisplayList(const void*, unsigned long); // _08
	virtual void calcLoadSize(const void*, unsigned long);          // _0C
	virtual void calcLoadMaterialTableSize(const void*);            // _10
	virtual void calcLoadBinaryDisplayListSize(const void*,
	                                           unsigned long);         // _14
	virtual void countMaterialNum(const void*);                        // _18
	virtual void setupBBoardInfo();                                    // _1C
	virtual ~J3DModelLoader();                                         // _20
	virtual void readMaterial(const J3DMaterialBlock*, unsigned long); // _24
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*,
	                              unsigned long); // _28
	virtual void readMaterialTable(const J3DMaterialBlock*,
	                               unsigned long); // _2C
	virtual void readMaterialTable_v21(const J3DMaterialBlock_v21*,
	                                   unsigned long); // _30

	// _00 VTBL
};

struct J3DModelLoader_v26 : public J3DModelLoader {
	virtual void load(const void*, unsigned long);                  // _00
	virtual void loadMaterialTable(const void*);                    // _04
	virtual void loadBinaryDisplayList(const void*, unsigned long); // _08
	virtual void calcLoadSize(const void*, unsigned long);          // _0C
	virtual void calcLoadMaterialTableSize(const void*);            // _10
	virtual void calcLoadBinaryDisplayListSize(const void*,
	                                           unsigned long);         // _14
	virtual void countMaterialNum(const void*);                        // _18
	virtual void setupBBoardInfo();                                    // _1C
	virtual ~J3DModelLoader_v26();                                     // _20
	virtual void readMaterial(const J3DMaterialBlock*, unsigned long); // _24
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*,
	                              unsigned long); // _28
	virtual void readMaterialTable(const J3DMaterialBlock*,
	                               unsigned long); // _2C
	virtual void readMaterialTable_v21(const J3DMaterialBlock_v21*,
	                                   unsigned long); // _30
	virtual void calcSizeMaterial(const J3DMaterialBlock*,
	                              unsigned long); // _34
	virtual void calcSizeMaterialTable(const J3DMaterialBlock*,
	                                   unsigned long); // _38

	// _00 VTBL
};

#endif
