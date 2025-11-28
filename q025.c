// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
#include<math.h>

int main(void)

{
    float x, y;
    char op;

    printf("First Number: ");
    scanf("%f", &x);
    printf("Second Number: ");
    scanf("%f", &y);
    printf("Operation (+, -, *, /, %%): ");
    scanf(" %c", &op);
    {
        if(op == '+')
        {
            printf("Result: %g\n", x + y);
        }
        else if(op == '-')
        {
            printf("Result: %g\n", x - y);
        }
        else if(op == '*')
        {
            printf("Result: %g\n", x * y);
        }
        else if(op == '/')
        {
            if (y != 0)
            {
                printf("Result: %g\n", x / y);
            }
            else
            {
                printf("Undefined.\n");
            }
        }
        else if(op == '%')
        {
            printf("Result: %i\n", (int)floor(x) % (int)floor(y));
        }
        else
        {
            printf("Invalid.\n");
        }
    }
}
