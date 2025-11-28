// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>

int main(void)

{
    int i;
    char x[100];

    printf("Input: ");
    scanf("%s", x);

    int l = strlen(x);
    {
        for (i = 0; i < l; i++)
        {
            if (x[i] == '0')
            {
                x[i] = '1';
            }
            else if (x[i] == '1')
            {
                x[i] = '0';
            }
        }
    }
    printf("%s\n", x);
}
