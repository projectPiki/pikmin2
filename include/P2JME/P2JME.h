#ifndef _P2JME_P2JME_H
#define _P2JME_P2JME_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JMessage/TReference.h"

struct JUTTexture;

namespace P2JME {
struct TReference;

namespace ImageGroup {
enum EID { ID0 };
} // namespace ImageGroup

struct Mgr : public JKRDisposer {
	Mgr(JKRExpHeap*);

	virtual ~Mgr(); // _08

	static Mgr* create(JKRExpHeap*);
	void setupMessage();
	void setupTex();
	void setupFont(const char*, JKRExpHeap*);
	void createImage(ImageGroup::EID, int);
	void setImage(ImageGroup::EID, int, JUTTexture*);
	JUTTexture* getImage(ImageGroup::EID, int);
	void setupMessageResource(JKRArchive*, const char*);
	bool setupColor(JKRArchive*, const char*);
	void reloadMessageResource();

	// _00 VTBL
	JUTFont* mFont;                              // _18
	JUTFont* mRubyFont;                          // _1C
	JUTTexture*** mImageLists;                   // _20 (list of these arrays, but only index 0 matters)
	int* mMaxTextures;                           // _24 (list of these values, but only index 0 matters)
	u8 mIsLoaded;                                // _28
	u32 _2C;                                     // _2C
	JMessage::TResourceContainer* mResContainer; // _30
	JMessage::TReference* mMsgRef;               // _34
};

void convertU64ToMessageID(u64, u32*, u32*);
void convertCharToMessageID(char*, u32*, u32*);
const char* getCurrentFontResName();
const char* getCurrentMesResName();
} // namespace P2JME

extern P2JME::Mgr* gP2JMEMgr;
#endif
