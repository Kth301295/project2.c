#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter two integers to swap\n");
  scanf("%d",a);
  scanf("%d",b);
  printf("Before Swap :\n");
  printf("\n a=%d\n b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Swap :\n");
  printf("\n a=%d\n b=%d\n",a,b);
  return0;
} 
