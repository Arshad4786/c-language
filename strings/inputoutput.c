#include<stdio.h>
#include<string.h>

// int main()
// {
//     char str[40];
//     puts("enter your input");
//     gets(str);
//     printf("your input is %s", str);
// }

// OR 

int main()
{
    char str[40];
    printf("enter your input \n");
    scanf("%[^\n]s",str);
    printf("your input is %s", str);
}