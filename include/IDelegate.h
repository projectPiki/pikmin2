#ifndef _IDELEGATE_H
#define _IDELEGATE_H

#include "types.h"

struct IDelegate {
	virtual void invoke() = 0; // _08
};

template <typename A>
struct IDelegate1 {
	virtual void invoke(A) = 0; // _08
};

template <typename A, typename B>
struct IDelegate2 {
	virtual void invoke(A, B) = 0; // _08
};

template <typename A, typename B, typename C>
struct IDelegate3 {
	virtual void invoke(A, B, C) = 0; // _08
};

/**
 * @brief Template struct representing a delegate.
 *
 * This struct is used to create delegates that can invoke member functions of a given object.
 * It inherits from the IDelegate interface.
 *
 * @tparam T The type of the object that the delegate will invoke the function on.
 */
template <typename T>
struct Delegate : public IDelegate {
	/**
	 * @brief Constructor for the Delegate struct.
	 *
	 * Initializes the Delegate with the given object and member function.
	 *
	 * @param obj Pointer to the object on which the member function will be invoked.
	 * @param func Pointer to the member function to be invoked.
	 */
	inline Delegate(T* obj, void (T::*func)())
	{
		mObject   = obj;
		mFunction = func;
	}

	/**
	 * @brief Invokes the member function on the object.
	 *
	 * This function calls the member function on the object that was passed during construction.
	 */
	virtual void invoke() { (mObject->*mFunction)(); } // _08

	// VTBL _00
	T* mObject;             // _04
	void (T::*mFunction)(); // _08
};

/**
 * @brief Template struct representing a delegate with one argument.
 *
 * This struct is used to create delegates that can invoke a member function with one argument.
 * It stores a pointer to the object and the member function to be invoked.
 *
 * @tparam T The type of the object that the member function belongs to.
 * @tparam A The type of the argument that the member function takes.
 */
template <typename T, typename A>
struct Delegate1 : public IDelegate1<A> {
	/**
	 * @brief Constructs a Delegate1 object.
	 *
	 * @param obj Pointer to the object that the member function belongs to.
	 * @param func Pointer to the member function to be invoked.
	 */
	inline Delegate1(T* obj, void (T::*func)(A))
	{
		mObject   = obj;
		mFunction = func;
	}

	/**
	 * @brief Invokes the member function with the given argument.
	 *
	 * @param a The argument to be passed to the member function.
	 */
	virtual void invoke(A a) { (mObject->*mFunction)(a); } // _08

	// VTBL _00
	T* mObject;              // _04
	void (T::*mFunction)(A); // _08
};

/**
 * @brief Template struct representing a delegate with two parameters.
 *
 * This struct is used to create delegates that can invoke a member function with two parameters.
 * It inherits from the IDelegate2 interface.
 *
 * @tparam T The type of the object that the member function belongs to.
 * @tparam A The type of the first parameter of the member function.
 * @tparam B The type of the second parameter of the member function.
 */
template <typename T, typename A, typename B>
struct Delegate2 : public IDelegate2<A, B> {
	/**
	 * @brief Constructs a Delegate2 object.
	 *
	 * @param obj Pointer to the object that the member function belongs to.
	 * @param func Pointer to the member function.
	 */
	inline Delegate2(T* obj, void (T::*func)(A, B))
	{
		mObject   = obj;
		mFunction = func;
	}

	/**
	 * @brief Invokes the member function with the given parameters.
	 *
	 * @param a The first parameter of the member function.
	 * @param b The second parameter of the member function.
	 */
	virtual void invoke(A a, B b) { (mObject->*mFunction)(a, b); } // _08

	T* mObject;                 // _04
	void (T::*mFunction)(A, B); // _08
};

/**
 * @brief A template struct representing a delegate with three parameters.
 *
 * This struct is used to create delegates that can invoke a member function with three parameters.
 * It inherits from the IDelegate3 interface.
 *
 * @tparam T The type of the object that the member function belongs to.
 * @tparam A The type of the first parameter of the member function.
 * @tparam B The type of the second parameter of the member function.
 * @tparam C The type of the third parameter of the member function.
 */
template <typename T, typename A, typename B, typename C>
struct Delegate3 : public IDelegate3<A, B, C> {
	/**
	 * @brief Constructs a Delegate3 object.
	 *
	 * @param obj Pointer to the object that the member function belongs to.
	 * @param func Pointer to the member function.
	 */
	inline Delegate3(T* obj, void (T::*func)(A, B, C))
	{
		mObject   = obj;
		mFunction = func;
	}

	/**
	 * @brief Invokes the member function with the specified parameters.
	 *
	 * @param a The first parameter of the member function.
	 * @param b The second parameter of the member function.
	 * @param c The third parameter of the member function.
	 */
	virtual void invoke(A a, B b, C c) { (mObject->*mFunction)(a, b, c); } // _08

	T* mObject;                    // _04
	void (T::*mFunction)(A, B, C); // _08
};

#endif
