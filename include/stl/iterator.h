#ifndef _STD_ITERATOR_H
#define _STD_ITERATOR_H

#ifdef __cplusplus
namespace std {
typedef s32 ptrdiff_t;

struct input_iterator_tag {
};
struct output_iterator_tag {
};
struct forward_iterator_tag : public input_iterator_tag {
};
struct bidirectional_iterator_tag : public forward_iterator_tag {
};
struct randomAccess_iterator_tag : public bidirectional_iterator_tag {
};

template <typename Iterator>
struct iterator_traits {
	typedef typename Iterator::difference_type difference_type;
	typedef typename Iterator::value_type value_type;
	typedef typename Iterator::pointer pointer;
	typedef typename Iterator::reference reference;
	typedef typename Iterator::iterator_category iterator_category;
};

template <typename IteratorTag, typename ValueType, typename DifferenceType = ptrdiff_t, typename Pointer = ValueType*,
          typename Reference = ValueType&>
struct iterator {
	typedef IteratorTag iterator_category;
	typedef ValueType value_type;
	typedef DifferenceType difference_type;
	typedef Pointer pointer;
	typedef Reference reference;
};
} // namespace std
#endif

#endif
