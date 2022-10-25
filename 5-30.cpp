#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i=0,A=0,B,F=1,L=100; 
	
	srand(time(NULL));
	A=(rand()%100)+1;
	
	printf("%d ~ %d \n",F,L);
	
	do{
		scanf("%d",&B);
		if(B==0){
			break;
		}
	    else if(A==B){
	    	printf("BINGO");
	    	i=3;
	    }
	    else if(B<A){
	    	F=B;
			i=i+1;
			printf("%d ~ %d \n",F,L);
		}
		else{
			L=B;
			i=i+1;
			printf("%d ~ %d \n",F,L);
		}
	}while(i<5);
	if(A!=B){
	    printf("%d",A);	
	}
}

