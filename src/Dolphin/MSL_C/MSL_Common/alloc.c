#include "PowerPC_EABI_Support/MSL_C/MSL_Common/alloc.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"

typedef struct Block {
	struct Block* prev;
	struct Block* next;
	u32 max_size;
	u32 size;
} Block;

typedef struct SubBlock {
	u32 size;
	Block* block;
	struct SubBlock* prev;
	struct SubBlock* next;
} SubBlock;

struct FixSubBlock;

typedef struct FixBlock {
	struct FixBlock* prev_;
	struct FixBlock* next_;
	u32 client_size_;
	struct FixSubBlock* start_;
	u32 n_allocated_;
} FixBlock;

typedef struct FixSubBlock {
	FixBlock* block_;
	struct FixSubBlock* next_;
} FixSubBlock;

typedef struct FixStart {
	FixBlock* tail_;
	FixBlock* head_;
} FixStart;

typedef struct __mem_pool_obj {
	Block* start_;
	FixStart fix_start[6];
} __mem_pool_obj;

typedef struct __mem_pool {
	void* reserved[14];
} __mem_pool;

typedef s32 tag_word;

typedef struct block_header {
	tag_word tag;
	struct block_header* prev;
	struct block_header* next;
} block_header;

typedef struct list_header {
	block_header* rover;
	block_header header;
} list_header;

typedef struct heap_header {
	struct heap_header* prev;
	struct heap_header* next;
} heap_header;

struct mem_pool_obj;
typedef void* (*sys_alloc_ptr)(u32, struct mem_pool_obj*);
typedef void (*sys_free_ptr)(void*, struct mem_pool_obj*);

typedef struct pool_options {
	sys_alloc_ptr sys_alloc_func;
	sys_free_ptr sys_free_func;
	u32 min_heap_size;
	int always_search_first;
} pool_options;

typedef struct mem_pool_obj {
	list_header free_list;
	pool_options options;
	heap_header* heap_list;
	void* userData;

} mem_pool_obj;

mem_pool_obj __malloc_pool;
static int initialized = 0;

static SubBlock* SubBlock_merge_prev(SubBlock*, SubBlock**);
static void SubBlock_merge_next(SubBlock*, SubBlock**);

static const u32 fix_pool_sizes[] = { 4, 12, 20, 36, 52, 68 };

#define SubBlock_size(ths)  ((ths)->size & 0xFFFFFFF8)
#define SubBlock_block(ths) ((Block*)((u32)((ths)->block) & ~0x1))
#define Block_size(ths)     ((ths)->size & 0xFFFFFFF8)
#define Block_start(ths)    (*(SubBlock**)((char*)(ths) + Block_size((ths)) - sizeof(u32)))

#define SubBlock_set_free(ths)                 \
	u32 this_size = SubBlock_size((ths));      \
	(ths)->size &= ~0x2;                       \
	*(u32*)((char*)(ths) + this_size) &= ~0x4; \
	*(u32*)((char*)(ths) + this_size - sizeof(u32)) = this_size

#define SubBlock_is_free(ths) !((ths)->size & 2)
#define SubBlock_set_size(ths, sz)  \
	(ths)->size &= ~0xFFFFFFF8;     \
	(ths)->size |= (sz)&0xFFFFFFF8; \
	if (SubBlock_is_free((ths)))    \
	*(u32*)((char*)(ths) + (sz) - sizeof(u32)) = (sz)

#define SubBlock_from_pointer(ptr)    ((SubBlock*)((char*)(ptr)-8))
#define FixSubBlock_from_pointer(ptr) ((FixSubBlock*)((char*)(ptr)-4))

#define FixBlock_client_size(ths) ((ths)->client_size_)
#define FixSubBlock_size(ths)     (FixBlock_client_size((ths)->block_))

#define classify(ptr) (*(u32*)((char*)(ptr) - sizeof(u32)) & 1)
#define __msize_inline(ptr) \
	(!classify(ptr) ? FixSubBlock_size(FixSubBlock_from_pointer(ptr)) : SubBlock_size(SubBlock_from_pointer(ptr)) - 8)

#define Block_empty(ths) (_sb = (SubBlock*)((char*)(ths) + 16)), SubBlock_is_free(_sb) && SubBlock_size(_sb) == Block_size((ths)) - 24

/**
 * @note Address: N/A
 * @note Size: 0x238
 */
