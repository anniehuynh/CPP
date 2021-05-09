/*
Below program asks user for three integers and prints the smallest and largest of those three on screen. Your task is to write the missing functions (largest() and smallest ()), which receive the user input as parameters and return the largest and smallest integers, respectively.

Incomplete program:

#include <iostream>

using namespace std;

int largest(int first, int second, int third);

intsmallest(int first, int second, int third);

int main()

{

  int number1, number2, number3, largestnumber,smallestnumber;

  cout << "Input the first integer";

  cin >> number1;

  cout << "Input the second integer:";

  cin >> number2;

  cout << "Input the third integer:";

  cin >> number3;

  largestnumber = largest(number1, number2, number3);

 smallestnumber =smallest(number1, number2, number3);

  cout << "The largest number was " << largestnumber;

  cout << " and the smallest " <<smallestnumber << "." << endl;

Note!

Only write the missing functions. Don't copy the above code to the below text box.


Example output:
Input the first integer:7
Input the second integer:8
Input the third integer:20
The largest number was 20 and smallest 7.
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

//solution 
// NOTE: BEFORE WRITING THE FUNCTION, CLOSE THE MAIN FUNCTION WITH } FIRST

}

int largest(int number1, int number2, int number3)
{
	if ((number1 > number2) && (number1 > number3))
	{
		return number1;
	} else if ((number2 > number1) && (number2 > number3)) {
		return number2;
	} else if ((number3 > number1) && (number3 > number2)) {
		return number3;
	} else {
		cout << "Invalid number entered" << endl;
	}
}

int smallest(int number1, int number2, int number3)
{
	if ((number1 < number2) && (number1 < number3))
	{
		return number1;
	} else if ((number2 < number1) && (number2 < number3)) {
		return number2;
	} else if ((number3 < number1) && (number3 < number2)) {
		return number3;
	} else {
		cout << "Invalid number entered" << endl;
	}
}
