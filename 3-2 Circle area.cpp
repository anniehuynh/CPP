/*Write a program that asks for the circle radius and calculates the area of the circle based on it. In the end the area is printed on screen. Use the approximate value of 3.142 for π. User is expected to input only integers.

Tip:

Circle area is A = π · r2, where r is circle radius.

Example print:

Input circle radius: 6

Circle area with the given radius: 113.112


Example output:
Input circle radius:9
Circle area with the given radius: 254.502
The output of the program must be exactly the same as the example output (the most strict comparison level)*/

//solution

#include <iostream>
using namespace std;

int main() 
{
	double pi = 3.142;
	double radius;
	double area;
	
	cout << "Input circle radius:";
	cin >> radius;
	area = pi * radius * radius;
	cout << "Circle area with the given radius: " << area << endl;
}
