#include <iostream>
using namespace std;


int squareValue(int num) {
    return num * num;
}


void squareReference(int &num) {
    num = num * num;
}

int main() {
    int num1 = 5;
    int num2 = 5; 

    
    int result = squareValue(num1);
    
    
    squareReference(num2);

    
    cout << "Result of squareValue with num1: " << result << endl;
    cout << "Value of num1 after calling squareValue: " << num1 << endl;

    cout << "Value of num2 after calling squareReference: " << num2 << endl;

    return 0;
}
