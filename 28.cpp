#include <iostream>
using namespace std;

int main() {
    int choice;
    float temperature, convertedTemperature;


    cout << "Type 1 to convert Fahrenheit to Celsius," << endl;
    cout << "2 to convert Celsius to Fahrenheit: ";
    cin >> choice;

    
    if (choice == 1) {
        
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;
        cout << "In Celsius that's " << convertedTemperature << endl;
    } else if (choice == 2) {
        
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;
        cout << "In Fahrenheit that's " << convertedTemperature << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
