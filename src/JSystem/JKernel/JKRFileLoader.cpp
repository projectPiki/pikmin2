#include "JSystem/JKernel/JKRFileLoader.h"
#include "ctype.h"
#include "string.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

JSUList<JKRFileLoader> JKRFileLoader::sVolumeList;
JKRFileLoader* JKRFileLoader::sCurrentVolume;

/*
 * --INFO--
 * Address:	80022E98
 * Size:	000058
 */
JKRFileLoader::JKRFileLoader()
    : JKRDisposer()
    , mFileLoaderLink(this)
    , mVolumeName(nullptr)
    , mMagicWord(0)
    , mMountCount(0)
{
}

/*
 * --INFO--
 * Address:	80022EF0
 * Size:	00008C
 * __dt__13JKRFileLoaderFv
 */
JKRFileLoader::~JKRFileLoader()
{
	if (sCurrentVolume == this) {
		sCurrentVolume = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80022F7C
 * Size:	000050
 */
void JKRFileLoader::unmount()
{
	if (mMountCount != 0) {
		if (--mMountCount == 0) {
			delete this;
		}
	}
}

/*
 * --INFO--
 * Address:	80022FCC
 * Size:	00004C
 * getGlbResource__13JKRFileLoaderFPCc
 */
void* JKRFileLoader::getGlbResource(const char* path)
{
	const char* components[2];
	components[0]         = path;
	JKRFileLoader* loader = findVolume(components);
	return (loader == nullptr) ? nullptr : loader->getResource(components[0]);
}

/*
 * --INFO--
 * Address:	80023018
 * Size:	000098
 * getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
 */
void* JKRFileLoader::getGlbResource(const char* name, JKRFileLoader* loader)
{
	void* resource = nullptr;
	if (loader) {
		resource = loader->getResource(0, name);
	} else {
		for (JSULink<JKRFileLoader>* link = sVolumeList.getFirst(); link != nullptr; link = link->getNext()) {
			resource = link->getObject()->getResource(0, name);
			if (resource) {
				break;
			}
		}
	}
	return resource;
}

/*
 * --INFO--
 * Address:	800230B0
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8002313C
 * Size:	0000E0
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
