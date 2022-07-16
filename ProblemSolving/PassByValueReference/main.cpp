#include <iostream>
using namespace std;

void swap1(int param1, int param2)
{
	int temp = param1;
	param1 = param2;
	param2 = temp;
}

void swap2(int& param1, int& param2)
{
	int temp = param1;
	param1 = param2;
	param2 = temp;
}

int main()
{
	int a = 1024;
	int b = 2048;

	cout << "a = " << a << ", b = " << b << endl;

	cout << "swap1: ";
	swap1(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	cout << "swap2: ";
	swap2(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}