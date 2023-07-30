#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}