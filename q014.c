// Q14: Write a program to input a character and check
// whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>

int main(void)

{
    char al;

    printf("Letter: ");
    scanf("%c", &al);

    int ascii = (int) al;

    if (ascii >= 96)
    {
        ascii = ascii - 32;
    }
    {
        if (ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85)
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
}
