#include <stdio.h>

int main(void)
{
    int n = 0;
    do
    {
        printf("Number between 1 and 8: ");
        scanf("%i", &n);
    } while (n < 1 || n > 8);
}