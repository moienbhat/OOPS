#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "1 Displaying Base Class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "2 Displaying Base Class variable var_base " << var_base << endl;
        cout << "Displaying Base Class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass Obj_derived;

    base_class_pointer = &Obj_derived;
    base_class_pointer->display();

    return 0;
}