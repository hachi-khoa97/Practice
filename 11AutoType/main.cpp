#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	auto var1 = 135;		//int
	auto var2 = 13.0;		//double
	auto var3 = 14.0f;		//float
	auto var4 = 146.0l;		//long double
	auto var5 = 'D';		//char
	auto var6 = "NTXD";		//const char array

	auto var7 = 123u;		//unsigned
	auto var8 = 123ul;		//unsigned long
	auto var9 = 123ll;		//long long

	cout << "Size of var1: " << sizeof(var1) << " Bytes" << endl;
	cout << "Size of var2: " << sizeof(var2) << " Bytes" << endl;
	cout << "Size of var3: " << sizeof(var3) << " Bytes" << endl;
	cout << "Size of var4: " << sizeof(var4) << " Bytes" << endl;
	cout << "Size of var5: " << sizeof(var5) << " Bytes" << endl;
	cout << "Size of var6: " << sizeof(var6) << " Bytes" << endl;
	cout << "Size of var7: " << sizeof(var7) << " Bytes" << endl;
	cout << "Size of var8: " << sizeof(var8) << " Bytes" << endl;
	cout << "Size of var9: " << sizeof(var9) << " Bytes" << endl;
	
	return 0;
}