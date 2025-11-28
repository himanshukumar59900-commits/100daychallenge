// Q16: Write a program to input three numbers
// and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main(void)

{
    int a, b, c;

    printf("Input: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("Largest is %i\n", a);
        }
        else
        {
            printf("Largest is %i\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Largest is %i\n", b);
        }
        else
        {
            printf("Largest is %i\n", c);
        }
    }
}
