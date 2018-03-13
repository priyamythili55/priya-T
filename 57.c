#include<stdio.h>
void main()
{
  int a,b,t;
  printf("enetr the number ");
  scanf("%d\t%d",&a,&b);
  t=a;
  a=b;
  b=t;
  printf("%d\t%d",a,b);
}
