#include<stdio.h>
#include<string.h>
void main()
{
  char ch[89],i;
  int a=0,count=0;
  scanf("%s",&ch);
  for(i=0;ch[i]!='\0';i++)
  {
  if(ch[i]>='a' && ch[i]<='z')
  {
    a++;
  }
  if(ch[i]>='0' && ch[i]<='9')
  {
    count ++;
  }}
  if((a && count )>0)
  {
    printf("yes");
  }
 else
 {
   printf("no");
 }
  }
