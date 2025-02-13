#include <iostream>
#include <string>
using namespace std;


void reverseString(std::string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
       
        std::swap(str[i], str[n - i - 1]);
    }
}

int main() {
    string str = "Hi";

    
    reverseString(str);

    
    cout << "Reversed string: " << str << std::endl;

    return 0;
}
