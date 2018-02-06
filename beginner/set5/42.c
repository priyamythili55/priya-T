#include<stdio.h>
#include<string.h>
void main()
{
int a,b;
char x1[7],x2[9];
scanf("%s%s",&x1,&x2);
a=strlen(x1);
b=strlen(x2);
if(a>=b)
{
printf("%s",x1);
}
else
{
printf("%s",x2);
}
}
