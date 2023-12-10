#include<stdio.h>
void compare(int x,int y)
{
    if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else
      {
        printf("%d is greater than %d",y,x);
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    compare(a,b);
}
