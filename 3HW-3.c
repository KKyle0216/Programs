#include<stdio.h>
void main()

{
int a,b,c;
a=1;
c=0;
printf("¿é¤J¾ã¼Æ\n");
scanf("%d",&b);
if(b<0)
{
printf("¿ù»~¡I");
}
else
{
while(a<=b)
{



c=c+a;
a++;

printf("1+......+%d=%d\n",b,c);
}
printf("¿ù»~¡I");
}
}

