#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int a,b,i,j,k,x=0,z;
	int A[20][20],B[20];
	
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	
	for(i=0;i<a;i++){
		B[i]=A[i][0];
		for(j=0;j<b;j++){
			if(A[i][j]>B[i]){
	    		B[i]=A[i][j];
			}
		}
	}
	
	z=B[0];
	
	for(i=1;i<a;i++){
		z=z+B[i];
	}
	
	printf("%d\n",z);
	
	
	for(i=0;i<a;i++){
		if(z%B[i]==0){
			printf("%d",B[i]);
			printf(" ");
			x=1;
		}
		
	}
	
	if(x==0){
		printf("\n");
		printf("-1");
	}
	
	
}
