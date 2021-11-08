#ifndef _JSYSTEM_JKRFILELOADER_H
#define _JSYSTEM_JKRFILELOADER_H

#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JSU/JSUPtrLink.h"

struct JKRFileLoader : public JKRDisposer {
	JKRFileLoader();
	virtual ~JKRFileLoader();

	void unmount();
	static void* getGlbResource(char const*);
	static void* getGlbResource(char const*, JKRFileLoader*);
	static JKRArchive* findVolume(char const**);
	static void fetchVolumeName(char*, long, char const*);
};

#endif
