#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the size of the pattern: ";
    cin >> n;


    for (int i = 0; i < n; i++) {
        // Loop through columns
        for (int j = 0; j < n; j++) {
            cout << "#";
        }
    
        cout << endl;
    }

    return 0;
}
