// Given the age of person, write a function to check if the person is eligible to vote or not

#include<iostream>
using namespace std;

bool voterAge (int age) {
    if (age >= 18) {
        return true;
    }
    else {
        return false;
    }
}

int main () {

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (voterAge(age) >= 18) {
        cout << "You can vote" << endl;
    }
    else {
        cout << "You cannot vote" << endl;
    }
    return 0;
}