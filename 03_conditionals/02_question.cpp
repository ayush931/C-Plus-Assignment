#include<iostream>
using namespace std;

int main () {

    int num;

    cout << "Number is: ";
    cin >> num;

    if (num < 0) {
        num = num * (-1);
    }

    cout << "The absolute value is: " << num << endl;
    
    return 0;
}