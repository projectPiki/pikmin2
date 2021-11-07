#ifndef _JADUTILITY_PRMSETTREE_H
#define _JADUTILITY_PRMSETTREE_H

namespace JADUtility {
namespace NodeTree < JADUtility
{
	struct PrmSetBase >
	{
		virtual void NodeTree < beforeRemovingChild(PrmSetBase*);      // _00
		virtual void NodeTree < beforeRemovingThis(PrmSetBase*);       // _04
		virtual void NodeTree < afterRemovingChildButton(PrmSetBase*); // _08
		virtual void NodeTree
		    < afterRemovingThisButton(PrmSetBase*, PrmSetBase*); // _0C

		// _00 VTBL
	};
} // namespace JADUtility
} // namespace JADUtility

namespace JADUtility {
struct PrmSetTree : public PrmSetBase > {
	virtual void NodeTree < beforeRemovingChild(PrmSetBase*);      // _00
	virtual void NodeTree < beforeRemovingThis(PrmSetBase*);       // _04
	virtual void NodeTree < afterRemovingChildButton(PrmSetBase*); // _08
	virtual void NodeTree
	    < afterRemovingThisButton(PrmSetBase*, PrmSetBase*); // _0C

	// _00 VTBL
};
} // namespace JADUtility

#endif
