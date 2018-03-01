#include<stdio.h>
void main()
{
  int i,j,a[100],n,t;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  printf("%d\t%d",a[0],a[n-1]);
}
