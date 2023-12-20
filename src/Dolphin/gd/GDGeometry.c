#include "Dolphin/gd.h"
#include "Dolphin/os.h"

/**
 * @note Address: 0x800E1C70
 * @note Size: 0x5FC
 */
void GDSetVtxDescv(GXVtxDescList* lists)
{
	u32 v1  = 0; // r31
	u32 v2  = 0; // r30
	u32 v3  = 0; // r29
	u32 v4  = 0; // r28
	u32 v5  = 0; // r27
	u32 v6  = 1; // r26
	u32 v7  = 0; // r25
	u32 v8  = 0; // r24
	u32 v9  = 0; // r23
	u32 v10 = 0; // r22
	u32 v11 = 0; // r21
	u32 v12 = 0; // r20
	u32 v13 = 0; // r19
	u32 v14 = 0; // r18
	u32 v15 = 0; // r17
	u32 v16 = 0; // r16
	u32 v17 = 0; // r15

	while (lists->mAttr != GX_VA_NULL) {
		switch (lists->mAttr) {
		case GX_VA_PNMTXIDX:
			v4 = lists->mType;
			break;
		case GX_VA_TEX0MTXIDX:
			v5 = v5 & ~0x1 | lists->mType;
			break;
		case GX_VA_TEX1MTXIDX:
			v5 = v5 & ~0x2 | lists->mType << 1;
			break;
		case GX_VA_TEX2MTXIDX:
			v5 = v5 & ~0x4 | lists->mType << 2;
			break;
		case GX_VA_TEX3MTXIDX:
			v5 = v5 & ~0x8 | lists->mType << 3;
			break;
		case GX_VA_TEX4MTXIDX:
			v5 = v5 & ~0x10 | lists->mType << 4;
			break;
		case GX_VA_TEX5MTXIDX:
			v5 = v5 & ~0x20 | lists->mType << 5;
			break;
		case GX_VA_TEX6MTXIDX:
			v5 = v5 & ~0x40 | lists->mType << 6;
			break;
		case GX_VA_TEX7MTXIDX:
			v5 = v5 & ~0x80 | lists->mType << 7;
			break;

		case GX_VA_POS:
			v6 = lists->mType;
			break;
		case GX_VA_NRM:
			if (lists->mType != GX_NONE) {
				v1 = 1;
				v7 = lists->mType;
			}
			break;
		case GX_VA_NBT:
			if (lists->mType != GX_NONE) {
				v1 = 2;
				v7 = lists->mType;
			}
			break;
		case GX_VA_CLR0:
			v8 = lists->mType;
			v2 += (v8 != 0);
			break;
		case GX_VA_CLR1:
			v9 = lists->mType;
			v2 += (v9 != 0);
			break;
		case GX_VA_TEX0:
			v10 = lists->mType;
			v3 += (v10 != 0);
			break;
		case GX_VA_TEX1:
			v11 = lists->mType;
			v3 += (v11 != 0);
			break;
		case GX_VA_TEX2:
			v12 = lists->mType;
			v3 += (v12 != 0);
			break;
		case GX_VA_TEX3:
			v13 = lists->mType;
			v3 += (v13 != 0);
			break;
		case GX_VA_TEX4:
			v14 = lists->mType;
			v3 += (v14 != 0);
			break;
		case GX_VA_TEX5:
			v15 = lists->mType;
			v3 += (v15 != 0);
			break;
		case GX_VA_TEX6:
			v16 = lists->mType;
			v3 += (v16 != 0);
			break;
		case GX_VA_TEX7:
			v17 = lists->mType;
			v3 += (v17 != 0);
			break;

		case GX_POS_MTX_ARRAY:
		case GX_NRM_MTX_ARRAY:
		case GX_TEX_MTX_ARRAY:
		case GX_LIGHT_ARRAY:
			break;
		}
		lists++;
	}
	__GDCheckOverflowed(1);
	__GDWriteU8(8);
	__GDCheckOverflowed(1);
	__GDWriteU8(80);
	__GDCheckOverflowed(4);
	__GDWriteU32(v4 | v5 << 1 | v6 << 9 | v7 << 11 | v8 << 13 | v9 << 15);

	__GDCheckOverflowed(1);
	__GDWriteU8(8);
	__GDCheckOverflowed(1);
	__GDWriteU8(96);
	__GDCheckOverflowed(4);
	__GDWriteU32(v10 | v11 << 2 | v12 << 4 | v13 << 6 | v14 << 8 | v15 << 10 | v16 << 12 | v17 << 14);

	__GDCheckOverflowed(1);
	__GDWriteU8(16);
	__GDCheckOverflowed(2);
	__GDWriteU16(0);
	__GDCheckOverflowed(2);
	__GDWriteU16(4104);
	__GDCheckOverflowed(4);
	__GDWriteU32(v2 | v1 << 2 | v3 << 4);
}

/**
 * @note Address: 0x800E226C
 * @note Size: 0x20C
 */
void GDSetArray(GXAttr attr, const void* data, u8 stride)
{
	u32 v1;
	if (attr == GX_VA_NBT) {
		v1 = 1;
	} else {
		v1 = attr - 9;
	}

	__GDCheckOverflowed(1);
	__GDWriteU8(8);
	__GDCheckOverflowed(1);
	__GDWriteU8(v1 + 160);
	__GDCheckOverflowed(4);
	__GDWriteU32(OS_BASE_CACHED + (u32)data);

	__GDCheckOverflowed(1);
	__GDWriteU8(8);
	__GDCheckOverflowed(1);
	__GDWriteU8(v1 + 176);
	__GDCheckOverflowed(4);
	__GDWriteU32(stride);
}

/**
 * @note Address: 0x800E2478
 * @note Size: 0x208
 */
void GDSetArrayRaw(GXAttr attr, u32 data, u8 stride)
{
	u32 v1;
	if (attr == GX_VA_NBT) {
		v1 = 1;
	} else {
		v1 = attr - 9;
	}

	__GDCheckOverflowed(1);
	__GDWriteU8(8);
	__GDCheckOverflowed(1);
	__GDWriteU8(v1 + 160);
	__GDCheckOverflowed(4);
	__GDWriteU32(data);

	__GDCheckOverflowed(1);
	__GDWriteU8(8);
	__GDCheckOverflowed(1);
	__GDWriteU8(v1 + 176);
	__GDCheckOverflowed(4);
	__GDWriteU32(stride);
}
