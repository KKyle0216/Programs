#include <stdio.h>

int main()
{
    int a,b;

    printf("�п�J��a�N�X(����:1,���:2,�^��:3,�D��:4,�H����:5,)\n");
    scanf("%d",&a);
    printf("�п�J�n���h�ֿ�\n");
    scanf("%d",&b);
    if(a==1)
    {
        b=b*(30);
    }
    else if(a==2)
    {
        b=b*(4);
    }
    else if(a==3)
    {
        b=b*(39);
    }
    else if(a==4)
    {
        b=b*(21);
    }
    else if(a==5)
    {
        b=b*(4);
    }

    printf("%d\n",b);
}
