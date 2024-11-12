#include <iostream>
using namespace std;

int main() {
    char ch;

   
    cout << "Enter a single character: ";
    cin >> ch;

    
    ch = tolower(ch);

    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
           
            if ((ch >= 'a' && ch <= 'z')) {
                cout << "Consonant" << endl;
            } else {
              
                cout << "Invalid input, please enter a valid alphabetic character." << endl;
            }
            break;
    }

    return 0;
}
