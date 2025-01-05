#include<iostream>
using namespace std;

int main(){
    // Basic of pointer
    int a = 4;
    int* ptr = &a;
    *ptr = 999;

    cout<<"The value of a is "<<*(ptr)<<endl;


    // new Keyword

    int *p = new int(4);
    float *p1= new float(40.78);
    cout<<"The value of adress is "<< *(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;  // *(ar+1)
    arr[2] = 30;
   

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;


    // delete operator

     delete[] arr;


    return 0;
}
