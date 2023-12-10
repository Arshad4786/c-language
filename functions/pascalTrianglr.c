#include <stdio.h>

int fact(int x)
{
    int fact = 1;

    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }

    return 0;
}