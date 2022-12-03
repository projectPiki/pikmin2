#ifndef _GAME_RESULT_H
#define _GAME_RESULT_H

#include "types.h"
#include "Game/DNode.h"
#include "JSystem/JUT/JUTTexture.h"

namespace kh {
namespace Screen {
struct LostItemMgr;
}
} // namespace kh

namespace Game {
namespace Result {
struct TNode : public DNode {
	TNode();

	virtual ~TNode(); // _08 (weak)

	void setTNode(u64, JUTTexture*, int, int, int);
	void setTNode(u64, JUTTexture*, int, int, int, int);

	static u64 convertByMorimun(int);

	inline int getNextIndex(int a, int b)
	{
		if (m_quantity < 0) {
			return 0;
		} else {
			return (a + b) * m_quantity;
		}
	}

	// _00     = VTBL
	// _00-_2C = DNode
	JUTTexture* m_texture;              // _2C
	int _30;                            // _30
	int m_isLost;                       // _34
	int m_pokoValue;                    // _38
	int m_quantity;                     // _3C
	u64 m_mesgTag;                      // _40
	kh::Screen::LostItemMgr* m_itemMgr; // _48, unknown
};
} // namespace Result
} // namespace Game

#endif
