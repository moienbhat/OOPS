#include <iostream>
using namespace std;


long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);  
}

int main() {
    int choice, num1, num2;
    
    do {
       
        cout << "\nMenu:\n";
        cout << "1. Find the factorial of a number\n";
        cout << "2. Find the GCD of two numbers\n";
        cout << "3. Find the LCM of two numbers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice) {
            case 1:
                
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 < 0) {
                    cout << "Factorial is not defined for negative numbers.\n";
                } else {
                    cout << "Factorial of " << num1 << " is: " << factorial(num1) << endl;
                }
                break;

            case 2:
                
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
                break;

            case 3:
             
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num1 == 0 || num2 == 0) {
                    cout << "LCM is not defined for zero.\n";
                } else {
                    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
                }
                break;

            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}
