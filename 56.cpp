#include <iostream>
using namespace std;

class Triangle {
private:
    double base;
    double height;

public:
    
    Triangle(double b, double h) : base(b), height(h) {}

    
    double calculateArea() const {
        return 0.5 * base * height;
    }

    
    ~Triangle() {
        cout << "Triangle object with base " << base << " and height " << height << " is destroyed." << endl;
    }
};

int main() {
    
    Triangle my_triangle(10.0, 5.0);

    
    cout << "The area of the triangle is: " << my_triangle.calculateArea() << endl;

    return 0;
}
