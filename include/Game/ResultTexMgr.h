#ifndef _GAME_RESULTTEXMGR_H
#define _GAME_RESULTTEXMGR_H

#include "Game/pelletConfig.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "LoadResource.h"

namespace Game {
namespace ResultTexMgr {
enum ResultRegionID {
	REGIONID_Null = -1,
	REGIONID_JPN  = 0,
	REGIONID_US   = 1,
	REGIONID_PAL  = 2,
};

struct Arg {
	inline Arg()
	{
		mHeap              = nullptr;
		mItemConfigList    = nullptr;
		mOtakaraConfigList = nullptr;
		mRegionMode        = -1;
	}

	PelletConfigList* mOtakaraConfigList; // _00
	PelletConfigList* mItemConfigList;    // _04
	JKRHeap* mHeap;                       // _08
	s8 mRegionMode;                       // _0C
};

struct Mgr : public JKRDisposer {
	struct Textures {
		void alloc(int count);
		JUTTexture* getTexture(int index);

		JUTTexture* mTextures; // _00
		int mCount;            // _04
	};

	Mgr();

	virtual ~Mgr(); // _08

	void create(Arg&);
	JUTTexture* getCarcassTexture();
	JUTTexture* getItemTexture(int itemIndex);
	JUTTexture* getOtakaraItemTexture(int index);
	JUTTexture* getOtakaraTexture(int otakaraIndex);

	// Unused/inlined:
	int getOtakaraNum();
	int getItemNum();

	JKRHeap* mHeap;                        // _18
	LoadResource::Node* mLoadResourceNode; // _1C
	Textures mCarcassTextures;             // _20
	Textures mOtakaraTextures;             // _28
	Textures mItemTextures;                // _30
	PelletConfigList* mOtakaraConfigList;  // _38
	PelletConfigList* mItemConfigList;     // _3C
};
} // namespace ResultTexMgr
} // namespace Game

#endif
