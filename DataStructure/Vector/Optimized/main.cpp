// Best way to use vector
//								Vector
//
//
// 				Linked list	  	  + 	Array	
// 				Grown Dynamical			O(1) access time
// Problem:		Travel to access		Fixed size
// Size: Hold how many element in vector
// Capacity: How much element this vector can hold. If full, double the current capacity
// Problem in vector
// Too many copy --> Performance
// Solution: Vec.reserve(1000)

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> Vec;
	// Vec.reserve(1000);
	Vec.reserve(31);
	for(int i=0;i<32;i++){
		Vec.push_back(i);
		cout << "Size: " << Vec.size() << " \tCapacity: " << Vec.capacity() << endl;
	}
	return 0;
}