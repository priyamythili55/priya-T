#include<stdio.h>
void main()
{
int i,n;
int arr[10];
printf("enter the total number ");
scanf("%d",&n);
for(i=0;i<n;++i)
{
printf("enter the number %d";i+1)
scanf("%d",&arr[i]);
for(i=1;i<n;++i)
{
if(arr[0]<arr[i])
arr[0]=arr[i];
}
printf("maximum element=%d",arr[i]);
}
}



