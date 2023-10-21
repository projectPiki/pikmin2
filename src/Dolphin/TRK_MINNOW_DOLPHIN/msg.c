#include "PowerPC_EABI_Support/MetroTRK/trk.h"

/*
 * --INFO--
 * Address:	800BB848
 * Size:	000044
 */
DSError TRKMessageSend(MessageBuffer* msg)
{
	DSError writeErr = TRKWriteUARTN(&msg->data, msg->length);
	MWTRACE(1, "MessageSend : cc_write returned %ld\n", writeErr);
	return DS_NoError;
}
