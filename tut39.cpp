#include<iostream>
using namespace std;

class Base{
    protected: //
    int a;
    private:
        int b;
};

/* for a protected member
                                         Public derivation               Private derivation         Protected derivation     
    1. Private members                   not inherited                   Not Inherited           n   Not Inherited
    2. Protected members                 inherited as protected          Private                     Protected
    3. Public members                    inherited as public             Private                     Protected

*/


class Derived : protected Base{
    // a is protected
    // b is not accessible from Derived class


};


int main(){
    Base b;
    Derived d;
   // cout<<d.a;    // since 'a' is protected, it is not accessible from object of Base class

    return 0;
}