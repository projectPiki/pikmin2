#ifndef _GAME_RESULTTEXMGR_H
#define _GAME_RESULTTEXMGR_H

#include "Game/pelletConfig.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JUT/JUTTexture.h"
#include "LoadResource.h"

namespace Game {
namespace ResultTexMgr {
struct Arg {
	inline Arg()
	{
		m_heap              = nullptr;
		m_itemConfigList    = nullptr;
		m_otakaraConfigList = nullptr;
		_0C                 = -1;
	}

	PelletConfigList* m_otakaraConfigList; // _00
	PelletConfigList* m_itemConfigList;    // _04
	JKRHeap* m_heap;                       // _08
	s8 _0C;                                // _0C
};

struct Mgr : public JKRDisposer {
	struct Textures {
		void alloc(int);
		JUTTexture* getTexture(int);

		JUTTexture* m_textures; // _00
		int m_count;            // _04
	};

	Mgr();

	virtual ~Mgr(); // _08

	void create(Arg&);
	JUTTexture* getCarcassTexture();
	JUTTexture* getItemTexture(int);
	JUTTexture* getOtakaraItemTexture(int);
	JUTTexture* getOtakaraTexture(int);

	// Unused/inlined:
	int getOtakaraNum();
	int getItemNum();

	JKRHeap* _18;                           // _18
	LoadResource::Node* m_loadResourceNode; // _1C
	Textures m_carcassTextures;             // _20
	Textures m_otakaraTextures;             // _28
	Textures m_itemTextures;                // _30
	PelletConfigList* m_otakaraConfigList;  // _38
	PelletConfigList* m_itemConfigList;     // _3C
};
} // namespace ResultTexMgr
} // namespace Game

#endif
