#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
	stack<char> st;
	int len = s.length();
	char temp;
	for(int i=0;i<len;i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
			st.push(s[i]);
		}
		else{
			if(st.size() == 0) return false;
			temp = s[i];
			if(temp == ')' && st.top() != '('){
				return false;
			} else if(temp == ']' && st.top() != '['){
				return false;
			} else if(temp == '}' && st.top() != '{'){
				return false;
			}
			st.pop();
		}
	}
	if(st.size() != 0){
		return false;
	} else {
		return true;
	}
}

int main()
{
	cout <<	isValid("([])");

	return 0;
}