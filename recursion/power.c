#include<stdio.h>
// code 1
// Enter the base : 2
// Enter the power : 3
// 8
// int power(int a, int b)
// {
//     int x=1;
//     for(int i=1;i<=b;i++)
//     {
//         x=x*a;
//     }
//  return x;
// }
// int main()
// {
//     int a;
//     printf("Enter the base : ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the power : ");
//     scanf("%d",&b);
//     int p = power(a,b);
//     printf("%d",p);
//     return 0;


// }

//OR

// int power(int a, int b)
// {
//     if(b==0) return 1;
//     return a*power(a,b-1);
   
// }
// int main()
// {
//     int a;
//     printf("Enter the base : ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the power : ");
//     scanf("%d",&b);
//     int p = power(a,b);
//     printf("%d",p);
//     return 0;


// }

// code 2

int fibo(int a)
{
    if(a<=2) return 1;
    return fibo(a-1)+fibo(a-2);
   
}
int main()
{
    int n;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;


}