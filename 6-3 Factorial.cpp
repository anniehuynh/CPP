/*
Write a program that asks user for an integer n (n>0) and prints the factorial of that number on screen. Example: factorial of n is marked with n!, which means 1*2*3...n.


Example output:
Input an integer:6
The factorial of number 6 is 720
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

//solution
#include <iostream>
using namespace std;

int main()
{
	int i, number_entered;
    int factorial = 1;
	
    cout << "Input an integer:";
	cin >> number_entered;
  	
	
    for(i = 1; i <= number_entered; i++)
	
		{
		factorial = factorial * i;   
		}
        cout << "The factorial of number " << number_entered << " is " << factorial << endl;
   		return 0;
	
}
