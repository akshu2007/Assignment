#include <stdio.h>

int main() 
{
    int x;
    printf("Enter (1-12): ");
    scanf("%d", &x);
    switch (x) 
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days: 31\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Number of days: 30\n");
            break;
        case 2:
            printf("Number of days: 28 or 29\n");
            break;
    }
    return 0;
}
