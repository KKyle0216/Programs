#include <stdio.h>

int main()

{
    int a,b,c,d,e,f,g;

    printf("\n");
    scanf("%d",&a);

    printf("\n");
    scanf("%d",&b);

    c=a+b;

    d=a-b;

    e=a*b;

    f=a/b;

    g=a%b;  //只取餘數
    printf("%d+%d=%d\n",a,b,c);

    printf("%d-%d=%d\n",a,b,d);

    printf("%d*%d=%d\n",a,b,e);

    printf("%d/%d=%d...%d\n",a,b,f,g);
}
