#include<stdio.h>
void main()
{
int a[10],n,i;
printf("enter the number");
scanf("%d",&n);
printf("%d \n",n);
printf("the array element are \n");
for(i=0;i<n;i++)
{
printf("%d %d",i,a[i]);
scanf("%d",&a[i]);
}
}
