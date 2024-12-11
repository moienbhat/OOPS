#include <iostream>
using namespace std;

int main() {
    int year;

    
    cout << "Enter a year: ";
    cin >> year;

    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
                
                cout << "Next 5 leap years: ";
                int count = 0;
                while (count < 5) {
                    year++;
                    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                        cout << year << " ";
                        count++;
                    }
                }
                cout << endl;
            }
        } else {
            cout << year << " is a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
        
        cout << "Next 5 leap years: ";
        int count = 0;
        while (count < 5) {
            year++;
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                cout << year << " ";
                count++;
            }
        }
        cout << endl;
    }

    return 0;
}
