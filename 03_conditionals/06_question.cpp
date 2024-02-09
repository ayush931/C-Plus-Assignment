#include<iostream>
using namespace std;

int main () {

    float grade;

    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 90) {
        cout << "You grade is A+.";
    } else if (grade >= 80) {
        cout << "You grade is A.";
    } else if (grade >= 70) {
        cout << "You grade is B+.";
    } else if (grade >= 60) {
        cout << "You grade is B.";
    } else if (grade >= 50) {
        cout << "You grade is C.";
    } else if (grade >= 40) {
        cout << "You grade is D.";
    } else if (grade >= 30) {
        cout << "You grade is E.";
    } else if (grade >= 0) {
        cout << "You grade is F.";
    } else {
        cout << "Invalid grade.";
    }
    
    return 0;
}