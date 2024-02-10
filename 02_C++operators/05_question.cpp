//? Write a program to calculate the sum of digits of a 3-digit number.

#include<iostream>
using namespace std;

int main () {

    int n, first,second,third,sum;

    cout << "The three digit number is: ";
    cin>>n;

    first = n / 100;
    n %= 100;

    second = n / 10;
    n %= 10;

    third = n % 10;

    sum = first + second + third;

    cout << "The sum of three digit number is: " << sum << endl;
    
    return 0;
}