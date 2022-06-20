#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float a = 1.12345678901234567890f;			//Precision: 7
	double b = 1.12345678901234567890;			//Precision: 15
	long double c = 1.12345678901234567890L;	//Precision: 20
	bool x;

	// cout << "Size of float: " << sizeof(float) << endl;
	// cout << "Size of double: " << sizeof(double) << endl;
	// cout << "Size of long double: " << sizeof(long double) << endl;

	// cout << "a = " << a << endl;
	// cout << "b = " << b << endl;
	// cout << "c = " << c << endl;

	// Precision
	// cout << setprecision(20);
	// cout << "a = " << a << endl;
	// cout << "b = " << b << endl;
	// cout << "c = " << c << endl;

	//Float problem: Precision is usually too limited for a lot of applications
	// float d = 192400023.0f; 		// Error: narrowing conversion
	// double e = 192400023.0f;
	// double f = 192400023.0;
	// cout << setprecision(20);
	// cout << "d = " << d << endl;
	// cout << "e = " << e << endl;
	// cout << "f = " << f << endl;

	//Scientific notation
	// double number_1 = 192400023;
	// double number_2 = 1.92400023e8;
	// double number_3 = 1.924e8;

	// double number_4 = 0.00000000003498;
	// double number_5 = 3.498e-11;		//multiply with 10exp (-11)

	// cout << setprecision(20);
	// cout << "number_1 = " << number_1 << endl;
	// cout << "number_2 = " << number_2 << endl;
	// cout << "number_3 = " << number_3 << endl;
	// cout << "number_4 = " << number_4 << endl;
	// cout << "number_5 = " << number_5 << endl;
	
	return 0;
}