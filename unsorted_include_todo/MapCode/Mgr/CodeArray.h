#ifndef _MAPCODE_MGR_CODEARRAY_H
#define _MAPCODE_MGR_CODEARRAY_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Container < MapCode
{
	struct Code >
	{
		virtual void _00() = 0;                     // _00
		virtual void _04() = 0;                     // _04
		virtual void getObject(void*);              // _08
		virtual void getNext(void*);                // _0C
		virtual void getStart();                    // _10
		virtual void getEnd();                      // _14
		virtual void get(void*);                    // _18
		virtual void getAt(int);                    // _1C
		virtual void getTo();                       // _20
		virtual void _24() = 0;                     // _24
		virtual void _28() = 0;                     // _28
		virtual void write(Stream&);                // _2C
		virtual void read(Stream&);                 // _30
		virtual void alloc(int);                    // _34
		virtual void addOne(MapCode::Code&);        // _38
		virtual void setArray(MapCode::Code*, int); // _3C

		// _00 VTBL
	};
} // namespace MapCode

namespace MapCode {
namespace Mgr {
	struct CodeArray : public CNode, public Code > {
		virtual ~CodeArray();                       // _00
		virtual void getChildCount();               // _04
		virtual void getObject(void*);              // _08
		virtual void getNext(void*);                // _0C
		virtual void getStart();                    // _10
		virtual void getEnd();                      // _14
		virtual void get(void*);                    // _18
		virtual void getAt(int);                    // _1C
		virtual void getTo();                       // _20
		virtual void writeObject(Stream&, Code&);   // _24
		virtual void readObject(Stream&, Code&);    // _28
		virtual void write(Stream&);                // _2C
		virtual void read(Stream&);                 // _30
		virtual void alloc(int);                    // _34
		virtual void addOne(MapCode::Code&);        // _38
		virtual void setArray(MapCode::Code*, int); // _3C

		// _00 VTBL
	};
} // namespace Mgr
} // namespace MapCode

#endif
