#include<stdio.h>
int main()
{
 int i,count=0;
 char a[90];
 scanf("%[^\n]s",a);
 for(i=0;a[i]!='\0';i++)
 {
   if(a[i]>='0' && a[i]<='9')
   {
     count=count+1;
    }
   }
 printf("\n%d",count);
 return 0;
}

