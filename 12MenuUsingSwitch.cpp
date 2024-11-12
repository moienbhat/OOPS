#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;

   
    cout << "Welcome to the Menu!" << endl;
    cout << "Please choose an option:" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. Non-Vegetarian" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> mainChoice;

    switch (mainChoice) {
        case 1:  
            cout << "\nVegetarian Menu:\n";
            cout << "1. Paneer Butter Masala\n";
            cout << "2. Vegetable Biryani\n";
            cout << "3. Tofu Stir Fry\n";
            cout << "Enter your dish choice (1, 2, or 3): ";
            cin >> subChoice;

            
            switch (subChoice) {
                case 1:
                    cout << "You chose Paneer Butter Masala." << endl;
                    break;
                case 2:
                    cout << "You chose Vegetable Biryani." << endl;
                    break;
                case 3:
                    cout << "You chose Tofu Stir Fry." << endl;
                    break;
                default:
                    cout << "Invalid choice! Please select a valid dish from the Vegetarian menu." << endl;
            }
            break;

        case 2:  
            cout << "\nNon-Vegetarian Menu:\n";
            cout << "1. Chicken Curry\n";
            cout << "2. Fish Tacos\n";
            cout << "3. Lamb Rogan Josh\n";
            cout << "Enter your dish choice (1, 2, or 3): ";
            cin >> subChoice;

            
            switch (subChoice) {
                case 1:
                    cout << "You chose Chicken Curry." << endl;
                    break;
                case 2:
                    cout << "You chose Fish ." << endl;
                    break;
                case 3:
                    cout << "You chose Lamb Rogan Josh." << endl;
                    break;
                default:
                    cout << "Invalid choice! Please select a valid dish from the Non-Vegetarian menu." << endl;
            }
            break;

        default:
            cout << "Invalid choice! Please select a valid main menu option (1 or 2)." << endl;
            break;
    }

    return 0;
}
