// Given an integer array (arr) and its size (n), print the count of odd and even integers present in the array.

#include<iostream>
using namespace std;

int count (int arr[], int size) {

	int countOdd = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			countOdd++;
		}
	}
	return countOdd;
}

int counts (int arr[], int size)  {

	int countEven = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			countEven++;
		}
	}
	return countEven;
}

int main () {

	int arr[] = {1, 2, 3, 4, 3, 6, 7, 8, 2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int oddNum = count (arr, size);
	int evenNum = counts (arr, size);

	cout << "Total odd number in array is: " <<  oddNum << endl;
	cout << "Total even number in array is: " << evenNum << endl; 
}