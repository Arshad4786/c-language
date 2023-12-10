#include <stdio.h>
// code 1
// Enter a no : 5
// 5
// 4
// 3
// 2
// 1

// void msg(int n)
// {
//     if (n == 0)
//         return;
//     printf("%d\n",n);
//     msg(n - 1);
//     return;
// }

// int main()
// {
//     int n;
//     printf("Enter a no : ");
//     scanf("%d", &n);
//     msg(n);
//     return 0;
// }

// code 2
// Enter a no : 5
// 1
// 2
// 3
// 4
// 5

// void msg(int x, int n)
// {

//     if (x > n)
//         return;
//     printf("%d\n", x);
//     msg(x + 1, n);
//     return;
// }

// int main()
// {
//     int n;
//     printf("Enter a no : ");
//     scanf("%d", &n);
//     msg(1, n);
//     return 0;
// }

//OR
// Enter a no : 5
// 1
// 2
// 3
// 4
// 5

// void msg(int n)
// {
//     if (n == 0)
//         return;
//     msg(n - 1);
//     printf("%d\n", n);
//     return;
// }

// int main()
// {
//     int n;
//     printf("Enter a no : ");
//     scanf("%d", &n);
//     msg(n);
//     return 0;
// }

//code 3
// Enter a no : 3
// 3
// 2
// 1
// 1
// 2
// 3

void msg(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    msg(n - 1);
    printf("%d\n", n);
    return;
}

int main()
{
    int n;
    printf("Enter a no : ");
    scanf("%d", &n);
    msg(n);
    return 0;
}
