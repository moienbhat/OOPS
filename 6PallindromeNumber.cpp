#include <iostream>
using namespace std;

int main() {
    int number, original, reversed = 0;

    cout << "Enter a number: ";
    cin >> number;

    original = number;  

    
    if (number < 0) {
        cout << number << " is not a palindrome." <<endl;
        return 0; 
    }

    
    while (number > 0) {
        int digit = number % 10;  
        reversed = reversed * 10 + digit; 
        number /= 10;  
    }

    
    if (original == reversed) {
        cout << original << " is a palindrome." <<endl;
    } else {
        cout << original << " is not a palindrome." <<endl;
    }

    return 0;
}
