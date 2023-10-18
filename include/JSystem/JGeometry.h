#ifndef _JSYSTEM_JGEOMETRY_H
#define _JSYSTEM_JGEOMETRY_H

#include "Dolphin/vec.h"
#include "types.h"
#include "stl/float.h"

inline float fsqrt_step(float mag)
{
	f32 root = __frsqrte(mag);
	return 0.5f * root * (3.0f - mag * (root * root));
}

namespace JGeometry {
template <typename T>
struct TVec2 {
	TVec2() { }
	TVec2(T v) { set(v); }
	TVec2(T x, T y) { set(x, y); }

	void set(T v) { y = x = v; }

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

	/** @fabricated */
	TVec2<T> adding(T xDelta, T yDelta) { return TVec2<T>(x + xDelta, y + yDelta); }

	/** @fabricated */
	void add(T xDelta, T yDelta)
	{
		x += xDelta;
		y += yDelta;
	}

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

	inline TVec3(Vec& vec)
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	void zero() { x = y = z = 0.0f; }

	f32 squared() const { return x * x + y * y + z * z; }

	void normalize()
	{
		f32 sq = squared();
		if (sq <= FLT_EPSILON * 32.0f) {
			return;
		}
		f32 norm;
		if (sq <= 0.0f) {
			norm = sq;
		} else {
			norm = fsqrt_step(sq);
		}
		x *= norm;
		y *= norm;
		z *= norm;
	}

	void normalize(const TVec3<f32>& other)
	{
		f32 sq = other.squared();
		if (sq <= FLT_EPSILON * 32.0f) {
			zero();
			return;
		}
		f32 norm;
		if (sq <= 0.0f) {
			norm = sq;
		} else {
			norm = fsqrt_step(sq);
		}
		x = other.x * norm;
		y = other.y * norm;
		z = other.z * norm;
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
    inline f32 getWidth() const { return f.x - i.x; }
    inline f32 getHeight() const { return f.y - i.y; }

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
	// TBox2(const TBox2& other) { set(other); }
    TBox2(const TVec2<T>& i, const TVec2<T> f) { set(i, f); }
	// TBox2(const TVec2<T>& i, T x1, T y1) { set(i, x1, y1); }
	// TBox2(T x0, T y0, const TVec2<T>& f) { set(x0, y0, f); }
    TBox2(f32 x0, f32 y0, f32 x1, f32 y1) { set(x0, y0, x1, y1); }
	TBox2(f32 x0, f32 y0, TVec2<f32>& f) { set(x0, y0, x0 + f.x, y0 + f.y);	}
	TBox2(f32 val)
	{
		f.y = val;
		f.x = val;
		i.y = val;
		i.x = val;
	}

	// inline TBox2& operator=(const TBox2& other)
	// {
	// 	set(other);
	// 	return *this;
	// }

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
    void set(const TVec2<T>& i, const TVec2<T>& f) { this->i.set(i), this->f.set(f); }
    // void set(const TVec2<T>& i, T x1, T y1) { this->i.set(i), this->f.set(x1, y1); }
    // void set(T x0, T y0, const TVec2<T>& f) { this->i.set(x0, y0), this->f.set(f); }
    void set(T x0, T y0, T x1, T y1) { this->i.set(x0, y0); this->f.set(x1, y1); }

	// void setOrigin(const TVec2<T>& other) { this->i.set(other); }
	// void setSize(T width, T height) { this->f.x = this->i.x + width; this->f.y = this->i.y + height; }
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

typedef TVec2<f32> TVec2f;
typedef TVec3<f32> TVec3f;
typedef TBox2<f32> TBox2f;
typedef TBox3<f32> TBox3f;

} // namespace JGeometry

#endif
