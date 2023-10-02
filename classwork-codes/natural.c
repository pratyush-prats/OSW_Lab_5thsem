#include <stdio.h>
void main(){
		int n,sum=0;  
		printf("Enter the value of n\n");
		scanf("%d",&n);	
		 printf("The sum of first %d natural number is: \n",n);
	  for(int i=1;i<=n;i++){
	  		printf("%d ",i);
		  	sum+=i;		
	  }
	  printf("\nThe sum is %d \n",sum);
}
