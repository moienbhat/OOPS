#include <iostream>
#include <cmath>
using namespace std;

void findPairs(int n) {
    int limit = static_cast<int>(sqrt(n));
    for (int x = 0; x <= limit; ++x) {
        for (int y = 0; y <= limit; ++y) {
            if (x * x + y * y == n) {
                cout << "(" << x << ", " << y << ")\n";
            } else if (x * x + y * y > n) {
                break;  // No need to check further if the sum has exceeded n
            } else {
                continue;  // Continue searching if the sum is less than n
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << " are:\n";
    findPairs(n);

    return 0;
}
