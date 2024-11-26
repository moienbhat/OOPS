#include <iostream>
using namespace std;


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, i = 2;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers less than or equal to " << n << " are: ";
    while (i <= n) {
        if (isPrime(i)) {
            cout << i << " ";
        }
        ++i;
    }
    cout << endl;
    return 0;
}
