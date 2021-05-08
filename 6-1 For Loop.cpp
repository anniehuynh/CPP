/*
Write a program that asks user for an integer n ((n>0) and prints the numbers 1,2,3..n on individual rows. Use for-loop in the program.
Input an integer: 7

1

2

3

4

5

6

7
*/
//solution
#include <iostream>
using namespace std;

int main()
{
	int i, input;
	cout << "Input an integer:";
	cin >> input;
	for (i = 1; i <= input; i++) {
		cout << i << endl;
	}
}
