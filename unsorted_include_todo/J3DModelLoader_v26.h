#ifndef _J3DMODELLOADER_V26_H
#define _J3DMODELLOADER_V26_H

struct J3DModelLoader {
	virtual void load(const void*, unsigned long);                  // _00
	virtual void loadMaterialTable(const void*);                    // _04
	virtual void loadBinaryDisplayList(const void*, unsigned long); // _08
	virtual void calcLoadSize(const void*, unsigned long);          // _0C
	virtual void calcLoadMaterialTableSize(const void*);            // _10
	virtual void calcLoadBinaryDisplayListSize(const void*,
	                                           unsigned long); // _14
	virtual void countMaterialNum(const void*);                // _18
	virtual void setupBBoardInfo();                            // _1C
	virtual void _20() = 0;                                    // _20
	virtual void _24() = 0;                                    // _24
	virtual void readMaterial_v21(const J3DMaterialBlock_v21*,
	                              unsigned long); // _28
	virtual void _2C() = 0;                       // _2C
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
