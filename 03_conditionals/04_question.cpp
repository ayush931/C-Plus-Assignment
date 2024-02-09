#include<iostream>
using namespace std;

int main () {

    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (num < 0) {
        cout << "The number is negative and skipped";
    } else {
       cout << "You have given the positive number: " << num <<endl;
    }

    return 0;
}