#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    
    if (a != 0) {
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and distinct." << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        } else if (discriminant == 0) {
            
            root1 = -b / (2 * a);
            cout << "Roots are real and equal." << endl;
            cout << "Root 1 = Root 2 = " << root1 << endl;
        } else {
            
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Roots are imaginary." << endl;
            cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    } else {
        cout << "Invalid input. The coefficient 'a' must be non-zero." << endl;
    }

    return 0;
}
