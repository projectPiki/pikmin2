#include "types.h"
#include "JStudio/stb.h"
#include "JSystem/JGadget/binary.h"

namespace JStudio::stb::data {

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
 */
void TParse_TSequence::getData(TParse_TSequence::TData* data) const
{
	int* filedata = (int*)stbData;
	data->content = 0;
	data->next = 0;
	int flag = *(int*)filedata;
	data->type = flag >> 0x18;
	data->param = flag & 0xffffff;
	if(flag >> 0x18 == 0)
		return;
	filedata++;
	if(flag >> 0x18 < 0x80) {
		data->next = filedata;
		return;
	}
	data->content = filedata;
	data->next = filedata + (flag & 0xffffff);
	/*
	.loc_0x0:
	  li        r0, 0
	  lwz       r3, 0x0(r3)
	  stw       r0, 0x8(r4)
	  stw       r0, 0xC(r4)
	  lwz       r5, 0x0(r3)
	  rlwinm.   r0,r5,8,24,31
	  rlwinm    r5,r5,0,8,31
	  stb       r0, 0x0(r4)
	  stw       r5, 0x4(r4)
	  beqlr-
	  cmplwi    r0, 0x7F
	  addi      r0, r3, 0x4
	  bgt-      .loc_0x3C
	  stw       r0, 0xC(r4)
	  blr

	.loc_0x3C:
	  stw       r0, 0x8(r4)
	  add       r0, r0, r5
	  stw       r0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80008988
 * Size:	000078
 */
void TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
{
	u32* block;
	void* parse = JGadget::binary::parseVariableUInt_16_32_following(stbData, block, (u32*)data, 0);
	data->param = block[1];
	if(!block[0]) {
		data->content = nullptr;
		data->next = parse;
	}
	else {
		data->content = parse;
		data->next = parse + (block[0] + 3 & 0xfffffffc);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r3, 0x0(r3)
	  li        r6, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r5, r31
	  addi      r4, r1, 0x8
	  bl        0x1E77C
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x4(r31)
	  lwz       r0, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4C
	  li        r0, 0
	  stw       r0, 0x8(r31)
	  stw       r3, 0xC(r31)
	  b         .loc_0x64

	.loc_0x4C:
	  stw       r3, 0x8(r31)
	  lwz       r4, 0x8(r1)
	  addi      r0, r4, 0x3
	  rlwinm    r0,r0,0,0,29
	  add       r0, r3, r0
	  stw       r0, 0xC(r31)

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80008A00
 * Size:	000080
 */
void TParse_TParagraph_data::getData(TParse_TParagraph_data::TData* data) const
{
	void* filedata = (void*)stbData;
	data->dataSize = 0;
	data->_08 = 0;
	data->fileCount = 0;
	data->_10 = 0;
	if(filedata == nullptr) return;
	bool set = *(bool*)filedata;
	data->status = set & 0xf7;
	if(!set) return;
	short* set2 = (short*)(filedata + 1);
	int set3 = 1;
	if(set & 8) {
		set3 = *set2;
		set2 = (short*)(filedata + 2);
	}
	data->_08 = set3;
	data->fileCount = set2;
	if(!(set & 7)) return;
	data->dataSize = (int)(&gauDataSize_TEParagraph_data)[set & 7];
	data->_10 = (u8*)(set2 + data->dataSize * set3);
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

} // namespace JStudio::stb::data
