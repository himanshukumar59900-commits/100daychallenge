// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main(void)
{
    int x, prod = 1, temp, Y = 0;

    printf("Input: ");
    scanf("%i", &x);

    while (x > 0)
    {
        temp = x % 10;
        if (temp % 2 == 1)
        {
            prod *= temp;
            Y = 1;
        }
        x = x / 10;
    }

    if (Y != 1)
        prod = 1;

    printf("%i\n", prod);
}

