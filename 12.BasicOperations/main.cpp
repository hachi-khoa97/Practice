#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	//Precedebce: which operartion to do first
	//Associativity: which direction or which order

	int a = 18;
	int b = 7;

	//Add
	int result_ab = a + b;
	cout << "a + b = " << result_ab << endl;

	//Sub
	result_ab = a - b; 
	cout << "a - b = " << result_ab << endl;

	result_ab = b - a;  
	cout << "b - a = " << result_ab << endl;
	
	//Multiply
	result_ab = a * b;
	cout << "a * b = " << result_ab << endl;

	//Division
	result_ab = a / b;
	double div_ab = a / b;
	cout << "a / b = " << div_ab << endl;		//chia lay thương

	//Modulus
	result_ab = a % b;
	cout << "a % b = " << result_ab << endl;	//chia lay du
	return 0;
}