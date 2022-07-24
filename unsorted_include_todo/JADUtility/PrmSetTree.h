#ifndef _JADUTILITY_PRMSETTREE_H
#define _JADUTILITY_PRMSETTREE_H

/*
    __vt__Q210JADUtility10PrmSetTree:
    .4byte 0
    .4byte 0
    .4byte "beforeRemovingChild__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
    .4byte "beforeRemovingThis__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
    .4byte "afterRemovingChildButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBase"
    .4byte
   "afterRemovingThisButton__Q210JADUtility36NodeTree<Q210JADUtility10PrmSetBase>FPQ210JADUtility10PrmSetBasePQ210JADUtility10PrmSetBase"
*/

namespace JADUtility {
namespace NodeTree < JADUtility
{
	struct PrmSetBase >
	{
		virtual void NodeTree < beforeRemovingChild(PrmSetBase*);                  // _08 (inline)
		virtual void NodeTree < beforeRemovingThis(PrmSetBase*);                   // _0C (inline)
		virtual void NodeTree < afterRemovingChildButton(PrmSetBase*);             // _10 (inline)
		virtual void NodeTree < afterRemovingThisButton(PrmSetBase*, PrmSetBase*); // _14 (inline)
	};
} // namespace JADUtility
} // namespace JADUtility

namespace JADUtility {
struct PrmSetTree : public PrmSetBase > {
};
} // namespace JADUtility

#endif
