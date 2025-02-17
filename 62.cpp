#include <iostream>
using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
    // Function to set values using this pointer
    void setValues(double n1, double n2) {
        this->num1 = n1;
        this->num2 = n2;
    }

    
    double add() const {
        return this->num1 + this->num2;
    }

    
    double subtract() const {
        return this->num1 - this->num2;
    }

    
    double multiply() const {
        return this->num1 * this->num2;
    }

    
    double divide() const {
        if (this->num2 != 0) {
            return this->num1 / this->num2;
        } else {
            cerr << "Division by zero error!" << endl;
            return 0;
        }
    }
};

int main() {
    
    Calculator calc;

    
    calc.setValues(10.5, 5.2);

    
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
