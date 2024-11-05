#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int count = 0;
    while (number > 0) {
        number /= 10;  
        count++;      
    }

    cout << "The number of digits is: " << count << endl;

    return 0;
}
