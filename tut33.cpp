#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {};  // it is necessary to declare a default constructor
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14

    void show();

};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = principal * (1 + interestRate);
    }
}


BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = principal * (1 + interestRate);
    }
}


void BankDeposit ::show(){
    cout<<"Principal amount was "<<principal<<
    " Return value after "<<years
    <<" years is "<<returnValue<<endl;;

}

int main()
{
    BankDeposit bd1, bd2, bd3;      // bd1, bd2, bd3 are objects of class BankDeposit beacuse we have created a class BankDeposit with no parameters
    int p, y;
    float r;            // decimal foem
    int R;              // percentage form

    bd3.show();


    cout<<"Enter value of p y and r"<<endl;
    cin>>p>>y>>r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();


    cout<<"Enter value of p y and r"<<endl;
    cin>>p>>y>>R;

    bd2= BankDeposit(p, y, R);
    bd2.show();


    return 0;
}