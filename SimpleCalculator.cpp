#include<iostream>
using namespace std;

class simplecalc {
    protected:
    float num1, num2;
    float sum, diff, prod, div;
    public:
    void add(float a, float b) {
        num1 = a;
        num2 = b;
        sum = num1 + num2;
        cout << "The sum of the numbers is: " << sum << endl;
    }

    void sub(float a, float b) {
        num1 = a;
        num2 = b;
        diff = num1 - num2;
        cout << "The subtraction of the numbers is: " << diff << endl;
    }

    void multi(float a, float b) {
        num1 = a;
        num2 = b;
        prod = num1 * num2;
        cout << "The multiplication of the numbers is: " << prod << endl;
    }

    void divi(float a, float b) {
        num1 = a;
        num2 = b;
        if (num2 != 0) {
            div = num1 / num2;
            cout << "The division of the numbers is: " << div << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    float c, d;
    int e;
    simplecalc object;

    cout << "Enter first number: ";
    cin >> c;

    cout << "Enter second number: ";
    cin >> d;

    cin.ignore(); 

    cout << "Specify operation (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ";
    cin >> e;

    cin.ignore(); 

    if (e == 1) {
        object.add(c, d);
    } else if (e == 2) {
        object.sub(c, d);
    } else if (e == 3) {
        object.multi(c, d);
    } else if (e == 4) {
        object.divi(c, d);
    } else {
        cout << "Error: Invalid operation." << endl;
    }

    system("pause");  

    return 0;
}
