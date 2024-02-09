#include<iostream>
using namespace std;

int main () {
    int a, b;
    cout << "The first number is: ";
    cin >> a;
    cout << "The second number is: ";
    cin >> b;

    cout << (a < 50 && a < b);

    return 0;
}