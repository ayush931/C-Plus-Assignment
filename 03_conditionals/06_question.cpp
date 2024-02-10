//? Write a program to calculate marks to grades. Follow the conversion rule as given below.

/*
*    100-90 = A+
*    90-80 = A
*    80-70 = B+
*    70-60 = B
*    60-50 = C
*    50-40 = D
*    40-30 = E
*    30-0 = F
*/

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