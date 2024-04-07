#ifndef _JSYSTEM_JKR_JKRFILECACHE_H
#define _JSYSTEM_JKR_JKRFILECACHE_H

#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JSupport/JSUList.h"

struct JKRArchive;
struct JKRFileCache : public JKRFileLoader {
	struct CCacheBlock : public JSULink<CCacheBlock> {
		CCacheBlock(u32 fileID, u32 size, const void* resource);

		// _00-_10 = JSULink<CCacheBlock>
		int mRefCount;        // _10
		u32 mFileID;          // _14
		u32 mFileSize;        // _18
		const void* mFilePtr; // _1C
	};

	JKRFileCache(const char* path, const char* volume);

	virtual ~JKRFileCache();                                                                       // _08
	virtual bool becomeCurrent(const char* path);                                                  // _10
	virtual void* getResource(const char* path);                                                   // _14
	virtual void* getResource(u32 type, const char* fileName);                                     // _18
	virtual size_t readResource(void* resourceBuffer, u32 bufferSize, const char* path);           // _1C
	virtual size_t readResource(void* resourceBuffer, u32 bufferSize, u32 type, const char* name); // _20
	virtual void removeResourceAll();                                                              // _24
	virtual bool removeResource(void* resource);                                                   // _28
	virtual bool detachResource(void* resource);                                                   // _2C
	virtual s32 getResSize(const void* resource) const;                                            // _30
	virtual u32 countFile(const char* path) const;                                                 // _34
	virtual JKRFileFinder* getFirstFile(const char* path) const;                                   // _38
	virtual void* getFsResource(const char* path) { return getResource(path); }                    // _3C (weak)
	virtual void* getNameResource(u32 type, const char* name) { return getResource(type, name); }  // _40 (weak)
	virtual s32 readFsResource(void* resourceBuffer, u32 bufferSize, const char* path)             // _44 (weak)
	{
		return readResource(resourceBuffer, bufferSize, path);
	}
	virtual s32 readNameResource(void* resourceBuffer, u32 bufferSize, u32 type, const char* name) // _48 (weak)
	{
		return readResource(resourceBuffer, bufferSize, type, name);
	}

	CCacheBlock* findCacheBlock(const void* resource) const;
	CCacheBlock* findCacheBlock(u32 id) const;
	bool findFile(char* dirPath, const char* fileName) const;
	char* getDvdPathName(const char* path) const;
	void convStrLower(char* str) const;

	static JKRFileCache* mount(char const* path, JKRHeap* heap, const char* volume);

	// unused/inlined:
	void* getRelResource(const char*);
	u32 readRelResource(void* p1, u32 p2, const char* p3);

	// _00     = VTBL
	// _00-_38 = JKRFileLoader
	JKRHeap* mParentHeap;                 // _38
	JSUList<CCacheBlock> mCacheBlockList; // _3C
	char* mRootPath;                      // _48
	char* mDirectoryPath;                 // _4C
	char* mVolumePath;                    // _50
};

inline JKRFileCache* JKRMountDvdDrive(const char* path, JKRHeap* heap, const char* volume)
{
	return JKRFileCache::mount(path, heap, volume);
}

#endif
