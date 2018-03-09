#include<stdio.h>
void main()
{
  int  a,b,c;
  printf("enter the number");
  scanf("%d\t%d",&a,&b);
  c=a*b;
  if(c%2==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
}
