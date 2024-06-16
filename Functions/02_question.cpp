// Given radius of a circle. Write a function to print the area and circumference of the circle.

#include<iostream>
using namespace std;

float areaOfCircle (int r) {
	float area = 3.17 * (r * r);
	return area;
}

float circumferenceOfCircle (int r) {
	float circumference = 2 * 3.17 * r;
	return circumference;
}

int main () {
	float r;
	cout << "Enter the radius of circle: ";
	cin >> r;


	cout << "The area of circle is: " << areaOfCircle(r) << endl;
	cout << "The circumference of circle is: " << circumferenceOfCircle(r) << endl;


	return 0;

}