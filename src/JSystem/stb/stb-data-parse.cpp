#include "types.h"
#include "JStudio/stb.h"
#include "JSystem/JGadget/binary.h"

namespace JStudio {
namespace stb {
	namespace data {

		/*
		 * --INFO--
		 * Address:	........
		 * Size:	000050
		 */
		void toString_block(char*, unsigned long)
		{
			// UNUSED FUNCTION
		}

		/*
		 * --INFO--
		 * Address:	8000893C
		 * Size:	00004C
		 * Matching!
		 */
		void TParse_TSequence::getData(TParse_TSequence::TData* data) const
		{

			data->content = 0;
			data->next    = 0;
			int* filedata = (int*)stbData;
			u32 flag      = *(int*)stbData;
			data->type    = flag >> 0x18;
			data->param   = flag & 0xffffff;
			if (flag >> 0x18 == 0)
				return;
			int* next = filedata + 1;
			if (flag >> 0x18 <= 0x7f) {
				data->next = next;
				return;
			}
			data->content = next;
			data->next    = (u8*)next + (flag & 0xffffff);
		}

		/*
		 * --INFO--
		 * Address:	80008988
		 * Size:	000078
		 */
		void TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
		{
			u32 block[1];
			u16* parse = JGadget::binary::parseVariableUInt_16_32_following(
			    stbData, block, (u32*)data, 0);
			data->param = block[0];
			if (!block[0]) {
				data->content = nullptr;
				data->next    = parse;
			} else {
				data->content = parse;
				data->next    = parse + ((block[0] + 3) >> 1 & ~1);
			}
		}

		/*
		 * --INFO--
		 * Address:	80008A00
		 * Size:	000080
		 */
		void TParse_TParagraph_data::getData(
		    TParse_TParagraph_data::TData* data) const
		{
			void* filedata  = (void*)stbData;
			data->dataSize  = 0;
			data->_08       = 0;
			data->fileCount = 0;
			data->_10       = 0;
			if (filedata == nullptr)
				return;
			bool set     = *(bool*)filedata;
			data->status = set & 0xf7;
			if (!set)
				return;
			short* set2 = (short*)(filedata + 1);
			int set3    = 1;
			if (set & 8) {
				set3 = *set2;
				set2 = (short*)(filedata + 2);
			}
			data->_08       = set3;
			data->fileCount = set2;
			if (!(set & 7))
				return;
			data->dataSize = (int)(&gauDataSize_TEParagraph_data)[set & 7];
			data->_10      = (u8*)(set2 + data->dataSize * set3);
			/*
			.loc_0x0:
			  li        r0, 0
			  lwz       r3, 0x0(r3)
			  stw       r0, 0x4(r4)
			  cmplwi    r3, 0
			  stw       r0, 0x8(r4)
			  stw       r0, 0xC(r4)
			  stw       r0, 0x10(r4)
			  beqlr-
			  lbz       r6, 0x0(r3)
			  rlwinm    r0,r6,0,29,27
			  cmplwi    r6, 0
			  stb       r0, 0x0(r4)
			  beqlr-
			  rlwinm.   r0,r6,0,28,28
			  addi      r5, r3, 0x1
			  li        r7, 0x1
			  beq-      .loc_0x4C
			  lbz       r7, 0x0(r5)
			  addi      r5, r5, 0x1

			.loc_0x4C:
			  stw       r7, 0x8(r4)
			  rlwinm.   r0,r6,0,29,31
			  stw       r5, 0xC(r4)
			  beqlr-
			  lis       r3, 0x8047
			  rlwinm    r0,r0,2,22,29
			  addi      r3, r3, 0x3460
			  lwzx      r3, r3, r0
			  mullw     r0, r3, r7
			  stw       r3, 0x4(r4)
			  add       r0, r5, r0
			  stw       r0, 0x10(r4)
			  blr
			*/
		}

	} // namespace data
} // namespace stb
} // namespace JStudio
