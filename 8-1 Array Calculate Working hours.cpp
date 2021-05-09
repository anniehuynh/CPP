/*
Write a program that calculates the amount of work hours in a given time frame and prints the total amount of hours, the average work day length and inputted hours separated by spaces. The program first asks how many days will be inputted (max. 30 days). After this the program proceeds to ask the daily work hours.

Tip:

Use an array with 30 elements to ease the making of the program.


Example output:
The program calculates the total amount of
work hours during a given time frame and the average work day length.
How many days:
4
Input hours of workday 1: 8
Input hours of workday 2: 7.5
Input hours of workday 3: 9
Input hours of workday 4: 10
Total work hours: 34.5
Average work day length: 8.625
Inputted hours: 8 7.5 9 10 
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

// solution
#include <iostream>
using namespace std;

int main()
{
	int i, input; 
	float sum = 0, days[30];
	cout << "The program calculates the total amount of" << endl; 
	cout << "work hours during a given time frame and the average work day length." << endl;
	
	cout << "How many days:" << endl;
	cin >> input;
	
	for (i=0; i < input; i++) 
	{
		cout << "Input hours of workday " << i+1 << ": ";
		cin >> days[i];
		sum += days[i];
		
	}
	
	cout << "Total work hours: " << sum << endl;	
	cout << "Average work day length: " << sum / input << endl;
	cout << "Inputted hours: ";
	for (i=0; i < input; i++) 
	{
		cout << days[i] << " ";
	}
	cout << endl;
	
}
