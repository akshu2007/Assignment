#include <stdio.h>

int main() 
{
    int x;
    printf("Enter your choice (1: Tea, 2: Coffee, 3: Juice): ");
    scanf("%d", &x);
    switch (x) 
    {
        case 1:
            printf("Tea.\n");
            break;
        case 2:
            printf("Coffee.\n");
            break;
        case 3:
            printf("Juice.\n");
            break;
    }
    return 0;
}
