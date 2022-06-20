#include <iostream>
using namespace std;

int main(){
	int age;
	string name;

	cout << "Please enter ur name and age: " << endl;
	cin >> name;
	cin >> age;

	cout << "Hello " << name << "\tYou're " << age << endl;

	return 0;
}