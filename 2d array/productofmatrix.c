#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter no of rows 1st matrix : ");
    scanf("%d", &m);
    printf("Enter no of columns 1st matrix : ");
    scanf("%d", &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p, q;
    printf("Enter no of rows of 2nd matrix : ");
    scanf("%d", &p);
    printf("Enter no of columns 2nd matrix : ");
    scanf("%d", &q);
    int b[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if (n != p)
    {
        printf("The product is not defined");
    }
    else
    {
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {   
                res[i][j]=0;
                for (int k = 0; k < n; k++)
                    res[i][j] += a[i][k] * b[k][j];
            }
        }

        printf("\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}