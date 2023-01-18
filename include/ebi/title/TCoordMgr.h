#ifndef _EBI_TITLE_TCOORDMGR_H
#define _EBI_TITLE_TCOORDMGR_H

#include "types.h"
#include "CNode.h"
#include "Vector2.h"
#include "Parameters.h"
#include "BaseParm.h"

#define TITLE_PIKI_COUNT    5
#define TITLE_PIKI_TYPE_MAX 100

struct JKRArchive;

namespace ebi {
namespace title {
struct TCoordMgr : public CNode {
	struct LoadParameters : public Parameters {
		LoadParameters()
		    : Parameters(nullptr, "TTgaLoadParameters")
		    , m_offsX(this, 'tga0', "OffsetX", -320.0f, -500.0f, 500.0f)
		    , m_offsY(this, 'tga1', "OffsetY", -240.0f, -500.0f, 500.0f)
		    , m_intervalX(this, 'tga2', "XŠÔŠu", 1.0f, 0.0f, 100.0f)
		    , m_intervalY(this, 'tga3', "YŠÔŠu\0\0", 1.0f, 0.0f, 100.0f)
		{
		}

		Parm<f32> m_offsX;     // _FD8
		Parm<f32> m_offsY;     // _1000
		Parm<f32> m_intervalX; // _1028
		Parm<f32> m_intervalY; // _1050
	};

	TCoordMgr();

	virtual ~TCoordMgr(); // _08 (weak)

	void copyCoordinate(Vector2f*);
	void readCoordinate(JKRArchive*, char*);
	void readCoordinate(Stream&);
	void getDestPos(long);

	// _00     = VTBL
	// _00-_18 = CNode
	int m_pikiCounts[TITLE_PIKI_COUNT];                        // _18, unknown
	Vector2f m_coords[TITLE_PIKI_COUNT * TITLE_PIKI_TYPE_MAX]; // _2C
	LoadParameters m_loadParms;                                // _FCC
};
} // namespace title
} // namespace ebi

#endif
