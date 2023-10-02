#include <stdio.h>

void main(){
		int n;
		printf("Enter the value of n\n");
		scanf("%d",&n);
		int j,sum=0;
		printf("Enter %d numbers \n",n);
		
		for(int i=1;i<=n;i++){
			scanf("%d",&j);
			if(j % 2==0){
				sum=sum+j;
			}
		}
		printf("Sum of the even numbers is: %d \n",sum);	
 }
