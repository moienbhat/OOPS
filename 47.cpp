#include <iostream>
using namespace std;


int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5; 
    int num2 = 3; 

    
    int result = sum(num1, num2);

    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
