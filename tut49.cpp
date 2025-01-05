#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j) {constructor-body}
};
*/

class Test{
    int a;
    int b;

    public:
       //  Test (int i, int j) : b(j), a(i+b) -->> Red flag this will create problems because a will be initialized first and b will be initialized later
        Test(int i, int j) : a(i), b(j) {
            cout<<"Constructor executed"<<endl;
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
        }
};



int main(){
    Test t(10, 20);



    return 0;
}