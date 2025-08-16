#include <stdio.h>

int main() 
{
    char x;
    printf("Enter a character: ");
    scanf(" %c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') 
    {
        printf("Vowel\n");
    }
    else 
    {
        printf("Consonant\n");
    }
    return 0;
}
