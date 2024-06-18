// Given an integer array and its size, find the sum of the greatest and the smallest integer present in the array.

#include<iostream>
using namespace std;

int greatestInt (int arr[], int size) {

    int max = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int smallestInt (int arr[], int size) {

    int min = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main () {

    int arr[] = {12, 2, 3, 4, 5, 20};

    int size = sizeof(arr) / sizeof(arr[0]);

    int maxInt = greatestInt (arr, size);

    int minInt = smallestInt (arr, size);

    cout << "Smallest integer in array is: " << minInt << endl;
    cout << "Greatest integer in array is: " << maxInt << endl;

    int sum = minInt + maxInt;
    
    cout << "Sum of smallest and greatest integer is: " << sum << endl;
}