#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with the same name as of the class
    // it is automatically invoked whenever an object is created
    // it is used to initialize the objects of its class

    complex(void); // constructor declaration

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)  // ----> this is a default constructors as it takes no parameter
{
    a = 10;
    b = 0;
}

int main()
{
    complex c;
    c.printNumber();
    

    return 0;
}

// Properties of constructors
// 1. It should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments