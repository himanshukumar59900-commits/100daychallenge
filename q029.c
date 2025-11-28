// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main(void)

{
    long long int x, i, s = 1;
    do
    {
        printf("Input: ");
        scanf("%lli", &x);
    }
    while (x < 0);

    for (i = x; i > 0; i--)
    {
        s = s * i;
    }
    printf("Factorial = %lli\n", s);
}
