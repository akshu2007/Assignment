#include <stdio.h>

int main() 
{
    double x, y;
    char a;
    printf("Enter first number: ");
    scanf("%lf", &x);
    printf("Enter second number: ");
    scanf("%lf", &y);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &a);
    if (a == '+') 
    {
        printf("Result: %lf\n", x + y);
    }
    else if (a == '-') 
    {
        printf("Result: %lf\n", x - y);
    }
    else if (a == '*') 
    {
        printf("Result: %lf\n", x * y);
    }
    else if (a == '/') 
    {
        if (y != 0)
            printf("Result: %lf\n", x / y);
        else
            printf("Can't be divided by zero\n");
    }
    return 0;
}
