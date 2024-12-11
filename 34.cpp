#include <iostream>
using namespace std;

int main() {
    double marks[5]; 
    double total = 0, percentage;
    int failCount = 0;

    
    cout << "Enter marks for 5 subjects: \n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        
        
        if (marks[i] < 40) {
            failCount++;
        }

        total += marks[i];
    }

    
    if (failCount > 1) {
        cout << "Repeat Year\n";
    } else {

        percentage = total / 5;

        
        if (percentage >= 90) {
            cout << "Grade: A\n";
        } else if (percentage >= 80) {
            cout << "Grade: B\n";
        } else if (percentage >= 70) {
            cout << "Grade: C\n";
        } else if (percentage >= 50) {
            cout << "Grade: D\n";
        } else {
            cout << "Grade: F\n";
        }
    }

    return 0;
}
