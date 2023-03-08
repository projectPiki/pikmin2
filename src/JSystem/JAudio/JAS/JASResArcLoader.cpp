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
	u32 readResult           = castedArgs->mArchive->readResource(castedArgs->mBuffer, castedArgs->mBufferSize, castedArgs->mID);
	if (castedArgs->mCallback) {
		castedArgs->mCallback(readResult, castedArgs->mCallbackArg);
	}

	if (readResult == 0) {
		if (castedArgs->mQueue) {
			OSSendMessage(castedArgs->mQueue, (void*)RESARCMSG_Error, OS_MESSAGE_BLOCK);
		}
	} else {
		if (castedArgs->mQueue) {
			OSSendMessage(castedArgs->mQueue, (void*)RESARCMSG_Success, OS_MESSAGE_BLOCK);
		}
	}
}

/*
 * --INFO--
 * Address:	800A7740
 * Size:	0000D0
 * loadResource__15JASResArcLoaderFP10JKRArchiveUsPUcUl
 */
int JASResArcLoader::loadResource(JKRArchive* archive, u16 id, u8* buffer, u32 size)
{
	OSMessageQueue queue;
	OSMessage queueBuffer;
	OSMessage receiveBuffer;
	OSInitMessageQueue(&queue, &queueBuffer, OS_MESSAGE_BLOCK);

	CallbackArgs args(id, buffer, size, archive);
	args.mQueue = &queue;

	if (JASDvd::getThreadPointer()->sendCmdMsg(loadResourceCallback, &args, sizeof(CallbackArgs)) == 0) {
		return 0;
	}

	OSReceiveMessage(&queue, &receiveBuffer, OS_MESSAGE_BLOCK);
	return ((int)receiveBuffer != RESARCMSG_Success) ? 0 : size;
}

/*
 * --INFO--
 * Address:	800A7810
 * Size:	00005C
 */
int JASResArcLoader::loadResourceAsync(JKRArchive* archive, u16 id, u8* buffer, u32 size, LoadCallback callback, u32 cbArg)
{
	CallbackArgs args(id, buffer, size, archive);
	args.mCallback    = callback;
	args.mCallbackArg = cbArg;

	return JASDvd::getThreadPointer()->sendCmdMsg(&loadResourceCallback, &args, sizeof(CallbackArgs));
}
