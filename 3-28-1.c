#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[100];
    int b=0,c=0,d;
    gets(a);
    d=strlen(a);

    for(int i=0;i<d;i=i+2)
    {
        b=b+a[i]-'0';
    }
    for(int i=1;i<d;i=i+2)
    {
        c=c+a[i]-'0';
    }
    printf("%d",abs(b-c));

}
