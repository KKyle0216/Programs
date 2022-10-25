#include <stdio.h>

int main()
{
    int a[100],b,c,d,e,i;
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    scanf("%d",&c);

    e=a[b];
    a[b]=a[c];
    a[c]=e;

    for(i=0;i<d;i++)
    {
        printf("%d ",a[i]);
    }

}
