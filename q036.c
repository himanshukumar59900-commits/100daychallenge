// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main(void)

{
    int x, y, s;

    printf("Input: ");
    scanf("%i %i", &x, &y);

    if (x < 0)
    {
        x = -1 * x;
    }

    if (y < 0)
    {
        y = -1 * y;
    }

    for (int i = x + y; i >= 1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            printf ("%i\n", i);
            break;
        }
    }
}
