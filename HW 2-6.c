#include <stdio.h>

int main()
{
    float a,b;

    scanf("%f %f",&a,&b);
    a=a/100;
    b=b/(a*a);
    printf("\n");
    printf("%f    ",b);
    if(b<18)
    {
        printf("過輕");
    }
    else if(b>18 && b<22)
    {
        printf("標準");
    }
    else
    {
        printf("過重");
    }
}
