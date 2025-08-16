#include <stdio.h>

int main() 
{
    double marks;
    printf("Enter marks: ");
    scanf("%lf", &marks);

    if (marks >= 90) 
    {
        printf("A\n");
    }
    else if (marks >= 75) 
    {
        printf("B\n");
    }
    else if (marks >= 50) 
    {
        printf("C\n");
    }
    else 
    {
        printf("Fail\n");
    }
    return 0;
}
