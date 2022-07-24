#ifndef _MAPCODE_MGR_CODEARRAY_H
#define _MAPCODE_MGR_CODEARRAY_H

/*
    __vt__Q37MapCode3Mgr9CodeArray:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37MapCode3Mgr9CodeArrayFv
    .4byte getChildCount__5CNodeFv
    .4byte "getObject__26Container<Q27MapCode4Code>FPv"
    .4byte "getNext__31ArrayContainer<Q27MapCode4Code>FPv"
    .4byte "getStart__31ArrayContainer<Q27MapCode4Code>Fv"
    .4byte "getEnd__31ArrayContainer<Q27MapCode4Code>Fv"
    .4byte "get__31ArrayContainer<Q27MapCode4Code>FPv"
    .4byte "getAt__31ArrayContainer<Q27MapCode4Code>Fi"
    .4byte "getTo__31ArrayContainer<Q27MapCode4Code>Fv"
    .4byte writeObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
    .4byte readObject__Q37MapCode3Mgr9CodeArrayFR6StreamRQ27MapCode4Code
    .4byte "write__31ArrayContainer<Q27MapCode4Code>FR6Stream"
    .4byte "read__31ArrayContainer<Q27MapCode4Code>FR6Stream"
    .4byte "alloc__31ArrayContainer<Q27MapCode4Code>Fi"
    .4byte "addOne__31ArrayContainer<Q27MapCode4Code>FRQ27MapCode4Code"
    .4byte "setArray__31ArrayContainer<Q27MapCode4Code>FPQ27MapCode4Codei"
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Container < MapCode
{
	struct Code >
	{
		virtual ~Code > ();                         // _08 (inline)
		virtual void _0C() = 0;                     // _0C
		virtual void getObject(void*);              // _10 (inline)
		virtual void getNext(void*);                // _14 (inline)
		virtual void getStart();                    // _18 (inline)
		virtual void getEnd();                      // _1C (inline)
		virtual void get(void*);                    // _20 (inline)
		virtual void getAt(int);                    // _24 (inline)
		virtual void getTo();                       // _28 (inline)
		virtual void writeObject(Stream&, Code&);   // _2C
		virtual void readObject(Stream&, Code&);    // _30
		virtual void write(Stream&);                // _34 (inline)
		virtual void read(Stream&);                 // _38 (inline)
		virtual void alloc(int);                    // _3C (inline)
		virtual void addOne(MapCode::Code&);        // _40 (inline)
		virtual void setArray(MapCode::Code*, int); // _44 (inline)
	};
} // namespace MapCode

namespace MapCode {
namespace Mgr {
struct CodeArray : public CNode, public Code > {
	virtual ~CodeArray();                     // _08 (inline)
	virtual void writeObject(Stream&, Code&); // _2C
	virtual void readObject(Stream&, Code&);  // _30
};
} // namespace Mgr
} // namespace MapCode

#endif
