#include <stdio.h>

void main(){
		int n;
		printf("Enter the value of n\n");
		scanf("%d",&n);	
		for(int i=1;i<=n;i++){
			if(i % 2==0){
				if(i % 3==0){
					printf("%d is divisible by both 2 and 3\n",i);
				}
				else if(i % 5==0){
					printf("%d is divisible by both 2 and 5\n",i);
				}
				printf("%d is divisible by 2\n",i);
			}
			if(i % 3==0){
					printf("%d is divisible by 3\n",i);
				}
			if(i % 5==0){
					printf("%d is divisible by 5\n",i);
			
		}
		} 
	  
}
