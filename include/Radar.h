#ifndef _RADAR_H
#define _RADAR_H

#include "Vector3.h"

namespace Game {
struct TPositionObject;
}

struct Radar {
	typedef int cRadarType;

	struct Mgr {
		Mgr();

		void attach(Game::TPositionObject*, Radar::cRadarType, unsigned long);
		void bornFuefuki();
		void calcNearestTreasure(Vector3f&, float, Vector3f&, float&);
		void clear();
		void detach(Game::TPositionObject*);
		void dieFuefuki();
		void entry(Game::TPositionObject*, Radar::cRadarType, unsigned long);
		void exit(Game::TPositionObject*);
		void fuefuki();
		void getNumOtakaraItems();
		void ogDummpyInit();
	};

	struct Point {
		Point();
		~Point();

		void getPosition();
	};
};

#endif