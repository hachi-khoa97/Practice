#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	//Precedence: which operartion to do first
	//Associativity: which direction or which order

	int a = 6;
	int b = 3;
	int c = 8; 
	int d = 9;
	int e = 3;
	int f = 2;
	int g = 5;

	int result = a + b * c - d / e - f + g;
			   //6 + 3 * 8 - 9 / 3 - 2 + 5
			   //6 +  24   -   3   - 2 + 5
			   //	30     -   3   - 2 + 5
			   //			30

	cout << "Result: " << result << endl;

	result = a / b * c + d - e + f;
		   //6 / 3 * 8 + 9 - 3 + 2
		   //  2   * 8 + 9 - 3 + 2
		   //     16   + 9 - 3 + 2
		   //		 25	   - 3 + 2
		   //				24
	cout << "Result: " << result << endl;

	result = (a + b) * c - d / e - f + g;
	cout << "Result with (): " << result << endl;
	return 0;
}