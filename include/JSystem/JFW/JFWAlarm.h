#ifndef _JSYSTEM_JFW_JFWALARM_H
#define _JSYSTEM_JFW_JFWALARM_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JFWAlarm {
	~JFWAlarm();

	static JSUList<OSAlarm> sList;
};

#endif
