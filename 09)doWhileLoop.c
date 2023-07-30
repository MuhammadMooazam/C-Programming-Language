#include <stdio.h>

int main()
{
    int i = 0, num;

    printf("Enter any number: ");
    scanf("%d", &num);

    do
    {
        printf("%d \n", i);
        i = i + 1;
    } while (i <= num);

    return 0;
}