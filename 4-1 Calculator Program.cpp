Write a program that asks user for two integers and prints the sum, difference, product and remainder of the two numbers.

Esibrand tulostus

Input first integer: 3

Input second integer: 5

3+5 = 8

3-5 = -2

3*5 = 15

Remainder: 3


Example output:
Input first integer:5
Input second integer:9
5+9 = 14
5-9 = -4
5*9 = 45
Remainder: 5
The output of the program must be exactly the same as the example output (the most strict comparison level)

//solution

#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	
	cout << "Input first integer:";
	cin >> num1;
	cout << "Input second integer:";
	cin >> num2;
	
	cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
	cout << num1 << "-" << num2 << " = " << num1 - num2 << endl;
	cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
	cout << "Remainder: " << num1 % num2 << endl;
}
