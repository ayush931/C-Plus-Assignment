//? Write a C++ program to take length and breadth of a rectangle and print its area.

#include<iostream>
using namespace std;

int main () {

    int x , y;
    cout << "The length of rectangle is: ";
    cin >> x;
    cout << "The breadth of rectangle is: ";
    cin >> y;

    cout << "The area of rectangle is: " << x * y << endl;

    return 0;
}