#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	int value = 5;

	//Increment by one
	value += 1;
	cout << "The increment value is: " << value << endl;

	value = 5;

	//Decrement by one
	value -= 1;
	cout << "The decrement value is: " << value << endl;

	value = 5;
	cout << "value++ is: " << value++ << endl;
	cout << "value now is: " << value << endl;

	value = 5;
	cout << "++value is: " << ++value << endl;
	cout << "value now is: " << value << endl;

	value = 5;
	cout << "++value-- is: " << ++value<< endl;
	cout << "value now is: " << value-- << endl;

	return 0;
}