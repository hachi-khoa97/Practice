#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	signed int value_1 = 10;
	int value_2 = -300;
	float number1 = 1.12345692742984234f;	//always use suffix "f" when init float type

	cout << "Number: " << setprecision(2) << number1 ;

	return 0;
}