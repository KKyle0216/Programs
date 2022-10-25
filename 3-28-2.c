#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,count=0,a[100],b[100];

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        if(b[i]==0)
        {
            if(a[i]==i)
            {
                count++;
                b[i]=1;
            }
            else
            {
                b[i]=1;
                int next=a[i];
                while(b[next]==0)
                {
                    b[next]=1;
                    next=a[next];
                }
                count++;
            }
        }
    }
    printf("%d",count);



}
