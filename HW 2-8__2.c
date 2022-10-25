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
    printf("%d ",b[0]);
}
