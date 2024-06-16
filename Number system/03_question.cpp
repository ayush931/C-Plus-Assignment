// Given two binary numbers, return the greatest of these numbers in decimal format.

#include<iostream>
using namespace std;

int binaryToDecimal (int binary) {
    int ans = 0;
    int power = 1;
    while(binary > 0) {
        int lastDigit = binary % 10;
        ans = ans + (lastDigit * power);
        power = power * 2;
        binary = binary / 10;
    }
    return ans;
}

int greatestBinary (int binary1, int binary2) {
    int decimal1 = binaryToDecimal(binary1);
    int decimal2 = binaryToDecimal(binary2);

    if (decimal1 > decimal2) {
        return decimal1;
    } 
    else {
        return decimal2;
    }
}

int main () {

    int binary1, binary2;
    cout << "Enter the first binary: ";
    cin >> binary1;
    cout << "Enter the second binary: ";
    cin >> binary2;

    int greatestNumber = greatestBinary(binary1, binary2);
    cout << "Greatest number from the given binary: " << greatestNumber << endl;

    return 0;
}
