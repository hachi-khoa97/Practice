#include <iostream>
using namespace std;

int main(){
    const int m_size = 10;

    double *p_salary = new double[m_size];                    //Contain garbage value
    int *p_student = new int [m_size]{};                      //Contain all value 0
    double *p_scores = new double [m_size] {99,1,26,42,56};   //Contain first 5 value, the rest is 0

    if(p_scores){
        cout << "Size of score: " << sizeof(p_scores) << endl;
        cout << "Success allocate" << endl;

        for(int i = 0; i < m_size; i++){
            // cout << "Value " << i << " is " << p_scores[i] << endl;
            cout << "\tValue " << i << " is " << *(p_scores + i) << endl;
        }
    }

    delete p_salary;
    p_salary = NULL;
    delete p_student;
    p_student = NULL;
    delete p_scores;
    p_scores = NULL;

    //Static arrays vs Dynamic arrays

    int score[m_size] = {1,2,3,4,5,6,7,8,9,0};
    cout << "Scores size: " << size(score) << endl;
    for(auto s : score){                            //Cant use this for dynamic arrays
        cout << "Value: " << s << "\t";
    }
    cout << endl;
    int *p_score1 = new int[10] {0,9,8,7,6,5,4,3,2,1};
    for(int i = 0; i < m_size; i++){
        cout << "Value1: " << p_score1[i] << "\t";
    }

    return 0;
}
 