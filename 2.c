#include <stdio.h>
#include <ctype.h>

int main() 
{
    char x;
    printf("Enter a letter: ");
    scanf(" %c", &x);  
    if (isupper(x)) 
    {
        printf("uppercase.\n");
    }
    else 
    {
        printf("not uppercase.\n");
    }
    return 0;
}
