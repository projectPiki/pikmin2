#ifndef _JSYSTEM_JKR_JKRFILELOADER_H
#define _JSYSTEM_JKR_JKRFILELOADER_H

#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"

struct JKRArchive;
struct JKRFileFinder;
struct JKRFileLoader : public JKRDisposer {
	JKRFileLoader();

	virtual ~JKRFileLoader();                                                       // _00
	virtual void unmount();                                                         // _04
	virtual bool becomeCurrent(const char*)                                    = 0; // _08
	virtual void* getResource(const char*)                                     = 0; // _0C
	virtual void* getResource(unsigned long, const char*)                      = 0; // _10
	virtual u32 readResource(void*, unsigned long, const char*)                = 0; // _14
	virtual u32 readResource(void*, unsigned long, unsigned long, const char*) = 0; // _18
	virtual void removeResourceAll()                                           = 0; // _1C
	virtual bool removeResource(void*)                                         = 0; // _20
	virtual bool detachResource(void*)                                         = 0; // _24
	virtual long getResSize(const void*) const                                 = 0; // _28
	virtual u16 countFile(const char*) const                                   = 0; // _2C
	virtual JKRFileFinder* getFirstFile(const char*) const                     = 0; // _30

	// +4 bytes vtable padding

	static void* getGlbResource(char const*);
	static void* getGlbResource(char const*, JKRFileLoader*);
	static JKRFileLoader* findVolume(char const**);
	static void fetchVolumeName(char*, long, char const*);

	JSULink<JKRFileLoader> _18; // _18
	char* _28;                  // _28
	u32 m_magicWord;            // _2C
	u8 _30;                     // _30
	u32 : 0;
	u32 m_mountCount; // _34

	static JKRFileLoader* sCurrentVolume;
	static JSUList<JKRFileLoader> sVolumeList;
};

#endif
