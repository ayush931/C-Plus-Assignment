//? Write a program to take input from user for Cost Price (C.P.) and Selling Price (S.P.) and calculate Profit and Loss.

#include<iostream>
using namespace std;

int main () {

    int CP, SP, Profit, Loss;

    cout << "Your cost price is: ";
    cin >> CP;

    cout << "Your selling price is: ";
    cin >> SP;

    Profit = SP - CP;
    Loss = CP - SP;

    if (SP > CP) {
        cout << "You are in profit." << endl;
        cout << "Your profit is: " << Profit << endl;
    } else if (SP < CP) {
        cout << "You are in loss." << endl;
        cout << "Your loss is: " << Loss << endl;
    } else {
        cout << "You are at break-even point.";
    }

    return 0;
}