#include<stdio.h>
void main()
{
  int a[10],t,i,j,n=10;
  
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
    
  }
    printf("%d",a[0]);
  
}
