#include "Dolphin/trk.h"

static TRKEventQueue gTRKEventQueue;

/*
 * --INFO--
 * Address:	800BB488
 * Size:	000024
 */
void TRKDestructEvent(TRKEvent* event) { TRKReleaseBuffer(event->m_bufferIndex); }

/*
 * --INFO--
 * Address:	800BB4AC
 * Size:	000018
 */
void TRKConstructEvent(TRKEvent* event, int eventType)
{
	event->m_eventType   = eventType;
	event->_04           = 0;
	event->m_bufferIndex = -1;
}

/*
 * --INFO--
 * Address:	800BB4C4
 * Size:	0000E0
 */
TRKResult TRKPostEvent(TRKEvent* event)
{
	int eventIndex;
	TRKResult result = TRKSuccess;
	TRKAcquireMutex(&gTRKEventQueue);
	if (gTRKEventQueue._04 == 2) {
		result = 0x100;
	} else {
		eventIndex = (gTRKEventQueue.m_nextSlotToOverwrite + gTRKEventQueue._04) >> 0x1F;
		eventIndex = (gTRKEventQueue.m_nextSlotToOverwrite + gTRKEventQueue._04 & 1 ^ -eventIndex) + eventIndex;
		TRK_memcpy(&gTRKEventQueue.m_events[eventIndex], event, sizeof(TRKEvent));
		gTRKEventQueue.m_events[eventIndex]._04 = gTRKEventQueue._24;
		gTRKEventQueue._24 += 1;
		if (gTRKEventQueue._24 < 0x100) {
			gTRKEventQueue._24 = TRKError100;
		}
		gTRKEventQueue._04 += 1;
	}
	TRKReleaseMutex(&gTRKEventQueue);
	return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r4, 0x2880
	  bl        0x2824
	  lis       r3, 0x804F
	  addi      r30, r3, 0x2880
	  lwz       r3, 0x4(r30)
	  cmpwi     r3, 0x2
	  bne-      .loc_0x48
	  li        r31, 0x100
	  b         .loc_0xB4

	.loc_0x48:
	  lwz       r0, 0x8(r30)
	  mr        r4, r29
	  li        r5, 0xC
	  add       r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  rlwinm    r0,r0,0,31,31
	  xor       r0, r0, r3
	  sub       r0, r0, r3
	  mulli     r29, r0, 0xC
	  add       r3, r30, r29
	  addi      r3, r3, 0xC
	  bl        -0xB8408
	  lis       r3, 0x804F
	  addi      r4, r3, 0x2880
	  lwz       r0, 0x24(r4)
	  add       r3, r4, r29
	  stw       r0, 0x10(r3)
	  lwz       r3, 0x24(r4)
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0x100
	  stw       r0, 0x24(r4)
	  bge-      .loc_0xA8
	  li        r0, 0x100
	  stw       r0, 0x24(r4)

	.loc_0xA8:
	  lwz       r3, 0x4(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x4(r30)

	.loc_0xB4:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x2880
	  bl        0x2788
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BB5A4
 * Size:	0000B4
 */
BOOL TRKGetNextEvent(TRKEvent* event)
{
	BOOL result = FALSE;
	TRKAcquireMutex(&gTRKEventQueue);
	if (0 < gTRKEventQueue._04) {
		TRK_memcpy(event, &gTRKEventQueue.m_events[gTRKEventQueue.m_nextSlotToOverwrite], sizeof(TRKEvent));
		gTRKEventQueue.m_nextSlotToOverwrite++;
		gTRKEventQueue._04--;
		if (gTRKEventQueue.m_nextSlotToOverwrite == 2) {
			gTRKEventQueue.m_nextSlotToOverwrite = 0;
		}
		result = TRUE;
	}
	TRKReleaseMutex(&gTRKEventQueue);
	return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r4, 0x2880
	  bl        0x2744
	  lis       r3, 0x804F
	  addi      r31, r3, 0x2880
	  lwz       r0, 0x4(r31)
	  cmpwi     r0, 0
	  ble-      .loc_0x88
	  lwz       r0, 0x8(r31)
	  mr        r3, r29
	  li        r5, 0xC
	  mulli     r0, r0, 0xC
	  add       r4, r31, r0
	  addi      r4, r4, 0xC
	  bl        -0xB84CC
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  addi      r0, r3, 0x1
	  subi      r3, r4, 0x1
	  stw       r0, 0x8(r31)
	  cmpwi     r0, 0x2
	  stw       r3, 0x4(r31)
	  bne-      .loc_0x84
	  li        r0, 0
	  stw       r0, 0x8(r31)

	.loc_0x84:
	  li        r30, 0x1

	.loc_0x88:
	  lis       r3, 0x804F
	  addi      r3, r3, 0x2880
	  bl        0x26D4
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void TRKCopyEvent(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB658
 * Size:	000058
 */
TRKResult TRKInitializeEventQueue()
{
	TRKInitializeMutex(&gTRKEventQueue);
	TRKAcquireMutex(&gTRKEventQueue);
	gTRKEventQueue._04                   = 0;
	gTRKEventQueue.m_nextSlotToOverwrite = 0;
	gTRKEventQueue._24                   = 0x100;
	TRKReleaseMutex(&gTRKEventQueue);
	return TRKSuccess;
}
