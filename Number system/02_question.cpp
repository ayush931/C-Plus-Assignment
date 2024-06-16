// Given a natural number, find the number of 0's in the binary representation of that number.
// Note:- don't count the preceding zeros

#include<iostream>
using namespace std;

int countZeros (int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            count++;
        }
        n = n / 2;
    }
    return count;
}

int main () {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Number of zeros in binary representation: " << countZeros(num) << endl;
    return 0;
}