#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle() : length(0), width(0) {}

    
    Rectangle(double l, double w) : length(l), width(w) {}

    
    double calculatePerimeter() const {
        return 2 * (length + width);
    }

    
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }
};

int main() {
    
    Rectangle rect1;

    
    Rectangle rect2(10.0, 5.0);

    
    cout << "The perimeter of the default rectangle is: " << rect1.calculatePerimeter() << endl;
    cout << "The perimeter of the rectangle with length 10 and width 5 is: " << rect2.calculatePerimeter() << endl;

    return 0;
}
