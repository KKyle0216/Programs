#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cmath>

int main()
{
	long long int a,b;
	
	scanf("%lld",&a);
	scanf("%lld",&b);
	
	if(a>b){
		a=a-b;
	}
	else{
		a=b-a;
	}
	
	
	printf("%lld",a);
	
	
	
}
