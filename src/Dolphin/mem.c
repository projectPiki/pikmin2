

/*
 * --INFO--
 * Address:	800C6FE8
 * Size:	00004C
 */

#include "types.h"

int memcmp(const void* __s1, const void* __s2, size_t __n)
{
	const u8* val1 = ((const u8*)__s1 - 1);
	const u8* val2 = ((const u8*)__s2 - 1);
	size_t size    = __n + 1;

	while (--size > 0) {
		if (*++val1 != *++val2) {
			return (val1[0]) < (val2[0]) ? -1 : 1;
		}
	}

	return 0;
}

/*
 * --INFO--
 * Address:	800C7034
 * Size:	00002C
 */

#ifdef NON_MATCHING
// Reordering differences
// https://decomp.me/scratch/dQBzD
unsigned char* __memrchr(unsigned char* src_void, unsigned char c,
                         size_t length)
{
	length++;
	unsigned char* src = &src_void[length];
	while (--length > 0) {
		if (c == *src)
			return src;
		src--;
	}
	return 0;
}
#else
asm unsigned char* __memrchr(unsigned char* src_void, unsigned char c,
                             size_t length)
{
	// clang-format off
nofralloc
	clrlwi r4, r4, 0x18
	add r3, r3, r5
	addi r5, r5, 1
	b lbl_800C7050
lbl_800C7044:
	lbzu r0, -1(r3)
	cmplw r0, r4
	beqlr 
lbl_800C7050:
	addic. r5, r5, -1
	bne lbl_800C7044
	li r3, 0
	blr
	// clang-format on
}
#endif

/*
 * --INFO--
 * Address:	800C7060
 * Size:	00002C
 */
#ifdef NON_MATCHING
// https://decomp.me/scratch/hTmGp
// Matches on decomp.me but not here for some reason
unsigned char* __memchr(unsigned char* s, unsigned char c, unsigned int n)
{
	int n_count;
	unsigned int char_check;

	char_check = (unsigned char)c;
	s          = &s[n];
	n_count    = n + 1;
	while (--n_count) {
		if (*--s == char_check) {
			return s;
		}
	}

	return 0;
}
#else
asm char* memchr(char* src_void, char c, size_t length)
{
	// clang-format off
nofralloc
	clrlwi r4, r4, 0x18
	addi r3, r3, -1
	addi r5, r5, 1
	b lbl_800C707C
lbl_800C7070:
	lbzu r0, 1(r3)
	cmplw r0, r4
	beqlr 
lbl_800C707C:
	addic. r5, r5, -1
	bne lbl_800C7070
	li r3, 0
	blr
	// clang-format on
}
#endif

/*
 * --INFO--
 * Address:	800C708C
 * Size:	0000CC
 */

extern void __copy_longs_unaligned(void* dst, const void* src, u32);
extern void __copy_longs_rev_unaligned(void* dst, const void* src, u32 n);
extern void __copy_longs_aligned(void* dst, const void* src, u32 n);
extern __copy_longs_rev_aligned(void* dst, const void* src, u32 n);

