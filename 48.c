#include<stdio.h>
void main() 
{
  int a[100],n,avg,sum=0,i;
  printf("enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    
    sum=sum+a[i];
  }
  avg=sum/n;
  printf("%d",avg);
  
}
