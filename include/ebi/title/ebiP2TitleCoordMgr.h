#ifndef _EBIP2TITLECOORDMGR_H
#define _EBIP2TITLECOORDMGR_H
// this needs cleanup; it's a ghidra export

typedef unsigned char undefined;

typedef unsigned char bool;
typedef unsigned char byte;
typedef unsigned int dword;
typedef long long int16;
typedef long long longlong;
typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned int uint3;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned long long undefined5;
typedef unsigned long long undefined8;
typedef unsigned short ushort;
typedef short wchar_t;
typedef unsigned short word;
typedef struct TCoordMgr TCoordMgr, *PTCoordMgr;

typedef struct Parm<float> Parm<float>, *PParm<float>;

typedef struct BaseParm__vt BaseParm__vt, *PBaseParm__vt;

typedef struct BaseParm__vt Parm<float> __vt;

typedef struct ID32 ID32, *PID32;

typedef ulong size_t;

struct Parm<float> {         /* #Extends(BaseParm) */
	Parm<float> __vt* __vt;  /* #InheritName */
	struct ID32 id;          /* #AutoInherit */
	undefined4 unknown_0x10; /* #AutoInherit */
	char* comment;           /* #AutoInherit */
	float value;
	undefined4 field_0x1c;
	float min;
	float max;
};

struct TCoordMgr { /* #Extends(CNode) #Size(0x107c) (see
	                  ebi::title::TTitleMgr::TTitleMgr) */
	pointer* __vt;
	struct CNode* child;  /* #AutoInherit */
	struct CNode* parent; /* #AutoInherit */
	struct CNode* owner;  /* #AutoInherit */
	struct CNode* head;   /* #AutoInherit */
	char* name;           /* #AutoInherit */
	undefined field_0x18;
	undefined field_0x19;
	undefined field_0x1a;
	undefined field_0x1b;
	undefined field_0x1c;
	undefined field_0x1d;
	undefined field_0x1e;
	undefined field_0x1f;
	undefined field_0x20;
	undefined field_0x21;
	undefined field_0x22;
	undefined field_0x23;
	undefined field_0x24;
	undefined field_0x25;
	undefined field_0x26;
	undefined field_0x27;
	undefined field_0x28;
	undefined field_0x29;
	undefined field_0x2a;
	undefined field_0x2b;
	struct Vector2 a500Vector2_0x2c[500];
	undefined field_0xfcc;
	undefined field_0xfcd;
	undefined field_0xfce;
	undefined field_0xfcf;
	undefined field_0xfd0;
	undefined field_0xfd1;
	undefined field_0xfd2;
	undefined field_0xfd3;
	char* name_0xfd4; /* TTgaLoadParameters */
	struct Parm<float> tga0;
	struct Parm<float> tga1;
	struct Parm<float> tga2;
	struct Parm<float> tga3;
	undefined field_0x1078;
	undefined field_0x1079;
	undefined field_0x107a;
	undefined field_0x107b;
};

struct BaseParm__vt {
	pointer __vt;
	pointer field_0x4;
	pointer field_0x8;
	void (*write)(void*, struct Stream*);
	void (*read)(void*, struct Stream*);
};
#endif
