#ifndef _GAME_RESULT_H
#define _GAME_RESULT_H

#include "types.h"
#include "Game/DNode.h"
#include "JSystem/JUT/JUTTexture.h"

namespace Game {
namespace Result {
struct TNode : public DNode {
	TNode();

	virtual ~TNode(); // _08 (weak)

	void setTNode(u64, JUTTexture*, int, int, int);
	void setTNode(u64, JUTTexture*, int, int, int, int);

	static u64 convertByMorimun(int);

	// _00     = VTBL
	// _00-_2C = DNode
	JUTTexture* m_texture; // _2C
	int _30;               // _30
	int _34;               // _34
	int _38;               // _38
	int _3C;               // _3C
	u64 _40;               // _40
	u8 _48[0x8];           // _48, unknown
};
} // namespace Result
} // namespace Game

#endif
