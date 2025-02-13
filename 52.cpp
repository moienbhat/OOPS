#include <iostream>
using namespace std;


int add(int a, int b) {
    return a + b;
}

int main() {
    
    int (*funcPtr)(int, int) = &add;

   
    int result = funcPtr(5, 3);

   
    cout << "The result of adding 5 and 3 using the function pointer is: " << result << endl;

    return 0;
}
