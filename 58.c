#include<stdio.h>

void main()
{
  int a,b;
  printf("enter the number");
  scanf("%d\t%d",&a,&b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("swap a=%d\t b=%d",a,b);
}
