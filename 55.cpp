#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }


    double calculateArea() const {
        return length * width;
    }
};

int main() {
    
    Rectangle my_rectangle;


    my_rectangle.setLength(10.0);
    my_rectangle.setWidth(5.0);


    cout << "The area of the rectangle is: " << my_rectangle.calculateArea() << endl;

    return 0;
}
