#include<stdio.h>
void main()
{
int i,a,fact=1;
printf("enter the number");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
fact=fact*i;
printf("factorial of %d=%d",a,fact);
}
}
