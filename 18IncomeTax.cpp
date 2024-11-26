#include<iostream>
using namespace std;

int main() {
    double income;
    cout << "Enter the income to find the percentage of tax you will need to pay: ";
    cin >> income;

    if (income <= 250000) {
        cout << "No tax" << endl;
    }
    else if (income > 250000 && income <= 500000) {
        double tax = 0.05 * income; 
        double netIncome = income - tax;
        cout << "5 Percent tax\nIncome after tax will be " << netIncome << endl;
    }   
    else if (income > 500000 && income <= 1000000) {
        double tax = 0.20 * income;  
        double netIncome = income - tax;
        cout << "20 Percent tax\nIncome after tax will be " << netIncome << endl;
    }   
    else if (income > 1000000) {
        double tax = 0.30 * income; 
        double netIncome = income - tax;
        cout << "30 Percent tax\nIncome after tax will be " << netIncome << endl;
    }

    return 0;
}
