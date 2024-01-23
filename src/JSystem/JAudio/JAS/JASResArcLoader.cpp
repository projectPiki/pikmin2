#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASResArcLoader.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JKernel/JKRArchive.h"

/**
 * @note Address: 0x800A7670
 * @note Size: 0x34
 */
size_t JASResArcLoader::getResSize(JKRArchive* archive, u16 resourceID)
{
	JKRArchive::SDIFileEntry* file = archive->findIdResource(resourceID);
	if (file == nullptr) {
		return 0;
	}
	return file->getSize();
}

/**
 * @note Address: 0x800A76A4
 * @note Size: 0x9C
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

/**
 * @note Address: 0x800A7740
 * @note Size: 0xD0
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

/**
 * @note Address: 0x800A7810
 * @note Size: 0x5C
 */
int JASResArcLoader::loadResourceAsync(JKRArchive* archive, u16 id, u8* buffer, u32 size, LoadCallback callback, u32 cbArg)
{
	CallbackArgs args(id, buffer, size, archive);
	args.mCallback    = callback;
	args.mCallbackArg = cbArg;

	return JASDvd::getThreadPointer()->sendCmdMsg(&loadResourceCallback, &args, sizeof(CallbackArgs));
}
