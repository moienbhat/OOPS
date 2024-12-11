#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = (reversedNum * 10) + digit;
        num = num / 10;
    }

    return originalNum == reversedNum;
}

void printPalindromes(int start, int end) {
    for (int num = start; num <= end; ++num) {
        if (isPalindrome(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    int startRange, endRange;
    cout << "Enter the start of the range: ";
    cin >> startRange;
    cout << "Enter the end of the range: ";
    cin >> endRange;

    cout << "Palindrome numbers between " << startRange << " and " << endRange << " are: ";
    printPalindromes(startRange, endRange);

    return 0;
}
