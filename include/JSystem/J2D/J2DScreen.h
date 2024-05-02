#ifndef _JSYSTEM_J2D_J2DSCREEN_H
#define _JSYSTEM_J2D_J2DSCREEN_H

#include "JSystem/J2D/J2DPane.h"

struct J2DScreen : public J2DPane {
	J2DScreen();

	virtual ~J2DScreen();                                                                                                  // _08
	virtual u16 getTypeID() const { return PANETYPE_Screen; }                                                              // _0C (weak)
	virtual void calcMtx() { makeMatrix(mOffset.x, mOffset.y); }                                                           // _2C (weak)
	virtual void drawSelf(f32, f32, Mtx*);                                                                                 // _38
	virtual J2DPane* search(u64);                                                                                          // _3C
	virtual J2DPane* searchUserInfo(u64);                                                                                  // _40
	virtual bool isUsed(const ResTIMG* resource);                                                                          // _4C
	virtual bool isUsed(const ResFONT* resource);                                                                          // _50
	virtual void clearAnmTransform() { J2DPane::clearAnmTransform(); }                                                     // _54 (weak)
	virtual void setAnimation(J2DAnmBase* animation);                                                                      // _5C (weak)
	virtual void setAnimation(J2DAnmTransform* animation);                                                                 // _60 (weak)
	virtual void setAnimation(J2DAnmColor* animation);                                                                     // _64
	virtual void setAnimation(J2DAnmTexPattern* animation);                                                                // _68
	virtual void setAnimation(J2DAnmTextureSRTKey* animation);                                                             // _6C
	virtual void setAnimation(J2DAnmTevRegKey* animation);                                                                 // _70
	virtual void setAnimation(J2DAnmVisibilityFull* animation);                                                            // _74
	virtual void setAnimation(J2DAnmVtxColor* animation);                                                                  // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull* animation) { }                                                       // _84 (weak)
	virtual void setAnimationVC(J2DAnmVtxColor* animation) { }                                                             // _8C (weak)
	virtual J2DPane* createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* input, J2DPane* parent, u32 flags) // _94 (weak)
	{
		return createPane(header, input, parent, flags, nullptr);
	}
	virtual J2DPane* createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* input, J2DPane* parent, u32 flags,
	                            JKRArchive* archive); // _98

	void animation();
	bool checkSignature(JSURandomInputStream*);
	void clean();
	bool createMaterial(JSURandomInputStream*, u32, JKRArchive*);
	void draw(f32, f32, const J2DGrafContext*);
	u32 gather(J2DPane**, u64, u64, int);
	J2DMaterial* getMaterial(u16 index);
	J2DResReference* getResReference(JSURandomInputStream*, u32);
	bool getScreenInformation(JSURandomInputStream* input);
	u32 makeHierarchyPanes(J2DPane*, JSURandomInputStream*, u32, JKRArchive*);
	bool set(const char*, u32, JKRArchive*);
	bool set(JSURandomInputStream*, u32);
	bool private_set(JSURandomInputStream* stream, u32 flags, JKRArchive* archive);

	inline u32 getMaterialCount() { return mMaterialCount; }

	inline void makeAnmPointer()
	{
		J2DMaterial* material;
		u32 mats = getMaterialCount();
		for (u16 i = 0; i < mats; i++) {
			material = getMaterial(i);
			material->makeAnmPointer();
		}
	}

	static void* getNameResource(const char* fileName);

	static J2DDataManage* getDataManage() { return mDataManage; }

	static J2DDataManage* mDataManage;

	const JGeometry::TBox2f getDefaultBounds()
	{
		JGeometry::TBox2f box(0.0f, 0.0f, 640.f, 480.0f);
		return box;
	}

	// _000      = VTBL
	// _000-_100 = J2DPane
	bool mIsScissor;           // _100
	u16 mMaterialCount;        // _102
	J2DMaterial* mMaterials;   // _104
	J2DResReference* mTexRes;  // _108
	J2DResReference* mFontRes; // _10C
	JUTNameTab* mNameTab;      // _110
	JUtility::TColor mColor;   // _114
};

#endif
