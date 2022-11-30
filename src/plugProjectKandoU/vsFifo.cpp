#include "VSFifo.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTGraphFifo.h"

u8 VSFifo::mGpStatus[5];

/*
 * --INFO--
 * Address:	8023D64C
 * Size:	000090
 */
VSFifo::VSFifo(size_t size)
{
	m_size = OSRoundUp32B(size);

	if (JKRHeap::sCurrentHeap) {
		m_fifo = (GXFifoObj*)JKRHeap::sCurrentHeap->alloc(m_size + GX_FIFO_OBJ_SIZE, 0x20);
	}

	m_base = &m_fifo->_20[0x60];
	GXInitFifoBase(m_fifo, m_base, m_size);
	GXInitFifoPtrs(m_fifo, m_base, m_base);
}

/*
 * --INFO--
 * Address:	8023D6DC
 * Size:	000048
 */
VSFifo::~VSFifo() { }

/*
 * --INFO--
 * Address:	8023D724
 * Size:	00008C
 */
void VSFifo::becomeCurrent()
{
	GXSaveCPUFifo(JUTGraphFifo::sCurrentFifo->m_fifo);

	do {
		GXGetGPStatus(&JUTGraphFifo::mGpStatus[0], &JUTGraphFifo::mGpStatus[1], &JUTGraphFifo::mGpStatus[2], &JUTGraphFifo::mGpStatus[3],
		              &JUTGraphFifo::mGpStatus[4]);
	} while (!JUTGraphFifo::mGpStatus[2]);

	GXInitFifoPtrs(m_fifo, m_base, m_base);
	GXSetCPUFifo(m_fifo);
}
