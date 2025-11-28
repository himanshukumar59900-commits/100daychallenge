// Q20: Write a program to display
// the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>

int main(void)

{
    int x;

    printf("Input: ");
    scanf("%i", &x);

    if (x % 7 == 0)
    {
        printf("Sunday\n");
    }
    else if (x % 7 == 1)
    {
        printf("Monday\n");
    }
    else if (x % 7 == 2)
    {
        printf("Tuesday\n");
    }
    else if (x % 7 == 3)
    {
        printf("Wednesday\n");
    }
    else if (x % 7 == 4)
    {
        printf("Thursday\n");
    }
    else if (x % 7 == 5)
    {
        printf("Friday\n");
    }
    else if (x % 7 == 6)
    {
        printf("Saturday\n");
    }
    else
    {
        return 0;
    }
}
