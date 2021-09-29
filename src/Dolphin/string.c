

/*
 * --INFO--
 * Address:	........
 * Size:	000458
 */
void __strerror(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void strerror(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void strstr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void strtok(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void strcspn(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void strspn(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void strpbrk(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CA608
 * Size:	000048
 */
void strrchr(void)
{
/*
.loc_0x0:
  subi      r5, r3, 0x1
  rlwinm    r0,r4,0,24,31
  li        r3, 0
  b         .loc_0x1C

.loc_0x10:
  cmplw     r4, r0
  bne-      .loc_0x1C
  mr        r3, r5

.loc_0x1C:
  lbzu      r4, 0x1(r5)
  cmplwi    r4, 0
  bne+      .loc_0x10
  cmplwi    r3, 0
  bnelr-    
  cmplwi    r0, 0
  beq-      .loc_0x40
  li        r3, 0
  blr       

.loc_0x40:
  mr        r3, r5
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void strxfrm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void strcoll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CA650
 * Size:	000030
 */
void strchr(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1
  rlwinm    r0,r4,0,24,31
  b         .loc_0x14

.loc_0xC:
  cmplw     r4, r0
  beqlr-    

.loc_0x14:
  lbzu      r4, 0x1(r3)
  cmplwi    r4, 0
  bne+      .loc_0xC
  cmplwi    r0, 0
  beqlr-    
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800CA680
 * Size:	000040
 */
void strncmp(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x1
  subi      r4, r4, 0x1
  addi      r6, r5, 0x1
  b         .loc_0x30

.loc_0x10:
  lbzu      r0, 0x1(r3)
  lbzu      r5, 0x1(r4)
  cmplw     r0, r5
  beq-      .loc_0x28
  sub       r3, r0, r5
  blr       

.loc_0x28:
  cmplwi    r0, 0
  beq-      .loc_0x38

.loc_0x30:
  subic.    r6, r6, 0x1
  bne+      .loc_0x10

.loc_0x38:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	800CA6C0
 * Size:	000128
 */
void strcmp(void)
{
/*
.loc_0x0:
  lbz       r5, 0x0(r3)
  lbz       r0, 0x0(r4)
  sub.      r0, r5, r0
  beq-      .loc_0x18
  mr        r3, r0
  blr       

.loc_0x18:
  rlwinm    r0,r4,0,30,31
  rlwinm    r6,r3,0,30,31
  cmplw     r0, r6
  bne-      .loc_0xF0
  cmplwi    r6, 0
  beq-      .loc_0x84
  cmplwi    r5, 0
  bne-      .loc_0x40
  li        r3, 0
  blr       

.loc_0x40:
  subfic    r0, r6, 0x3
  mtctr     r0
  cmplwi    r0, 0
  beq-      .loc_0x7C

.loc_0x50:
  lbzu      r5, 0x1(r3)
  lbzu      r0, 0x1(r4)
  sub.      r0, r5, r0
  beq-      .loc_0x68
  mr        r3, r0
  blr       

.loc_0x68:
  cmplwi    r5, 0
  bne-      .loc_0x78
  li        r3, 0
  blr       

.loc_0x78:
  bdnz+     .loc_0x50

.loc_0x7C:
  addi      r3, r3, 0x1
  addi      r4, r4, 0x1

.loc_0x84:
  lwz       r7, 0x0(r3)
  lis       r5, 0x8081
  subi      r6, r5, 0x7F80
  lwz       r8, 0x0(r4)
  subis     r5, r7, 0x101
  subi      r0, r5, 0x101
  and.      r0, r0, r6
  bne-      .loc_0xD8
  b         .loc_0xC0

.loc_0xA8:
  lwzu      r7, 0x4(r3)
  lwzu      r8, 0x4(r4)
  subis     r5, r7, 0x101
  subi      r0, r5, 0x101
  and.      r0, r0, r6
  bne-      .loc_0xD8

.loc_0xC0:
  cmplw     r7, r8
  beq+      .loc_0xA8
  li        r3, -0x1
  blelr-    
  li        r3, 0x1
  blr       

.loc_0xD8:
  lbz       r5, 0x0(r3)
  lbz       r0, 0x0(r4)
  sub.      r0, r5, r0
  beq-      .loc_0xF0
  mr        r3, r0
  blr       

.loc_0xF0:
  cmplwi    r5, 0
  bne-      .loc_0x100
  li        r3, 0
  blr       

.loc_0x100:
  lbzu      r5, 0x1(r3)
  lbzu      r0, 0x1(r4)
  sub.      r0, r5, r0
  beq-      .loc_0x118
  mr        r3, r0
  blr       

.loc_0x118:
  cmplwi    r5, 0
  bne+      .loc_0x100
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void strncat(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800CA7E8
 * Size:	00002C
 */
void strcat(void)
{
/*
.loc_0x0:
  subi      r4, r4, 0x1
  subi      r5, r3, 0x1

.loc_0x8:
  lbzu      r0, 0x1(r5)
  cmplwi    r0, 0
  bne+      .loc_0x8
  subi      r5, r5, 0x1

.loc_0x18:
  lbzu      r0, 0x1(r4)
  cmplwi    r0, 0
  stbu      r0, 0x1(r5)
  bne+      .loc_0x18
  blr
*/
}

/*
 * --INFO--
 * Address:	800CA814
 * Size:	000044
 */
void strncpy(void)
{
/*
.loc_0x0:
  subi      r4, r4, 0x1
  subi      r6, r3, 0x1
  addi      r5, r5, 0x1
  b         .loc_0x38

.loc_0x10:
  lbzu      r0, 0x1(r4)
  cmplwi    r0, 0
  stbu      r0, 0x1(r6)
  bne-      .loc_0x38
  li        r0, 0
  b         .loc_0x2C

.loc_0x28:
  stbu      r0, 0x1(r6)

.loc_0x2C:
  subic.    r5, r5, 0x1
  bne+      .loc_0x28
  blr       

.loc_0x38:
  subic.    r5, r5, 0x1
  bne+      .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	800CA858
 * Size:	0000B8
 */
void strcpy(void)
{
/*
.loc_0x0:
  rlwinm    r0,r3,0,30,31
  rlwinm    r5,r4,0,30,31
  cmplw     r0, r5
  mr        r7, r3
  bne-      .loc_0x94
  cmplwi    r5, 0
  beq-      .loc_0x58
  lbz       r0, 0x0(r4)
  cmplwi    r0, 0
  stb       r0, 0x0(r7)
  beqlr-    
  subfic    r0, r5, 0x3
  mtctr     r0
  cmplwi    r0, 0
  beq-      .loc_0x50

.loc_0x3C:
  lbzu      r0, 0x1(r4)
  cmplwi    r0, 0
  stbu      r0, 0x1(r7)
  beqlr-    
  bdnz+     .loc_0x3C

.loc_0x50:
  addi      r7, r7, 0x1
  addi      r4, r4, 0x1

.loc_0x58:
  lwz       r8, 0x0(r4)
  lis       r5, 0x8081
  subi      r6, r5, 0x7F80
  subis     r5, r8, 0x101
  subi      r0, r5, 0x101
  and.      r0, r0, r6
  bne-      .loc_0x94
  subi      r7, r7, 0x4

.loc_0x78:
  stwu      r8, 0x4(r7)
  lwzu      r8, 0x4(r4)
  subis     r5, r8, 0x101
  subi      r0, r5, 0x101
  and.      r0, r0, r6
  beq+      .loc_0x78
  addi      r7, r7, 0x4

.loc_0x94:
  lbz       r0, 0x0(r4)
  cmplwi    r0, 0
  stb       r0, 0x0(r7)
  beqlr-    

.loc_0xA4:
  lbzu      r0, 0x1(r4)
  cmplwi    r0, 0
  stbu      r0, 0x1(r7)
  bne+      .loc_0xA4
  blr
*/
}

/*
 * --INFO--
 * Address:	800CA910
 * Size:	00001C
 */
void strlen(void)
{
/*
.loc_0x0:
  subi      r4, r3, 0x1
  li        r3, -0x1

.loc_0x8:
  lbzu      r0, 0x1(r4)
  addi      r3, r3, 0x1
  cmplwi    r0, 0
  bne+      .loc_0x8
  blr
*/
}