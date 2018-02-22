#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the values");
    scanf("%d%d",&a,&b);
     printf(" values a=%d b=%d before swaping ",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("values a=%d b=%d after swapping",a,b);
}

