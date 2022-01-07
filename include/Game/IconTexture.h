#ifndef _GAME_ICONTEXTURE_H
#define _GAME_ICONTEXTURE_H

#include "JSystem/JKR/JKRDisposer.h"
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

	LoadResource::Node* m_node; // _18
	JKRArchive* m_archive;      // _1C
};

struct Mgr : public JKRDisposer {
	Mgr();

	virtual ~Mgr(); // _00

	void create(int);
	void setTexture(int, ResTIMG*);
	JUTTexture* getTexture(int);

	JUTTexture* m_textures; // _18
	int m_count;            // _1C
};
} // namespace IconTexture
} // namespace Game

#endif
