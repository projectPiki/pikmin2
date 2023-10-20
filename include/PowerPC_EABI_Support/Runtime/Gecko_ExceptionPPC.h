#ifndef _RUNTIME_GECKO_EXCEPTIONPPC_H
#define _RUNTIME_GECKO_EXCEPTIONPPC_H

typedef unsigned char exaction_type;

#define EXACTION_ENDBIT 0x80
#define EXACTION_MASK   0x7F

// EXAction structs

#define EXACTION_ENDOFLIST 0
#define EXACTION_BRANCH    1

typedef struct ex_branch {
	exaction_type action;
	unsigned char unused;
	unsigned short target;
} ex_branch;

#define EXACTION_DESTROYLOCAL 2

typedef struct ex_destroylocal {
	exaction_type action;
	unsigned char unused;
	short local;
	void* dtor;
} ex_destroylocal;

#define EXACTION_DESTROYLOCALCOND 3

typedef struct ex_destroylocalcond {
	exaction_type action;
	unsigned char dlc_field;
	short cond;
	short local;
	void* dtor;
} ex_destroylocalcond;

#define ex_destroylocalcond_MakeField(regcond) (((regcond) << 7))
#define ex_destroylocalcond_GetRegCond(field)  ((field) >> 7)

#define EXACTION_DESTROYLOCALPOINTER 4

typedef struct ex_destroylocalpointer {
	exaction_type action;
	unsigned char dlp_field;
	short pointer;
	void* dtor;
} ex_destroylocalpointer;

#define ex_destroylocalpointer_MakeField(regpointer) (((regpointer) << 7))
#define ex_destroylocalpointer_GetRegPointer(field)  ((field) >> 7)

#define EXACTION_DESTROYLOCALARRAY 5

typedef struct ex_destroylocalarray {
	exaction_type action;
	unsigned char unused;
	short localarray;
	unsigned short elements;
	unsigned short element_size;
	void* dtor;
} ex_destroylocalarray;

#define EXACTION_DESTROYBASE   6
#define EXACTION_DESTROYMEMBER 7

typedef struct ex_destroymember {
	exaction_type action;
	unsigned char dm_field;
	short objectptr;
	long offset;
	void* dtor;
} ex_destroymember;

#define ex_destroymember_MakeField(regpointer) (((regpointer) << 7))
#define ex_destroymember_GetRegPointer(field)  ((field) >> 7)

#define EXACTION_DESTROYMEMBERCOND 8

typedef struct ex_destroymembercond {
	exaction_type action;
	unsigned char dmc_field;
	short cond;
	short objectptr;
	long offset;
	void* dtor;
} ex_destroymembercond;

#define ex_destroymembercond_MakeField(regcond, regpointer) (((regcond) << 7) | (((regpointer)&0x1) << 6))
#define ex_destroymembercond_GetRegCond(field)              ((field) >> 7)
#define ex_destroymembercond_GetRegPointer(field)           (((field) >> 6) & 0x1)

#define EXACTION_DESTROYMEMBERARRAY 9

typedef struct ex_destroymemberarray {
	exaction_type action;
	unsigned char dma_field;
	short objectptr;
	long offset;
	long elements;
	long element_size;
	void* dtor;
} ex_destroymemberarray;

#define ex_destroymemberarray_MakeField(regpointer) (((regpointer) << 7))
#define ex_destroymemberarray_GetRegPointer(field)  ((field) >> 7)

#define EXACTION_DELETEPOINTER 10

typedef struct ex_deletepointer {
	exaction_type action;
	unsigned char dp_field;
	short objectptr;
	void* deletefunc;
} ex_deletepointer;

#define ex_deletepointer_MakeField(regpointer) (((regpointer) << 7))
#define ex_deletepointer_GetRegPointer(field)  ((field) >> 7)

#define EXACTION_DELETEPOINTERCOND 11

typedef struct ex_deletepointercond {
	exaction_type action;
	unsigned char dpc_field;
	short cond;
	short objectptr;
	void* deletefunc;
} ex_deletepointercond;

#define ex_deletepointercond_MakeField(regcond, regpointer) (((regcond) << 7) | (((regpointer)&0x1) << 6))
#define ex_deletepointercond_GetRegCond(field)              ((field) >> 7)
#define ex_deletepointercond_GetRegPointer(field)           (((field) >> 6) & 0x1)

#define EXACTION_CATCHBLOCK 12

typedef struct ex_catchblock {
	exaction_type action;
	unsigned char unused;
	char* catch_type;
	unsigned short catch_pcoffset;
	short cinfo_ref;
} ex_catchblock;

#define EXACTION_ACTIVECATCHBLOCK 13

typedef struct ex_activecatchblock {
	exaction_type action;
	unsigned char unused;
	short cinfo_ref;
} ex_activecatchblock;

#define EXACTION_TERMINATE 14

typedef struct ex_terminate {
	exaction_type action;
	unsigned char unused;
} ex_terminate;

#define EXACTION_SPECIFICATION 15

typedef struct ex_specification {
	exaction_type action;
	unsigned char unused;
	unsigned short specs;
	long pcoffset;
	long cinfo_ref;
	char* spec[];
} ex_specification;

#define EXACTION_CATCHBLOCK_32 16

typedef struct ex_catchblock_32 {
	exaction_type action;
	unsigned char unused;
	char* catch_type;
	long catch_pcoffset;
	long cinfo_ref;
} ex_catchblock_32;

// Other structs

typedef struct ExceptionRangeSmall {
	unsigned short start;
	unsigned short end;
	unsigned short action;
} ExceptionRangeSmall;

typedef struct ExceptionTableSmall {
	unsigned short et_field;
	ExceptionRangeSmall ranges[0];
} ExceptionTableSmall;

typedef struct ExceptionRangeLarge {
	unsigned long start;
	unsigned short size;
	unsigned short action;
} ExceptionRangeLarge;

typedef struct ExceptionTableLarge {
	unsigned short et_field;
	unsigned short et_field2;
	ExceptionRangeLarge ranges[];
} ExceptionTableLarge;

#define ET_MakeField(savedGPRs, savedFPRs, savedCR, hasframeptr, isLarge) \
	(((savedGPRs) << 11) | ((savedFPRs & 0x1f) << 6) | ((savedCR & 0x1) << 5) | ((hasframeptr & 0x1) << 4) | ((isLarge & 1) << 3))

#define ET_GetSavedGPRs(field)   ((field) >> 11)
#define ET_GetSavedFPRs(field)   (((field) >> 6) & 0x1f)
#define ET_GetSavedCR(field)     (((field) >> 5) & 0x1)
#define ET_GetHasFramePtr(field) (((field) >> 4) & 0x1)
#define ET_IsLargeTable(field)   (((field) >> 3) & 0x1)
#define ET_ClearLargeBit(field)  ((field) & ~(1 << 3))
#define ET_SetLargeBit(field)    ((field) | (1 << 3))

#define ET_HasElfVector(field) (((field) >> 1) & 0x1)

typedef struct ExceptionTableIndex {
	unsigned long functionoffset;
	unsigned long eti_field;
	unsigned long exceptionoffset;
} ExceptionTableIndex;

#define ETI_MakeField(direct, fsize) ((((long)(direct)) << 31) | ((fsize)&0x7fffffff))
#define ETI_GetDirectStore(field)    ((field) >> 31)
#define ETI_GetFunctionSize(field)   ((field)&0x7fffffff)

#endif
