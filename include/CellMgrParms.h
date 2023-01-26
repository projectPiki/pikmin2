#ifndef _CELLMGRPARMS_H
#define _CELLMGRPARMS_H

#include "Parameters.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "BaseParm.h"

struct _CellParms {
	inline _CellParms(Parameters* parameters)
	    : mP000(parameters, 'p000', "バッファを使う", false, false, true)  // 'use a buffer'
	    , mP001(parameters, 'p001', "マジックナンバー", true, false, true) // 'magic number'
	    , mP002(parameters, 'p002', "G-Half", false, false, true)
	    , mP003(parameters, 'p003', "UpdateMgr", false, false, true)
	{
	}

	Parm<bool> mP000; // _24, use a buffer?
	Parm<bool> mP001; // _40, magic number?
	Parm<bool> mP002; // _5C, G-Half?
	Parm<bool> mP003; // _78, UpdateMgr?
};

struct CellMgrParms : public Parameters, public JKRDisposer {
	CellMgrParms();

	static void globalInstance();

	inline static CellMgrParms* getInstance() { return mInstance; }

	static CellMgrParms* mInstance;

	// _00-_0C = Parameters
	// _0C-_24 = JKRDisposer
	// _94     = VTBL
	_CellParms mCellParms; // _24

	virtual ~CellMgrParms(); // _08
};

#endif
