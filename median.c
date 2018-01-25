#include<stdio.h>
void main()
{
int i,j,n,a[i],a[j];
printf("enter the element");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{
scanf("d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[i]=t;
}
printf("median element",a[n/2]);
}
}
}}
