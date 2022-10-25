#include <stdio.h>

int main()
{
    int a,b,c,d=0;

    scanf("%d %d %d",&a,&b,&c);

    if(a>0){
      a=1;
    }
    if(b>0){
      b=1;
    }

    if(a==1 && b==1){
      if(c==1){
        printf("AND\n");
      }
    }
    else if(a==0 && b==0){
      if(c==0){
        printf("AND\n");
      }
    }

    if(a==0 && b==0){
      if(c==0){
        printf("OR\n");
      }
    }
    else if(a==1 || b==1){
      if(c==1){
        printf("OR\n");
      }
    }


    if(a==0 || b==0){
      if(a!=b){
        if(c==1){
            printf("XOR\n");
        }
      }
      else{
        if(c==0){
            printf("XOR\n");
        }
      }
    }

    if(a==0 && b==0 && c==1){
      printf("INPOSSIBLE");
    }



}
