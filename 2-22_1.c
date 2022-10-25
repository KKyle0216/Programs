#include <stdio.h>

int main()
{
    int a[20],b[20],c,d,i,j,k,l=0;
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
        for(i=c-1;i>=0;i--)
        {
            if(a[i]==k)
            {
                a[i]=0;
            }
        }
     b[j]=k;
    }
    d=c;
    c=c-1;
    for(i=c;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
    k=0;
    printf("\n");
    for(j=d-1;j>=0;j--)
    {
        if(b[j]<60)
        {
            k=b[j];
        }
    }
    if(k==0)
    {
        printf("best case\n");
    }
    else
    {
        printf("%d\n",k);
    }
    k=0;
    for(j=0;j<d;j++)
    {
        if(b[j]>=60)
        {
            k=b[j];
        }
    }
    if(k==0)
    {
        printf("worst case\n");
    }
    else
    {
        printf("%d\n",k);
    }









}
