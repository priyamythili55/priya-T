#include<stdio.h>
void main()
{
int i,count=0;
char a[50];
printf("enter the string");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
count=count+1;
}
}
printf("%d",count);
}
