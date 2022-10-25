#include <stdio.h>

int main()
{
    int a,b;

    printf("請輸入國家代碼(美金:1,港幣:2,英鎊:3,澳幣:4,人民幣:5,)\n");
    scanf("%d",&a);
    printf("請輸入要換多少錢\n");
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
