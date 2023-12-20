#include "PowerPC_EABI_Support/MetroTRK/trk.h"

/**
 * @note Address: 0x800BFA60
 * @note Size: 0x1B8
 */
ASM void TRKSaveExtended1Block(void)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	lis       r2, gTRKCPUState@h
	ori       r2, r2, gTRKCPUState@l
	mfsr      r16, 0
	mfsr      r17, 0x1
	mfsr      r18, 0x2
	mfsr      r19, 0x3
	mfsr      r20, 0x4
	mfsr      r21, 0x5
	mfsr      r22, 0x6
	mfsr      r23, 0x7
	mfsr      r24, 0x8
	mfsr      r25, 0x9
	mfsr      r26, 0xA
	mfsr      r27, 0xB
	mfsr      r28, 0xC
	mfsr      r29, 0xD
	mfsr      r30, 0xE
	mfsr      r31, 0xF
	stmw      r16, 0x1A8(r2)
	mftb      r10, 0x10c
	mftbu     r11
	mfspr     r12, 0x3F0
	mfspr     r13, 0x3F1
	mfspr     r14, 0x1b
	mfspr     r15, 0x11F
	mfibatu   r16, 0
	mfibatl   r17, 0
	mfibatu   r18, 0x1
	mfibatl   r19, 0x1
	mfibatu   r20, 0x2
	mfibatl   r21, 0x2
	mfibatu   r22, 0x3
	mfibatl   r23, 0x3
	mfdbatu   r24, 0
	mfdbatl   r25, 0
	mfdbatu   r26, 0x1
	mfdbatl   r27, 0x1
	mfdbatu   r28, 0x2
	mfdbatl   r29, 0x2
	mfdbatu   r30, 0x3
	mfdbatl   r31, 0x3
	stmw      r10, 0x1E8(r2)
	mfsdr1    r22
	mfdar     r23
	mfdsisr   r24
	mfsprg    r25, 0
	mfsprg    r26, 0x1
	mfsprg    r27, 0x2
	mfsprg    r28, 0x3
	li        r29, 0
	mfspr     r30, 0x3F2
	mfear     r31
	stmw      r22, 0x25C(r2)
	mfspr     r20, 0x390
	mfspr     r21, 0x391
	mfspr     r22, 0x392
	mfspr     r23, 0x393
	mfspr     r24, 0x394
	mfspr     r25, 0x395
	mfspr     r26, 0x396
	mfspr     r27, 0x397
	mfspr     r28, 0x398
	mfspr     r29, 0x399
	mfspr     r30, 0x39A
	mfspr     r31, 0x39B
	stmw      r20, 0x2FC(r2)
	b         loc_0x150

	mfspr     r16, 0x3A0
	mfspr     r17, 0x3A7
	mfspr     r18, 0x3A8
	mfspr     r19, 0x3A9
	mfspr     r20, 0x3AA
	mfspr     r21, 0x3AB
	mfspr     r22, 0x3AC
	mfspr     r23, 0x3AD
	mfspr     r24, 0x3AE
	mfspr     r25, 0x3AF
	mfspr     r26, 0x3B0
	mfspr     r27, 0x3B7
	mfspr     r28, 0x3BF
	mfspr     r29, 0x3F6
	mfspr     r30, 0x3F7
	mfspr     r31, 0x3FF
	stmw      r16, 0x2B8(r2)

loc_0x150:
	mfspr     r19, 0x3F5
	mfspr     r20, 0x3B9
	mfspr     r21, 0x3BA
	mfspr     r22, 0x3BD
	mfspr     r23, 0x3BE
	mfspr     r24, 0x3BB
	mfspr     r25, 0x3B8
	mfspr     r26, 0x3BC
	mfspr     r27, 0x3FC
	mfspr     r28, 0x3FD
	mfspr     r29, 0x3FE
	mfspr     r30, 0x3FB
	mfspr     r31, 0x3F9
	stmw      r19, 0x284(r2)
	blr
	mfspr     r25, 0x3D0
	mfspr     r26, 0x3D1
	mfspr     r27, 0x3D2
	mfspr     r28, 0x3D3
	mfspr     r29, 0x3D4
	mfspr     r30, 0x3D5
	mfspr     r31, 0x3D6
	stmw      r25, 0x240(r2)
	mfdec     r31
	stw       r31, 0x278(r2)
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x800BFC18
 * @note Size: 0x1B8
 */
