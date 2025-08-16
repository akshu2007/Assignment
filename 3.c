#include <stdio.h>
#include <string.h>

int main() 
{
    char x[100];
    char y[] = "admin123";
    printf("Enter password: ");
    scanf("%s", x); 
    if (strcmp(y, x) == 0) 
    {
        printf("Welcome\n");
    }
    else 
    {
        printf("Invalid password\n");
    }
    return 0;
}
