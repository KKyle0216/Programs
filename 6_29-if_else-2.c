#include<stdio.h>
void main()
{
int a;

printf("請輸入0~3之間的數\n");
scanf("%d",&a);
if(a<1)
{
printf("輸入的數字<1<2<3\n");
}
else if(a<2)
{
printf("0<輸入的數字<2<3\n");
}
else if(a<3)
{
printf("0<1<輸入的數字<3\n");
}
else
{
printf("0<1<2<輸入的數字\n");
}
}
