#include <iostream>
using namespace std;

int main(){
	int a;
	int b{}; //init zero
	int c{10}; //init 10
	int d{15}; //init 15
	int e(b + c);

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of string: " << sizeof(string) << endl;

	return 0;
}