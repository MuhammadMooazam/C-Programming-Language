#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Allowed");
    }
    else
    {
        printf("Not Allowed");
    }

    return 0;
}