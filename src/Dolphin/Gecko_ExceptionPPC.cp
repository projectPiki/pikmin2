

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void ExPPC_LongJump(ThrowContext *, void *, void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void __throw(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void __end__catch(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000410
 */
void ExPPC_ThrowHandler(ThrowContext *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void ExPPC_HandleUnexpected(ThrowContext *, MWExceptionInfo *, ex_specification *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B4
 */
void __unexpected(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __dt__Q23std13bad_exceptionFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void ExPPC_IsInSpecification(char *, ex_specification *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00050C
 */
void ExPPC_UnwindStack(ThrowContext *, MWExceptionInfo *, void *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void ExPPC_DeletePointerCond(ThrowContext *, const ex_deletepointercond *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void ExPPC_DeletePointer(ThrowContext *, const ex_deletepointer *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void ExPPC_DestroyMemberArray(ThrowContext *, const ex_destroymemberarray *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void ExPPC_DestroyMemberCond(ThrowContext *, const ex_destroymembercond *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void ExPPC_DestroyBase(ThrowContext *, const ex_destroymember *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void ExPPC_DestroyMember(ThrowContext *, const ex_destroymember *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void ExPPC_DestroyLocalArray(ThrowContext *, const ex_destroylocalarray *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void ExPPC_DestroyLocalPointer(ThrowContext *, const ex_destroylocalpointer *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void ExPPC_DestroyLocalCond(ThrowContext *, const ex_destroylocalcond *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void ExPPC_DestroyLocal(ThrowContext *, const ex_destroylocal *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000248
 */
void ExPPC_PopStackFrame(ThrowContext *, MWExceptionInfo *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C0
 */
void ExPPC_NextAction(ActionIterator *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void ExPPC_CurrentAction(const ActionIterator *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void ExPPC_PopR31(char *, MWExceptionInfo *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000204
 */
void ExPPC_FindExceptionRecord(char *, MWExceptionInfo *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void ExPPC_FindExceptionFragment(char *, FragmentInfo *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C2340
 * Size:	000034
 */
void __unregister_fragment(void)
{
/*
.loc_0x0:
  cmpwi     r3, 0
  bltlr-    
  cmpwi     r3, 0x1
  bgelr-    
  mulli     r4, r3, 0xC
  lis       r3, 0x804F
  li        r0, 0
  addi      r3, r3, 0x5560
  add       r3, r3, r4
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800C2374
 * Size:	000034
 */
void __register_fragment(void)
{
/*
.loc_0x0:
  lis       r5, 0x804F
  addi      r5, r5, 0x5560
  lwz       r0, 0x8(r5)
  cmpwi     r0, 0
  bne-      .loc_0x2C
  stw       r3, 0x0(r5)
  li        r0, 0x1
  li        r3, 0
  stw       r4, 0x4(r5)
  stw       r0, 0x8(r5)
  blr       

.loc_0x2C:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void what__Q23std13bad_exceptionCFv(void)
{
	// UNUSED FUNCTION
}