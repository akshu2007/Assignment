#include <stdio.h>

int main() 
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age >= 18) 
    {
        printf("eligible\n");
    }
    else 
    {
        printf("not eligible\n");
    }
    return 0;
}
