// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, x, s = 0, size = 0, temp, a;

    printf("Enter a number: ");
    scanf("%d", &n);

    x = n;
    temp = n;

    while (temp > 0)
    {
        size++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        a = temp % 10;
        s += pow(a, size);
        temp /= 10;
    }

    if (s == x)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
}
