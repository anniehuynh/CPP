/*
The C++ program below reads from the file matrix.txt integers table inserting it in the 5x5 table (matrix [5][5]). The program prints the matrix on screen, calculates the sum of the elements and prints the sum on screen making use of functions print_matrix () and count_sum(). Your task is to make up the functions in question. The values situated on the rows are separated by space.


#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream file("matrix.txt");
  if (!file){
        cout << "File cannot be opened!";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            file >> matrix[y][x];
          }
    }
    file.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
} 

Example output:
Matrix:
11 2 4 5 6 
9 8 7 6 5 
1 2 3 4 5 
11 22 33 44 55 
1 2 4 5 0 
Sum of elements: 255
The verification of program output does not account for whitespace and is not case-sensitive (the least strict comparison level)
*/

//solution

} //close the main function first

void print_matrix(int matrix[5][5])
{
	for (int y=0; y<5; y++) {
		for (int x=0; x<5; x++) {
			cout << matrix [y][x] << " ";
		}
		cout << endl;
	}
}
int count_sum(int matrix [5][5]) 
{
	int sum = 0;
	for (int y=0; y<5; y++) 
	{
		for (int x=0; x<5; x++) 
		{
			sum += matrix [y][x];
		}
	}
	return sum;
}


