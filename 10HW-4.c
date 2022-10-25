#include <stdio.h>

int main()
{
    int a,b[100],c=0,i;

    printf("9月,10月\n");
    printf("請輸入您要輸入幾組號碼\n");
    scanf("%d",&a);
    printf("請輸入您的號碼\n");

    for(i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
        if(b[i]==41482012)
        {
            c=c+10000000;
        }
        else if(b[i]==58837976)
        {
            c=c+2000000;
        }
        else if(b[i]==20379435)
        {
            c=c+200000;
        }
        else if(b[i]==47430762)
        {
            c=c+200000;
        }
        else if(b[i]==36193504)
        {
            c=c+200000;
        }
    }
    printf("\n");
    printf("%d\n",c);


}




//4.發票兌獎系統。輸入有幾組發票號碼，再輸入每一組的發票號碼，最後輸出中獎金額。
