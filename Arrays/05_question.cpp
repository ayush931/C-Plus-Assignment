// Given an array containing n distinct integers in the range [0, n] (inclusive of both 0 and n). Find and return the only number of the range that is not present in the array.

// Algorithm:

// We find the sum of the numbers from [0, n] and substract the sum of the given array from it and this gives us the missing in the range.

#include<iostream>
using namespace std;

int sumOfRange (int size) {

    int sumOfSize = (size * (size + 1)) / 2;

    return sumOfSize;
}

int sumOfArray (int arr[], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main () {

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    int arr[size];

    // int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the element of the array: " << endl;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array is: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // cout << "Sum of the given array is: " << sumOfArray(arr, size) << endl;
    // cout << sumOfRange (size);

    cout << "Missing number is: " << sumOfRange(size) - sumOfArray(arr, size) << endl;

    return 0;
}