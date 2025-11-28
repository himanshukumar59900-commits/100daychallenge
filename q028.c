// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main(void)
{
    int i, n, s = 1;

    do
    {
        printf("Input: ");
        scanf("%i", &n);
    }
    while (n < 0);

    for (i = 2; i <= n; i = i + 2)
    {
        s = s * i;
    }
    printf("Product = %i", s);
    printf(" (2");

    for (int y = 4; y <= n; y = y + 2)
    {
        printf(" * %i", y);
    }
    printf(")\n");
}
