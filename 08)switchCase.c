#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch (age >= 18)
    {
    case 1:
        printf("Allowed");
        break;

    default:
        printf("Not Allowed");
        break;
    }

    return 0;
}