#include<stdio.h>
int main()
{
     int maxsum=0;
    int a[3][3]={1,2,3,7,8,9,4,5,6};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
            printf("\n");
    }   
       
        for(int i=0;i<3;i++)
    {
         int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=a[i][j];
        }
           
           if(sum>maxsum)
           {
            maxsum=sum;
           }
    }
    printf("%d",maxsum);
    return 0;
}
