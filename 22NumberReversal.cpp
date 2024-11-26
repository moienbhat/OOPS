#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    do {
        cout << "Enter a positive integer (0 to quit): ";
        cin >> num;
        if (num > 0) {
            int reversed = reverseNumber(num);
            cout << "Reversed number: " << reversed << endl;
        }
    } while (num != 0);
    
    cout << "Program terminated." << endl;
    return 0;
}
