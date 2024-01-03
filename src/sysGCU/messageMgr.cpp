#include "P2JME/P2JME.h"
#include "System.h"
#include "nans.h"
#include "P2JME/TReference.h"
#include "JSystem/JMessage/TResource.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JMessage/TParse.h"

static const char idk[] = "\0\0\0\0\0\0\0\0\0";

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
void getCurrentFontResName()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void getCurrentMesResName()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80437EAC
 * @note Size: 0x40
 */
Mgr* Mgr::create(JKRExpHeap* heap) { new Mgr(heap); }

/**
 * @note Address: 0x80437EEC
 * @note Size: 0x170
 */
Mgr::Mgr(JKRExpHeap* heap)
    : mRubyFont(nullptr)
    , mImageLists(nullptr)
    , mMaxTextures(nullptr)
    , _28(0)
    , _2C(0)
    , mResContainer(nullptr)
    , mMsgRef(nullptr)
{
	P2ASSERTLINE(194, !gP2JMEMgr);
	gP2JMEMgr = this;

	sys->heapStatusStart("MessageMgr", nullptr);

	mMaxTextures    = new int;
	mImageLists     = new JUTTexture**;
	mMaxTextures[0] = nullptr;
	mImageLists[0]  = new JUTTexture*;
	mImageLists[0]  = nullptr;

	sys->heapStatusStart("font res", nullptr);
	setupFont("pikmin2main.bfn", heap);
	sys->heapStatusEnd("font res");

	sys->heapStatusStart("tex res", nullptr);
	setupTex();
	sys->heapStatusEnd("tex res");

	sys->heapStatusEnd("MessageMgr");

	JKRHeap* heap2 = JKRGetCurrentHeap();
	_2C            = 0;
	setupMessage();
	heap2->becomeCurrentHeap();
	_28 = 1;
}

/**
 * @note Address: 0x8043805C
 * @note Size: 0x68
 */
Mgr::~Mgr() { gP2JMEMgr = nullptr; }

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Mgr::reloadMessageResource()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804380C4
 * @note Size: 0x100
 */
void Mgr::setupMessage()
{
	JKRArchive* msgarc = JKRMountArchive(sMesResName[sys->mRegion], JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(304, msgarc);

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

	for (int i = 0; i < mMaxTextures[0]; i++) {
		ResTIMG* timg = static_cast<ResTIMG*>(imgarc->getResource(cBtnTexName[i]));
		P2ASSERTLINE(344, timg);
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
	if (sys->mRegion == System::LANG_Japanese) {
		JKRAram::sAramObject->mAramHeap->getFreeSize();

		JKRArchive* fontarc = JKRMountArchive(sFontResName[sys->mRegion], JKRArchive::EMM_Mem, heap, JKRArchive::EMD_Tail);
		P2ASSERTLINE(368, fontarc);
		sys->heapStatusStart("cacheFont", nullptr);

		ResFONT* file = static_cast<ResFONT*>(fontarc->getResource(path));
		P2ASSERTLINE(371, file);

		mFont = new JUTCacheFont(file, 0x4c2c0, JKRGetCurrentHeap());
		P2ASSERTLINE(374, mFont);

		sys->heapStatusEnd("cacheFont");

		P2ASSERTLINE(378, mFont->mIsValid);
		static_cast<JUTCacheFont*>(mFont)->mPagingType = JUTCacheFont::CFPAGETYPE_Unk1;
		static_cast<JUTCacheFont*>(mFont)->loadCache_string(
		    "\tあいうえおかきくけこさしすせそたちすてとなにぬねのはひすへほまみむめもやゆよわん\tアイウエオカキクケコサシスセソタチツテトナ"
		    "ニヌネノハヒフヘホマミ ムメモヤユヨワン",
		    true);
		delete file;
		fontarc->unmount();
	} else {
		JKRArchive* fontarc = JKRMountArchive(sFontResName[sys->mRegion], JKRArchive::EMM_Mem, JKRGetCurrentHeap(), JKRArchive::EMD_Head);
		P2ASSERTLINE(407, fontarc);

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
	P2ASSERTBOUNDSLINE(423, 0, group, 1);
	P2ASSERTLINE(426, !mImageLists[group]);
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
	P2ASSERTBOUNDSLINE(442, 0, group, 1);
	P2ASSERTLINE(444, mMaxTextures[group] > id);

	mImageLists[group][id] = tex;
}

/**
 * @note Address: 0x80438770
 * @note Size: 0xB8
 */
JUTTexture* Mgr::getImage(ImageGroup::EID group, int id)
{
	P2ASSERTBOUNDSLINE(456, 0, group, 1);
	P2ASSERTLINE(458, mMaxTextures[group] > id);

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
	P2ASSERTLINE(474, file);
	sys->heapStatusEnd("bmg");

	sys->heapStatusStart("メッセージのパース", nullptr); // "Message Parsing"
	JMessage::TParse parse(mResContainer);
	P2ASSERTLINE(484, parse.parse_next(&file, 0));
	sys->heapStatusEnd("メッセージのパース");
}

/**
 * @note Address: 0x8043892C
 * @note Size: 0xE0
 */
void Mgr::setupColor(JKRArchive* arc, char const* path)
{
	const void* file = arc->getResource(path);
	P2ASSERTLINE(501, file);

	sys->heapStatusStart("メッセージカラーのパース", nullptr); // "Message Parsing"
	JMessage::TParse_color parse(mResContainer);
	P2ASSERTLINE(510, parse.parse_next(&file, 0x20));
	sys->heapStatusEnd("メッセージカラーのパース");
}

} // namespace P2JME
