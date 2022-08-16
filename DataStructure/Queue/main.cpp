// NOTES:
// 0. std::queue class is a container adapter that gives the programmer the functionality of a queue
// 1. queue is FIFO (first-in, first-out) data structure.
// 2. std::queue provides only specific set of functions.
// 3. std::queue allows to push(insert) at back and pop(remove) from front.
// 4. std::queue gives front, back, push, pop, empty, size.

#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q){
	while(!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}
}
int main()
{
	queue<int> q;
	q.push(1);
	q.push(100);
	q.push(98);
	q.push(27);
	q.push(66);
	q.push(12);

	print(q);

	return 0;
}