/* Q48: Write a program to print the following pattern:
1
12
123
1234
12345

Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 5; i ++)
    {
        for(int r = 1; r <= i; r ++)
        {
            printf("%i", r);
        }
        printf("\n");
    }
}
