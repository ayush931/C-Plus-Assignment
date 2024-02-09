#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int reverse = 0;

    for (int i = 1; i <= n; i++) {
        int lastDigit = n % 10;

        reverse = reverse * 10 + lastDigit;
        n /= 10;
    }

    cout <<"Reverse of given integer is: " << reverse << endl;

    return 0;
}