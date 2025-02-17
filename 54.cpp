#include <iostream>
using namespace std;

class Circle {
public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

int main() {
    
    Circle my_circle(2);  

    
    cout << "The area of the circle is: " << my_circle.calculateArea() << endl;

    return 0;
}
