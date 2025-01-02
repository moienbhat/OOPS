#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(int x)      // Constructor Overloading 
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c(4, 6);
    c.printNumber();

    complex c1(5);
    c1.printNumber();

    return 0;
}