#include <iostream>
#include <limits>
using namespace std;

int main(){

	short int var1 = 10;	//2 byte
	short int var2 = 20;
	char var3 = 40;			//1 byte
	char var4 = 50;

	cout << "Size of var1: " << sizeof(var1) << endl;
	cout << "Size of var2: " << sizeof(var2) << endl;
	cout << "Size of var3: " << sizeof(var3) << endl;
	cout << "Size of var4: " << sizeof(var4) << endl;

	auto result1 = var1 + var2;		//Convert to int
	auto result2 = var3 + var4;

	cout << "Size of result1: " << sizeof(result1) << endl;		//4 byte
	cout << "Size of result2: " << sizeof(result2) << endl;
	return 0;
}