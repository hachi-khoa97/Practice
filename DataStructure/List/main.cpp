// 1. This is double linked list what we know from C prgramming language.
// 2. List is sequence container that allow non-contiguous memory allocation.
// 3. List is faster compared to other sequence containers (vector, forward_list, deque) in terms of 
//    insertion, removal and moving elements in any position provided we have the iterator of the position. 
// 4. We should use this class instead of traditional double linked list because
//    a. Well tested
//    b. Bunch of available function
// 5. Few Available Operations
//    operator =, assign, front, back, empty, size, max_size, clear, insert, emplace, push_back, pop_back, push_front
//    pop_front, reverse, sort, merge, splice, unique, remove, remove_if, resize.

#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> l1 = {5,2,3,4,5,6};
	list<int> l2 = {12,44,17,32,77};
	
	// l1.sort();
	// l2.sort();
	// l1.merge(l2);

	// l1.splice(l1.begin(),l2);

	// l1.unique();

	for(auto &elm: l1){
		cout << elm << ' ';
	}
	cout << endl;

	// for(auto &elm: l2){
	// 	cout << elm << ' ';
	// }
	// cout << endl;

	return 0;
}