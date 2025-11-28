// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main(void)
{
    int n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%i", &n);

    while (n > 0)
    {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }

    printf("%i\n", sum);
}
