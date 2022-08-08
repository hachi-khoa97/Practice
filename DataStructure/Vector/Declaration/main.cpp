// 1. std::vector is a sequence container and also known as Dynamic Array or Array List().
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//Declare
	vector<int> myVector;
	vector<int> myVector1 = {1,2,3,4};
	vector<int> myVector2 {5,4,3,2,1};

	//Accessing element
	myVector1[3] = 100;
	myVector2.at(3) = 200;

	cout << myVector1.front() << endl;
	cout << myVector2.size() << endl;
	for(int i=0;i<myVector2.size();i++){
		cout << myVector2.at(i) << endl;
	}
	return 0;
}