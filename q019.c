// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Lengths: ");
    scanf("%f %f %F", &a, &b, &c);

    if ((a == b) && (a == c) && (b == c))
    {
        printf("Equilateral\n");
    }
    else if ((b == c) || (a == b) || (a == c))
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }
}
