#ifndef _JSYSTEM_JAS_JASPORTCMD_H
#define _JSYSTEM_JAS_JASPORTCMD_H

#include "JSystem/JAudio/JAS/JASPortArgs.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JASPortCmd : public JSULink<JASPortCmd> {
	typedef void (*Command)(JASPortArgs*);

	struct TPortHead : JSUList<JASPortCmd> {
		inline TPortHead()
		    : JSUList<JASPortCmd>()
		{
		}

		~TPortHead() { }

		void execCommandOnce();
		void execCommandStay();
	};

	JASPortCmd()
	    : JSULink<JASPortCmd>(this)
	    , mCommand(nullptr)
	    , mCommandArgs(nullptr)
	{
	}

	~JASPortCmd() { }

	bool addPortCmdOnce();
	bool setPortCmd(Command, JASPortArgs*);

	static void execAllCommand();

	// unused/inlined:
	u32 addPortCmdStay();
	u32 cancelPortCmdStay();

	static TPortHead sCommandListOnce;
	static TPortHead sCommandListStay;

	// _00-_10 = JSULink
	Command mCommand;          // _10
	JASPortArgs* mCommandArgs; // _14
};

#endif
