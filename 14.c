#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) 
    {
        printf("divisible\n");
    } 
    else 
    {
        printf("not divisible\n");
    }
    return 0;
}
