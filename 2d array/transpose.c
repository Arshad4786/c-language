#include<stdio.h>

// int main()
// {
//     int r,c;
//     printf("Enter no of rows : ");
//     scanf("%d",&r);
//      printf("Enter no of columns : ");
//     scanf("%d",&c);
//     int arr[r][c];
//        for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
   
//     for(int i=0;i<c;i++)
//     {
//         for(int j=0;j<r;j++)
//         {
//             printf("%d ",arr[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// now changing the same matrix

int main()
{
    int r,c;
    printf("Enter no of rows : ");
    scanf("%d",&r);
     printf("Enter no of columns : ");
    scanf("%d",&c);
    int a[r][c];
       for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<c;i++)
    {
        for(int j=i;j<r;j++)
        {
           int temp = a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
        
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}