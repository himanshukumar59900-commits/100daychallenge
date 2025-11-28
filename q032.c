// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main(void)
{
    int a, n, x, y = 0;

    printf("Enter a number: ");
    scanf("%i", &n);

    x = n;

    while (n > 0)
    {
        a = n % 10;
        y = y * 10 + a;
        n = n / 10;
    }

    if (x == y)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
}
