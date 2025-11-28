// Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>

int main(void)

{
    int x, s;
    do
    {
        printf("Input: ");
        scanf("%i", &x);
    }
    while (x < 1);

    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            printf ("%i ", i);
        }
    }
    printf("%i\n", x);
}

