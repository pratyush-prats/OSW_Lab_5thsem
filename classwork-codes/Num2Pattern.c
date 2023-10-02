#include <stdio.h>

void main(){
		int n,sum=0,j=1;
		printf("Enter the value of n\n");
		scanf("%d",&n);	
		printf("The term is :"); 
	  for(int i=1;i<=n;i++){
		 	printf("%d +",j);
		 	sum=sum+j;
		 	j=(j*10)+1;
		 	 	
	  }
	  printf("\n The Sum is : %d ",sum);
	 
}
