// Q24: Write a program to calculate electricity bill based on units consumed with these rates:
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>

int main(void)

{
    int n;

    do
    {
        printf("Units: ");
        scanf("%i", &n);
    }
    while (n < 0);

    if (n <= 100)
    {
        printf("Fine ₹%i\n", 5 * n);
    }
    else if (n <= 200)
    {
        printf("Fine ₹%i\n", 7 * n - 200);
    }
    else if (n <= 300)
    {
        printf("Fine ₹%i\n", 10 * n - 800);
    }
    else
    {
        printf("Fine ₹%i\n", 12 * n - 2600);
    }
}
