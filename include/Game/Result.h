#ifndef _GAME_RESULT_H
#define _GAME_RESULT_H

#include "types.h"
#include "Game/DNode.h"
#include "JSystem/JUtility/JUTTexture.h"

namespace kh {
namespace Screen {
struct LostItemMgr;
}
} // namespace kh

namespace Game {
namespace Result {
struct TNode : public DNode {
	TNode();

	virtual ~TNode() { } // _08 (weak)

	void setTNode(u64 mesgTag, JUTTexture* texture, int quantity, int totalPokos, int pokoValue);
	void setTNode(u64 mesgTag, JUTTexture* texture, int quantity, int totalPokos, int pokoValue, int lostNum);

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
	int mQuantity;                     // _30, how many of the treasure were collected
	int mLostNum;                      // _34, how many were lost in the event the cave failed
	int mTotalPokos;                   // _38, the total pokos when accounting for how many of the treasure you got
	int mPokoValue;                    // _3C, the direct value of just one of the treasure
	u64 mMesgTag;                      // _40
	kh::Screen::LostItemMgr* mItemMgr; // _48
};
} // namespace Result
} // namespace Game

#endif
