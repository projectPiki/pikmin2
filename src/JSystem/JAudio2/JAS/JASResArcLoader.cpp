#include "Dolphin/os.h"
#include "JSystem/JAS/JASDvd.h"
#include "JSystem/JAS/JASResArcLoader.h"
#include "JSystem/JAS/JASThread.h"
#include "JSystem/JKR/JKRArchive.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	800A7670
 * Size:	000034
 */
size_t JASResArcLoader::getResSize(JKRArchive* archive, unsigned short resourceID)
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
void JASResArcLoader::loadResourceCallback(void* args)
{
	CallbackArgs* castedArgs = static_cast<CallbackArgs*>(args);
	u32 readResult           = castedArgs->m_archive->readResource(castedArgs->_08, castedArgs->_0C, castedArgs->_04);
	if (castedArgs->m_callback != nullptr) {
		castedArgs->m_callback(readResult, castedArgs->_14);
	}
	if (readResult == 0) {
		if (castedArgs->m_queue != nullptr) {
			OSSendMessage(castedArgs->m_queue, (void*)-1, OS_MESSAGE_BLOCKING);
		}
	} else {
		if (castedArgs->m_queue != nullptr) {
			OSSendMessage(castedArgs->m_queue, (void*)0, OS_MESSAGE_BLOCKING);
		}
	}
}

/*
 * --INFO--
 * Address:	800A7740
 * Size:	0000D0
 * loadResource__15JASResArcLoaderFP10JKRArchiveUsPUcUl
 */
int JASResArcLoader::loadResource(JKRArchive* archive, unsigned short p2, unsigned char* p3, unsigned long p4)
{
	OSMessageQueue queue;
	void* queueBuffer[1];
	void* receiveBuffer[1];
	OSInitMessageQueue(&queue, queueBuffer, OS_MESSAGE_BLOCKING);
	CallbackArgs args;

	// TODO: Next line smells like inlining of some sort.
	args.m_queue = nullptr;

	args.m_archive  = archive;
	args._04        = p2;
	args._08        = p3;
	args._0C        = p4;
	args.m_callback = nullptr;
	args._14        = 0;
	args.m_queue    = &queue;
	if (JASDvd::getThreadPointer()->sendCmdMsg(loadResourceCallback, &args, sizeof(CallbackArgs)) == false) {
		return 0;
	}
	OSReceiveMessage(&queue, receiveBuffer, OS_MESSAGE_BLOCKING);
	return p4 & ~(((u32)*receiveBuffer) != 0);
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r6
	  stw       r30, 0x58(r1)
	  mr        r30, r5
	  li        r5, 0x1
	  stw       r29, 0x54(r1)
	  mr        r29, r4
	  addi      r4, r1, 0xC
	  stw       r28, 0x50(r1)
	  mr        r28, r3
	  addi      r3, r1, 0x2C
	  bl        0x47D44
	  li        r3, 0
	  addi      r0, r1, 0x2C
	  stw       r3, 0x28(r1)
	  stw       r28, 0x10(r1)
	  sth       r29, 0x14(r1)
	  stw       r30, 0x18(r1)
	  stw       r31, 0x1C(r1)
	  stw       r3, 0x20(r1)
	  stw       r3, 0x24(r1)
	  stw       r0, 0x28(r1)
	  bl        -0xE18
	  lis       r4, 0x800A
	  addi      r5, r1, 0x10
	  addi      r4, r4, 0x76A4
	  li        r6, 0x1C
	  bl        0x1210
	  cmpwi     r3, 0
	  bne-      .loc_0x8C
	  li        r3, 0
	  b         .loc_0xB0

	.loc_0x8C:
	  addi      r3, r1, 0x2C
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0x47E0C
	  lwz       r3, 0x8(r1)
	  neg       r0, r3
	  or        r0, r0, r3
	  srawi     r0, r0, 0x1F
	  andc      r3, r31, r0

	.loc_0xB0:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A7810
 * Size:	00005C
 */
bool JASResArcLoader::loadResourceAsync(JKRArchive* archive, unsigned short p2, unsigned char* p3, unsigned long p4,
                                        void (*callback)(unsigned long, unsigned long), unsigned long p6)
{
	CallbackArgs args;

	// TODO: Next two lines smells like inlining of some sort. Inlined ctor? Non-async version is different, though...
	args.m_callback = nullptr;
	args._14        = p6;

	args.m_archive  = archive;
	args._04        = p2;
	args._08        = p3;
	args._0C        = p4;
	args.m_queue    = nullptr;
	args.m_callback = callback;
	args._14        = p6;
	JASDvd::getThreadPointer()->sendCmdMsg(&loadResourceCallback, &args, sizeof(CallbackArgs));
}
