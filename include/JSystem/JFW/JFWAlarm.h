#ifndef _JSYSTEM_JFW_JFWALARM_H
#define _JSYSTEM_JFW_JFWALARM_H

#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

struct JFWAlarm : OSAlarm {
	JFWAlarm() : mLink(this) {}
	~JFWAlarm() {};
	void createAlarm() { OSCreateAlarm(this); }
    void cancelAlarm() { OSCancelAlarm(this); }
    void removeLink() { sList.remove(&mLink); }
    void appendLink() { sList.append(&mLink); }
    OSThread *getThread() const { return mThread; }
    void setThread(OSThread *thread) { mThread = thread; }

	static JSUList<JFWAlarm> sList;
	OSThread *mThread;
    JSULink<JFWAlarm> mLink;
};

#endif
