#include<stdio.h>
void main()

{
int a,b,c;
a=1;
c=0;
printf("��J���\n");
scanf("%d",&b);
if(b<0)
{
printf("���~�I");
}
else
{
while(a<=b)
{



c=c+a;
a++;

printf("1+......+%d=%d\n",b,c);
}
printf("���~�I");
}
}

