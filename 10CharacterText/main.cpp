#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	char a = 65;
	cout << "Value:: " << a << endl;							//character A since 65 is A in ascii
	cout << "Value(int): " << static_cast<int>(a) << endl;		//convert from char to number value
	
	return 0;
}