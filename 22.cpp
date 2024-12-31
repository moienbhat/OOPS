//Classes Public and Private Access Modifiers in C++


#include<iostream>
using namespace std;


class Employee
{
    private:
        int a, b, c;

    public:
        int d, e;
        void setData(int a1, int b1, int c1);   // Decalration
        void getData(){
            cout<<"Value of a is "<<a<<endl;
             cout<<"Value of b is "<<b<<endl;
              cout<<"Value of c is "<<c<<endl;
               cout<<"Value of d is "<<d<<endl;
                cout<<"Value of c is "<<e<<endl;
        }
        
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
    

int main() {

    Employee harry;
    harry.d = 34;
    harry.e = 89;
    // harry.a = 90; //This will throw error as a is private
    harry.setData(1,2,4);
    harry.getData();



    return 0;
}