#include<iostream>
using namespace std;

int main () {

    int n, first,second,third,fourth,fifth,sum;

    cout << "The five digit number is: ";
    cin >> n;

    first = n / 10000;
    n = n % 10000;

    second = n / 1000;
    n = n % 1000;

    third = n / 100;
    n %= 100;

    fourth = n / 10;

    fifth = n % 10;

    sum = first + fourth;

    cout << "The sum of first and fourth digit is: " << sum << endl;
    
    return 0;
}