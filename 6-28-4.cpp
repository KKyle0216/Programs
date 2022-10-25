#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long F(long n)
{
	if(n<2){
		return n-1;
	}
	else{
		return 2*F(n-1)+3*F(n-2);
	}
	
}

int main()
{
	long N;
	scanf("%ld",&N);
	N=N-1;
	printf("%ld",F(N));
	
		
}


