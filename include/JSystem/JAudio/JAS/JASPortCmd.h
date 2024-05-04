#ifndef _JSYSTEM_JAS_JASPORTCMD_H
#define _JSYSTEM_JAS_JASPORTCMD_H

#include "JSystem/JAudio/JAS/JASPortArgs.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JASPortCmd : JSULink<JASPortCmd> {
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
	    , mCommand(0)
	    , mCommandArgs(0)
	{
	}

	~JASPortCmd();

	bool addPortCmdOnce();
	bool setPortCmd(Command, JASPortArgs*);

	static void execAllCommand();

	// unused/inlined:
	u32 addPortCmdStay();
	u32 cancelPortCmdStay();

	Command mCommand;
	JASPortArgs* mCommandArgs;

	static TPortHead sCommandListOnce;
	static TPortHead sCommandListStay;
};

#endif
