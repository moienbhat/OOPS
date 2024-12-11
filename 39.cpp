#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}


bool isValidDate(int day, int month, int year) {
    
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }
    
    
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year) && month == 2) {
        daysInMonth[1] = 29; 
    }
    
    if (day > daysInMonth[month - 1]) {
        return false;
    }
    
    return true;
}


string dayOfWeek(int day, int month, int year) {

    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int K = year % 100;
    int J = year / 100;
    int f = day + 13*(month+1)/5 + K + K/4 + J/4 + 5*J;
    int dayOfWeek = f % 7;
    
    switch (dayOfWeek) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid day";
    }
}

int main() {
    int day, month, year;
    cout << "Enter date (DD-MM-YYYY): ";
    scanf("%d-%d-%d", &day, &month, &year);
    
    if (isValidDate(day, month, year)) {
        cout << "Valid date: " << day << "-" << month << "-" << year << endl;
        cout << "Day of the week: " << dayOfWeek(day, month, year) << endl;
    } else {
        cout << "Invalid date" << endl;
    }

    return 0;
}
