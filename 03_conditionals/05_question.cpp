//? create a calculator using switch statement to perform addition, substraction, multiplication and division.

#include<iostream>
using namespace std;

int main () {
    float num1, num2;
    char op;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter the operator";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+':
        cout << "Additon of two number is: " << num1 + num2 << endl;
        break;

        case '-':
        cout << "Substraction of two number is: " << num1 - num2 << endl;
        break;

        case '*':
        cout << "Multiplication of two number is: " << num1 * num2 << endl;
        break;

        case '/':
        cout << "Division of two number is: " << num1 / num2 << endl;
        break;

        default:
        cout << "Invalid operator";
        break;
    }
    
    return 0;
}