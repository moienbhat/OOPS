// Calculator Using conditional operator


#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;


    (op == '+') ? cout << "Result: " << num1 + num2 << endl :
    (op == '-') ? cout << "Result: " << num1 - num2 << endl :
    (op == '*') ? cout << "Result: " << num1 * num2 << endl :
    (op == '/') ? (num2 != 0 ? cout << "Result: " << num1 / num2 << endl : cout << "Error: Division by zero!" << endl) :
    (op == '%') ? (num2 != 0 ? cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl : cout << "Error: Division by zero!" << endl) :
    cout << "Error: Invalid operator!" << endl;

    return 0;
}
