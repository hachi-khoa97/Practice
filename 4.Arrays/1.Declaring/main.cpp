#include <iostream>
using namespace std;

int main(){
    //Array store element of the same type

    //Write data normally
    int arr[10];
    arr[5] = 100;
    arr[1] = 120;
    arr[3] = 560;
    arr[6] = 100;
    arr[7] = 200;
    arr[12] = 200;
    for(int i=0;i<13;i++){
        cout << "Element of arr[" << i <<"]: " << arr[i] << endl;
    }

    //Write data by loop
    // int arr[10];
    // for(int i=0;i<10;i++){
    //     arr[i] = i + 2;
    //     cout << "Element of arr[" << i <<"]: " << arr[i] << endl;
    // }

    //Only import some element
    // int arr[10];
    // for(int i=0;i<10;i++){
    //     if(i < 5) arr[i] = i + 2;
    //     cout << "Element of arr[" << i <<"]: " << arr[i] << endl;
    // }

    //If dont init all elements, the rest are init to 0
    // int arr_5[5] = {2,3,4};
    // for(int i=0;i<5;i++){
    //     cout << "Element of arr_5[" << i <<"]: " << arr_5[i] << endl;
    // }

    //Omit the size of the array at declaration
    // int class_size[] = {10,15,20,25,30};
    // for(auto value : class_size){    //This will print with range based for loop
    //     cout << "Value: " << value << endl;
    // }

    //Read-only array
    // const int class_size[] = {10,15,20,25,30};
    // class_size[2] = 8;   //Will cause error

    //Sum up scores array, store result in sum
    // int scores[] = {10,15,20,25,30,100};
    // int sum = 0;

    // for(int element : scores){
    //     cout << "Element: " << element << endl;
    //     sum += element;
    // }
    // cout << "Score sum: " << sum << endl;
    return 0;
}
 