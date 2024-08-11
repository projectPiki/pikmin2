#ifndef _EBI_TITLE_TCOORDMGR_H
#define _EBI_TITLE_TCOORDMGR_H

#include "types.h"
#include "CNode.h"
#include "Vector2.h"
#include "Parameters.h"
#include "BaseParm.h"

#define TITLE_PIKI_COLOR_COUNT 5
#define TITLE_PIKI_TYPE_MAX    100

struct JKRArchive;

namespace ebi {
namespace title {
struct TCoordMgr : public CNode {
	struct LoadParameters : public Parameters {
		LoadParameters()
		    : Parameters(nullptr, "TTgaLoadParameters")
		    , mOffsX(this, 'tga0', "OffsetX", -320.0f, -500.0f, 500.0f)
		    , mOffsY(this, 'tga1', "OffsetY", -240.0f, -500.0f, 500.0f)
		    , mIntervalX(this, 'tga2', "X間隔", 1.0f, 0.0f, 100.0f)
		    , mIntervalY(this, 'tga3', "Y間隔", 1.0f, 0.0f, 100.0f)
		{
		}

		Parm<f32> mOffsX;     // _FD8
		Parm<f32> mOffsY;     // _1000
		Parm<f32> mIntervalX; // _1028
		Parm<f32> mIntervalY; // _1050
	};

	TCoordMgr();

	virtual ~TCoordMgr() { } // _08 (weak)

	void copyCoordinate(Vector2f*);
	void readCoordinate(JKRArchive*, char*);
	void readCoordinate(Stream&);
	void getDestPos(s32);

	// _00     = VTBL
	// _00-_18 = CNode
	int mPikiCounts[TITLE_PIKI_COLOR_COUNT];                        // _18, unknown
	Vector2f mCoords[TITLE_PIKI_COLOR_COUNT * TITLE_PIKI_TYPE_MAX]; // _2C
	LoadParameters mLoadParms;                                      // _FCC
};
} // namespace title
} // namespace ebi

#endif
