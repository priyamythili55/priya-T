#include<stdio.h>
int main()
{
int n,count=0;
scanf("%d",&n);
if(n<=1000000000000)
{
while(n>0)
{
n=n/10;
count=count+1;
}
printf("%d",count);
}
return 0;
}
