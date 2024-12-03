#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    float num1, num2, result;
    char oper;
    char again;

    do {
        cout << "Enter first number, operator, second number: ";
        cin >> num1 >> oper >> num2;

        
        switch (oper) {
            case '+':
                result = num1 + num2;
                cout << "Answer = " << fixed << setprecision(6) << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Answer = " << fixed << setprecision(6) << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Answer = " << fixed << setprecision(6) << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Answer = " << fixed << setprecision(6) << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        
        cout << "Do another (y/n)? ";
        cin >> again;
    } while (again == 'y' || again == 'Y');  

    return 0;
}
