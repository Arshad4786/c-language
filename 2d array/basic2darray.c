#include<stdio.h>
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
int main()
{
    int r,c;
    printf("Enter no of rows : ");
    scanf("%d",&r);
     printf("Enter no of columns : ");
    scanf("%d",&c);
    int arr[r][c];
       for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
