#include <iostream>
using namespace std;

int romanToInt(string s) {
	int result = 0;
	int n = s.length();
	
	for(int i = 0; i < n;i++){
		if(s[i] == 'I' && i < n-1){
			if(s[i+1] == 'V'){
				result +=4;
				i++;
				continue;
			} else if(s[i+1] == 'X'){
				result +=9;
				i++;
				continue;
			}
		}
		if(s[i] == 'X' && i < n-1){
			if(s[i+1] == 'L'){
				result +=40;
				i++;
				continue;
			} else if(s[i+1] == 'C'){
				result +=90;
				i++;
				continue;
			}
		}
		if(s[i] == 'C' && i < n-1){
			if(s[i+1] == 'D'){
				result +=400;
				i++;
				continue;
			} else if(s[i+1] == 'M'){
				result +=900;
				i++;
				continue;
			}
		}
		switch(s[i]){
			case 'I':
				result +=1;
				break;
			case 'V':
				result +=5;
				break;
			case 'X':
				result +=10;
				break;
			case 'L':
				result +=50;
				break;
			case 'C':
				result +=100;
				break;
			case 'D':
				result +=500;
				break;
			case 'M':
				result +=1000;
				break;
		}
	}
	return result;
}

int main()
{
	cout <<	romanToInt("DCL");

	return 0;
}