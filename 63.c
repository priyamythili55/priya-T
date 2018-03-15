#include<stdio.h>
#include<string.h>
void main()
{

int count=1,i;
char a[100];
scanf("%[^\n]s",&a[i]);
for(i=0;a[i]!='\0';i++)
{
  if(a[i]==' ')
  {
    count++;
  }
}
printf("%d",count);
}
