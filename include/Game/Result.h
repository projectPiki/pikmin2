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
		if (mQuantity < 0) {
			return 0;
		} else {
			return (a + b) * mQuantity;
		}
	}

	// _00     = VTBL
	// _00-_2C = DNode
	JUTTexture* mTexture;              // _2C
	int _30;                           // _30
	int mIsLost;                       // _34
	int mPokoValue;                    // _38
	int mQuantity;                     // _3C
	u64 mMesgTag;                      // _40
	kh::Screen::LostItemMgr* mItemMgr; // _48
};
} // namespace Result
} // namespace Game

#endif
