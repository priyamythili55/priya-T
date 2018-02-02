#include<stdio.h>
void main()
{
 int i,j,b[100],n,temp;
 printf("enter the number");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 scanf("%d",&b[i]);
 }
 for(j=i+1;j<n;j++)
 {
 scanf("%d",&b[j]);
 }
 if(b[i]>b[j])
 {
 temp=b[i];
 b[i]=b[j];
 b[i]=temp;
 }
 printf("%d",&b[j]);
 }
