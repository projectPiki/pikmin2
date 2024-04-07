#include "JSystem/JKernel/JKRFileLoader.h"
#include "ctype.h"
#include "string.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

JSUList<JKRFileLoader> JKRFileLoader::sVolumeList;
JKRFileLoader* JKRFileLoader::sCurrentVolume;

/**
 * @note Address: 0x80022E98
 * @note Size: 0x58
 */
JKRFileLoader::JKRFileLoader()
    : JKRDisposer()
    , mFileLoaderLink(this)
    , mVolumeName(nullptr)
    , mMagicWord(0)
    , mMountCount(0)
{
}

/**
 * @note Address: 0x80022EF0
 * @note Size: 0x8C
 * __dt__13JKRFileLoaderFv
 */
JKRFileLoader::~JKRFileLoader()
{
	if (sCurrentVolume == this) {
		sCurrentVolume = nullptr;
	}
}

/**
 * @note Address: 0x80022F7C
 * @note Size: 0x50
 */
void JKRFileLoader::unmount()
{
	if (mMountCount != 0) {
		if (--mMountCount == 0) {
			delete this;
		}
	}
}

/**
 * @note Address: 0x80022FCC
 * @note Size: 0x4C
 * getGlbResource__13JKRFileLoaderFPCc
 */
void* JKRFileLoader::getGlbResource(const char* path)
{
	const char* volumeName[1];
	*volumeName           = path;
	JKRFileLoader* loader = findVolume(volumeName);
	return (loader == nullptr) ? nullptr : loader->getResource(*volumeName);
}

/**
 * @note Address: 0x80023018
 * @note Size: 0x98
 * getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
 */
void* JKRFileLoader::getGlbResource(const char* fileName, JKRFileLoader* loader)
{
	void* resource = nullptr;
	if (loader) {
		resource = loader->getResource(0, fileName);
	} else {
		for (JSULink<JKRFileLoader>* link = sVolumeList.getFirst(); link != nullptr; link = link->getNext()) {
			resource = link->getObject()->getResource(0, fileName);
			if (resource) {
				break;
			}
		}
	}
	return resource;
}

/**
 * @note Address: 0x800230B0
 * @note Size: 0x8C
 */
JKRFileLoader* JKRFileLoader::findVolume(const char** volumeName)
{
	if (*volumeName[0] != '/') {
		return sCurrentVolume;
	}

	char volumeNameBuffer[0x101];
	*volumeName = fetchVolumeName(volumeNameBuffer, ARRAY_SIZE(volumeNameBuffer), *volumeName);

	JSUList<JKRFileLoader>& volumeList = sVolumeList;
	JSUListIterator<JKRFileLoader> iterator;
	for (iterator = volumeList.getFirst(); iterator != volumeList.getEnd(); ++iterator) {
		if (strcmp(volumeNameBuffer, iterator->mVolumeName) == 0) {
			return iterator.getObject();
		}
	}
	return nullptr;
}

/**
 * @note Address: 0x8002313C
 * @note Size: 0xE0
 */
const char* JKRFileLoader::fetchVolumeName(char* nameBuffer, s32 bufferLength, const char* path)
{
	static char rootPath[] = "/";
	if (strcmp(path, "/") == 0) {
		strcpy(nameBuffer, rootPath);
		return rootPath;

	} else {
		path++;

		while (*path != 0 && *path != '/') {
			if (bufferLength > 1) {
				int lower_char;
				char ch = *path;
				if (ch == -1) {
					lower_char = -1;
				} else {
					lower_char = __lower_map[ch & 0xFF];
				}

				*nameBuffer = lower_char;
				nameBuffer++;
				bufferLength--;
			}
			path++;
		}

		nameBuffer[0] = '\0';
		if (path[0] == '\0') {
			path = rootPath;
		}
	}

	return path;
}
