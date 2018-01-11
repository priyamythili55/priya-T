#incude<stdio.h>

void main()
{
int a,b,rev=0,rem;
printf("enter number");
scanf("%d",&a);
b=a;
while(a>0)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
if(a==rev)
{
printf("number i palindrom");
}
else
{
printf("number is not  a palindrom");
}
}

