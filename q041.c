// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <math.h>
#include <stdio.h>

int main(void)
{
    int n, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    power = (int)pow(10, digits);
    first = n / power;

    if (n < 10)
    {
        printf("Output: %d\n", n);
    }

    middle = n % power;
    middle = middle / 10;

    result = last * power + middle * 10 + first;

    printf("Output: %d\n", result);

}
