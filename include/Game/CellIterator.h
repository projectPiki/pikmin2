#ifndef _GAME_CELLITERATOR_H
#define _GAME_CELLITERATOR_H

namespace Sys {
struct Sphere;
}

namespace Game {
struct CellIteratorArg {
	CellIteratorArg();
	CellIteratorArg(Sys::Sphere&);
};

struct CellIterator {
	CellIterator(Game::CellIteratorArg&);

	void calcExtent();
	void dump();
	void find();
	void first();
	void getCellObject();
	void isDone();
	void next();
	// void operator*();
	void satisfy();
	void step();
};
}; // namespace Game

#endif