ASM void TRKRestoreExtended1Block()
{
#ifdef __MWERKS__ // clang-format off
	nofralloc
	lis       r2, gTRKCPUState@h
	ori       r2, r2, gTRKCPUState@l
	lis       r5, gTRKRestoreFlags@h
	ori       r5, r5, gTRKRestoreFlags@l
	lbz       r3, 0x0(r5)
	lbz       r6, 0x1(r5)
	li        r0, 0
	stb       r0, 0x0(r5)
	stb       r0, 0x1(r5)
	cmpwi     r3, 0
	beq-      loc_0x3C
	lwz       r24, 0x1E8(r2)
	lwz       r25, 0x1EC(r2)
	mttbl     r24
	mttbu     r25

loc_0x3C:
	lmw       r20, 0x2FC(r2)
	mtspr     912, r20
	mtspr     913, r21
	mtspr     914, r22
	mtspr     915, r23
	mtspr     916, r24
	mtspr     917, r25
	mtspr     918, r26
	mtspr     919, r27
	mtspr     920, r28
	mtspr     922, r30
	mtspr     923, r31
	b         loc_0x88
	lmw       r26, 0x2E0(r2)
	mtspr     944, r26
	mtspr     951, r27
	mtspr     1014, r29
	mtspr     1015, r30
	mtspr     1023, r31

loc_0x88:
	lmw       r19, 0x284(r2)
	mtspr     1013, r19
	mtspr     953, r20
	mtspr     954, r21
	mtspr     957, r22
	mtspr     958, r23
	mtspr     955, r24
	mtspr     952, r25
	mtspr     956, r26
	mtspr     1020, r27
	mtspr     1021, r28
	mtspr     1022, r29
	mtspr     1019, r30
	mtspr     1017, r31
	b         loc_0xF4
	cmpwi     r6, 0
	beq-      loc_0xD4
	lwz       r26, 0x278(r2)
	mtdec     r26

loc_0xD4:
	lmw       r25, 0x240(r2)
	mtspr     976, r25
	mtspr     977, r26
	mtspr     978, r27
	mtspr     979, r28
	mtspr     980, r29
	mtspr     981, r30
	mtspr     982, r31

loc_0xF4:
	lmw       r16, 0x1A8(r2)
	mtsr      0, r16
	mtsr      1, r17
	mtsr      2, r18
	mtsr      3, r19
	mtsr      4, r20
	mtsr      5, r21
	mtsr      6, r22
	mtsr      7, r23
	mtsr      8, r24
	mtsr      9, r25
	mtsr      10, r26
	mtsr      11, r27
	mtsr      12, r28
	mtsr      13, r29
	mtsr      14, r30
	mtsr      15, r31
	lmw       r12, 0x1F0(r2)
	mtspr     1008, r12
	mtspr     1009, r13
	mtsrr1    r14
	mtspr     287, r15
	mtibatu   0, r16
	mtibatl   0, r17
	mtibatu   1, r18
	mtibatl   1, r19
	mtibatu   2, r20
	mtibatl   2, r21
	mtibatu   3, r22
	mtibatl   3, r23
	mtdbatu   0, r24
	mtdbatl   0, r25
	mtdbatu   1, r26
	mtdbatl   1, r27
	mtdbatu   2, r28
	mtdbatl   2, r29
	mtdbatu   3, r30
	mtdbatl   3, r31
	lmw       r22, 0x25C(r2)
	mtsdr1    r22
	mtdar     r23
	mtdsisr   r24
	mtsprg    0, r25
	mtsprg    1, r26
	mtsprg    2, r27
	mtsprg    3, r28
	mtspr     1010, r30
	mtear     r31
	blr
#endif // clang-format on
}
