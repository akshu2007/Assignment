#include <stdio.h>

int main() 
{
    int a, b, c, x;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    if (a <= b && a <= c) 
    {
        x = a;
    }
    else if (b <= a && b <= c) 
    {
        x = b;
    }
    else
    {
        x = c;
    }
    printf("Smallest number is: %d\n", x);
    return 0;
}
