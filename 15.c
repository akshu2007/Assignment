#include <stdio.h>
#include <ctype.h>

int main() 
{
    char x;
    printf("Enter a character: ");
    scanf(" %c", &x); 
    if (isalpha(x)) 
    {
        printf("It is an alphabet\n");
    }
    else if (isdigit(x)) 
    {
        printf("It is a digit\n");
    }
    else 
    {
        printf("It is a special character\n");
    }
    return 0;
}
