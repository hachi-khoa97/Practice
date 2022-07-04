#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int m_number, m_digit, m_reverse_value = 0;
	int value;
	cout << "Enter a random number: ";
	cin >> m_number;

	value = m_number;

	do{
		m_digit = value%10;										//Take last digit of number
		m_reverse_value = (m_reverse_value * 10) + m_digit;		//Add digit to reverse number
		value /= 10;											
	} while (value!=0);
	cout << "Reversed number is: " << m_reverse_value << endl;

	if(m_reverse_value == m_number){
		cout << "This number is palindrome" << endl;
	} else cout << "This number is not palindrome" << endl;

	return 0;
}