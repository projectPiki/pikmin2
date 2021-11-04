

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void __malloc_free_all(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void __pool_free_all(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void calloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void realloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2550
 * Size:	000070
 */
void free(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x1
	  bl        0x3CF4
	  lbz       r0, -0x7348(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lis       r3, 0x804F
	  li        r4, 0
	  addi      r3, r3, 0x5670
	  li        r5, 0x34
	  bl        -0xBD4D4
	  li        r0, 0x1
	  stb       r0, -0x7348(r13)

	.loc_0x44:
	  lis       r3, 0x804F
	  mr        r4, r31
	  addi      r3, r3, 0x5670
	  bl        .loc_0x70
	  li        r3, 0x1
	  bl        0x3CB0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x70:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void malloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __pool_alloc_clear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0007B4
 */
void __pool_realloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C25C0
 * Size:	000058
 */
void __pool_free(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x48
	  lwz       r5, -0x4(r4)
	  rlwinm.   r0,r5,0,31,31
	  bne-      .loc_0x28
	  lwz       r5, 0x8(r5)
	  b         .loc_0x34

	.loc_0x28:
	  lwz       r0, -0x8(r4)
	  rlwinm    r5,r0,0,0,28
	  subi      r5, r5, 0x8

	.loc_0x34:
	  cmplwi    r5, 0x44
	  bgt-      .loc_0x44
	  bl        .loc_0x58
	  b         .loc_0x48

	.loc_0x44:
	  bl        0x16C

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x58:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __pool_alloc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void __msize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void __report_on_heap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void __report_on_pool_heap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2618
 * Size:	000158
 */
void deallocate_from_fixed_pools(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  li        r7, 0
	  stw       r0, 0x14(r1)
	  subi      r6, r6, 0x6050
	  b         .loc_0x24

	.loc_0x1C:
	  addi      r6, r6, 0x4
	  addi      r7, r7, 0x1

	.loc_0x24:
	  lwz       r0, 0x0(r6)
	  cmplw     r5, r0
	  bgt+      .loc_0x1C
	  subi      r8, r4, 0x4
	  rlwinm    r5,r7,3,0,28
	  lwz       r4, -0x4(r4)
	  addi      r5, r5, 0x4
	  add       r5, r3, r5
	  lwz       r0, 0xC(r4)
	  cmplwi    r0, 0
	  bne-      .loc_0xC0
	  lwz       r6, 0x4(r5)
	  cmplw     r6, r4
	  beq-      .loc_0xC0
	  lwz       r0, 0x0(r5)
	  cmplw     r0, r4
	  bne-      .loc_0x80
	  lwz       r0, 0x0(r6)
	  stw       r0, 0x4(r5)
	  lwz       r6, 0x0(r5)
	  lwz       r0, 0x0(r6)
	  stw       r0, 0x0(r5)
	  b         .loc_0xC0

	.loc_0x80:
	  lwz       r0, 0x4(r4)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x4(r6)
	  lwz       r0, 0x0(r4)
	  lwz       r6, 0x4(r4)
	  stw       r0, 0x0(r6)
	  lwz       r0, 0x4(r5)
	  stw       r0, 0x4(r4)
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x0(r6)
	  stw       r0, 0x0(r4)
	  lwz       r6, 0x0(r4)
	  stw       r4, 0x4(r6)
	  lwz       r6, 0x4(r4)
	  stw       r4, 0x0(r6)
	  stw       r4, 0x4(r5)

	.loc_0xC0:
	  lwz       r0, 0xC(r4)
	  stw       r0, 0x4(r8)
	  stw       r8, 0xC(r4)
	  lwz       r6, 0x10(r4)
	  subic.    r0, r6, 0x1
	  stw       r0, 0x10(r4)
	  bne-      .loc_0x148
	  lwz       r0, 0x4(r5)
	  cmplw     r0, r4
	  bne-      .loc_0xF0
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x4(r5)

	.loc_0xF0:
	  lwz       r0, 0x0(r5)
	  cmplw     r0, r4
	  bne-      .loc_0x104
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x0(r5)

	.loc_0x104:
	  lwz       r0, 0x4(r4)
	  lwz       r6, 0x0(r4)
	  stw       r0, 0x4(r6)
	  lwz       r0, 0x0(r4)
	  lwz       r6, 0x4(r4)
	  stw       r0, 0x0(r6)
	  lwz       r0, 0x4(r5)
	  cmplw     r0, r4
	  bne-      .loc_0x130
	  li        r0, 0
	  stw       r0, 0x4(r5)

	.loc_0x130:
	  lwz       r0, 0x0(r5)
	  cmplw     r0, r4
	  bne-      .loc_0x144
	  li        r0, 0
	  stw       r0, 0x0(r5)

	.loc_0x144:
	  bl        .loc_0x158

	.loc_0x148:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x158:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002D0
 */
void allocate_from_fixed_pools(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void get_malloc_pool(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void __init_pool_obj(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void FixBlock_construct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2770
 * Size:	000294
 */
void deallocate_from_var_pools(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  subi      r8, r4, 0x8
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x8(r4)
	  lwz       r5, 0x4(r8)
	  rlwinm    r0,r4,0,31,29
	  rlwinm    r6,r4,0,0,28
	  stw       r0, 0x0(r8)
	  add       r7, r8, r6
	  rlwinm    r4,r5,0,0,30
	  lwz       r0, 0x0(r7)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x0(r7)
	  stw       r6, -0x4(r7)
	  lwz       r0, 0xC(r4)
	  rlwinm    r5,r0,0,0,28
	  subi      r0, r5, 0x4
	  lwzx      r5, r4, r0
	  cmplwi    r5, 0
	  beq-      .loc_0x1DC
	  lwz       r5, 0x8(r5)
	  stw       r5, 0x8(r8)
	  lwz       r5, 0x8(r8)
	  stw       r8, 0xC(r5)
	  lwzx      r5, r4, r0
	  stw       r5, 0xC(r8)
	  lwzx      r5, r4, r0
	  stw       r8, 0x8(r5)
	  stwx      r8, r4, r0
	  lwzx      r9, r4, r0
	  lwz       r5, 0x0(r9)
	  rlwinm.   r5,r5,0,29,29
	  bne-      .loc_0x118
	  lwz       r8, -0x4(r9)
	  rlwinm.   r5,r8,0,30,30
	  beq-      .loc_0x9C
	  mr        r7, r9
	  b         .loc_0x11C

	.loc_0x9C:
	  sub       r7, r9, r8
	  lwz       r5, 0x0(r7)
	  rlwinm    r5,r5,0,29,31
	  stw       r5, 0x0(r7)
	  lwz       r5, 0x0(r9)
	  lwz       r6, 0x0(r7)
	  rlwinm    r5,r5,0,0,28
	  add       r5, r8, r5
	  rlwinm    r5,r5,0,0,28
	  or        r5, r6, r5
	  stw       r5, 0x0(r7)
	  lwz       r5, 0x0(r7)
	  rlwinm.   r5,r5,0,30,30
	  bne-      .loc_0xE8
	  lwz       r5, 0x0(r9)
	  rlwinm    r5,r5,0,0,28
	  add       r6, r8, r5
	  subi      r5, r6, 0x4
	  stwx      r6, r7, r5

	.loc_0xE8:
	  lwzx      r5, r4, r0
	  cmplw     r5, r9
	  bne-      .loc_0xFC
	  lwz       r5, 0xC(r5)
	  stwx      r5, r4, r0

	.loc_0xFC:
	  lwz       r6, 0x8(r9)
	  lwz       r5, 0xC(r9)
	  stw       r6, 0x8(r5)
	  lwz       r6, 0xC(r9)
	  lwz       r5, 0x8(r6)
	  stw       r6, 0xC(r5)
	  b         .loc_0x11C

	.loc_0x118:
	  mr        r7, r9

	.loc_0x11C:
	  stwx      r7, r4, r0
	  lwzx      r9, r4, r0
	  lwz       r6, 0x0(r9)
	  rlwinm    r10,r6,0,0,28
	  add       r8, r9, r10
	  lwz       r7, 0x0(r8)
	  rlwinm.   r5,r7,0,30,30
	  bne-      .loc_0x1E8
	  rlwinm    r5,r6,0,29,31
	  rlwinm    r6,r7,0,0,28
	  stw       r5, 0x0(r9)
	  add       r7, r10, r6
	  rlwinm    r5,r7,0,0,28
	  lwz       r6, 0x0(r9)
	  or        r5, r6, r5
	  stw       r5, 0x0(r9)
	  lwz       r5, 0x0(r9)
	  rlwinm.   r5,r5,0,30,30
	  bne-      .loc_0x170
	  subi      r5, r7, 0x4
	  stwx      r7, r9, r5

	.loc_0x170:
	  lwz       r5, 0x0(r9)
	  rlwinm.   r5,r5,0,30,30
	  bne-      .loc_0x18C
	  lwzx      r5, r9, r7
	  rlwinm    r5,r5,0,30,28
	  stwx      r5, r9, r7
	  b         .loc_0x198

	.loc_0x18C:
	  lwzx      r5, r9, r7
	  ori       r5, r5, 0x4
	  stwx      r5, r9, r7

	.loc_0x198:
	  lwzx      r5, r4, r0
	  cmplw     r5, r8
	  bne-      .loc_0x1AC
	  lwz       r5, 0xC(r5)
	  stwx      r5, r4, r0

	.loc_0x1AC:
	  lwzx      r5, r4, r0
	  cmplw     r5, r8
	  bne-      .loc_0x1C0
	  li        r5, 0
	  stwx      r5, r4, r0

	.loc_0x1C0:
	  lwz       r6, 0x8(r8)
	  lwz       r5, 0xC(r8)
	  stw       r6, 0x8(r5)
	  lwz       r6, 0xC(r8)
	  lwz       r5, 0x8(r8)
	  stw       r6, 0xC(r5)
	  b         .loc_0x1E8

	.loc_0x1DC:
	  stwx      r8, r4, r0
	  stw       r8, 0x8(r8)
	  stw       r8, 0xC(r8)

	.loc_0x1E8:
	  lwzx      r5, r4, r0
	  lwz       r6, 0x8(r4)
	  lwz       r0, 0x0(r5)
	  rlwinm    r0,r0,0,0,28
	  cmplw     r6, r0
	  bge-      .loc_0x204
	  stw       r0, 0x8(r4)

	.loc_0x204:
	  lwz       r5, 0x10(r4)
	  li        r7, 0
	  rlwinm.   r0,r5,0,30,30
	  bne-      .loc_0x230
	  lwz       r0, 0xC(r4)
	  rlwinm    r6,r5,0,0,28
	  rlwinm    r5,r0,0,0,28
	  subi      r0, r5, 0x18
	  cmplw     r6, r0
	  bne-      .loc_0x230
	  li        r7, 0x1

	.loc_0x230:
	  cmpwi     r7, 0
	  beq-      .loc_0x284
	  lwz       r5, 0x4(r4)
	  cmplw     r5, r4
	  bne-      .loc_0x248
	  li        r5, 0

	.loc_0x248:
	  lwz       r0, 0x0(r3)
	  cmplw     r0, r4
	  bne-      .loc_0x258
	  stw       r5, 0x0(r3)

	.loc_0x258:
	  cmplwi    r5, 0
	  beq-      .loc_0x270
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x0(r5)
	  lwz       r3, 0x0(r5)
	  stw       r5, 0x4(r3)

	.loc_0x270:
	  li        r0, 0
	  mr        r3, r4
	  stw       r0, 0x4(r4)
	  stw       r0, 0x0(r4)
	  bl        -0x648

	.loc_0x284:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void soft_allocate_from_var_pools(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void allocate_from_var_pools(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void link_new_block(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void __unlink(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void link(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void SubBlock_report(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void SubBlock_merge_next(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void SubBlock_merge_prev(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void SubBlock_split(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void SubBlock_construct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000284
 */
void Block_report(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Block_unlink(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001F0
 */
void Block_link(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E4
 */
void Block_subBlock(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000238
 */
void Block_construct(void)
{
	// UNUSED FUNCTION
}
