#include <stdio.h>
void main(){
		int n,sum=0;  
		printf("Enter the value of n\n");
		scanf("%d",&n);	
		 printf("The odd numbers upto %d are:",n);
	  for(int i=1;i<=n;i++){
	  		if(i % 2!=0){
	  		printf("%d ",i);
		  	sum+=i;		
	  		}
	  }
	  printf("\nThe sum of odd numbers is %d \n",sum);
}
