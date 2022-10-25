#include<stdio.h>
void main()

{
int i;
char ans;
printf("輸入\n");
scanf("%d",&i);

switch(i)
{
    case 1:
    ans='a';
    break;

    case 2:
    ans='b';
    break;

    case 3:
    ans='c';
    break;

    case 4:
    ans='d';
    break;

    default:
    ans='e';
}
printf("你輸入%d,代換為%c\n",i,ans);
}


