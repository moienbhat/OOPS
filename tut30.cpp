#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:
    
    complex(int, int);   // constructor declaration

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)  // ----> this is a parametarized constructor as it takes parameters
{
    a = x;
    b = y;
}

int main(){

    // Implicit Call
    complex a(4,6);
    a.printNumber();

    // Explicit call
    complex b = complex(5, 7);
    b.printNumber();


    return 0;
}