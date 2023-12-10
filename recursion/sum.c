#include<stdio.h>
// code 1

// void sum(int n, int x)
// {
//     if (n == 0)
//     {
//         printf("%d", x);
//         return;
//     }
//     sum(n - 1, n + x);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter a no : ");
//     scanf("%d", &n);
//     sum(n, 0);
//     return 0;
// }

//OR

int sum(int x)
{
    if(x==1) return 1;
  
    int z= x + sum(x-1);
    
    return z;
}
int main()
{
    int n;
    printf("Enter a no : ");
    scanf("%d", &n);
    int k= sum(n);
    printf("%d",k);
    return 0;
}


