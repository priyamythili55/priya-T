#include<stdio.h>
void main()
{
  int a;
  scanf("%d",&a);
  if(a%2==0)
  {
    a=a-2;
  }
  else
 {
    a=a-1;
  }
  printf("%d",a);
}
