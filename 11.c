#include <stdio.h>

int main() 
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num > 0) 
    {
        printf("positive\n");
    }
    else if (num == 0) 
    {
        printf("zero\n");
    }
    else 
    {
        printf("negative\n");
    }
    return 0;
}
