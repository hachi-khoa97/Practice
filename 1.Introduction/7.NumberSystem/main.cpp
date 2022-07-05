#include <iostream>
using namespace std;

int main(){
	int a = 15; 		//Dec
	int b = 017;		//Oct
	int c = 0x0F;		//Hex
	int d = 0b00001111; //bin

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	return 0;
}