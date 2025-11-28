// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>

int main(void)
{
    int m;
    printf("Marks: ");
    scanf("%i", &m);

    printf("Grade ");

    if (m >= 90)
    {
        printf("A\n");
    }
    else if (m >= 80)
    {
        printf("B\n");
    }
    else if (m >= 70)
    {
        printf("C\n");
    }
    else if (m >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}
