#include <stdio.h>

int main() 
{
    double marks;
    printf("Enter the marks: ");
    scanf("%lf", &marks);
    if (marks >= 40) 
    {
        printf("Passed\n");
    }
    else 
    {
        printf("Failed\n");
    }
    return 0;
}
