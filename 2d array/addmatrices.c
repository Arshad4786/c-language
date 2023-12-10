#include<stdio.h>
//with using a new array

// int main()
// {

//     int a[2][2]={1,2,3,4};
//     int b[2][2]={1,2,3,4};
//     int res[2][2];

//        for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//          res[i][j]=a[i][j]+b[i][j];
//         }
//     }

//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             printf("%d ",res[i][j]);
//         }
//             printf("\n");
//     }
//     return 0;
// }
//without using a new array
int main()
{

    int a[2][2]={1,2,3,4};
    int b[2][2]={1,2,3,4};
    

       for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        a[i][j]+=b[i][j];
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }
    return 0;
}
