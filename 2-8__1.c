#include <stdio.h>

int main()
{
    int a[100],b[100],c,d,i,j,k,l=0;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<c;j++)
    {
        k=0;
        for(i=0;i<c;i++)
        {
            if(a[i]>k)
            {
                k=a[i];
            }
        }
        for(i=0;i<c;i++)
        {
            if(a[i]==k)
            {
                a[i]=0;
            }
        }
     b[j]=k;
    }
    c=c-1;
    d=c;
    for(i=c;i>=0;i--)
    {
        printf("%d ",b[i]);
        c--;
    }

    printf("\n");
    i=d;
    l=0;

    while(l<60)
    {
        if(b[i]>=60)
        {
            l=b[i];
        }
     i--;
    }
}

