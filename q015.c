// Q15: Write a program to input a character and check whether
// it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>

int main(void)

{
    char ch;

    printf("Input: ");
    scanf("%c", &ch);

    int ascii = (int) ch;

    if ((ascii >= 33 && ascii <= 47) || (ascii >= 58 && ascii <= 64) || (ascii >= 91 && ascii <= 96)|| (ascii >= 123 && ascii <= 127))
    {
        printf("Special character\n");
    }
    else if (ascii >= 48 && ascii <= 57)
    {
        printf("Digit\n");
    }
    else if (ascii >= 65 && ascii <= 90)
    {
        printf("Uppercase alphabet\n");
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        printf("Lowercase alphabet\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
