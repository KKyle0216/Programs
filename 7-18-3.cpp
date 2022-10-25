#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a[15],test,C,i,j,k,temp;
	
	printf("請問要輸入幾筆資料\n");
	
	if(C>15){
		printf("請重新輸入\n");
	}
	
	scanf("%d",&C);
	
	for(i=0;i<C;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<C;i++){
	    
	    for(j=i+1;j<C;j++){
	    	if(a[i]>a[j]){
	    		temp=a[i];
	    		a[i]=a[j];
	    		a[j]=temp;
			}	    	
		}
		
		
		
	}
		
	for(k=C-1;k>=0;k--){
			printf("%d   ",a[k]);
		}
	
	
	
	
	
	
	
	
	
}
