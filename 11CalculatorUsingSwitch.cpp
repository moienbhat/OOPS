#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Result: " << num1 / num2 << endl;
            break;

            
        default:
            cout << "Invalid operator." << endl;
            break;
    }

    return 0;
}
