// presumably, ptmf = pointer to member function

typedef struct PTMF {
	long this_delta; // self-explanatory
	long v_offset;   // vtable offset
	union {
		void* f_addr;   // function address
		long ve_offset; // virtual function entry offset (of vtable)
	} f_data;
} PTMF;

const PTMF __ptmf_null = { 0, 0, 0 };

long __ptmf_test(PTMF* ptmf);
void __ptmf_scall(...);

/*
 * --INFO--
 * Address:	800C1AF4
 * Size:	000030
 */
// clang-format off
asm long __ptmf_test(register PTMF* ptmf)
{
	nofralloc
		lwz       r5, PTMF.this_delta(r3)
		lwz       r6, PTMF.v_offset(r3)
		lwz       r7, PTMF.f_data(r3)
		li        r3, 0x1
		cmpwi     r5, 0
		cmpwi     cr6, r6, 0
		cmpwi     cr7, r7, 0
		bnelr-    
		bnelr-    cr6
		bnelr-    cr7
		li        r3, 0
		blr
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void __ptmf_cmpr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void __ptmf_call(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void __ptmf_call4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1B24
 * Size:	000028
 */
asm void __ptmf_scall(...)
{
	nofralloc
		lwz     r0, PTMF.this_delta(r12)
		lwz     r11, PTMF.v_offset(r12)
		lwz     r12, PTMF.f_data(r12)
		add     r3, r3, r0
		cmpwi   r11, 0
		blt-    cr0, loc_0x20
		lwzx    r12, r3, r12
		lwzx    r12, r12, r11
	loc_0x20:
		mtctr   r12
		bctr
}
// clang-format on
/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void __ptmf_scall4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void __ptmf_cast(void)
{
	// UNUSED FUNCTION
}
