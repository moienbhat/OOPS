#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
    int a, b;
    public:
    void getDataSimple(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }

    void performOperationsSimple(){
        cout<<"The value of a + b is "<<a+b<<endl;
        cout<<"The value of a - b is "<<a-b<<endl;
        cout<<"The value of a * b is "<<a*b<<endl;
        cout<<"The value of a / b is "<<a/b<<endl;
    }

};

class scientificCalculator{
    int a, b;
    public:
    void getDataScientific(){
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }

    void performOperationsScientific(){
        cout<<"The value of cos(a) "<<cos(a)<<endl;
        cout<<"The value of sin(a) is "<<sin(a)<<endl;
        cout<<"The value of exp(a) is "<<exp(a)<<endl;
        cout<<"The value of tan(a) is "<<tan(a)<<endl;
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator{
    

};

int main(){

    hybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();




    return 0;
}