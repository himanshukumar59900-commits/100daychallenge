/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main(void)
{
    for (int i = 5; i >= 1; i --)
    {
        for (int d = 0; d < 5 - i; d ++)
        {
            printf(" ");
        }
        for (int r = 1; r <= i; r ++)
        {
            printf("*");
        }
        printf("\n");
    }
}
