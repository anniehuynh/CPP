/*
The below program creates an object called “printer” in a class called “PrintClass” and then uses the object to print text.

Your task is to write the class “PrintClass” and the required method. (You don't need to copy the below code in the text box).

#include <iostream>

#include <string>

using namespace std;

 

// your code here

 

int main()

{

  char charstring[50];

  cout << "Input a character string for printing:";

  cin.get(charstring, 50);

  PrintClass printer;

  printer.print(charstring);

}


Example output:
Input character string for printing:second test
second test
The verification of program output does not account for whitespace and is not case-sensitive (the least strict comparison level)
*/

//solution

class PrintClass{
public:
    void print(char string[50]) {
        cout << string << endl;
    }
};
