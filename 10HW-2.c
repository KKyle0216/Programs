#include <stdio.h>

int main()
{
    int a;

    printf("½Ð¿é¤J¼Æ¦r\n");
    scanf("%d",&a);
    if(a<0)
    {
        a=a*(-1);
    }
    printf("%d\n",a);
}

