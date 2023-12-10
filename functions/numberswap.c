#include<stdio.h>

void swap(int* x,int* y)
{

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;


}


int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : " );
    scanf("%d",&b);
    swap(&a,&b);

    printf("a is %d, b is %d ",a,b);

return 0;

}