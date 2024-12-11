#include <iostream>
using namespace std;

int main() {
    char ch;

    
    cout << "Enter a character: ";
    cin >> ch;

    
    switch (ch) {
        
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            cout << ch << " is a vowel." << endl;
            break;

        
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << ch << " is a digit." << endl;
            break;

        
        default:
            
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                cout << ch << " is a consonant." << endl;
            } else {
                
                cout << ch << " is a special character." << endl;
            }
            break;
    }

    return 0;
}