void Block_construct(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1E4
 */
void Block_subBlock(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1F0
 */
void Block_link(Block* ths, SubBlock* sb)
{
	SubBlock** st;
	SubBlock_set_free(sb);
	st = &Block_start(ths);

	if (*st != 0) {
		sb->prev       = (*st)->prev;
		sb->prev->next = sb;
		sb->next       = *st;
		(*st)->prev    = sb;
		*st            = sb;
		*st            = SubBlock_merge_prev(*st, st);
		SubBlock_merge_next(*st, st);
	} else {
		*st      = sb;
		sb->prev = sb;
		sb->next = sb;
	}
	if (ths->max_size < SubBlock_size(*st))
		ths->max_size = SubBlock_size(*st);
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void Block_unlink(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x284
 */
void Block_report(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void SubBlock_construct(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void SubBlock_split(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
static SubBlock* SubBlock_merge_prev(SubBlock* ths, SubBlock** start)
{
	u32 prevsz;
	SubBlock* p;

	if (!(ths->size & 0x04)) {
		prevsz = *(u32*)((char*)ths - sizeof(u32));
		if (prevsz & 0x2)
			return ths;
		p = (SubBlock*)((char*)ths - prevsz);
		SubBlock_set_size(p, prevsz + SubBlock_size(ths));

		if (*start == ths)
			*start = (*start)->next;
		ths->next->prev       = ths->prev;
		ths->next->prev->next = ths->next;
		return p;
	}
	return ths;
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
static void SubBlock_merge_next(SubBlock* pBlock, SubBlock** pStart)
{
	SubBlock* next_sub_block;
	u32 this_cur_size;

	next_sub_block = (SubBlock*)((char*)pBlock + (pBlock->size & 0xFFFFFFF8));

	if (!(next_sub_block->size & 2)) {
		this_cur_size = (pBlock->size & 0xFFFFFFF8) + (next_sub_block->size & 0xFFFFFFF8);

		pBlock->size &= ~0xFFFFFFF8;
		pBlock->size |= this_cur_size & 0xFFFFFFF8;

		if (!(pBlock->size & 2)) {
			*(u32*)((char*)(pBlock) + (this_cur_size)-4) = (this_cur_size);
		}

		if (!(pBlock->size & 2)) {
			*(u32*)((char*)pBlock + this_cur_size) &= ~4;
		} else {
			*(u32*)((char*)pBlock + this_cur_size) |= 4;
		}

		if (*pStart == next_sub_block) {
			*pStart = (*pStart)->next;
		}

		if (*pStart == next_sub_block) {
			*pStart = 0;
		}

		next_sub_block->next->prev = next_sub_block->prev;
		next_sub_block->prev->next = next_sub_block->next;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void SubBlock_report(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void link(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
static Block* __unlink(__mem_pool_obj* pool_obj, Block* bp)
{
	Block* result = bp->next;
	if (result == bp) {
		result = 0;
	}

	if (pool_obj->start_ == bp) {
		pool_obj->start_ = result;
	}

	if (result != 0) {
		result->prev       = bp->prev;
		result->prev->next = result;
	}

	bp->next = 0;
	bp->prev = 0;
	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
void link_new_block(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void allocate_from_var_pools(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
void soft_allocate_from_var_pools(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C2770
 * @note Size: 0x294
 */
static void deallocate_from_var_pools(__mem_pool_obj* pool_obj, void* ptr)
{
	SubBlock* sb = SubBlock_from_pointer(ptr);
	SubBlock* _sb;

	Block* bp = SubBlock_block(sb);
	Block_link(bp, sb);

	if (Block_empty(bp)) {
		__unlink(pool_obj, bp);
		__sys_free(bp);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void FixBlock_construct(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void __init_pool_obj(__mem_pool* pool_obj) { memset(pool_obj, 0, sizeof(__mem_pool_obj)); }

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
static __mem_pool* get_malloc_pool(void)
{
	static __mem_pool protopool;
	static u8 init = 0;
	if (!init) {
		__init_pool_obj(&protopool);
		init = 1;
	}

	return &protopool;
}

/**
 * @note Address: N/A
 * @note Size: 0x2D0
 */
void allocate_from_fixed_pools(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C2618
 * @note Size: 0x158
 */
void deallocate_from_fixed_pools(__mem_pool_obj* pool_obj, void* ptr, u32 size)
{
	u32 i = 0;
	FixSubBlock* p;
	FixBlock* b;
	FixStart* fs;

	while (size > fix_pool_sizes[i]) {
		++i;
	}

	fs = &pool_obj->fix_start[i];
	p  = FixSubBlock_from_pointer(ptr);
	b  = p->block_;

	if (b->start_ == 0 && fs->head_ != b) {
		if (fs->tail_ == b) {
			fs->head_ = fs->head_->prev_;
			fs->tail_ = fs->tail_->prev_;
		} else {
			b->prev_->next_ = b->next_;
			b->next_->prev_ = b->prev_;
			b->next_        = fs->head_;
			b->prev_        = b->next_->prev_;
			b->prev_->next_ = b;
			b->next_->prev_ = b;
			fs->head_       = b;
		}
	}

	p->next_  = b->start_;
	b->start_ = p;

	if (--b->n_allocated_ == 0) {
		if (fs->head_ == b) {
			fs->head_ = b->next_;
		}

		if (fs->tail_ == b) {
			fs->tail_ = b->prev_;
		}

		b->prev_->next_ = b->next_;
		b->next_->prev_ = b->prev_;

		if (fs->head_ == b) {
			fs->head_ = 0;
		}

		if (fs->tail_ == b) {
			fs->tail_ = 0;
		}

		deallocate_from_var_pools(pool_obj, b);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
void __report_on_pool_heap(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void __report_on_heap(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void __msize(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void __pool_alloc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C25C0
 * @note Size: 0x58
 */
void __pool_free(__mem_pool* pool, void* ptr)
{
	__mem_pool_obj* pool_obj;
	u32 size;

	if (ptr == 0) {
		return;
	}

	pool_obj = (__mem_pool_obj*)pool;
	size     = __msize_inline(ptr);

	if (size <= 68) {
		deallocate_from_fixed_pools(pool_obj, ptr, size);
	} else {
		deallocate_from_var_pools(pool_obj, ptr);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x7B4
 */
void __pool_realloc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void __pool_alloc_clear(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void malloc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C2550
 * @note Size: 0x70
 */
void free(void* ptr)
{
	__begin_critical_region(malloc_pool_access);
	__pool_free(get_malloc_pool(), ptr);
	__end_critical_region(malloc_pool_access);
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void realloc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void calloc(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void __pool_free_all(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void __malloc_free_all(void)
{
	// UNUSED FUNCTION
}
