/*Q47: Write a program to print the following pattern:
*
**
***
****
*****

Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i ++)
    {
        for (int r = 1; r <= i; r ++)
        {
            printf("*");
        }
        printf("\n");
    }
}
