#include <stdio.h>

int main() 
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d \nleap year\n", year);
    } 
    else 
    {
        printf("%d \nnot a leap year\n", year);
    }
    return 0;
}
