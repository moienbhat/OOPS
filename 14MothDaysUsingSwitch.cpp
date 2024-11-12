#include <iostream>
using namespace std;

int main() {
    int month;
    

    cout << "Enter the month number (1 for January, 2 for February, ..., 12 for December): ";
    cin >> month;


    switch (month) {
        case 1:  
        case 3: 
        case 5:  
        case 7: 
        case 8:
        case 10:
        case 12:
            cout << "31 days" << endl;
            break;
        
        case 4:  
        case 6:  
        case 9:  
        case 11:
            cout << "30 days" << endl;
            break;

        case 2:  
            {
               
                char leapYear;
                cout << "Is it a leap year? (y/n): ";
                cin >> leapYear;
                
                if (leapYear == 'y' || leapYear == 'Y') {
                    cout << "29 days" << endl; 
                } else {
                    cout << "28 days" << endl;
                }
            }
            break;

        default:
            cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
            break;
    }

    return 0;
}
