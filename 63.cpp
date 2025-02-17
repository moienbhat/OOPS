#include <iostream>
using namespace std;

class MaxFinder {
public:
    
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }

    
    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }


    int findMax(int a, int b, int c) {
        return (a > b && a > c) ? a : (b > c) ? b : c;
    }
};

int main() {
    
    MaxFinder maxFinder;

    
    cout << "Maximum of 5 and 10: " << maxFinder.findMax(5, 10) << endl;
    cout << "Maximum of 3.5 and 2.5: " << maxFinder.findMax(3.5, 2.5) << endl;   
    cout << "Maximum of 1, 7, and 4: " << maxFinder.findMax(1, 7, 4) << endl;

    return 0;
}
