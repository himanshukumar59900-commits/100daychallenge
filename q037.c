// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main(void)

{
    int x, y, s;
    do
    {
        printf("Input: ");
        scanf("%i %i", &x, &y);
    }
    while (x < 0 || y < 0);

    for (int i = x; i <= x * y; i++)
    {
        if ((i % x == 0) && (i % y == 0))
        {
            printf ("%i\n", i);
            break;
        }
    }
}
