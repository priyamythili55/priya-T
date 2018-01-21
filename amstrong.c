#include<stdio.h>
void main()
{
int a,b,rem,t=0;
printf("enter the number ");
scanf("%d",&a);
b=a;
while(b!=0)
{
rem=b%10;
t=t+rem*rem*rem;
b=b/10;
}
if(a==b)
{
printf("number is amstrong" : yes);
}
else
{
printf("number is not na amstrong":no)
}
}
