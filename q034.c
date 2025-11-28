// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main(void)

{
    int x, s, Y = 1;

    printf("Input: ");
    scanf("%i", &x);

    if (x == 1)
    {
        printf("Neither prime nor composite\n");
    }
    else
    {
        for (int i = x / 2; i > 1; i--)
        {
            if (x % i == 0)
            {
                Y = 0;
                break;
            }
        }
        
        if (Y == 0)
        {
            printf("Not prime\n");
        }
        else
        {
            printf("Prime\n");
        }
    }
}
