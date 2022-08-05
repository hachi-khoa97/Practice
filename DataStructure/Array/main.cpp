// 1. std::array is a container that encapsulates fixed size arrays.
// 2. array size is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements:
//    a. at()
//    b. []
//    c. front()
//    d. back()
//    e. data() // gives access to the underlying array

#include <iostream>
#include <array>
using namespace std;

int main()
{
	//Declare
	array<int,5> myArray;

	//Initialize
	array<int,5> myArray1 = {1,2,3,4,5};
	array<int,5> myArray2 {5,4,3,2,1};

	//Assign using initializer list

	array<int,5> myArray3;
	myArray = {10,11,1,2,4};

	return 0;
}