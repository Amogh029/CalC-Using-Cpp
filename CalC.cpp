#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char operation;
    double num1, num2;


    cout << "Enter an operation (+, -, *, /, ^ for power, l for log): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case '^': 
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << pow(num1, num2) << endl;
            break;
        case 'l': 
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 > 0) {
                cout << "Result: " << log(num1) << endl;
            } else {
                cout << "Error: Logarithm of a non-positive number is undefined." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}