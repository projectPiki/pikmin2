#include "P2JME/P2JME.h"
#include "System.h"
#include "nans.h"
#include "P2JME/TReference.h"
#include "JSystem/JMessage/TResource.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JMessage/TParse.h"

static const u32 padding[3] = { 0, 0, 0 };

P2JME::Mgr* gP2JMEMgr;

namespace P2JME {

static const char* sFontResName[]
    = { "/message/font_foreign.szs", "/message/font_foreign.szs", "/message/font_foreign.szs", "/message/font_foreign.szs",
	    "/message/font_foreign.szs", "/message/font_jpn.szs",     "/message/font_foreign.szs" };

static const char* sMesResName[]
    = { "/message/mesRes_eng.szs", "/message/mesRes_fra.szs", "/message/mesRes_ger.szs", "/message/mesRes_hol.szs",
	    "/message/mesRes_ita.szs", "/message/mesRes_jpn.szs", "/message/mesRes_spa.szs" };

static const char* cBtnTexName[] = { "a_btn.bti", "b_btn.bti", "c_btn.bti",  "x_btn.bti",  "y_btn.bti", "z_btn.bti",
	                                 "l_btn.bti", "r_btn.bti", "3d_btn.bti", "st_btn.bti", "t_btn.bti" };

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
const char* getCurrentFontResName()
{
#if defined(VERSION_PAL)
	return sFontResName[sys->getLanguage()];
#else
	return sFontResName[sys->mRegion];
#endif
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
const char* getCurrentMesResName()
{
#if defined(VERSION_PAL)
	return sMesResName[sys->getLanguage()];
#else
	return sMesResName[sys->mRegion];
#endif
}

/**
 * @note Address: 0x80437EAC
 * @note Size: 0x40
 */
Mgr* Mgr::create(JKRExpHeap* heap)
{
	new Mgr(heap);
}

/**
 * @note Address: 0x80437EEC
 * @note Size: 0x170
 */
Mgr::Mgr(JKRExpHeap* heap)
    : mRubyFont(nullptr)
    , mImageLists(nullptr)
    , mMaxTextures(nullptr)
    , mIsLoaded(false)
    , mLangHeap(nullptr)
    , mResContainer(nullptr)
    , mMsgRef(nullptr)
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(197, !gP2JMEMgr);
#else
	P2ASSERTLINE(194, !gP2JMEMgr);
#endif
	gP2JMEMgr = this;

	sys->heapStatusStart("MessageMgr", nullptr);

	mMaxTextures = new int[1];
	mImageLists  = new JUTTexture**[1];

	// dumb.
	for (int i = 0; i < 1; i++) {
		mMaxTextures[i] = 0;
		mImageLists[i]  = new JUTTexture*;
		mImageLists[i]  = nullptr;
	}

	sys->heapStatusStart("font res", nullptr);
	setupFont("pikmin2main.bfn", heap);
	sys->heapStatusEnd("font res");

	sys->heapStatusStart("tex res", nullptr);
	setupTex();
	sys->heapStatusEnd("tex res");

	sys->heapStatusEnd("MessageMgr");

	JKRHeap* heap2 = JKRGetCurrentHeap();
#if defined(VERSION_PAL)
	mLangHeap = makeExpHeap(0x4B000, heap2, true);
	mLangHeap->becomeCurrentHeap();
#else
	mLangHeap = nullptr;
#endif
	setupMessage();
	heap2->becomeCurrentHeap();
	mIsLoaded = true;
}

/**
 * @note Address: 0x8043805C
 * @note Size: 0x68
 */
Mgr::~Mgr()
{
	gP2JMEMgr = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Mgr::reloadMessageResource()
{
#if defined(VERSION_PAL)
	P2ASSERTLINE(272, mLangHeap);
	mLangHeap->freeAll();
	JKRHeap* prevHeap = JKRGetCurrentHeap();
	mLangHeap->becomeCurrentHeap();

	int bufferSize = mLangHeap->getFreeSize();
	u8* langBuffer = new u8[bufferSize];
	memset(langBuffer, 0xCD, bufferSize);
	delete[] langBuffer;

	setupMessage();

	OSReport("Message FreeSize:%d \n", (int)mLangHeap->getFreeSize() >> 10);
	prevHeap->becomeCurrentHeap();
#endif
}

/**
 * @note Address: 0x804380C4
 * @note Size: 0x100
 */
void Mgr::setupMessage()
{
	JKRArchive* msgarc = JKRMountArchive(getCurrentMesResName(), JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
#if defined(VERSION_PAL)
	P2ASSERTLINE(300, msgarc);
#else
	P2ASSERTLINE(304, msgarc);
#endif

	mResContainer      = new JMessage::TResourceContainer;
	mMsgRef            = new TReference;
	mMsgRef->mResource = mResContainer;

	setupMessageResource(msgarc, "pikmin2.bmg");
	setupColor(msgarc, "pikmin2.bmc");
}

/**
 * @note Address: 0x804381C4
 * @note Size: 0xF8
 */
void Mgr::setupTex()
{
	JKRArchive* imgarc = JKRMountArchive("/user/Yamashita/arc/gameTex.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	createImage(ImageGroup::ID0, 11);

	ResTIMG* timg;
	for (int i = 0; i < mMaxTextures[0]; i++) {
		// dont even ask.
		timg = (ResTIMG*)JKRGetArchiveImageResource(imgarc, cBtnTexName[i]);
#if defined(VERSION_PAL)
		P2ASSERTLINE(340, timg);
#else
		P2ASSERTLINE(344, timg);
#endif
		setImage(ImageGroup::ID0, i, new JUTTexture(timg));
	}
}

/**
 * @note Address: 0x804382BC
 * @note Size: 0x248
 */
void Mgr::setupFont(char const* path, JKRExpHeap* heap)
{
	// Japanese uses a separate font loading system since it's so big
#if defined(VERSION_PAL)
	if (sys->getLanguage() == System::LANG_Japanese) {
#else
	if (sys->mRegion == System::LANG_Japanese) {
#endif
		JKRAram::sAramObject->mAramHeap->getFreeSize();

		JKRArchive* fontarc = JKRMountArchive(getCurrentFontResName(), JKRArchive::EMM_Mem, heap, JKRArchive::EMD_Tail);
#if defined(VERSION_PAL)
		P2ASSERTLINE(364, fontarc);
#else
		P2ASSERTLINE(368, fontarc);
#endif
		sys->heapStatusStart("cacheFont", nullptr);

		ResFONT* file = static_cast<ResFONT*>(fontarc->getResource(path));
#if defined(VERSION_PAL)
		P2ASSERTLINE(367, file);
#else
		P2ASSERTLINE(371, file);
#endif

		mFont = new JUTCacheFont(file, 0x4c2c0, JKRGetCurrentHeap());
#if defined(VERSION_PAL)
		P2ASSERTLINE(370, mFont);
#else
		P2ASSERTLINE(374, mFont);
#endif

		sys->heapStatusEnd("cacheFont");

#if defined(VERSION_PAL)
		P2ASSERTLINE(374, mFont->mIsValid);
#else
		P2ASSERTLINE(378, mFont->mIsValid);
#endif
		static_cast<JUTCacheFont*>(mFont)->mPagingType = JUTCacheFont::CFPAGETYPE_Unk1;
		static_cast<JUTCacheFont*>(mFont)->loadCache_string("\tあいうえおかきくけこさしすせそたちすてとなにぬねのはひすへほまみむめもやゆよ"
		                                                    "わん\tアイウエオカキクケコサシスセソ\タチツテトナ"
		                                                    "ニヌネノハヒフヘホマミムメモヤユヨワン\t",
		                                                    true); // this is just all the characters in the japanese font sheet lol
		delete file;
		fontarc->unmount();
	} else {
		JKRArchive* fontarc = JKRMountArchive(getCurrentFontResName(), JKRArchive::EMM_Mem, JKRGetCurrentHeap(), JKRArchive::EMD_Head);
#if defined(VERSION_PAL)
		P2ASSERTLINE(403, fontarc);
#else
		P2ASSERTLINE(407, fontarc);
#endif

		sys->heapStatusStart("resFont", nullptr);

		ResFONT* file = static_cast<ResFONT*>(fontarc->getResource(path));

		mFont = new JUTResFont(file, JKRGetCurrentHeap());

		sys->heapStatusEnd("resFont");
	}
}

/**
 * @note Address: 0x80438504
 * @note Size: 0x1A8
 */
void Mgr::createImage(ImageGroup::EID group, int max)
{
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(419, 0, group, 1);
#else
	P2ASSERTBOUNDSLINE(423, 0, group, 1);
#endif
#if defined(VERSION_PAL)
	P2ASSERTLINE(422, !mImageLists[group]);
#else
	P2ASSERTLINE(426, !mImageLists[group]);
#endif
	mMaxTextures[group] = max;
	mImageLists[group]  = new JUTTexture*[max];

	for (int i = 0; i < max; i++) {
		mImageLists[group][i] = nullptr;
	}
}

/**
 * @note Address: 0x804386AC
 * @note Size: 0xC4
 */
void Mgr::setImage(ImageGroup::EID group, int id, JUTTexture* tex)
{
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(438, 0, group, 1);
#else
	P2ASSERTBOUNDSLINE(442, 0, group, 1);
#endif
#if defined(VERSION_PAL)
	P2ASSERTLINE(440, mMaxTextures[group] > id);
#else
	P2ASSERTLINE(444, mMaxTextures[group] > id);
#endif

	mImageLists[group][id] = tex;
}

/**
 * @note Address: 0x80438770
 * @note Size: 0xB8
 */
JUTTexture* Mgr::getImage(ImageGroup::EID group, int id)
{
#if defined(VERSION_PAL)
	P2ASSERTBOUNDSLINE(452, 0, group, 1);
#else
	P2ASSERTBOUNDSLINE(456, 0, group, 1);
#endif
#if defined(VERSION_PAL)
	P2ASSERTLINE(454, mMaxTextures[group] > id);
#else
	P2ASSERTLINE(458, mMaxTextures[group] > id);
#endif

	return mImageLists[group][id];
}

/**
 * @note Address: 0x80438828
 * @note Size: 0x104
 */
void Mgr::setupMessageResource(JKRArchive* arc, char const* path)
{
	sys->heapStatusStart("bmg", nullptr);
	const void* file = arc->getResource(path);
#if defined(VERSION_PAL)
	P2ASSERTLINE(470, file);
#else
	P2ASSERTLINE(474, file);
#endif
	sys->heapStatusEnd("bmg");

	sys->heapStatusStart("メッセージのパース", nullptr); // "Message Parsing"
	JMessage::TParse parse(mResContainer);
#if defined(VERSION_PAL)
	P2ASSERTLINE(480, parse.parse(file, 0));
#else
	P2ASSERTLINE(484, parse.parse(file, 0));
#endif
	sys->heapStatusEnd("メッセージのパース"); // "Message Parsing"
}

/**
 * @note Address: 0x8043892C
 * @note Size: 0xE0
 */
bool Mgr::setupColor(JKRArchive* arc, char const* path)
{
	const void* file = arc->getResource(path);
#if defined(VERSION_PAL)
	P2ASSERTLINE(497, file);
#else
	P2ASSERTLINE(501, file);
#endif

	sys->heapStatusStart("メッセージカラーのパース", nullptr); // "Message Parsing"
	JMessage::TParse_color parse(mResContainer);
	bool success = parse.parse(file, 0x20);
#if defined(VERSION_PAL)
	P2ASSERTLINE(506, success);
#else
	P2ASSERTLINE(510, success);
#endif
	sys->heapStatusEnd("メッセージカラーのパース"); // "Message Parsing"
	return success;
}

} // namespace P2JME
