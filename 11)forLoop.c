#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 0, j = 0; i <= num; i++, j++)
    {
        printf("i=%d \t j=%d \n", i, j);
    }

    return 0;
}