#include <iostream>
using namespace std;

int main() {
    int number;

    
    cout << "Enter a number: ";
    cin >> number;

    
    int rows = 20;
    int columns = 10;

   
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << number * (i * j) << " ";  
        }
        cout << endl; 
    }

    return 0;
}
