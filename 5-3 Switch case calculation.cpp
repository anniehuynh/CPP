/*
Enhance the previous calculator program so that the user can choose which operation he wants to perform. The program first asks for the performed calculation. After this the program asks for the integers, performs the calculation and prints the result. Make the choice structure with switch() statement.

Tip:

Calculations are printed ad follows:

Subtraction: x-y=z

Addition: x+y=z

Multiplication: x*y=z

Remainder: x%y=z

Example print

Choose from the following calculations:

subtraction

addition

Multiplication

Division

Remainder

Choose a calculation: 2

Input first number: 33

Input second number: 12

33+12=45


Example output:
Choose desired calculation:
1: subtraction
2: addition
3: multiplication
4: division
5: Remainder
Choose a calculation:3
Input first number:15
Input second number:4
15*4 = 60
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

//solution

#include <iostream>
using namespace std;

int main()
{
	int choice, num1, num2;
	cout << "Choose desired calculation:\n"
"1: subtraction\n"
"2: addition\n"
"3: multiplication\n"
"4: division\n"
"5: Remainder\n"
"Choose a calculation:";
	cin >> choice;
	cout << "Input first number:";
	cin >> num1;
	cout << "Input second number:";
	cin >> num2;
	
	switch(choice)
	{
		case 1:
			cout << num1 << "-" << num2 << " = " << num1 - num2 << endl;
			break;
		case 2:
			cout << num1 << "+" << num2 << " = " << num1 + num2 << endl;
			break;
		case 3:
			cout << num1 << "*" << num2 << " = " << num1 * num2 << endl;
			break;
		case 4:
			cout << num1 << "/" << num2 << " = " << num1 / num2 << endl;
			break;
		case 5:
			cout << num1 << "%" << num2 << " = " << num1 % num2 << endl;
			break;
		default:
			cout << "Please input a number from 1 to 5!" << endl;
	}
}