asm void* memmove(void* dst_void, const void* src_void, size_t length)
{
	// clang-format off
nofralloc
/* 800C708C 000C3FCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800C7090 000C3FD0  7C 08 02 A6 */	mflr r0
/* 800C7094 000C3FD4  28 05 00 20 */	cmplwi r5, 0x20
/* 800C7098 000C3FD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800C709C 000C3FDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800C70A0 000C3FE0  7C 7F 1B 78 */	mr r31, r3
/* 800C70A4 000C3FE4  7F E6 22 78 */	xor r6, r31, r4
/* 800C70A8 000C3FE8  7C C0 00 34 */	cntlzw r0, r6
/* 800C70AC 000C3FEC  7F E0 00 30 */	slw r0, r31, r0
/* 800C70B0 000C3FF0  54 07 0F FE */	srwi r7, r0, 0x1f
/* 800C70B4 000C3FF4  41 80 00 40 */	blt lbl_800C70F4
/* 800C70B8 000C3FF8  54 C0 07 BF */	clrlwi. r0, r6, 0x1e
/* 800C70BC 000C3FFC  41 82 00 1C */	beq lbl_800C70D8
/* 800C70C0 000C4000  2C 07 00 00 */	cmpwi r7, 0
/* 800C70C4 000C4004  40 82 00 0C */	bne lbl_800C70D0
/* 800C70C8 000C4008  48 00 01 3D */	bl __copy_longs_unaligned
/* 800C70CC 000C400C  48 00 00 20 */	b lbl_800C70EC
lbl_800C70D0:
/* 800C70D0 000C4010  48 00 00 89 */	bl __copy_longs_rev_unaligned
/* 800C70D4 000C4014  48 00 00 18 */	b lbl_800C70EC
lbl_800C70D8:
/* 800C70D8 000C4018  2C 07 00 00 */	cmpwi r7, 0
/* 800C70DC 000C401C  40 82 00 0C */	bne lbl_800C70E8
/* 800C70E0 000C4020  48 00 02 8D */	bl __copy_longs_aligned
/* 800C70E4 000C4024  48 00 00 08 */	b lbl_800C70EC
lbl_800C70E8:
/* 800C70E8 000C4028  48 00 01 DD */	bl __copy_longs_rev_aligned
lbl_800C70EC:
/* 800C70EC 000C402C  7F E3 FB 78 */	mr r3, r31
/* 800C70F0 000C4030  48 00 00 54 */	b lbl_800C7144
lbl_800C70F4:
/* 800C70F4 000C4034  2C 07 00 00 */	cmpwi r7, 0
/* 800C70F8 000C4038  40 82 00 28 */	bne lbl_800C7120
/* 800C70FC 000C403C  38 64 FF FF */	addi r3, r4, -1
/* 800C7100 000C4040  38 9F FF FF */	addi r4, r31, -1
/* 800C7104 000C4044  38 A5 00 01 */	addi r5, r5, 1
/* 800C7108 000C4048  48 00 00 0C */	b lbl_800C7114
lbl_800C710C:
/* 800C710C 000C404C  8C 03 00 01 */	lbzu r0, 1(r3)
/* 800C7110 000C4050  9C 04 00 01 */	stbu r0, 1(r4)
lbl_800C7114:
/* 800C7114 000C4054  34 A5 FF FF */	addic. r5, r5, -1
/* 800C7118 000C4058  40 82 FF F4 */	bne lbl_800C710C
/* 800C711C 000C405C  48 00 00 24 */	b lbl_800C7140
lbl_800C7120:
/* 800C7120 000C4060  7C 64 2A 14 */	add r3, r4, r5
/* 800C7124 000C4064  7C 9F 2A 14 */	add r4, r31, r5
/* 800C7128 000C4068  38 A5 00 01 */	addi r5, r5, 1
/* 800C712C 000C406C  48 00 00 0C */	b lbl_800C7138
lbl_800C7130:
/* 800C7130 000C4070  8C 03 FF FF */	lbzu r0, -1(r3)
/* 800C7134 000C4074  9C 04 FF FF */	stbu r0, -1(r4)
lbl_800C7138:
/* 800C7138 000C4078  34 A5 FF FF */	addic. r5, r5, -1
/* 800C713C 000C407C  40 82 FF F4 */	bne lbl_800C7130
lbl_800C7140:
/* 800C7140 000C4080  7F E3 FB 78 */	mr r3, r31
lbl_800C7144:
/* 800C7144 000C4084  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800C7148 000C4088  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800C714C 000C408C  7C 08 03 A6 */	mtlr r0
/* 800C7150 000C4090  38 21 00 10 */	addi r1, r1, 0x10
/* 800C7154 000C4094  4E 80 00 20 */	blr 
}
