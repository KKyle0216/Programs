#include <stdio.h>

int main()
{
    int a,b[100],c=0,i;

    printf("9��,10��\n");
    printf("�п�J�z�n��J�X�ո��X\n");
    scanf("%d",&a);
    printf("�п�J�z�����X\n");

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




//4.�o���I���t�ΡC��J���X�յo�����X�A�A��J�C�@�ժ��o�����X�A�̫��X�������B�C
