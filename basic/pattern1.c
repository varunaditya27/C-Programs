/*
Question: Write a program to print a right-angled triangle pattern of consecutive numbers.

Description:
Create a program that prints a right-angled triangle where each row contains consecutive numbers, starting from 1. The number of rows is specified by the user.
For example:
- For n = 4, output:
  1
  2 3
  4 5 6
  7 8 9 10

Input:
1. Number of rows (n)

Output:
1. The triangle pattern as described above

Note: Each row should start on a new line and numbers should be separated by spaces.
*/

#include <stdio.h>

int main() 
{
    int num = 1;

    for (int i = 1; i <= 4; i++) 
	{ 
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
