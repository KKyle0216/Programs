#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long F(long n)
{
	if(n<=2){
		return 1;
	}
	else{
		return F(n-1)+F(n-2);
	}
	
}

int main()
{
	long N;
	scanf("%ld",&N);
	N=N-1;
	printf("%ld",F(N));
	
	
		
}


