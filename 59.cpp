#include <iostream>
using namespace std;


class Shape {
private:
    double radius;
    double length;
    double breadth;

public:
    
    Shape() : radius(0), length(0), breadth(0) {}

    
    Shape(double r) : radius(r), length(0), breadth(0) {}

    
    Shape(double l, double b) : radius(0), length(l), breadth(b) {}

    
    double calculateArea() const {
        if (radius > 0) {
            return 3.141 * radius * radius;
        } else if (length > 0 && breadth > 0) {
            return length * breadth;
        } else {
            return 0;
        }
    }
};

int main() {
    
    Shape circle(5);        
    Shape rectangle(10, 5); 

    
    cout << "The area of the circle is: " << circle.calculateArea() << endl;
    cout << "The area of the rectangle is: " << rectangle.calculateArea() << endl;

    return 0;
}
