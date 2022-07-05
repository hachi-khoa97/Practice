#include <iostream>
#include <limits>
using namespace std;

int main(){

	cout << "Range of short: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
	cout << "Range of int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max()<< endl;
	cout << "Range of double: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max()<< endl;
	cout << "Range of float: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max()<< endl;

	return 0;
}