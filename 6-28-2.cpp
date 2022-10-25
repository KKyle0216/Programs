#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int number(int B);

int main()
{
	int B;
	scanf("%d",&B);
	
	if(number(B)){
		printf("YES");
	}
	else{
		printf("NO");
	}
		
}


int number(int B)
{
	int p=1,i;
	
	
	
	if(B<2){
		return p;
	}

	for(i=2;i<B;i++){
		if(B%i==0){
			p=0;
		}
	}
	return p;
}





