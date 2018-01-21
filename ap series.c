#include<stdio.h>
#include<math.h>
void main()
{
int first ,diff,terms,sum=0,value,i;
printf("enter the term ap series");
scanf("%d",&scanf);
printf("enter the  first term and common difference of ap series");
scanf("%d%d",&first,&diff);
value=first;
printf("ap series");
for(i=0;i<terms;i++)
{
printf("%d",value);
sum=sum+10;
value=value+diff;
}
printf("sum of ap series till %d terms in %d",terms,sum);
}
