#include<stdio.h>
#include<conio.h>
void main()
{
  int i,count=0;
  char a[70];
  scanf("%[^\n]s",a);
  for(i=0;a[i];i++)
  {
    if(a[i]=='.')
    {
      count=count+1;
    }
  }
  printf("%d",count);
}
