/*
Write a program that calculates the hypotenuse of an orthogonal triangle based on the triangle legs inputted by the user. The leg lengths are assumed to be integers and the hypotenuse value is assigned into a double type variable.

Tip:

A square root can be calculated as follows (returns a double type value):

double root = sqrt (double_number);

You will need the cmath-library.

Example print

Input first triangle leg: 4

Input second triangle leg: 6

Hypotenuse length: 7.2111


Example output:
Input first triangle leg:8
Input second triangle leg:11
Hypotenuse length: 13.6015
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/
// solution

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int leg1;
	int leg2;
	double hypotenuse;
	
	cout << "Input first triangle leg:";
	cin >> leg1;
	cout << "Input second triangle leg:";
	cin >> leg2;
	
	hypotenuse = sqrt((leg1*leg1) + (leg2*leg2));
	cout << "Hypotenuse length: " << hypotenuse << endl;
}
