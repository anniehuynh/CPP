/*
Write a program that asks user for an integer and checks if the number is even or odd. If the number is even, program prints “Number X is even.” and if it is odd, program prints “Number X is odd.”. X marks the inputted number.

Tip:

A number is even if it's remainder, when divided by 2, is 0.

Example print

Input an integer: 452

Number 452 is even.


Example output:
Input an integer: 157
The number 157 is odd.
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

//solution
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Input an integer: ";
	cin >> number;
	if (number % 2 == 0)
	{ cout << "The number " << number << " is even." << endl; }
	else {cout << "The number " << number << " is odd." << endl;}
}
