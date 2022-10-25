#include <stdio.h>

int main()
{
    int a[5],b[5],i,j,k;
    char z;

    printf("五個數字請選擇從小排到大(輸入s)或大排到小(輸入b)\n");
    scanf("%c",&z);
    printf("請輸入五個數字\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    if(z=='b')
    {
        for(i=0;i<5;i++)
        {
            k=0;
            for(j=0;j<5;j++)
            {
                if(a[j]>k)
                {
                    k=a[j];
                }
            }
            for(j=0;j<5;j++)
            {
                if(a[j]==k)
                {
                    a[j]=0;
                }
            }
         b[i]=k;
        }
    for(j=0;j<5;j++)
    {
        printf("%d,",b[j]);
    }
    }
    else if(z=='s')
    {
        for(i=0;i<5;i++)
        {
            k=0;
            for(j=0;j<5;j++)
            {
                if(a[j]>k)
                {
                    k=a[j];
                }
            }
            for(j=0;j<5;j++)
            {
                if(a[j]==k)
                {
                    a[j]=0;
                }
            }
         b[i]=k;
        }
    for(j=4;j>=0;j--)
    {
        printf("%d,",b[j]);
    }
    }



}
