/*
Write a program that asks for student's exam grades (integers 4-10 inclusive) and prints the average of the given numbers. Integers outside of the 4-10 range should not be included when calculating the average. Program receives numbers until input is finished by inputting a negative number. Finally the program prints the amount of grades and their average.

Tip:

You can use either while or do-while statement for this exercise. Use floating point numbers for storing grades and their average.

Example print

Program calculates the average of exam grades.

Finish inputting with a negative number.

Input grade (4-10) 5

Input grade (4-10) 7

Input grade (4-10) 8

Input grade (4-10) 10

Input grade (4-10) 7

Input grade (4-10) -1

You inputted 5 grades.

Grade average: 7.4


Example output:
Program calculates the test grade average.
Finish inputting with a negative number.
Input grade (4-10) 3
Input grade (4-10) 5
Input grade (4-10) 7
Input grade (4-10) 9
Input grade (4-10) 11
Input grade (4-10) -2
You inputted 3 grades.
Grade average: 7
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/
//solution

#include <iostream>
using namespace std;

int main(void)
{
   int sum = 0, number, amount = 0;
   double avg;
   
   cout << "Program calculates the test grade average." << endl;
   cout << "Finish inputting with a negative number." << endl;
   
   do
   {
     cout << "Input grade (4-10) ";
     cin >> number;
 
     if(number>=4 && number <=10)
     {
        amount++;
        sum = sum+number;
     }
 
   }while(number >= 0);

   avg = (double)sum/amount;
   
   cout << "You inputted " << amount << " grades." << endl;
   cout << "Grade average: " << avg << endl;
}
