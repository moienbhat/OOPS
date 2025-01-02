#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;

    public:
    simple(int a, int b = 9){  // contructor with default arguments
        data1 = a;
        data2 = b;
    }

    void printData();
};
void simple :: printData(){
    cout<<"The value of data1 is "<<data1<<" and the value of data2 is "<<data2<<endl;
}

int main(){

    simple s(1);
    s.printData();

    return 0;
}