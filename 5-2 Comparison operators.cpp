/*
Write a program that asks the users gender and age. Finally the program prints a sentence based on the following rule:

* Male 0-55 years: "You are a man in his prime!"

* Male 56-100 years: "You are a wise man!"

* Female 0-55 years: "You are like a blooming flower!"

* Female 56-100 years: "You look young for your age!"

* Else "Error encountered!"

Age is handled as an integer variable and gender as string variable (m/f). Letter case is ignored.

Tip:

Use enough time to plan for the program before starting to code.

Example print

Are you a male or a female (m/f): m

Your age: 44

You are a man in his prime!


Example output:
Are you a male or a female (m/f):f
Your age:35
You are like a blooming flower!
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

//solution

#include <iostream>
using namespace std;

int main()
{
	string input;
	int age;
	cout << "Are you a male or a female (m/f):";
	cin >> input;
	cout << "Your age:" ;
	cin >> age;
	
	if (input == "f") {
		if (age >= 0 && age <= 55) {
			cout << "You are like a blooming flower!" << endl;
		} else if (age >= 56 && age <= 100) {
			cout << "You look young for your age!" << endl;
		} else {
			cout << "Invalid input" << endl;
		}
	} else if (input == "m" ) {
		if (age >= 0 && age <= 55) {
			cout << "You are a man in his prime!" << endl;
		} else if (age >= 56 && age <= 100) {
			cout << "You are a wise man!" << endl;
		} else {
			cout << "Invalid input" << endl;
		}
	} else {
		cout << "Invalid character entered. Input must be m/f" << endl;
	}
}
	
	
