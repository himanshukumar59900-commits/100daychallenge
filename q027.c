// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main(void)
{
    int i, n, s = 0;

    do
    {
        printf("Input: ");
        scanf("%i", &n);
    }
    while (n < 0);

    for (i = 1; i <= 2 * n; i = i + 2)
    {
        s = s + i;
    }
    printf("Sum = %i\n", s);
}
