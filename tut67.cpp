#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// }

// int funcAverage2(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// }

template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}




int main(){
    float a;
    a = funcAverage(5, 2);
    cout<<"The average of numbers is "<<a;
    
    return 0;
}