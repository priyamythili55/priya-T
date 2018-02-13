#include<stdio.h>
int main()
{
int a[20]={6,5,71,4,3,7,2,9,18,2},i,max;
for(i=0;i<=10;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("largest number is %d",max);
return 0;
}
