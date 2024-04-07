#ifndef _JSYSTEM_JKR_JKRFILELOADER_H
#define _JSYSTEM_JKR_JKRFILELOADER_H

#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"

struct JKRArchive;
struct JKRFileFinder;
struct ResTIMG;
struct JKRFileLoader : public JKRDisposer {
	JKRFileLoader();

	virtual ~JKRFileLoader();                                                                          // _08
	virtual void unmount();                                                                            // _0C
	virtual bool becomeCurrent(const char* path)                                                  = 0; // _10
	virtual void* getResource(const char* path)                                                   = 0; // _14
	virtual void* getResource(u32 type, const char* fileName)                                     = 0; // _18
	virtual size_t readResource(void* resourceBuffer, u32 bufferSize, const char* path)           = 0; // _1C
	virtual size_t readResource(void* resourceBuffer, u32 bufferSize, u32 type, const char* name) = 0; // _20
	virtual void removeResourceAll()                                                              = 0; // _24
	virtual bool removeResource(void* resource)                                                   = 0; // _28
	virtual bool detachResource(void* resource)                                                   = 0; // _2C
	virtual s32 getResSize(const void* resource) const                                            = 0; // _30
	virtual u32 countFile(const char* path) const                                                 = 0; // _34
	virtual JKRFileFinder* getFirstFile(const char* path) const                                   = 0; // _38

	static void* getGlbResource(const char* path);
	static void* getGlbResource(const char* fileName, JKRFileLoader* loader);
	static JKRFileLoader* findVolume(const char** volumeName);
	static const char* fetchVolumeName(char* nameBuffer, s32 bufferLen, const char* path);

	bool isMounted() const { return mIsMounted; }
	u32 getVolumeType() const { return mMagicWord; }
	static JSUList<JKRFileLoader>& getVolumeList() { return sVolumeList; }

	static JKRFileLoader* sCurrentVolume;
	static JSUList<JKRFileLoader> sVolumeList;

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	JSULink<JKRFileLoader> mFileLoaderLink; // _18
	const char* mVolumeName;                // _28
	u32 mMagicWord;                         // _2C
	bool mIsMounted;                        // _30
	u32 mMountCount;                        // _34
};

// is the built-in ResTIMG cast right? either way, it makes CarryInfoMgr::loadResource() match
inline void* JKRGetResource(char const* name, JKRFileLoader* file) { return JKRFileLoader::getGlbResource(name, file); }
inline ResTIMG* JKRGetImageResource(char const* name) { return (ResTIMG*)JKRFileLoader::getGlbResource(name); }
inline ResTIMG* JKRGetImageResource(char const* name, JKRFileLoader* arc) { return (ResTIMG*)JKRFileLoader::getGlbResource(name, arc); }

#endif
