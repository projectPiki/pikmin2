#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASResArcLoader.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800A7670
 * Size:	000034
 */
size_t JASResArcLoader::getResSize(JKRArchive* archive, u16 resourceID)
{
	JKRArchive::SDIFileEntry* file = archive->findIdResource(resourceID);
	if (file == nullptr) {
		return 0;
	}
	return file->getSize();
}

/*
 * --INFO--
 * Address:	800A76A4
 * Size:	00009C
 */
static void JASResArcLoader::loadResourceCallback(void* args)
{
	CallbackArgs* castedArgs = static_cast<CallbackArgs*>(args);
	u32 readResult           = castedArgs->mArchive->readResource(castedArgs->_08, castedArgs->_0C, castedArgs->_04);
	if (castedArgs->mCallback) {
		castedArgs->mCallback(readResult, castedArgs->_14);
	}
	if (readResult == 0) {
		if (castedArgs->mQueue) {
			OSSendMessage(castedArgs->mQueue, (void*)-1, OS_MESSAGE_BLOCK);
		}
	} else {
		if (castedArgs->mQueue) {
			OSSendMessage(castedArgs->mQueue, (void*)0, OS_MESSAGE_BLOCK);
		}
	}
}

/*
 * --INFO--
 * Address:	800A7740
 * Size:	0000D0
 * loadResource__15JASResArcLoaderFP10JKRArchiveUsPUcUl
 */
int JASResArcLoader::loadResource(JKRArchive* archive, u16 p2, u8* p3, u32 p4)
{
	OSMessageQueue queue;
	OSMessage queueBuffer;
	OSMessage receiveBuffer;
	OSInitMessageQueue(&queue, &queueBuffer, OS_MESSAGE_BLOCK);
	CallbackArgs args(p2, p3, p4, archive);
	args.mQueue = &queue;

	if (JASDvd::getThreadPointer()->sendCmdMsg(loadResourceCallback, &args, sizeof(CallbackArgs)) == false) {
		return 0;
	}

	OSReceiveMessage(&queue, &receiveBuffer, OS_MESSAGE_BLOCK);
	return (receiveBuffer) ? 0 : p4;
}

/*
 * --INFO--
 * Address:	800A7810
 * Size:	00005C
 */
int JASResArcLoader::loadResourceAsync(JKRArchive* archive, u16 p2, u8* p3, u32 p4, void (*callback)(u32, u32), u32 p6)
{
	CallbackArgs args(p2, p3, p4, archive);
	args.mCallback = callback;
	args._14       = p6;
	return JASDvd::getThreadPointer()->sendCmdMsg(&loadResourceCallback, &args, sizeof(CallbackArgs));
}
