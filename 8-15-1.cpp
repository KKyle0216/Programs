#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a,b,c,i,j,k;
	int A[3];
	
	for(i=0;i<3;i++){
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	    	if(A[i]<A[j]){
	    		k=A[i];
	    	    A[i]=A[j];
	    	    A[j]=k;
			}
        }
	}
	
	for(i=0;i<3;i++){
		printf("%d",A[i]);
		printf(" ");
	}
	printf("\n");
	
	
	
	
	if(A[0]+A[1]<=A[2]){
		printf("NO");
	}
	else if(A[0]*A[0]+A[1]*A[1]<A[2]*A[2]){
		printf("Obtuse");
	}
	else if(A[0]*A[0]+A[1]*A[1]==A[2]*A[2]){
		printf("Right");
	}
	else if(A[0]*A[0]+A[1]*A[1]>A[2]*A[2]){
		printf("Acute");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
