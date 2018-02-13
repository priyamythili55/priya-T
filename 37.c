#include<stdio.h>
void main()
{
  int a,b,t;
  printf("enter the number");
  scanf("%d%d",&a,&b);
  t=b;
  b=a;
  a=t;
  printf("%d%d",a,b);
}
