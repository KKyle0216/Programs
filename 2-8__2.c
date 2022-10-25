#include <stdio.h>

int main()
{
    int a[100],c,d,i,j,l;
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&l);

    for(i=0;i<c;i++)
    {
        if(a[i]==l)
        {
            for(j=0;j<c;j++)
            {
                a[j]=a[j+1];
            }
        }
     printf("%d ",a[i]);
    }

}

