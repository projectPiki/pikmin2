#ifndef _J3DMODELLOADER_V21_H
#define _J3DMODELLOADER_V21_H

/*
    __vt__18J3DModelLoader_v21:
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
    .4byte __dt__18J3DModelLoader_v21Fv
    .4byte readMaterial__14J3DModelLoaderFPC16J3DMaterialBlockUl
    .4byte readMaterial_v21__18J3DModelLoader_v21FPC20J3DMaterialBlock_v21Ul
    .4byte readMaterialTable__14J3DModelLoaderFPC16J3DMaterialBlockUl
    .4byte readMaterialTable_v21__18J3DModelLoader_v21FPC20J3DMaterialBlock_v21Ul
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
	virtual ~J3DModelLoader();                                                      // _28
	virtual void readMaterial(const J3DMaterialBlock*, unsigned long);              // _2C
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*, unsigned long);      // _30
	virtual void readMaterialTable(const J3DMaterialBlock*, unsigned long);         // _34
	virtual void readMaterialTable_v21(const J3DMaterialBlock_v21*, unsigned long); // _38
	virtual void calcSizeMaterial(const J3DMaterialBlock*, unsigned long);          // _3C
	virtual void calcSizeMaterialTable(const J3DMaterialBlock*, unsigned long);     // _40

	// _00 VTBL
};

struct J3DModelLoader_v21 : public J3DModelLoader {
	virtual ~J3DModelLoader_v21();                                                  // _28
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*, unsigned long);      // _30
	virtual void readMaterialTable_v21(const J3DMaterialBlock_v21*, unsigned long); // _38

	// _00 VTBL
};

#endif
