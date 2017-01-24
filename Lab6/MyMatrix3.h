#ifndef MY_MATRIX3
#define MY_MATRIX3

#include "MyVector3D.h"

class MyMatrix3
{
public:
	MyMatrix3();
	MyMatrix3(
		double a11, double a12, double a13,
		double a21, double a22, double a23,
		double a31, double a32, double a33);
	~MyMatrix3();
	std::string toString();

private:
	double m11;
	double m12;
	double m13;
	double m21;
	double m22;
	double m23;
	double m31;
	double m32;
	double m33;
};


#endif // !MY_MATRIX3