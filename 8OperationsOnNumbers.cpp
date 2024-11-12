#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;


    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
     else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
     else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
     else if (op == '/') {
        cout << "Result: " << num1 / num2 << endl;
        
    }
    

    return 0;
}
