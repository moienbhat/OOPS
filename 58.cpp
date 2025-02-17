#include <iostream>
using namespace std;

class Cube {
private:
    double side;

public:
    
    Cube(double s) : side(s) {}

    
    double calculateVolume() const {
        return side * side * side;
    }

    
    double getSide() const {
        return side;
    }
};

int main() {
    
    Cube cube1(3.0);
    Cube cube2(4.5);
    Cube cube3(2.0);

    
    cout << "The volume of a cube with side " << cube1.getSide() << " is: " << cube1.calculateVolume() << endl;
    cout << "The volume of a cube with side " << cube2.getSide() << " is: " << cube2.calculateVolume() << endl;

}
