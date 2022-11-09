#ifndef _JSYSTEM_JGEOMETRY_H
#define _JSYSTEM_JGEOMETRY_H

#include "Dolphin/vec.h"
#include "types.h"

namespace JGeometry {
template <typename T>
struct TVec2 {
	TVec2() { }
	TVec2(T x, T y) { set(x, y); }

	void set(T x, T y)
	{
		this->x = x;
		this->y = y;
	}

	void set(const TVec2& other)
	{
		x = other.x;
		y = other.y;
	}

	void setMin(const TVec2<f32>& min)
	{
		if (x >= min.x)
			x = min.x;
		if (y >= min.y)
			y = min.y;
	}

	void setMax(const TVec2<f32>& max)
	{
		if (x <= max.x)
			x = max.x;
		if (y <= max.y)
			y = max.y;
	}

	void add(const TVec2<T>& other)
	{
		x += other.x;
		y += other.y;
	}

	/** @fabricated */
	// TVec2<T> adding(const TVec2<T>& other) { return TVec2<T>(x + other.x, y + other.y); }

	bool isAbove(const TVec2<T>& other) const { return (x >= other.x) && (y >= other.y) ? true : false; }

	T x;
	T y;
};

template <typename T>
struct TVec3 {
	inline TVec3() { }
	inline TVec3(T value)
	    : x(value)
	    , y(value)
	    , z(value)
	{
	}
	inline TVec3(T inX, T inY, T inZ)
	    : x(inX)
	    , y(inY)
	    , z(inZ) {};

	// TODO: Determine if this could've actually existed, or if I'm just making it up.
	inline TVec3(const TVec3<T>& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}

	// TODO: Determine if this could've actually existed, or if I'm just making
	// it up.
	inline TVec3& operator=(const TVec3& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	}

	void set(T x, T y, T z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void set(const TVec3& other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}

	// inline operator Vec() const { return *this; }
	inline operator Vec() const
	{
		Vec other;
		other.x = x;
		other.y = y;
		other.z = z;
		return other;
	}

	T x;
	T y;
	T z;
};

// Size: 0x10
template <class T>
struct TBox {
	TBox()
	    : i()
	    , f()
	{
	}
	TBox(const TBox& other)
	    : i(other.f)
	    , f(other.y)
	{
	}

	T i, f;
};

// clang-format off
template<> struct TBox<TVec2<f32> > {
    f32 getWidth() const { return f.x - i.x; }
    f32 getHeight() const { return f.y - i.y; }

    bool isValid() const { return f.isAbove(i); }

    void addPos(f32 x, f32 y) {
        addPos(TVec2<f32>(x, y));
    }

    void addPos(const TVec2<f32>& pos) {
        i.add(pos);
        f.add(pos);
    }

    bool intersect(const TBox<TVec2<f32> >& other) {
        i.setMax(other.i);
        f.setMin(other.f);
        return isValid();
    }

    TVec2<f32> i, f;
};

template <typename T>
struct TBox2 : TBox<TVec2<T> > {
    TBox2() {}
    TBox2(const TVec2<f32>& i, const TVec2<f32> f) { set(i, f); }
    TBox2(f32 x0, f32 y0, f32 x1, f32 y1) { set(x0, y0, x1, y1); }

    void absolute() {
        if (!this->isValid()) {
            TBox2<T> box(*this);
            this->i.setMin(box.i);
            this->i.setMin(box.f);
            this->f.setMax(box.i);
            this->f.setMax(box.f);
        }
    }

	// /** @fabricated */
	// TBox2<T>& addingPos(TBox2<T>& result, const TVec2<T>& pos) {
	// 	return TBox2<T>(i.adding(pos), f.adding(pos));
	// }

    void set(const TBox2& other) { set(other.i, other.f); }
    void set(const TVec2<f32>& i, const TVec2<f32>& f) { this->i.set(i), this->f.set(f); }
    void set(f32 x0, f32 y0, f32 x1, f32 y1) { i.set(x0, y0); f.set(x1, y1); }
};

// clang-format on

template <typename T>
struct TBox3 {
	T minX;
	T minY;
	T minZ;
	T maxX;
	T maxY;
	T maxZ;
};

typedef TVec2<float> TVec2f;
typedef TVec3<float> TVec3f;
typedef TBox2<float> TBox2f;
typedef TBox3<float> TBox3f;

} // namespace JGeometry

#endif
