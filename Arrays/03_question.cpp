// Given an integer array and its size, reverse the array and print it.

#include<iostream>
using namespace std;

void reverseArray (int arr[], int size) {

    int reverse[size];

    for (int i = 0; i < size; i++) {
        reverse[i] = arr[size - i - 1];
    }

    cout << "Reverse Array: ";

    for (int i = 0; i < size; i++) {
        cout << reverse[i] << " ";
    }
}

int main () {

    int arr[] = {1, 3, 5, 7, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    return 0;
}