#include "Dolphin/trk.h"

/*
 * --INFO--
 * Address:	800BB848
 * Size:	000044
 */
TRKResult TRKMessageSend(TRK_Msg* msg)
{
	u32 write_val = TRKWriteUARTN(&msg->m_msg, msg->m_msgLength);
	MWTRACE(1, "MessageSend : cc_write returned %ld\n", write_val);
	return EXIT_SUCCESS;
}
