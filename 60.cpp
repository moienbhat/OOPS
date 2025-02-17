#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    
    Complex addComplex(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    
    void display() const {
        cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    
    Complex num1(3.0, 4.0);
    Complex num2(1.5, 2.5);

    
    Complex sum = num1.addComplex(num2);

    
    cout << "The sum of ";
    num1.display();
    cout << "and ";
    num2.display();
    cout << "is ";
    sum.display();

    return 0;
}
