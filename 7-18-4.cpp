#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void HANOI(int n ,char A ,char B ,char C){
	if(n==1){
		printf("Move sheet %c from  to %c\n",A,C);
	}
	else{
		HANOI(n-1, A, C, B);
		HANOI(1, A, B, C);
		HANOI(n-1, B, A, C);
	}
}

int main()
{
	int n;
	
	printf("�аݭn��J�X�h\n");
	
	scanf("%d",&n);
	
	HANOI(n, 'A', 'B', 'C');
	
	
	
	
	
}


