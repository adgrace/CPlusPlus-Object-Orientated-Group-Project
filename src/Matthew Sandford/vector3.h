#pragma once

#include <math.h>

//This class has been made as general as possible to give it the flexibilty to be used with other programs
//Not all of the functions defined are used

template <class T> class Vector3
{
public:

	Vector3() : x(0), y(0), z(0) {};								//Derfault constructor sets up default values for its member variables
	Vector3(T x, T y, T z) : x(x), y(y), z(z) {};					//Contructor that takes in arguments to set the member variables

	~Vector3() {};													//Default destructor

	Vector3<T>  operator-(Vector3<T>  other);						//Functionality to subtract vectors should we need in future
	Vector3<T>  operator+(Vector3<T>  other);						//Functionality to add vectors should we need in future
	Vector3<T>  operator/(T other);									//Functionality to divided vectors by a scaler should we need in future
	Vector3<T>  operator*(T other);									//Functionality to multiply a vectors by a scaler should we need in future

	static Vector3<T> cross(Vector3<T> vector_1, Vector3<T> v2);	//Functionality to cross vectors should we need in future
	static T dot(Vector3<T>  vector_1, Vector3<T>  v2);				//Functionality to dot vectors should we need in future

	T x, y, z;														//Member variables holding x,y,z position
};