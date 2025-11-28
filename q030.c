// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
#include <string.h>

int main(void)

{
    char x[100];

    printf("Input: ");
    scanf("%s", x);

    int l = strlen(x);
    {
        for (int i = l - 1; i >= 0; i--)
        {
            printf("%c", x[i]);
        }
    }
    printf("\n");
}
