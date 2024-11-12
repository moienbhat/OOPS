#include <iostream>
using namespace std;

int main() {
    int num;
    
  
    cout << "Enter an integer: ";
    cin >> num;

  
    if (num <= 1) {
        
        cout << "Not a Prime Number" << endl;
    } else {
        bool isPrime = true;  

        
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
               
                isPrime = false;
                break;
            }
        }

       
        if (isPrime) {
            cout << "Prime Number" << endl;
        } else {
            cout << "Not a Prime Number" << endl;
        }
    }

    return 0;
}
