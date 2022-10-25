#include<stdio.h>

void main()
{
int a,b;
a=1;
while(a<=9)

{
b=1;
while(b<=9)

{
printf("%d*%d=%d\n",a,b,a*b);

b++;
}
printf("----------------------------\n");
a++;
}

}
