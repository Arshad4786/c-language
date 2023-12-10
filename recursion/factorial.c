#include<stdio.h>
int fact(int x)
{
if(x==1 ||x==0) return 1;
return x*fact(x-1);
}


int main()
{
    int n;
    printf("Enter a no : ");
    scanf("%d",&n);
    int z= fact(n);
    printf("%d",z);
    return 0;

}         