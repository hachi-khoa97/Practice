// NOTES:
// 0. std::stack class is a container adapter that gives the programmer the functionality of a stack.
// 1. Internally it uses std::deque STL container.
// 2. It is LIFO (last-in, first-out) data structure.
// 4. std::stack allows to push(insert) and pop(remove) only from back.

// FUNCTIONS PROVIDED:
// empty() – Returns whether the stack is empty – Time Complexity : O(1)
// size() – Returns the size of the stack – Time Complexity : O(1)
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
// pop() – Deletes the top most element of the stack – Time Complexity : O(1)

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void print(stack<int, vector<int>> st){
	while(!st.empty()){
		cout << st.top() << endl;
		st.pop();
	}
}
int main()
{
	stack<int, vector<int>> st;
	st.push(1);
	st.push(100);
	st.push(98);
	st.push(27);
	st.push(66);
	st.push(12);

	print(st);

	return 0;
}