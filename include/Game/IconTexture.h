#ifndef _GAME_ICONTEXTURE_H
#define _GAME_ICONTEXTURE_H

#include "JSystem/JKernel/JKRDisposer.h"
#include "types.h"

struct JKRArchive;
struct JUTTexture;
struct ResTIMG;

namespace LoadResource {
struct Node;
} // namespace LoadResource

namespace Game {
namespace IconTexture {
struct Loader : public JKRDisposer {
	Loader();

	virtual ~Loader(); // _00

	void loadResource(char*);
	ResTIMG* getResTIMG(char*);

	LoadResource::Node* mNode; // _18
	JKRArchive* mArchive;      // _1C
};

struct Mgr : public JKRDisposer {
	Mgr();

	virtual ~Mgr(); // _00

	void create(int);
	void setTexture(int, ResTIMG*);
	JUTTexture* getTexture(int);

	JUTTexture* mTextures; // _18
	int mCount;            // _1C
};
} // namespace IconTexture
} // namespace Game

#endif
