#include<stdio.h>

void main()
{
    int a,b;
    for(a=1;a<=9;a++)
    {
    for(b=1;b<=9;b++)
    {
    printf("%d*%d=%d\n",a,b,a*b);
    }
    printf("----------------------------\n");
    }
}
