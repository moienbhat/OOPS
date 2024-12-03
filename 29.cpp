#include <iostream>
#include <conio.h>  
using namespace std;

int main() {
    long int number = 0;  
    char digit;           
    int count = 0;        

    cout << "Enter up to six digits: ";

    
    while (count < 6) {
        digit = getche();  
        
        
        if (digit >= '0' && digit <= '9') {
            number = number * 10 + (digit - '0');  
            count++;  
        } else {
            cout << "\nInvalid input! Only digits are allowed." << endl;
            break;
        }
    }

    cout << "\nThe resulting number is: " << number << endl;

    return 0;
}
