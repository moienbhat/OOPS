#include <iostream>
using namespace std;

int main() {
    const int numSubjects = 5;
    float marks[numSubjects];
    float total = 0.0;
    
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i];
    }


    float percentage = (total / (numSubjects * 100)) * 100; // Assuming each subject is out of 100

  
    cout << "Total marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
