#ifndef _GAME_RESULT_H
#define _GAME_RESULT_H

#include "types.h"
#include "Game/DNode.h"
#include "JSystem/JUT/JUTTexture.h"

namespace Game {
namespace Result {
struct TNode : public DNode {
	TNode();

	virtual ~TNode(); // _00

	void setTNode(unsigned long long, JUTTexture*, int, int, int);
	void setTNode(unsigned long long, JUTTexture*, int, int, int, int);

	static u64 convertByMorimun(int);
};
} // namespace Result
} // namespace Game

#endif
