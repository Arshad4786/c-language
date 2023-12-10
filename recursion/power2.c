#include<stdio.h>

int power(int a, int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    int z= power(a,b/2);
    if(b%2==0) return z*z;
    else return z*z*a;
}
int main()
{
    int a;
    printf("Enter the base : ");
    scanf("%d",&a);
    int b;
    printf("Enter the power : ");
    scanf("%d",&b);
    int p = power(a,b);
    printf("%d",p);
    return 0;


}
