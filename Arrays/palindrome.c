#include <stdio.h>
void palindrome(int arr[])
{
  int flag = 0;
  for (int i = 0; i <5; i++)
  {
    if (arr[i] != arr[4 - i])
    {
      flag = 1;
    }
  }
  if (flag == 1)
    printf("it is not a palindrome");
  else
    printf("it is a palindrome");
  return;
}

int main()
{
  int arr[5] = {1, 2, 3, 2, 1};

  palindrome(arr);
  
  printf("%d",sizeof(arr)/sizeof(arr[0]));
  return 0;
}