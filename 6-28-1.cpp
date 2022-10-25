#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,l;
	char A[100];
	
	scanf("%s",&A);
	
	l=strlen(A);
	if(A[0]=='+'){
		for(i=1;i<l;i++){
			A[i]=A[i]+2;
			if(A[i]>'Z'){
				A[i]=A[i]-26;
			}
		}
	}
	else{
		for(i=1;i<l;i++){
			A[i]=A[i]-2;
			if(A[i]<'A'){
				A[i]=A[i]+26;
			}
		}
	}
	printf("%s",A+1);
}
