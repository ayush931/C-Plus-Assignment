// Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include<iostream>
using namespace std;

int main () {

    int a, b, c, d, e;
    cout << "Enter five digits: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    int sum = a + b + c + d + e;

    int ans = 0;
    int power = 1;

    while (sum > 0) {
        int parityDigit = sum % 2;
        ans = ans + parityDigit * power;
        power = power * 10;
        sum = sum / 2;
    }
    cout << "Binary of sum of 5 digits: " << ans << endl;

    return 0;
}