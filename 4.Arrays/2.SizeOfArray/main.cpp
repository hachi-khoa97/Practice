#include <iostream>
using namespace std;

int main(){
    //Get size of array at runtime

    int scores[] = {10,15,20,25,30,110,10};

    //One way to find array size
    // cout << "Size of Array: " << sizeof(scores) << endl;
    // cout << "Size of Array Element: " << sizeof(scores[0]) << endl;
    // int count = sizeof(scores)/sizeof(scores[0]);

    // int count = size(scores);   //size(C++17)

    // for(int i = 0; i < count;i++){
    //     cout << "Scores[" << i <<"]: "<< scores[i] << endl;
    // }

    //Using range based for loop
    for(auto i : scores){
        cout << "value: " << i << endl;
    }

    return 0;
}
 