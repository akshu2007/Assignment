#include <stdio.h>

int main() 
{
    int x;
    printf("Enter fuel type of (1: Petrol, 2: Diesel, 3: Electric): ");
    scanf("%d", &x);
    switch (x) 
    {
        case 1:
            printf("Petrol\n");
            break;
        case 2:
            printf("Diesel\n");
            break;
        case 3:
            printf("Electric\n");
            break;
    }
    return 0;
}
