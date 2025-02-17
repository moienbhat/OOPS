#include <iostream>
using namespace std;
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    
    Point(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}

    
    Point(const Point& other) : x(other.x), y(other.y) {}

    
    double calculateDistance(const Point& p2) const {
        return sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
    }

    
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
};

int main() {
    
    Point point1(3.0, 4.0);
    Point point2(6.0, 8.0);

    
    Point point3 = point1;

    
    cout << "The distance between (" << point1.getX() << ", " << point1.getY() << ") and ("
              << point2.getX() << ", " << point2.getY() << ") is: " << point1.calculateDistance(point2) << endl;

    
    cout << "The copied point coordinates are: (" << point3.getX() << ", " << point3.getY() << ")" << endl;

    return 0;
}
