#ifndef _JSYSTEM_JGADGET_BINARY_H
#define _JSYSTEM_JGADGET_BINARY_H

#include "types.h"
#include "JSystem/JGadget/search.h"

namespace JGadget {
namespace binary {
struct TEBit {
	u32 mValue; // _00
};

// from TP
struct TParseData {
	TParseData(const void* content)
	    : mRaw(content)
	{
	}

	const void* getRaw() const { return mRaw; }
	void setRaw(const void* content) { mRaw = content; }

	const void* mRaw; // _00
};

template <int T>
struct TParseData_aligned : public TParseData {
	TParseData_aligned(const void* content)
	    : TParseData(content)
	{
	}

	void setRaw(const void* content) { static_cast<TParseData*>(this)->setRaw(content); }

	// _00-_04 = TParseData
};

struct TParse_header_block {
	inline TParse_header_block() { }

	virtual ~TParse_header_block()                                  = 0; // _08
	virtual bool parseHeader_next(const void**, u32* outBlock, u32) = 0; // _0C
	virtual bool parseBlock_next(const void**, u32* outData, u32)   = 0; // _10

	bool parse_next(const void**, u32);

	bool parse(const void* p1, u32 p2) { return parse_next(&p1, p2); }

	bool checkNext(const void** ptrLocation, u32* headerEnd, u32 idx)
	{
		bool checkNext = false;
		if (parseHeader_next(ptrLocation, headerEnd, idx)) {
			checkNext = true;
		}
		return checkNext;
	}
};

template <typename T>
struct TParseValue_raw_ {
	typedef T ParseType;
	static T parse(const void* data) { return (T) * (T*)data; }
};

template <typename T>
struct TParseValue_raw : public TParseValue_raw_<T> {
	typedef TParseValue_raw_<T> InnerParseValueClass;
};

template <typename T>
struct TParseValue_endian_big_ : public TParseValue_raw_<T> {
	static T parse(const void* data) { return TParseValue_raw_<T>::parse(data); }
};

template <class Parser>
struct TParseValue : public Parser {
	static typename Parser::ParseType parse(const void* data) { return Parser::parse(data); }

	static typename Parser::ParseType parse(const void* data, s32 advanceNum) { return Parser::parse(advance(data, advanceNum)); }

	static const void* advance(const void* data, s32 advanceNum) { return (char*)data + (advanceNum * sizeof(Parser::ParseType)); }
};

extern const void* parseVariableUInt_16_32_following(const void*, u32*, u32*, TEBit*);

inline uint align_roundUp(uint value, uint uAlign)
{
	return (value + uAlign - 1) & ~(uAlign - 1);
}

template <class Parser, int size>
struct TValueIterator : public JGadget::TIterator<std::random_access_iterator_tag, typename Parser::ParseType, std::ptrdiff_t,
                                                  typename Parser::ParseType*, typename Parser::ParseType&> {
	typedef typename Parser::ParseType ValueType;

	TValueIterator(const void* begin) { mBegin = reinterpret_cast<const char*>(begin); }

	const void* get() const { return mBegin; }

	typename Parser::ParseType operator*() const { return TParseValue<typename Parser::InnerParseValueClass>::parse(get()); }

	typename Parser::ParseType operator[](s32 n) const
	{
		TValueIterator i(*this);
		i += n;
		return *i;
	}

	TValueIterator& operator++()
	{
		mBegin += size;
		return *this;
	}

	const TValueIterator operator++(int)
	{
		TValueIterator old(*this);
		++(*this);
		return old;
	}

	TValueIterator& operator+=(s32 n)
	{
		mBegin += size * n;
		return *this;
	}

	TValueIterator& operator--()
	{
		mBegin -= size;
		return *this;
	}

	char const* mBegin;
};

template <typename T>
struct TValueIterator_raw : public TValueIterator<TParseValue_raw<T>, sizeof(T)> {
	TValueIterator_raw(const void* begin)
	    : TValueIterator<TParseValue_raw<T>, sizeof(T)>(begin)
	{
	}

	friend bool operator==(TValueIterator<TParseValue_raw<T>, sizeof(T)> a, TValueIterator<TParseValue_raw<T>, sizeof(T)> b)
	{
		return a.mBegin == b.mBegin;
	}

	friend bool operator!=(TValueIterator<TParseValue_raw<T>, sizeof(T)> a, TValueIterator<TParseValue_raw<T>, sizeof(T)> b)
	{
		return !operator==(a, b);
	}

	friend TValueIterator<TParseValue_raw<T>, sizeof(T)> operator+(TValueIterator<TParseValue_raw<T>, sizeof(T)> a, s32 b)
	{
		TValueIterator<TParseValue_raw<T>, sizeof(T)> it = a;
		it += b;
		return it;
	}
};

template <typename T>
struct TParseValue_misaligned_ : public TParseValue_raw_<T> {
	typedef T ParseType;
	static T parse(const void* data) { return TParseValue_raw_<T>::parse(data); }
};

template <typename T>
struct TParseValue_misaligned : public TParseValue_raw_<T> {
	typedef TParseValue_misaligned_<T> InnerParseValueClass;
};

template <typename T>
struct TValueIterator_misaligned : public TValueIterator<TParseValue_misaligned<T>, sizeof(T)> {
	TValueIterator_misaligned(const void* begin)
	    : TValueIterator<TParseValue_misaligned<T>, sizeof(T)>(begin)
	{
	}

	friend std::ptrdiff_t operator-(TValueIterator<TParseValue_misaligned<T>, sizeof(T)> a,
	                                TValueIterator<TParseValue_misaligned<T>, sizeof(T)> b)
	{
		return (a.mBegin - b.mBegin) / sizeof(T);
	}

	friend bool operator==(TValueIterator<TParseValue_misaligned<T>, sizeof(T)> a, TValueIterator<TParseValue_misaligned<T>, sizeof(T)> b)
	{
		return a.mBegin == b.mBegin;
	}

	friend bool operator!=(TValueIterator<TParseValue_misaligned<T>, sizeof(T)> a, TValueIterator<TParseValue_misaligned<T>, sizeof(T)> b)
	{
		return !operator==(a, b);
	}

	friend TValueIterator<TParseValue_misaligned<T>, sizeof(T)> operator+(TValueIterator<TParseValue_misaligned<T>, sizeof(T)> a, s32 b)
	{
		TValueIterator<TParseValue_misaligned<T>, sizeof(T)> it(a);
		it += b;
		return it;
	}
};

} // namespace binary
} // namespace JGadget

#endif
