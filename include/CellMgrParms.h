#ifndef _CELLMGRPARMS_H
#define _CELLMGRPARMS_H

#include "Parameters.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "BaseParm.h"

struct _CellParms {
	inline _CellParms(Parameters* parameters)
	    : mUseBuffer(parameters, 'p000', "バッファを使う", false, false, true)    // 'use a buffer'
	    , mMagicNumber(parameters, 'p001', "マジックナンバー", true, false, true) // 'magic number'
	    , mHalfG(parameters, 'p002', "G-Half", false, false, true)
	    , mUpdateMgr(parameters, 'p003', "UpdateMgr", false, false, true)
	{
	}

	Parm<bool> mUseBuffer;   // _24
	Parm<bool> mMagicNumber; // _40
	Parm<bool> mHalfG;       // _5C
	Parm<bool> mUpdateMgr;   // _78
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
